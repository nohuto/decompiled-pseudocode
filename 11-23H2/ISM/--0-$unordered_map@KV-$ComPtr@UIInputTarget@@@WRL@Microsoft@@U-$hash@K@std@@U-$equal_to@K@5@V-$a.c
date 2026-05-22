/*
 * XREFs of ??0?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@QEAA@XZ @ 0x180051734
 * Callers:
 *     ??0ContextualProcessorBuffer@@IEAA@PEAVInputContext@@PEAUIInputBuffer@@@Z @ 0x180051660 (--0ContextualProcessorBuffer@@IEAA@PEAVInputContext@@PEAUIInputBuffer@@@Z.c)
 *     ?EventStreamEndedAndProcessFinalDecision@ContextualProcessorBuffer@@AEAAXXZ @ 0x18006394C (-EventStreamEndedAndProcessFinalDecision@ContextualProcessorBuffer@@AEAAXXZ.c)
 *     ??0InputContext@@QEAA@XZ @ 0x1800F7A00 (--0InputContext@@QEAA@XZ.c)
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1801C03A0 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??0?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@1@AEBV?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@1@@Z @ 0x180051764 (--0-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uhash_compare@KU-$hash@.c)
 */

__int64 __fastcall std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>(
        __int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+34h] [rbp+Ch]

  v4 = HIDWORD(a1);
  v3 = 0;
  std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>(
    a1,
    &v3);
  return a1;
}
