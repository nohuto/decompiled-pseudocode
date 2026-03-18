/*
 * XREFs of MiSetPfnIdentity @ 0x1402194A8
 * Callers:
 *     MiDeleteClusterSection @ 0x1402189D0 (MiDeleteClusterSection.c)
 *     MiMarkPfnVerified @ 0x140219BF0 (MiMarkPfnVerified.c)
 *     MiCopyPfnEntryEx @ 0x140219D80 (MiCopyPfnEntryEx.c)
 *     MiInPageSingleKernelStack @ 0x14021B110 (MiInPageSingleKernelStack.c)
 *     MiOutPageSingleKernelStack @ 0x14021B5A0 (MiOutPageSingleKernelStack.c)
 *     MiMigratePfn @ 0x140262FC0 (MiMigratePfn.c)
 *     MiCompletePrivateZeroFault @ 0x14026A860 (MiCompletePrivateZeroFault.c)
 *     MiAllocateKernelStackPages @ 0x1402731A0 (MiAllocateKernelStackPages.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3670 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDeletePteRun @ 0x1402D50F0 (MiDeletePteRun.c)
 *     MiAllocateSlabEntry @ 0x1402E6C40 (MiAllocateSlabEntry.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x1402E8FBC (MiUpdateSlabPagePlaceholderState.c)
 *     MiFreePagesFromMdl @ 0x1402EBB80 (MiFreePagesFromMdl.c)
 *     MiInitializeMdlBatchPages @ 0x1402F9310 (MiInitializeMdlBatchPages.c)
 *     MiReplaceTransitionPage @ 0x1403304D0 (MiReplaceTransitionPage.c)
 *     MiRestoreTransitionPte @ 0x14033501C (MiRestoreTransitionPte.c)
 *     MiClearPfnImageVerified @ 0x140335218 (MiClearPfnImageVerified.c)
 *     MiCreatePfnTemplate @ 0x140375BA4 (MiCreatePfnTemplate.c)
 *     MiMarkKernelStack @ 0x140376810 (MiMarkKernelStack.c)
 *     MiInitializeMdlPfn @ 0x140389D10 (MiInitializeMdlPfn.c)
 *     MiFreeLargeInitializationCodePages @ 0x14039386C (MiFreeLargeInitializationCodePages.c)
 *     MiAddExpansionNonPagedPool @ 0x140396D44 (MiAddExpansionNonPagedPool.c)
 *     MiSwapStackPageNoDpc @ 0x140399FDC (MiSwapStackPageNoDpc.c)
 *     MiFreeSlabEntry @ 0x1403B8070 (MiFreeSlabEntry.c)
 *     MiStealPage @ 0x1403BBD7C (MiStealPage.c)
 *     MiCopyKstack @ 0x14062CB50 (MiCopyKstack.c)
 *     MiSwitchKstackPages @ 0x14062D6E8 (MiSwitchKstackPages.c)
 *     MiClearFileOnlyPfn @ 0x14063C270 (MiClearFileOnlyPfn.c)
 *     MiDeleteKernelShadowStack @ 0x140644434 (MiDeleteKernelShadowStack.c)
 *     MiClearAweLargePageMetadata @ 0x140649658 (MiClearAweLargePageMetadata.c)
 *     MiFillUserPhysicalMdl @ 0x140649B54 (MiFillUserPhysicalMdl.c)
 *     MiSwapNumaStandbyPage @ 0x140651E40 (MiSwapNumaStandbyPage.c)
 *     MiFreeSecureKernelPage @ 0x1406569F4 (MiFreeSecureKernelPage.c)
 *     MiPrepareLargePageSubPageForFree @ 0x1406694E4 (MiPrepareLargePageSubPageForFree.c)
 *     MiSwapHardFaultPage @ 0x14066C9E8 (MiSwapHardFaultPage.c)
 *     MxInsertEnclaveBootPages @ 0x140B9AE40 (MxInsertEnclaveBootPages.c)
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
