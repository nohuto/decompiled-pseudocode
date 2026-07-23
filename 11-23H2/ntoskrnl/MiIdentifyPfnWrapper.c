/*
 * XREFs of MiIdentifyPfnWrapper @ 0x14023CD10
 * Callers:
 *     MiQueryLeafPte @ 0x140331B40 (MiQueryLeafPte.c)
 *     MiLogAllocateWsleEvent @ 0x14061C7A8 (MiLogAllocateWsleEvent.c)
 *     MiScrubLargeMappedPage @ 0x14065E98C (MiScrubLargeMappedPage.c)
 *     MmQueryPfnList @ 0x1406EF470 (MmQueryPfnList.c)
 *     MmIdentifyPhysicalMemory @ 0x140A2EFB8 (MmIdentifyPhysicalMemory.c)
 *     MmRelocatePfnList @ 0x140A3CC38 (MmRelocatePfnList.c)
 *     MiScrubProcessLargePage @ 0x140A46C44 (MiScrubProcessLargePage.c)
 * Callees:
 *     MiIdentifyPfn @ 0x14023E590 (MiIdentifyPfn.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiIdentifyPfnWrapper(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdi
  unsigned __int8 CurrentIrql; // si
  __int64 v6; // rdi
  _DWORD *SchedulerAssist; // r8
  __int64 v9; // r9
  unsigned __int8 v10; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v12; // r8
  int v13; // eax
  bool v14; // zf
  int v15; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v9) = 4;
    else
      v9 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v9;
  }
  v15 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v15);
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  v6 = MiIdentifyPfn(v4, a2);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (_DWORD)KiIrqlFlags )
  {
    v10 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v12 = CurrentPrcb->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v14 = (v13 & v12[5]) == 0;
      v12[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return v6;
}
