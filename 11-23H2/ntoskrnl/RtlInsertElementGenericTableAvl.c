/*
 * XREFs of RtlInsertElementGenericTableAvl @ 0x14031EEC0
 * Callers:
 *     VfAvlInsertReservedTreeNode @ 0x14020A3A4 (VfAvlInsertReservedTreeNode.c)
 *     PiUpdateDriverDBCache @ 0x140693190 (PiUpdateDriverDBCache.c)
 *     PopPowerRequestTableInsertEntry @ 0x1407A7994 (PopPowerRequestTableInsertEntry.c)
 *     PopPowerRequestStatsCreate @ 0x1407A79CC (PopPowerRequestStatsCreate.c)
 *     PiDqQueryAddObjectToResultSet @ 0x1407E0684 (PiDqQueryAddObjectToResultSet.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x1407E2018 (PnpMapDeviceObjectToDeviceInstance.c)
 *     EtwpEnumerateKeyProviders @ 0x140809344 (EtwpEnumerateKeyProviders.c)
 *     PiSwIrpStartCreateWorker @ 0x14081931C (PiSwIrpStartCreateWorker.c)
 *     PiSwBusRelationAdd @ 0x140819F98 (PiSwBusRelationAdd.c)
 *     PiDmObjectManagerPopulate @ 0x1408399DC (PiDmObjectManagerPopulate.c)
 *     EtwpInitializeAutoLoggers @ 0x14083BDCC (EtwpInitializeAutoLoggers.c)
 *     EtwpEnumerateAutologgerPath @ 0x14083C048 (EtwpEnumerateAutologgerPath.c)
 *     PiDcInitUpdateProperties @ 0x14084F7A8 (PiDcInitUpdateProperties.c)
 *     IopSetFileObjectIosbRange @ 0x140946138 (IopSetFileObjectIosbRange.c)
 *     PopDirectedDripsUmDirectedFxAddTestDevice @ 0x14099F850 (PopDirectedDripsUmDirectedFxAddTestDevice.c)
 *     VfPtAddStackInfoIfNotExist @ 0x140ADE5C0 (VfPtAddStackInfoIfNotExist.c)
 *     VfPtProcessAllocPoolInfo @ 0x140ADEA38 (VfPtProcessAllocPoolInfo.c)
 * Callees:
 *     RtlInsertElementGenericTableFullAvl @ 0x14031EF80 (RtlInsertElementGenericTableFullAvl.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

PVOID __stdcall RtlInsertElementGenericTableAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement)
{
  _RTL_BALANCED_LINKS *NodeOrParent; // rbx
  _RTL_GENERIC_COMPARE_RESULTS v9; // eax
  TABLE_SEARCH_RESULT SearchResult; // eax

  NodeOrParent = 0LL;
  if ( Table->NumberGenericTableElements )
  {
    for ( NodeOrParent = Table->BalancedRoot.RightChild; ; NodeOrParent = NodeOrParent->RightChild )
    {
      while ( 1 )
      {
        v9 = Table->CompareRoutine(Table, Buffer, &NodeOrParent[1]);
        if ( v9 )
          break;
        if ( !NodeOrParent->LeftChild )
        {
          SearchResult = TableInsertAsLeft;
          return RtlInsertElementGenericTableFullAvl(Table, Buffer, BufferSize, NewElement, NodeOrParent, SearchResult);
        }
        NodeOrParent = NodeOrParent->LeftChild;
      }
      if ( v9 != GenericGreaterThan )
        break;
      if ( !NodeOrParent->RightChild )
      {
        SearchResult = TableInsertAsRight;
        return RtlInsertElementGenericTableFullAvl(Table, Buffer, BufferSize, NewElement, NodeOrParent, SearchResult);
      }
    }
    SearchResult = TableFoundNode;
  }
  else
  {
    SearchResult = TableEmptyTree;
  }
  return RtlInsertElementGenericTableFullAvl(Table, Buffer, BufferSize, NewElement, NodeOrParent, SearchResult);
}
