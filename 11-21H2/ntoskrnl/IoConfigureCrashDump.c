/*
 * XREFs of IoConfigureCrashDump @ 0x140551D58
 * Callers:
 *     NtSetSystemInformation @ 0x1407D6120 (NtSetSystemInformation.c)
 *     IopCrashDumpPolicyChangeWnfCallback @ 0x1409335E0 (IopCrashDumpPolicyChangeWnfCallback.c)
 *     PoShutdownBugCheck @ 0x14098FCB0 (PoShutdownBugCheck.c)
 *     PoBroadcastSystemState @ 0x140A4A768 (PoBroadcastSystemState.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     IopRemoveDumpCapsuleSupport @ 0x1403CF960 (IopRemoveDumpCapsuleSupport.c)
 *     IopReadDumpRegistry @ 0x1403CF9A0 (IopReadDumpRegistry.c)
 *     IopInitDumpCapsuleSupport @ 0x1403DD52C (IopInitDumpCapsuleSupport.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     IopDisableCrashDump @ 0x140554344 (IopDisableCrashDump.c)
 *     RtlGetHostNtSystemRoot @ 0x1406EB3B0 (RtlGetHostNtSystemRoot.c)
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 *     IopInitializeCrashDump @ 0x14084BE78 (IopInitializeCrashDump.c)
 *     MmGetPageFileForCrashDump @ 0x14096F688 (MmGetPageFileForCrashDump.c)
 */

__int64 __fastcall IoConfigureCrashDump(__int64 a1, char a2)
{
  int v2; // ebx
  struct _KTHREAD *CurrentThread; // rdi
  int v4; // ebx
  __int64 PageFileForCrashDump; // rsi
  __int64 HostNtSystemRoot; // rax
  UNICODE_STRING String2; // [rsp+20h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  WCHAR SourceString[16]; // [rsp+40h] [rbp-30h] BYREF

  DestinationString = 0LL;
  v2 = a1;
  String2 = 0LL;
  wcscpy(SourceString, L"C:\\pagefile.sys");
  if ( !a2 )
    IopReadDumpRegistry(a1, 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !v2 )
  {
    if ( !ExAcquireResourceExclusiveLite(&IopCrashDumpLock, 1u) )
    {
      v4 = -1073741823;
      goto LABEL_24;
    }
    v4 = IopDisableCrashDump();
    IopRemoveDumpCapsuleSupport();
    goto LABEL_22;
  }
  if ( v2 == 1 )
  {
    if ( ForceDumpDisabled || !AllowCrashDump )
    {
      v4 = -1073741637;
      goto LABEL_24;
    }
    PageFileForCrashDump = MmGetPageFileForCrashDump(&String2);
    if ( PageFileForCrashDump && RtlPrefixUnicodeString(&stru_14000A5D0, &String2, 1u) )
    {
      DestinationString.Buffer = String2.Buffer + 4;
      DestinationString.Length = String2.Length - 8;
      DestinationString.MaximumLength = String2.MaximumLength - 8;
    }
    else
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      HostNtSystemRoot = RtlGetHostNtSystemRoot();
      if ( *(_WORD *)HostNtSystemRoot )
        *DestinationString.Buffer = **(_WORD **)(HostNtSystemRoot + 8);
    }
    ExAcquireResourceExclusiveLite(&IopCrashDumpLock, 1u);
    v4 = IopDisableCrashDump();
    if ( v4 >= 0 )
    {
      String2 = DestinationString;
      if ( (unsigned __int8)IopInitializeCrashDump(PageFileForCrashDump, &String2) )
      {
        IopRemoveDumpCapsuleSupport();
        v4 = 0;
      }
      else
      {
        if ( CapsuleDumpAllowed )
          IopInitDumpCapsuleSupport();
        v4 = -1073741823;
      }
    }
LABEL_22:
    ExReleaseResourceLite(&IopCrashDumpLock);
    goto LABEL_24;
  }
  v4 = -1073741808;
LABEL_24:
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  return (unsigned int)v4;
}
