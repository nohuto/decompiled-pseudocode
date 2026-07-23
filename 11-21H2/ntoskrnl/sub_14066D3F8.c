/*
 * XREFs of sub_14066D3F8 @ 0x14066D3F8
 * Callers:
 *     sub_14066D0AC @ 0x14066D0AC (sub_14066D0AC.c)
 * Callees:
 *     PsGetProcessImageFileName @ 0x140238FD0 (PsGetProcessImageFileName.c)
 *     RtlInitAnsiString @ 0x1402A07B0 (RtlInitAnsiString.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 */

NTSTATUS __fastcall sub_14066D3F8(__int64 a1)
{
  NTSTATUS result; // eax
  const CHAR *ProcessImageFileName; // rax
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v5; // rax
  _STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING String1; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  String1 = 0LL;
  if ( (dword_140D05010 & 0x20) == 0 )
    return 0;
  ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName(a1);
  RtlInitAnsiString(&DestinationString, ProcessImageFileName);
  if ( !DestinationString.Length )
    return 0;
  result = RtlAnsiStringToUnicodeString(&String1, &DestinationString, 1u);
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 243);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C252D8, 0LL);
    if ( (dword_140D05010 & 0x20) != 0 && RtlPrefixUnicodeString(&String1, qword_140C25218, 1u) )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1120), 0x200u);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C252D8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C252D8);
    sub_1402AFC00((ULONG_PTR)&qword_140C252D8);
    v5 = KeGetCurrentThread();
    if ( (*((_WORD *)v5 + 243))++ == 0xFFFF && *((struct _KTHREAD **)v5 + 19) != (struct _KTHREAD *)((char *)v5 + 152) )
      KiCheckForKernelApcDelivery();
    RtlFreeUnicodeString(&String1);
    return 0;
  }
  return result;
}
