/*
 * XREFs of ?AddDecisionException@EdgyProcessor@@AEAAXKW4ContextualProcessorDecision@@PEAUContextualProcessorResponse@@@Z @ 0x180148A8C
 * Callers:
 *     ?OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x18014A30C (-OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResp.c)
 *     ?OnInputNotification@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x18014AD38 (-OnInputNotification@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProce.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180080BA4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x1800B2754 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Mi.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18013C4E8 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compar.c)
 *     ?GetDecisionPriority@EdgyProcessor@@CAIW4ContextualProcessorDecision@@@Z @ 0x180149A4C (-GetDecisionPriority@EdgyProcessor@@CAIW4ContextualProcessorDecision@@@Z.c)
 */

__int64 __fastcall EdgyProcessor::AddDecisionException(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  _QWORD *v5; // rbx
  __int64 appended; // rax
  __int64 v8; // rcx
  __int64 result; // rax
  unsigned int v10; // edx
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v5 = (_QWORD *)(a4 + 16);
  appended = std::_Fnv1a_append_bytes(a1, (const unsigned __int8 *const)&v12, 4uLL);
  v8 = std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>(
         v5,
         v11,
         &v12,
         appended)[1];
  if ( !v8 )
    v8 = v5[1];
  if ( v8 == *(_QWORD *)(a4 + 24)
    || (EdgyProcessor::GetDecisionPriority(*(unsigned int *)(v8 + 20)),
        result = EdgyProcessor::GetDecisionPriority(a3),
        (unsigned int)result < v10) )
  {
    result = std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::_Try_emplace<unsigned long const &,>(
               v5,
               (__int64)v11,
               (unsigned __int8 *)&v12);
    *(_DWORD *)(*(_QWORD *)result + 20LL) = a3;
  }
  return result;
}
