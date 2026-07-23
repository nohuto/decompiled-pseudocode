/*
 * XREFs of MiWakeModifiedPageWriter @ 0x14063C188
 * Callers:
 *     MiAdjustModifiedPageLoad @ 0x14021F234 (MiAdjustModifiedPageLoad.c)
 *     MiInsertPageInList @ 0x14026EE90 (MiInsertPageInList.c)
 *     MiInsertPagesInList @ 0x1402DD7B0 (MiInsertPagesInList.c)
 *     MiObtainFreePages @ 0x14063547C (MiObtainFreePages.c)
 *     MiFlushAllPagesWorker @ 0x14063A234 (MiFlushAllPagesWorker.c)
 *     MiFlushAllStoreSwapPages @ 0x14063A33C (MiFlushAllStoreSwapPages.c)
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B5F0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     KeSetActualBasePriorityThread @ 0x1402B98F0 (KeSetActualBasePriorityThread.c)
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
