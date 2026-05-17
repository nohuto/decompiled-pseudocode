/*
 * XREFs of RtlLockHeap @ 0x180015BE0
 * Callers:
 *     RtlExitUserProcess @ 0x180054350 (RtlExitUserProcess.c)
 *     RtlValidateHeap @ 0x18007BE40 (RtlValidateHeap.c)
 *     RtlpQueryExtendedHeapInformation @ 0x18007D9C8 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpLockUlockAllHeapsCallback @ 0x180089680 (RtlpLockUlockAllHeapsCallback.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x180116020 (RtlpHpStackTraceHeapSerialize.c)
 * Callees:
 *     RtlpCheckHeapSignature @ 0x180015DC8 (RtlpCheckHeapSignature.c)
 *     RtlpHpHeapLock @ 0x180015DFC (RtlpHpHeapLock.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpLogHeapLockEvent @ 0x180116F98 (RtlpLogHeapLockEvent.c)
 */

char __fastcall RtlLockHeap(__int64 a1)
{
  bool v1; // zf
  _DWORD *SharedData; // rcx
  __int64 v4; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 16) == -571548178;
  v6 = -1;
  if ( v1 )
  {
    RtlpHpHeapLock(a1, &v6);
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
      return ((__int64 (*)(void))qword_180174290)();
    if ( !(unsigned __int8)RtlpCheckHeapSignature(a1, "RtlLockHeap") )
      return 0;
    if ( (*(_BYTE *)(a1 + 112) & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      ++*(_WORD *)(a1 + 416);
    }
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v4 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v4 = 2147353472LL;
  if ( *(_BYTE *)v4 )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapLockEvent(a1);
  }
  return 1;
}
