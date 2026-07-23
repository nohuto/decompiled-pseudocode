/*
 * XREFs of MiSetPfnBlink @ 0x1402DF340
 * Callers:
 *     MiUnlinkPageFromListEx @ 0x1402668C0 (MiUnlinkPageFromListEx.c)
 *     MiResolvePrivateZeroFault @ 0x14026A610 (MiResolvePrivateZeroFault.c)
 *     MiGetPageChain @ 0x14026C990 (MiGetPageChain.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402D2120 (MiUnlinkFreeOrZeroedPage.c)
 *     MiGetHardFaultPages @ 0x1402DF504 (MiGetHardFaultPages.c)
 *     MiBuildMdlForMappedFileFault @ 0x1402E0000 (MiBuildMdlForMappedFileFault.c)
 *     MiReplenishPageSlist @ 0x1402E7D60 (MiReplenishPageSlist.c)
 *     MiReplaceTransitionPage @ 0x140330900 (MiReplaceTransitionPage.c)
 *     MiUnlinkStandbyPage @ 0x14046D7FA (MiUnlinkStandbyPage.c)
 *     MiAllocateEnclavePagesForMdl @ 0x1406235AC (MiAllocateEnclavePagesForMdl.c)
 *     MiPreInitializeSystemImagePage @ 0x14062CB1C (MiPreInitializeSystemImagePage.c)
 *     MiSwitchToTransition @ 0x1406336DC (MiSwitchToTransition.c)
 *     MiAllocateEnclavePages @ 0x1406472E8 (MiAllocateEnclavePages.c)
 *     MiGetPageForEnclave @ 0x140648588 (MiGetPageForEnclave.c)
 *     MiReserveEnclavePages @ 0x140648E90 (MiReserveEnclavePages.c)
 *     MiReturnEnclavePage @ 0x140648F5C (MiReturnEnclavePage.c)
 *     MiUnlinkPageFromBadList @ 0x14064E514 (MiUnlinkPageFromBadList.c)
 *     MiDiscardTransitionPteEx @ 0x140650B74 (MiDiscardTransitionPteEx.c)
 *     MiSwapNumaStandbyPage @ 0x140652320 (MiSwapNumaStandbyPage.c)
 *     MiResolvePageFileFault @ 0x14066BA0C (MiResolvePageFileFault.c)
 *     MiPfPrepareSequentialReadList @ 0x1407448D0 (MiPfPrepareSequentialReadList.c)
 *     MiCreateHardwareEnclave @ 0x140A3DA38 (MiCreateHardwareEnclave.c)
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
