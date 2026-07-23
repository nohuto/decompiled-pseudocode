/*
 * XREFs of KiFastReadyThread @ 0x1402BBC14
 * Callers:
 *     KiInSwapKernelStacks @ 0x1402227B4 (KiInSwapKernelStacks.c)
 *     KeReadyThread @ 0x1402BE04C (KeReadyThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KiEnterDeferredReadyState @ 0x1402B9420 (KiEnterDeferredReadyState.c)
 *     KiDeferredReadyThread @ 0x1402BBCF0 (KiDeferredReadyThread.c)
 *     KiCheckForThreadDispatch @ 0x1402BCD08 (KiCheckForThreadDispatch.c)
 *     EtwTraceReadyThread @ 0x14046785A (EtwTraceReadyThread.c)
 */

__int64 __fastcall KiFastReadyThread(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  int v11; // [rsp+30h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v10 = 4;
    if ( CurrentIrql != 2 )
    {
      a2 = -1LL << (CurrentIrql + 1);
      v10 = a2 & 4;
    }
    a3 = (unsigned int)v10 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
  {
    LOBYTE(a3) = *(_BYTE *)(a1 + 567);
    LOBYTE(a2) = *(_BYTE *)(a1 + 566);
    EtwTraceReadyThread(a1, a2, a3, 0LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v11 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v11);
    while ( *(_QWORD *)(a1 + 64) );
  }
  KiEnterDeferredReadyState(a1);
  *(_QWORD *)(a1 + 64) = 0LL;
  KiDeferredReadyThread(CurrentPrcb, a1);
  LOBYTE(v6) = CurrentIrql;
  return KiCheckForThreadDispatch(CurrentPrcb, v6, v7);
}
