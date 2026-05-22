/*
 * XREFs of ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180069444
 * Callers:
 *     ??$_Emplace@U?$pair@PEAUIDispatcherQueue@System@Windows@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@std@@@?$_Tree@V?$_Tmap_traits@V?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@U?$less@V?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@@5@V?$allocator@U?$pair@$$CBV?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@std@@PEAX@std@@_N@1@$$QEAU?$pair@PEAUIDispatcherQueue@System@Windows@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@1@@Z @ 0x180068398 (--$_Emplace@U-$pair@PEAUIDispatcherQueue@System@Windows@@V-$shared_ptr@VCompositionCapabilitiesE.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800680E0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<Microsoft::WRL::ComPtr<Windows::System::IDispatcherQueue> const,std::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<Microsoft::WRL::ComPtr<Windows::System::IDispatcherQueue> const,std::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>>,void *>>>(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  std::_Ref_count_base *v4; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    v4 = *(std::_Ref_count_base **)(v1 + 48);
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
    result = Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v1 + 32);
  }
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
    return std::_Deallocate<16,0>(v3, 56LL);
  return result;
}
