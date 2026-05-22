/*
 * XREFs of ??0?$unordered_map@KW4ContextualProcessorDecision@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@@std@@QEAA@XZ @ 0x1800DDD08
 * Callers:
 *     ??0InputContext@@QEAA@XZ @ 0x1800DDD68 (--0InputContext@@QEAA@XZ.c)
 *     ?AddProcessor@ContextualProcessorBuffer@@UEAAXPEAUIContextualProcessor@@UContextualProcessorInitialState@@@Z @ 0x1801A2150 (-AddProcessor@ContextualProcessorBuffer@@UEAAXPEAUIContextualProcessor@@UContextualProcessorInit.c)
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1801A2520 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??0?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@1@AEBV?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@1@@Z @ 0x1800DDB78 (--0-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compare@KU-$hash@K@std@@U-$.c)
 */

__int64 __fastcall std::unordered_map<unsigned long,enum ContextualProcessorDecision>::unordered_map<unsigned long,enum ContextualProcessorDecision>(
        __int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+34h] [rbp+Ch]

  v4 = HIDWORD(a1);
  v3 = 0;
  std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>(
    a1,
    &v3);
  return a1;
}
