/*
 * XREFs of MiSetPfnBlink @ 0x140313CA0
 * Callers:
 *     MiExclusiveInsertPfnChainInList @ 0x14022DBD4 (MiExclusiveInsertPfnChainInList.c)
 *     MiReInitializeFreeSlabPfn @ 0x14023C030 (MiReInitializeFreeSlabPfn.c)
 *     MiPreInitializeSystemImagePage @ 0x140248208 (MiPreInitializeSystemImagePage.c)
 *     MiReplenishPageSlist @ 0x140264720 (MiReplenishPageSlist.c)
 *     MiReplaceTransitionPage @ 0x1402E7704 (MiReplaceTransitionPage.c)
 *     MiBuildMdlForMappedFileFault @ 0x140313DE0 (MiBuildMdlForMappedFileFault.c)
 *     MiGetPageChain @ 0x140323D70 (MiGetPageChain.c)
 *     MiUnlinkPageFromListEx @ 0x140326870 (MiUnlinkPageFromListEx.c)
 *     MiGetHardFaultPages @ 0x14033E280 (MiGetHardFaultPages.c)
 *     MiUnlinkStandbyPage @ 0x14038EB20 (MiUnlinkStandbyPage.c)
 *     MiUnlinkProtectedStandbyPfn @ 0x14038EF10 (MiUnlinkProtectedStandbyPfn.c)
 *     MiResolvePageFileFault @ 0x1403927C4 (MiResolvePageFileFault.c)
 *     MiDiscardTransitionPteEx @ 0x1403941B0 (MiDiscardTransitionPteEx.c)
 *     MiAllocateEnclavePagesForMdl @ 0x140589410 (MiAllocateEnclavePagesForMdl.c)
 *     MiSwitchToTransition @ 0x1405954F4 (MiSwitchToTransition.c)
 *     MiAllocateEnclavePages @ 0x1405A828C (MiAllocateEnclavePages.c)
 *     MiGetPageForEnclave @ 0x1405A9530 (MiGetPageForEnclave.c)
 *     MiReserveEnclavePages @ 0x1405A9E34 (MiReserveEnclavePages.c)
 *     MiReturnEnclavePage @ 0x1405A9F00 (MiReturnEnclavePage.c)
 *     MiUnlinkPageFromBadList @ 0x1405ADEB8 (MiUnlinkPageFromBadList.c)
 *     MiSwapNumaStandbyPage @ 0x1405B4024 (MiSwapNumaStandbyPage.c)
 *     MiPfPrepareSequentialReadList @ 0x1407BCB30 (MiPfPrepareSequentialReadList.c)
 *     MiCreateHardwareEnclave @ 0x140979A34 (MiCreateHardwareEnclave.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140B5229C (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSetPfnBlink(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r9
  signed __int64 v5; // rdx
  unsigned __int64 result; // rax
  signed __int64 v7; // r8
  signed __int64 v8; // rcx

  v3 = a2 & 0xFFFFFFFFFFLL;
  if ( a3 )
  {
    result = v3 | *(_QWORD *)(a1 + 24) & 0xFFFFFF0000000000uLL;
    *(_QWORD *)(a1 + 24) = result;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 24);
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v3 | v5 & 0xFFFFFF0000000000uLL, v5);
    v7 = result;
    if ( v5 != result )
    {
      do
      {
        v8 = v7;
        result = _InterlockedCompareExchange64(
                   (volatile signed __int64 *)(a1 + 24),
                   v3 | v7 & 0xFFFFFF0000000000uLL,
                   v7);
        v7 = result;
      }
      while ( v8 != result );
    }
  }
  return result;
}
