/*
 * XREFs of KzSetIrqlUnsafe @ 0x14056C060
 * Callers:
 *     KiChainedDispatch @ 0x1404202A0 (KiChainedDispatch.c)
 *     KiScanInterruptObjectList @ 0x1404206E0 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1404208C0 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x140420A10 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x140420B60 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInterruptDispatch @ 0x140420C70 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1404210B0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1404214F0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140421930 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140421D60 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1404229F0 (KxIsrLinkage.c)
 *     KiIdleLoop @ 0x1404239C0 (KiIdleLoop.c)
 *     KiApcInterrupt @ 0x140424740 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x140425FE0 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x140426430 (KiVmbusInterruptDispatch.c)
 *     KiHvInterruptSubDispatch @ 0x140426860 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1404269C0 (KiVmbusInterruptSubDispatch.c)
 *     KiSwInterrupt @ 0x140426B20 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140427310 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140427A20 (KiIpiInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x1404281B0 (KiIpiInterruptSubDispatch.c)
 *     KiNmiInterruptStart @ 0x14042C580 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x140430880 (KiMcheckAbort.c)
 *     KiSystemStartup @ 0x140A87010 (KiSystemStartup.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
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
    if ( KiIrqlFlags )
    {
      v6 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v6 <= 0xFu && (unsigned __int8)v1 <= 0xFu && v6 >= 2u )
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
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v3 <= 0xFu && (unsigned __int8)(a1 - 2) <= 0xDu )
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
