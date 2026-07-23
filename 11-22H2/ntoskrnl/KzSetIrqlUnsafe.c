/*
 * XREFs of KzSetIrqlUnsafe @ 0x14056C100
 * Callers:
 *     KiChainedDispatch @ 0x14041FBE0 (KiChainedDispatch.c)
 *     KiScanInterruptObjectList @ 0x140420020 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x140420200 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x140420350 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1404204A0 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInterruptDispatch @ 0x1404205B0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1404209F0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140420E30 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140421270 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1404216A0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140422330 (KxIsrLinkage.c)
 *     KiIdleLoop @ 0x140423300 (KiIdleLoop.c)
 *     KiApcInterrupt @ 0x140424080 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x140425920 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x140425D70 (KiVmbusInterruptDispatch.c)
 *     KiHvInterruptSubDispatch @ 0x1404261A0 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x140426300 (KiVmbusInterruptSubDispatch.c)
 *     KiSwInterrupt @ 0x140426460 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140426C50 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140427360 (KiIpiInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x140427AF0 (KiIpiInterruptSubDispatch.c)
 *     KiNmiInterruptStart @ 0x14042BF80 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x140430280 (KiMcheckAbort.c)
 *     KiSystemStartup @ 0x140A87010 (KiSystemStartup.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int8 __fastcall KzSetIrqlUnsafe(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // di
  unsigned __int8 v3; // r9
  _DWORD *v4; // r11
  int v5; // r10d
  unsigned __int8 v6; // cl
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *SchedulerAssist; // r9
  int v9; // edx
  bool v10; // zf

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > a1 )
  {
    if ( (_DWORD)KiIrqlFlags )
    {
      v6 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v6 <= 0xFu && (unsigned __int8)v1 <= 0xFu && v6 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v1 + 1));
        v10 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v1);
  }
  else
  {
    v3 = KeGetCurrentIrql();
    __writecr8(a1);
    if ( (_DWORD)KiIrqlFlags
      && ((unsigned __int8)KiIrqlFlags & 1) != 0
      && v3 <= 0xFu
      && (unsigned __int8)(a1 - 2) <= 0xDu )
    {
      v4 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v3 == a1 )
        v5 = 1 << a1;
      else
        v5 = ((1LL << (a1 + 1)) - 1) & (-1LL << (v3 + 1)) & 0xFFFFFFFC;
      v4[5] |= v5;
    }
  }
  return CurrentIrql;
}
