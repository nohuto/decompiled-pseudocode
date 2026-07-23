/*
 * XREFs of MiSetPfnIdentity @ 0x140219488
 * Callers:
 *     MiDeleteClusterSection @ 0x1402189B0 (MiDeleteClusterSection.c)
 *     MiMarkPfnVerified @ 0x140219BD0 (MiMarkPfnVerified.c)
 *     MiCopyPfnEntryEx @ 0x140219D60 (MiCopyPfnEntryEx.c)
 *     MiInPageSingleKernelStack @ 0x14021B0F0 (MiInPageSingleKernelStack.c)
 *     MiOutPageSingleKernelStack @ 0x14021B580 (MiOutPageSingleKernelStack.c)
 *     MiMigratePfn @ 0x140263370 (MiMigratePfn.c)
 *     MiCompletePrivateZeroFault @ 0x14026AC10 (MiCompletePrivateZeroFault.c)
 *     MiAllocateKernelStackPages @ 0x140273550 (MiAllocateKernelStackPages.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3900 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDeletePteRun @ 0x1402D5380 (MiDeletePteRun.c)
 *     MiAllocateSlabEntry @ 0x1402E6ED0 (MiAllocateSlabEntry.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x1402E924C (MiUpdateSlabPagePlaceholderState.c)
 *     MiFreePagesFromMdl @ 0x1402EBE10 (MiFreePagesFromMdl.c)
 *     MiInitializeMdlBatchPages @ 0x1402F95A0 (MiInitializeMdlBatchPages.c)
 *     MiReplaceTransitionPage @ 0x140330900 (MiReplaceTransitionPage.c)
 *     MiRestoreTransitionPte @ 0x14033544C (MiRestoreTransitionPte.c)
 *     MiClearPfnImageVerified @ 0x140335648 (MiClearPfnImageVerified.c)
 *     MiCreatePfnTemplate @ 0x1403756F4 (MiCreatePfnTemplate.c)
 *     MiMarkKernelStack @ 0x140376360 (MiMarkKernelStack.c)
 *     MiInitializeMdlPfn @ 0x14038C400 (MiInitializeMdlPfn.c)
 *     MiFreeLargeInitializationCodePages @ 0x1403955CC (MiFreeLargeInitializationCodePages.c)
 *     MiAddExpansionNonPagedPool @ 0x140398AA4 (MiAddExpansionNonPagedPool.c)
 *     MiSwapStackPageNoDpc @ 0x14039A4AC (MiSwapStackPageNoDpc.c)
 *     MiFreeSlabEntry @ 0x1403B88B0 (MiFreeSlabEntry.c)
 *     MiStealPage @ 0x1403BC5BC (MiStealPage.c)
 *     MiCopyKstack @ 0x14062D030 (MiCopyKstack.c)
 *     MiSwitchKstackPages @ 0x14062DBC8 (MiSwitchKstackPages.c)
 *     MiClearFileOnlyPfn @ 0x14063C750 (MiClearFileOnlyPfn.c)
 *     MiDeleteKernelShadowStack @ 0x140644914 (MiDeleteKernelShadowStack.c)
 *     MiClearAweLargePageMetadata @ 0x140649B38 (MiClearAweLargePageMetadata.c)
 *     MiFillUserPhysicalMdl @ 0x14064A034 (MiFillUserPhysicalMdl.c)
 *     MiSwapNumaStandbyPage @ 0x140652320 (MiSwapNumaStandbyPage.c)
 *     MiFreeSecureKernelPage @ 0x140656ED4 (MiFreeSecureKernelPage.c)
 *     MiPrepareLargePageSubPageForFree @ 0x1406699C4 (MiPrepareLargePageSubPageForFree.c)
 *     MiSwapHardFaultPage @ 0x14066CEC8 (MiSwapHardFaultPage.c)
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
