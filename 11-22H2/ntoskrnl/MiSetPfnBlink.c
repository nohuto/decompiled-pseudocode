/*
 * XREFs of MiSetPfnBlink @ 0x1402DF0B0
 * Callers:
 *     MiUnlinkPageFromListEx @ 0x140266510 (MiUnlinkPageFromListEx.c)
 *     MiResolvePrivateZeroFault @ 0x14026A260 (MiResolvePrivateZeroFault.c)
 *     MiGetPageChain @ 0x14026C5E0 (MiGetPageChain.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402D1E90 (MiUnlinkFreeOrZeroedPage.c)
 *     MiGetHardFaultPages @ 0x1402DF274 (MiGetHardFaultPages.c)
 *     MiBuildMdlForMappedFileFault @ 0x1402DFD70 (MiBuildMdlForMappedFileFault.c)
 *     MiReplenishPageSlist @ 0x1402E7AD0 (MiReplenishPageSlist.c)
 *     MiReplaceTransitionPage @ 0x1403304D0 (MiReplaceTransitionPage.c)
 *     MiUnlinkStandbyPage @ 0x14046CD9A (MiUnlinkStandbyPage.c)
 *     MiAllocateEnclavePagesForMdl @ 0x1406230CC (MiAllocateEnclavePagesForMdl.c)
 *     MiPreInitializeSystemImagePage @ 0x14062C63C (MiPreInitializeSystemImagePage.c)
 *     MiSwitchToTransition @ 0x1406331FC (MiSwitchToTransition.c)
 *     MiAllocateEnclavePages @ 0x140646E08 (MiAllocateEnclavePages.c)
 *     MiGetPageForEnclave @ 0x1406480A8 (MiGetPageForEnclave.c)
 *     MiReserveEnclavePages @ 0x1406489B0 (MiReserveEnclavePages.c)
 *     MiReturnEnclavePage @ 0x140648A7C (MiReturnEnclavePage.c)
 *     MiUnlinkPageFromBadList @ 0x14064E034 (MiUnlinkPageFromBadList.c)
 *     MiDiscardTransitionPteEx @ 0x140650694 (MiDiscardTransitionPteEx.c)
 *     MiSwapNumaStandbyPage @ 0x140651E40 (MiSwapNumaStandbyPage.c)
 *     MiResolvePageFileFault @ 0x14066B52C (MiResolvePageFileFault.c)
 *     MiPfPrepareSequentialReadList @ 0x140744BF0 (MiPfPrepareSequentialReadList.c)
 *     MiCreateHardwareEnclave @ 0x140A3D7F8 (MiCreateHardwareEnclave.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140B9AC44 (MiInitializeEnclaveMetadataPage.c)
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
