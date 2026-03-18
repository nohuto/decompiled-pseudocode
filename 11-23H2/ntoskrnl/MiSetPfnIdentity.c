/*
 * XREFs of MiSetPfnIdentity @ 0x140219488
 * Callers:
 *     MiDeleteClusterSection @ 0x1402189B0 (MiDeleteClusterSection.c)
 *     MiMarkPfnVerified @ 0x140219BD0 (MiMarkPfnVerified.c)
 *     MiCopyPfnEntryEx @ 0x140219D60 (MiCopyPfnEntryEx.c)
 *     MiInPageSingleKernelStack @ 0x14021B0F0 (MiInPageSingleKernelStack.c)
 *     MiOutPageSingleKernelStack @ 0x14021B580 (MiOutPageSingleKernelStack.c)
 *     MiMigratePfn @ 0x1402630E0 (MiMigratePfn.c)
 *     MiCompletePrivateZeroFault @ 0x14026A980 (MiCompletePrivateZeroFault.c)
 *     MiAllocateKernelStackPages @ 0x1402732C0 (MiAllocateKernelStackPages.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3670 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDeletePteRun @ 0x1402D50F0 (MiDeletePteRun.c)
 *     MiAllocateSlabEntry @ 0x1402E6C40 (MiAllocateSlabEntry.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x1402E8FBC (MiUpdateSlabPagePlaceholderState.c)
 *     MiFreePagesFromMdl @ 0x1402EBB80 (MiFreePagesFromMdl.c)
 *     MiInitializeMdlBatchPages @ 0x1402F9310 (MiInitializeMdlBatchPages.c)
 *     MiReplaceTransitionPage @ 0x140330670 (MiReplaceTransitionPage.c)
 *     MiRestoreTransitionPte @ 0x1403351BC (MiRestoreTransitionPte.c)
 *     MiClearPfnImageVerified @ 0x1403353B8 (MiClearPfnImageVerified.c)
 *     MiCreatePfnTemplate @ 0x140375554 (MiCreatePfnTemplate.c)
 *     MiMarkKernelStack @ 0x1403761C0 (MiMarkKernelStack.c)
 *     MiInitializeMdlPfn @ 0x14038C220 (MiInitializeMdlPfn.c)
 *     MiFreeLargeInitializationCodePages @ 0x1403953EC (MiFreeLargeInitializationCodePages.c)
 *     MiAddExpansionNonPagedPool @ 0x1403988C4 (MiAddExpansionNonPagedPool.c)
 *     MiSwapStackPageNoDpc @ 0x14039A2CC (MiSwapStackPageNoDpc.c)
 *     MiFreeSlabEntry @ 0x1403B86D0 (MiFreeSlabEntry.c)
 *     MiStealPage @ 0x1403BC3DC (MiStealPage.c)
 *     MiCopyKstack @ 0x14062CAE0 (MiCopyKstack.c)
 *     MiSwitchKstackPages @ 0x14062D678 (MiSwitchKstackPages.c)
 *     MiClearFileOnlyPfn @ 0x14063C200 (MiClearFileOnlyPfn.c)
 *     MiDeleteKernelShadowStack @ 0x1406443C4 (MiDeleteKernelShadowStack.c)
 *     MiClearAweLargePageMetadata @ 0x1406495E8 (MiClearAweLargePageMetadata.c)
 *     MiFillUserPhysicalMdl @ 0x140649AE4 (MiFillUserPhysicalMdl.c)
 *     MiSwapNumaStandbyPage @ 0x140651DD0 (MiSwapNumaStandbyPage.c)
 *     MiFreeSecureKernelPage @ 0x140656984 (MiFreeSecureKernelPage.c)
 *     MiPrepareLargePageSubPageForFree @ 0x140669474 (MiPrepareLargePageSubPageForFree.c)
 *     MiSwapHardFaultPage @ 0x14066C978 (MiSwapHardFaultPage.c)
 *     MxInsertEnclaveBootPages @ 0x140B99E40 (MxInsertEnclaveBootPages.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MiSetPfnIdentity(__int64 a1, char a2)
{
  signed __int64 v2; // r8
  unsigned __int64 v3; // r10
  signed __int64 result; // rax
  signed __int64 v5; // rdx

  v2 = *(_QWORD *)(a1 + 40);
  v3 = (unsigned __int64)(a2 & 7) << 60;
  result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v3 | v2 & 0x8FFFFFFFFFFFFFFFuLL, v2);
  if ( v2 != result )
  {
    do
    {
      v5 = result;
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(a1 + 40),
                 v3 | result & 0x8FFFFFFFFFFFFFFFuLL,
                 result);
    }
    while ( v5 != result );
  }
  return result;
}
