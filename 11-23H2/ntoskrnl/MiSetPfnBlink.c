/*
 * XREFs of MiSetPfnBlink @ 0x1402DF0B0
 * Callers:
 *     MiUnlinkPageFromListEx @ 0x140266630 (MiUnlinkPageFromListEx.c)
 *     MiResolvePrivateZeroFault @ 0x14026A380 (MiResolvePrivateZeroFault.c)
 *     MiGetPageChain @ 0x14026C700 (MiGetPageChain.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402D1E90 (MiUnlinkFreeOrZeroedPage.c)
 *     MiGetHardFaultPages @ 0x1402DF274 (MiGetHardFaultPages.c)
 *     MiBuildMdlForMappedFileFault @ 0x1402DFD70 (MiBuildMdlForMappedFileFault.c)
 *     MiReplenishPageSlist @ 0x1402E7AD0 (MiReplenishPageSlist.c)
 *     MiReplaceTransitionPage @ 0x140330670 (MiReplaceTransitionPage.c)
 *     MiUnlinkStandbyPage @ 0x14046D3FA (MiUnlinkStandbyPage.c)
 *     MiAllocateEnclavePagesForMdl @ 0x14062305C (MiAllocateEnclavePagesForMdl.c)
 *     MiPreInitializeSystemImagePage @ 0x14062C5CC (MiPreInitializeSystemImagePage.c)
 *     MiSwitchToTransition @ 0x14063318C (MiSwitchToTransition.c)
 *     MiAllocateEnclavePages @ 0x140646D98 (MiAllocateEnclavePages.c)
 *     MiGetPageForEnclave @ 0x140648038 (MiGetPageForEnclave.c)
 *     MiReserveEnclavePages @ 0x140648940 (MiReserveEnclavePages.c)
 *     MiReturnEnclavePage @ 0x140648A0C (MiReturnEnclavePage.c)
 *     MiUnlinkPageFromBadList @ 0x14064DFC4 (MiUnlinkPageFromBadList.c)
 *     MiDiscardTransitionPteEx @ 0x140650624 (MiDiscardTransitionPteEx.c)
 *     MiSwapNumaStandbyPage @ 0x140651DD0 (MiSwapNumaStandbyPage.c)
 *     MiResolvePageFileFault @ 0x14066B4BC (MiResolvePageFileFault.c)
 *     MiPfPrepareSequentialReadList @ 0x1407446E0 (MiPfPrepareSequentialReadList.c)
 *     MiCreateHardwareEnclave @ 0x140A3D788 (MiCreateHardwareEnclave.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140B99C44 (MiInitializeEnclaveMetadataPage.c)
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
