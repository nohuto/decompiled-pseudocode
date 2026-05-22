/*
 * XREFs of ??$?0U?$pair@PEAUIDispatcherQueue@System@Windows@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@std@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@std@@PEAX@1@$$QEAU?$pair@PEAUIDispatcherQueue@System@Windows@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@1@@Z @ 0x18006869C
 * Callers:
 *     ??$_Emplace@U?$pair@PEAUIDispatcherQueue@System@Windows@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@std@@@?$_Tree@V?$_Tmap_traits@V?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@U?$less@V?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@@5@V?$allocator@U?$pair@$$CBV?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@std@@PEAX@std@@_N@1@$$QEAU?$pair@PEAUIDispatcherQueue@System@Windows@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@1@@Z @ 0x180068398 (--$_Emplace@U-$pair@PEAUIDispatcherQueue@System@Windows@@V-$shared_ptr@VCompositionCapabilitiesE.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180088E0C (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

_QWORD *__fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<Microsoft::WRL::ComPtr<Windows::System::IDispatcherQueue> const,std::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<Microsoft::WRL::ComPtr<Windows::System::IDispatcherQueue> const,std::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  a1[1] = v7;
  v8 = v7 + 32;
  *(_QWORD *)(v7 + 32) = *a4;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v7 + 32);
  *(_QWORD *)(v8 + 8) = 0LL;
  *(_QWORD *)(v8 + 16) = 0LL;
  *(_QWORD *)(v8 + 8) = a4[1];
  *(_QWORD *)(v8 + 16) = a4[2];
  a4[1] = 0LL;
  a4[2] = 0LL;
  v9 = 0LL;
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  do
    *(_BYTE *)(a1[1] + v9++ + 24) = 0;
  while ( v9 < 2 );
  return a1;
}
