/*
 * XREFs of _alloca_probe @ 0x140429B10
 * Callers:
 *     KeIntSteerSnapPerf @ 0x140221D60 (KeIntSteerSnapPerf.c)
 *     RtlDispatchException @ 0x1402A3DC0 (RtlDispatchException.c)
 *     RtlpWalkFrameChain @ 0x1402A42A0 (RtlpWalkFrameChain.c)
 *     RtlUnwindEx @ 0x1402A4D40 (RtlUnwindEx.c)
 *     KiDispatchException @ 0x14030CCA0 (KiDispatchException.c)
 *     KiContinuePreviousModeUser @ 0x14030D1E4 (KiContinuePreviousModeUser.c)
 *     RtlRaiseException @ 0x14030D590 (RtlRaiseException.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1403459CC (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140345A70 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140345B14 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     HalGetEnvironmentVariableEx @ 0x14035E920 (HalGetEnvironmentVariableEx.c)
 *     RtlUnwind @ 0x1403C46F0 (RtlUnwind.c)
 *     ReadStringDelimited_0 @ 0x1403E2554 (ReadStringDelimited_0.c)
 *     EtwpTraceLastBranchRecord @ 0x140469AA6 (EtwpTraceLastBranchRecord.c)
 *     EtwpApplyEventNameFilter @ 0x14046A7B6 (EtwpApplyEventNameFilter.c)
 *     HalSetEnvironmentVariableEx @ 0x140504A60 (HalSetEnvironmentVariableEx.c)
 *     HalpHvStartVirtualProcessor @ 0x14050C140 (HalpHvStartVirtualProcessor.c)
 *     VslpVerifySessionSpace @ 0x14054CFD0 (VslpVerifySessionSpace.c)
 *     KyRaiseException @ 0x140578AF0 (KyRaiseException.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x140580714 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x1405BA550 (-BTreeFindLeafSibling@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x1405BA66C (-BTreeFindLeafSibling@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x1405BA78C (-BTreeFindLeafSibling@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x1405BB540 (-BTreeIteratorCleanup@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x1405BB670 (-BTreeIteratorCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x1405BB7A0 (-BTreeIteratorCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x1405BB8D0 (-BTreeIteratorFromSearchResult@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x1405BBA64 (-BTreeIteratorFromSearchResult@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_C.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x1405BBC28 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@.c)
 *     EtwpTraceLostEvent @ 0x1405FC3A4 (EtwpTraceLostEvent.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1406043F8 (EtwpApplyPayloadFilterInternal.c)
 *     NtCreateUserProcess @ 0x1406B82E0 (NtCreateUserProcess.c)
 *     ObWaitForMultipleObjects @ 0x1406E3890 (ObWaitForMultipleObjects.c)
 *     NtCreateThreadEx @ 0x14076F400 (NtCreateThreadEx.c)
 *     PspInitializeThunkContext @ 0x1407701FC (PspInitializeThunkContext.c)
 *     PspSetContextThreadInternal @ 0x1407705F0 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1407707D4 (PspGetContextThreadInternal.c)
 *     PspWow64GetContextThread @ 0x1407A018C (PspWow64GetContextThread.c)
 *     PspWow64SetContextThread @ 0x1407A0458 (PspWow64SetContextThread.c)
 *     ExpWatchProductTypeWork @ 0x1407AC030 (ExpWatchProductTypeWork.c)
 *     SmStorePhysicalRequestIssue @ 0x1409D7BB0 (SmStorePhysicalRequestIssue.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall alloca_probe()
{
  unsigned __int64 result; // rax
  char *v1; // r10
  char *v2; // r11
  char v3; // [rsp+18h] [rbp+8h] BYREF

  v1 = &v3 - result;
  if ( (unsigned __int64)&v3 < result )
    v1 = 0LL;
  LOWORD(v1) = (unsigned __int16)v1 & 0xF000;
  v2 = &v3;
  LOWORD(v2) = (unsigned __int16)&v3 & 0xF000;
  while ( v1 < v2 )
    v2 -= 4096;
  return result;
}
