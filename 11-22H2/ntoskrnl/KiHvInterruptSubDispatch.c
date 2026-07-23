/*
 * XREFs of KiHvInterruptSubDispatch @ 0x1404261A0
 * Callers:
 *     KiHvInterruptDispatch @ 0x140425920 (KiHvInterruptDispatch.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x140248410 (KiEndThreadAccountingPeriod.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402A2E70 (EtwGetKernelTraceTimestamp.c)
 *     KiEntropyQueueDpc @ 0x14035E1A0 (KiEntropyQueueDpc.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     HvlSharedIsr @ 0x14045ED00 (HvlSharedIsr.c)
 *     PerfInfoLogInterruptHv @ 0x140467CE0 (PerfInfoLogInterruptHv.c)
 *     HvlDummyInterruptCallback @ 0x14053F650 (HvlDummyInterruptCallback.c)
 *     KzSetIrqlUnsafe @ 0x14056C100 (KzSetIrqlUnsafe.c)
 */

__int64 __fastcall KiHvInterruptSubDispatch(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int8 CurrentIrql; // al
  __int64 CurrentPrcb; // rcx
  unsigned __int64 v5; // rax
  int v6; // r11d
  _DWORD *v7; // r10
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  bool v12; // zf
  __int64 result; // rax
  _BYTE v14[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KzSetIrqlUnsafe(3LL);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(3uLL);
  }
  *(_BYTE *)(v2 - 87) = CurrentIrql;
  *(_DWORD *)(v2 - 96) = 0;
  CurrentPrcb = (__int64)KeGetCurrentPrcb();
  if ( ++*(_BYTE *)(CurrentPrcb + 32) == 1 )
  {
    v5 = __rdtsc();
    v6 = *(_DWORD *)(CurrentPrcb + 35296);
    v7 = (_DWORD *)(CurrentPrcb + 4LL * ((unsigned __int16)(v6 & 0x7FF) >> 5) + 35300);
    *v7 = v5 ^ __ROR4__(*v7, 5);
    *(_DWORD *)(CurrentPrcb + 35296) = ++v6;
    if ( (v6 & 0x3FF) == 0 )
      *(_DWORD *)(v2 - 96) = 1;
    v8 = *(_QWORD *)(CurrentPrcb + 8);
    v9 = v5 - *(_QWORD *)(CurrentPrcb + 33152);
    *(_QWORD *)(v8 + 72) += v9;
    v10 = *(unsigned int *)(v8 + 80);
    *(_QWORD *)(CurrentPrcb + 33152) += v9;
    v11 = v9 + v10;
    CurrentPrcb = (unsigned int)v11;
    a2 = HIDWORD(v11);
    if ( a2 )
      CurrentPrcb = 0xFFFFFFFFLL;
    *(_DWORD *)(v8 + 80) = CurrentPrcb;
    if ( (*(_BYTE *)(v8 + 2) & 0xBE) != 0 )
      KiEndThreadAccountingPeriod((__int64)KeGetCurrentPrcb(), v8, v9);
  }
  _enable();
  if ( *(_DWORD *)(v2 - 96) )
    KiEntropyQueueDpc((__int64)KeGetCurrentPrcb());
  v12 = (WORD2(PerfGlobalGroupMask) & 0x4000) == 0;
  *(_BYTE *)(v2 + 243) = (WORD2(PerfGlobalGroupMask) & 0x4000) != 0;
  if ( !v12 )
    EtwGetKernelTraceTimestamp((__int64)v14, 536887296LL);
  HvlSharedIsr(CurrentPrcb, a2);
  result = HvlpInterruptCallback[*(unsigned int *)(v2 + 224)]();
  if ( *(_BYTE *)(v2 + 243) )
    result = PerfInfoLogInterruptHv(KiHvInterrupt, (unsigned int)(((*(_DWORD *)(v2 + 224) + 48) << 8) + 1), v14);
  _disable();
  return result;
}
