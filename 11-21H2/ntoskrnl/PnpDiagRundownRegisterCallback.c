/*
 * XREFs of PnpDiagRundownRegisterCallback @ 0x140946400
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     PipForDeviceNodeSubtree @ 0x140764CE4 (PipForDeviceNodeSubtree.c)
 *     PpDevNodeUnlockTree @ 0x140775698 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14077572C (PpDevNodeLockTree.c)
 */

void __fastcall PnpDiagRundownRegisterCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  if ( ControlCode == 2 )
  {
    if ( EtwEventEnabled(PnpRundownEtwHandle, &KMPnPRundownEvt_SleepStudy_ConnectionResource) )
    {
      PpDevNodeLockTree(0);
      PipForDeviceNodeSubtree((__int64)IopRootDeviceNode, (__int64)PnpDiagRundownConnectionResourceForEachDevice, 0LL);
      PpDevNodeUnlockTree(0);
    }
    if ( EtwEventEnabled(PnpRundownEtwHandle, &KMPnPRundownEvt_SleepStudy_ParentPdo) )
    {
      PpDevNodeLockTree(0);
      PipForDeviceNodeSubtree((__int64)IopRootDeviceNode, (__int64)PnpDiagRundownParentPdoForEachDevice, 0LL);
      PpDevNodeUnlockTree(0);
    }
    if ( EtwEventEnabled(PnpRundownEtwHandle, &KMPnPRundownEvt_SleepStudy_ParentDevNode) )
    {
      PpDevNodeLockTree(0);
      PipForDeviceNodeSubtree((__int64)IopRootDeviceNode, (__int64)PnpDiagRundownParentDevNodeForEachDevice, 0LL);
      PpDevNodeUnlockTree(0);
    }
    if ( EtwEventEnabled(PnpRundownEtwHandle, &KMPnPRundownEvt_SleepStudy_InterruptResource) )
    {
      PpDevNodeLockTree(0);
      PipForDeviceNodeSubtree((__int64)IopRootDeviceNode, (__int64)PnpDiagRundownInterruptResourceForEachDevice, 0LL);
      PpDevNodeUnlockTree(0);
    }
  }
}
