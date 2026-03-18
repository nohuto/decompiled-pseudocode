/*
 * XREFs of RtlDeleteElementGenericTableAvl @ 0x14031E9D0
 * Callers:
 *     VfAvlDeleteTreeNode @ 0x14020A720 (VfAvlDeleteTreeNode.c)
 *     PiUpdateDriverDBCache @ 0x140693190 (PiUpdateDriverDBCache.c)
 *     PiPnpRtlObjectEventWorker @ 0x1407884D0 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlEndOperation @ 0x1407887CC (PiPnpRtlEndOperation.c)
 *     PopPowerRequestDelete @ 0x1407A6790 (PopPowerRequestDelete.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1407C21F8 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x1407DFDB4 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiSwIrpStartCreateWorker @ 0x14081904C (PiSwIrpStartCreateWorker.c)
 *     PiDmObjectManagerPopulate @ 0x1408396DC (PiDmObjectManagerPopulate.c)
 *     EtwpFreeKeyNameList @ 0x14083CBB8 (EtwpFreeKeyNameList.c)
 *     PopPowerRequestStatsOnSleepstudySessionChange @ 0x140875AA0 (PopPowerRequestStatsOnSleepstudySessionChange.c)
 *     PnpCleanupDeviceRegistryValues @ 0x140884BAC (PnpCleanupDeviceRegistryValues.c)
 *     IopCleanupFileObjectIosbRange @ 0x1409446E0 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140945F38 (IopSetFileObjectIosbRange.c)
 *     PiDmListRemoveObjectWorker @ 0x14095AF78 (PiDmListRemoveObjectWorker.c)
 *     PiSwBusRelationRemove @ 0x140967008 (PiSwBusRelationRemove.c)
 *     PiSwCloseDevice @ 0x1409670C0 (PiSwCloseDevice.c)
 *     PiSwProcessRemove @ 0x1409676D0 (PiSwProcessRemove.c)
 *     PopPowerRequestTableDeleteEntry @ 0x140981AFC (PopPowerRequestTableDeleteEntry.c)
 *     PopDirectedDripsUmDirectedFxRemoveTestDevice @ 0x14099F750 (PopDirectedDripsUmDirectedFxRemoveTestDevice.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140ADC260 (VfAvlDeleteAllTreeNodes.c)
 *     VfPtProcessFreePoolInfo @ 0x140ADEB00 (VfPtProcessFreePoolInfo.c)
 *     ViPtDeleteAvlTrees @ 0x140ADEC20 (ViPtDeleteAvlTrees.c)
 * Callees:
 *     DeleteNodeFromTree @ 0x14031EA80 (DeleteNodeFromTree.c)
 *     RealPredecessor @ 0x140360598 (RealPredecessor.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

BOOLEAN __stdcall RtlDeleteElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer)
{
  _RTL_BALANCED_LINKS *RightChild; // rbx
  _RTL_GENERIC_COMPARE_RESULTS v5; // eax

  if ( !Table->NumberGenericTableElements )
    return 0;
  RightChild = Table->BalancedRoot.RightChild;
  while ( 1 )
  {
    v5 = Table->CompareRoutine(Table, Buffer, &RightChild[1]);
    if ( v5 == GenericLessThan )
    {
      RightChild = RightChild->LeftChild;
      goto LABEL_7;
    }
    if ( v5 != GenericGreaterThan )
      break;
    RightChild = RightChild->RightChild;
LABEL_7:
    if ( !RightChild )
      return 0;
  }
  if ( RightChild == Table->RestartKey )
    Table->RestartKey = (_RTL_BALANCED_LINKS *)RealPredecessor(RightChild);
  ++Table->DeleteCount;
  DeleteNodeFromTree(Table, RightChild);
  --Table->NumberGenericTableElements;
  Table->WhichOrderedElement = 0;
  Table->OrderedPointer = 0LL;
  Table->FreeRoutine(Table, RightChild);
  return 1;
}
