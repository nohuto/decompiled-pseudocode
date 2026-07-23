/*
 * XREFs of PopInitializePowerButtonHold @ 0x140B520A4
 * Callers:
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x14041B330 (ZwOpenKey.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlGetPersistedStateLocation @ 0x1406C5400 (RtlGetPersistedStateLocation.c)
 *     RtlIsStateSeparationEnabled @ 0x1407E22F0 (RtlIsStateSeparationEnabled.c)
 *     PopInitializeWorkItem @ 0x14082245C (PopInitializeWorkItem.c)
 *     PopPowerButtonBugcheckConfigure @ 0x14085AA68 (PopPowerButtonBugcheckConfigure.c)
 */

int __fastcall PopInitializePowerButtonHold(int a1)
{
  _UNKNOWN **v1; // rax
  char v2; // bl
  __int64 v4; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE DestinationString[3]; // [rsp+50h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  ULONG BufferLengthOut[4]; // [rsp+98h] [rbp-70h] BYREF
  WCHAR SourceString[264]; // [rsp+A8h] [rbp-60h] BYREF
  _UNKNOWN *retaddr; // [rsp+2D0h] [rbp+1C8h] BYREF

  v1 = &retaddr;
  memset(DestinationString, 0, sizeof(DestinationString));
  v2 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  LOBYTE(v4) = 0;
  if ( !a1 )
  {
    PopAcpiPdttSupportEnabled = 0;
    PopPowerButtonBugcheckConfig = 0;
    PopPowerButtonLiveDumpConfig = 0;
    PopPowerButtonBugcheckLock = 0LL;
    memset(&unk_140C3A0A8, 0, 0xE8uLL);
    memset(&PopPowerButtonTriageBlock, 0, 0xA0uLL);
    LODWORD(PopPowerButtonTriageBlock) = 2;
    qword_140C3A030 = (__int64)&PopBlackBoxEntries;
    qword_140C3A010 = 0LL;
    word_140C3A018 = 0;
    dword_140C3A01C = 0;
    byte_140C3A020 = 0;
    qword_140C3A024 = 0LL;
    dword_140C3A038 = 22;
    PopPowerButtonHold = 0LL;
    LODWORD(v1) = PopInitializeWorkItem((__int64)&unk_140C3A130, (__int64)PopPowerButtonWorkCallback, 0LL);
    return (int)v1;
  }
  if ( a1 != 1 )
    return (int)v1;
  if ( RtlIsStateSeparationEnabled() )
  {
    if ( RtlGetPersistedStateLocation(
           L"PowerButton",
           0LL,
           0LL,
           LocationTypeRegistry,
           SourceString,
           0x208u,
           BufferLengthOut) >= 0 )
    {
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], SourceString);
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(DestinationString, 0x11u, &ObjectAttributes) >= 0 )
      {
        qword_140C3A078 = (__int64)DestinationString[0];
        qword_140C3A070 = (__int64)PopPowerButtonBugcheckWatchCallback;
        *(_QWORD *)PopPowerButtonBugcheckWatchWorkItem = 0LL;
        LODWORD(v1) = PopPowerButtonBugcheckConfigure(DestinationString[0], 1, &v4);
        if ( (_BYTE)v4 )
          return (int)v1;
      }
    }
  }
  else
  {
    v2 = 1;
  }
  RtlInitUnicodeString(
    (PUNICODE_STRING)&DestinationString[1],
    L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\POWER");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  LODWORD(v1) = ZwOpenKey(DestinationString, 0x11u, &ObjectAttributes);
  if ( (int)v1 >= 0 )
  {
    if ( v2 )
    {
      qword_140C3A070 = (__int64)PopPowerButtonBugcheckWatchCallback;
      qword_140C3A078 = (__int64)DestinationString[0];
      *(_QWORD *)PopPowerButtonBugcheckWatchWorkItem = 0LL;
    }
    LODWORD(v1) = PopPowerButtonBugcheckConfigure(DestinationString[0], v2, &v4);
  }
  return (int)v1;
}
