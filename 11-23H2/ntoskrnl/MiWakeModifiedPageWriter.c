/*
 * XREFs of MiWakeModifiedPageWriter @ 0x14063BC38
 * Callers:
 *     MiAdjustModifiedPageLoad @ 0x14021F234 (MiAdjustModifiedPageLoad.c)
 *     MiInsertPageInList @ 0x14026EC00 (MiInsertPageInList.c)
 *     MiInsertPagesInList @ 0x1402DD520 (MiInsertPagesInList.c)
 *     MiObtainFreePages @ 0x140634F2C (MiObtainFreePages.c)
 *     MiFlushAllPagesWorker @ 0x140639CE4 (MiFlushAllPagesWorker.c)
 *     MiFlushAllStoreSwapPages @ 0x140639DEC (MiFlushAllStoreSwapPages.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B360 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B390 (ExReleaseRundownProtection_0.c)
 *     KeSetActualBasePriorityThread @ 0x1402B9660 (KeSetActualBasePriorityThread.c)
 */

LONG __fastcall MiWakeModifiedPageWriter(__int64 a1, __int64 a2)
{
  if ( a2 == -1 )
  {
    if ( *(_DWORD *)(a1 + 732) )
      KeSetEvent((PRKEVENT)(a1 + 736), 0, 0);
    if ( *(_DWORD *)(a1 + 760) != 18 && ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 992)) )
    {
      KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 984), 18);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 992));
    }
  }
  else
  {
    *(_QWORD *)(a1 + 768) = a2;
  }
  return KeSetEvent((PRKEVENT)(a1 + 776), 0, 0);
}
