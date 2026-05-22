/*
 * XREFs of ??$_Emplace@U?$pair@PEAUIDispatcherQueue@System@Windows@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@std@@@?$_Tree@V?$_Tmap_traits@V?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@U?$less@V?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@@5@V?$allocator@U?$pair@$$CBV?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@std@@PEAX@std@@_N@1@$$QEAU?$pair@PEAUIDispatcherQueue@System@Windows@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@1@@Z @ 0x180068398
 * Callers:
 *     ?RegisterForEvents@CompositionCapabilitiesRegistration@Composition@UI@Windows@@SAJPEAUIDispatcherQueue@System@4@PEAVCompositionCapabilities@234@PEAUEventRegistrationToken@@@Z @ 0x180067EAC (-RegisterForEvents@CompositionCapabilitiesRegistration@Composition@UI@Windows@@SAJPEAUIDispatche.c)
 * Callees:
 *     ??$_Find_lower_bound@V?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@@?$_Tree@V?$_Tmap_traits@V?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@U?$less@V?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@@5@V?$allocator@U?$pair@$$CBV?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@std@@PEAX@std@@@1@AEBV?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@@Z @ 0x180068070 (--$_Find_lower_bound@V-$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@@-$_Tree@V-$_Tm.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800684D4 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIDispatcherQueue@System@W.c)
 *     ??$?0U?$pair@PEAUIDispatcherQueue@System@Windows@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@std@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@std@@PEAX@1@$$QEAU?$pair@PEAUIDispatcherQueue@System@Windows@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@1@@Z @ 0x18006869C (--$-0U-$pair@PEAUIDispatcherQueue@System@Windows@@V-$shared_ptr@VCompositionCapabilitiesEvent@Co.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180069444 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$ComPtr@UIDispatcherQueue@System@W.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<Microsoft::WRL::ComPtr<Windows::System::IDispatcherQueue>,std::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>,std::less<Microsoft::WRL::ComPtr<Windows::System::IDispatcherQueue>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<Windows::System::IDispatcherQueue> const,std::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>>>,0>>::_Emplace<std::pair<Windows::System::IDispatcherQueue *,std::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int128 v7; // xmm6
  _OWORD v9[2]; // [rsp+20h] [rbp-58h] BYREF
  char *v10; // [rsp+40h] [rbp-38h]
  _BYTE v11[24]; // [rsp+48h] [rbp-30h] BYREF

  std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<Microsoft::WRL::ComPtr<Windows::System::IDispatcherQueue> const,std::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<Microsoft::WRL::ComPtr<Windows::System::IDispatcherQueue> const,std::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>>,void *>>>(
    v9,
    &Windows::UI::Composition::CompositionCapabilitiesRegistration::s_eventSourceMap,
    Windows::UI::Composition::CompositionCapabilitiesRegistration::s_eventSourceMap,
    a3);
  v4 = *((_QWORD *)&v9[0] + 1);
  v6 = std::_Tree<std::_Tmap_traits<Microsoft::WRL::ComPtr<Windows::System::IDispatcherQueue>,std::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>,std::less<Microsoft::WRL::ComPtr<Windows::System::IDispatcherQueue>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<Windows::System::IDispatcherQueue> const,std::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>>>,0>>::_Find_lower_bound<Microsoft::WRL::ComPtr<Windows::System::IDispatcherQueue>>(
         v5,
         (__int64)v11,
         (unsigned __int64 *)(*((_QWORD *)&v9[0] + 1) + 32LL));
  v7 = *(_OWORD *)v6;
  v10 = *(char **)(v6 + 16);
  if ( v10[25] || *(_QWORD *)(v4 + 32) < *((_QWORD *)v10 + 4) )
  {
    if ( *((_QWORD *)&Windows::UI::Composition::CompositionCapabilitiesRegistration::s_eventSourceMap + 1) == 0x492492492492492LL )
      std::_Dwm_Xlength_error(v10);
    *((_QWORD *)&v9[0] + 1) = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<Microsoft::WRL::ComPtr<Windows::System::IDispatcherQueue> const,std::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<Microsoft::WRL::ComPtr<Windows::System::IDispatcherQueue> const,std::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>>,void *>>>(v9);
    v9[0] = v7;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<Windows::System::IDispatcherQueue> const,std::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>>>>::_Insert_node(
                      &Windows::UI::Composition::CompositionCapabilitiesRegistration::s_eventSourceMap,
                      v9,
                      v4);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 0;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<Microsoft::WRL::ComPtr<Windows::System::IDispatcherQueue> const,std::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<Microsoft::WRL::ComPtr<Windows::System::IDispatcherQueue> const,std::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>>,void *>>>(v9);
  }
  return a2;
}
