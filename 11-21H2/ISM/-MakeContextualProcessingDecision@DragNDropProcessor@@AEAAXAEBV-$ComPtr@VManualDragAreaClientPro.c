/*
 * XREFs of ?MakeContextualProcessingDecision@DragNDropProcessor@@AEAAXAEBV?$ComPtr@VManualDragAreaClientProxy@@@WRL@Microsoft@@KPEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18013FD68
 * Callers:
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180140220 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800BE564 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800DE7F4 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18013C230 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uh.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18013C4E8 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compar.c)
 */

__int64 *__fastcall DragNDropProcessor::MakeContextualProcessingDecision(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 v6; // rsi
  __int64 v7; // rbx
  float *v8; // rcx
  __int64 v9; // rax
  __int64 *v10; // rdx
  __int64 *result; // rax
  _BYTE v12[16]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v13; // [rsp+50h] [rbp+20h] BYREF
  int v14; // [rsp+60h] [rbp+30h] BYREF

  v14 = a3;
  v13 = a1;
  if ( *(_QWORD *)a2
    && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)a2 + 8LL) + 48LL))(*(_QWORD *)a2 + 8LL) == 1 )
  {
    v6 = a5;
    *(_DWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::_Try_emplace<unsigned long const &,>(
                             (_QWORD *)(a5 + 16),
                             (__int64)v12,
                             (unsigned __int8 *)&v14)
              + 20LL) = 2;
    std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
      a4 + 3,
      &v13,
      (const unsigned __int8 *)&v14);
    v7 = v13;
    v8 = (float *)(v6 + 88);
    if ( v13 == a4[4] )
    {
      v9 = std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Try_emplace<unsigned long const &,>(
             v8,
             (__int64)v12,
             (unsigned __int8 *)&v14);
      v10 = a4 + 2;
    }
    else
    {
      v9 = std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Try_emplace<unsigned long const &,>(
             v8,
             (__int64)v12,
             (unsigned __int8 *)&v14);
      v10 = (__int64 *)(v7 + 24);
    }
    return Microsoft::WRL::ComPtr<IInputTarget>::operator=((__int64 *)(*(_QWORD *)v9 + 24LL), v10);
  }
  else
  {
    result = (__int64 *)std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::_Try_emplace<unsigned long const &,>(
                          (_QWORD *)(a5 + 16),
                          (__int64)v12,
                          (unsigned __int8 *)&v14);
    *(_DWORD *)(*result + 20) = 3;
  }
  return result;
}
