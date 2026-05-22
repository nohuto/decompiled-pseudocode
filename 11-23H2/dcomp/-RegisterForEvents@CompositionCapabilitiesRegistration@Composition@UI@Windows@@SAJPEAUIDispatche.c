/*
 * XREFs of ?RegisterForEvents@CompositionCapabilitiesRegistration@Composition@UI@Windows@@SAJPEAUIDispatcherQueue@System@4@PEAVCompositionCapabilities@234@PEAUEventRegistrationToken@@@Z @ 0x180067EAC
 * Callers:
 *     ?add_Changed@CompositionCapabilities@Composition@UI@Windows@@QEAAJPEAU?$ITypedEventHandler@PEAVCompositionCapabilities@Composition@UI@Windows@@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z @ 0x180067D64 (-add_Changed@CompositionCapabilities@Composition@UI@Windows@@QEAAJPEAU-$ITypedEventHandler@PEAVC.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 *     ?AddListener@CompositionCapabilitiesEvent@Composition@UI@Windows@@QEAAJPEAVCompositionCapabilities@234@PEAUEventRegistrationToken@@@Z @ 0x180067B00 (-AddListener@CompositionCapabilitiesEvent@Composition@UI@Windows@@QEAAJPEAVCompositionCapabiliti.c)
 *     ??$_Find_lower_bound@V?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@@?$_Tree@V?$_Tmap_traits@V?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@U?$less@V?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@@5@V?$allocator@U?$pair@$$CBV?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@std@@PEAX@std@@@1@AEBV?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@@Z @ 0x180068070 (--$_Find_lower_bound@V-$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@@-$_Tree@V-$_Tm.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800680E0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@QEAA@AEBV01@@Z @ 0x180068148 (--0-$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Emplace@U?$pair@PEAUIDispatcherQueue@System@Windows@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@std@@@?$_Tree@V?$_Tmap_traits@V?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@U?$less@V?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@@5@V?$allocator@U?$pair@$$CBV?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@std@@PEAX@std@@_N@1@$$QEAU?$pair@PEAUIDispatcherQueue@System@Windows@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@1@@Z @ 0x180068398 (--$_Emplace@U-$pair@PEAUIDispatcherQueue@System@Windows@@V-$shared_ptr@VCompositionCapabilitiesE.c)
 *     ??$?0VCompositionCapabilitiesEvent@Composition@UI@Windows@@$0A@@?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@QEAA@PEAVCompositionCapabilitiesEvent@Composition@UI@Windows@@@Z @ 0x180068474 (--$-0VCompositionCapabilitiesEvent@Composition@UI@Windows@@$0A@@-$shared_ptr@VCompositionCapabil.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180088E0C (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Subscribe@CWnfSubscriber@Composition@UI@Windows@@SAJXZ @ 0x18008DC28 (-Subscribe@CWnfSubscriber@Composition@UI@Windows@@SAJXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionCapabilitiesRegistration::RegisterForEvents(
        struct Windows::System::IDispatcherQueue *a1,
        struct Windows::UI::Composition::CompositionCapabilities *a2,
        struct IUnknown **a3)
{
  __int64 v6; // rcx
  std::_Ref_count_base *v7; // rbx
  RTL_SRWLOCK *v8; // rax
  RTL_SRWLOCK *v9; // rbx
  __int64 v10; // rax
  Windows::UI::Composition::CompositionCapabilitiesEvent *v11; // rbx
  std::_Ref_count_base *v12; // rdi
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rcx
  __int64 v17; // rax
  Windows::UI::Composition::CompositionCapabilitiesEvent *v18; // rbx
  unsigned int v19; // edx
  _QWORD v20[2]; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v21[8]; // [rsp+30h] [rbp-30h] BYREF
  std::_Ref_count_base *v22; // [rsp+38h] [rbp-28h]
  struct Windows::System::IDispatcherQueue *v23; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v24[8]; // [rsp+48h] [rbp-18h] BYREF
  std::_Ref_count_base *v25; // [rsp+50h] [rbp-10h]
  struct Windows::System::IDispatcherQueue *v26; // [rsp+80h] [rbp+20h] BYREF

  v26 = a1;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v26);
  std::_Tree<std::_Tmap_traits<Microsoft::WRL::ComPtr<Windows::System::IDispatcherQueue>,std::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>,std::less<Microsoft::WRL::ComPtr<Windows::System::IDispatcherQueue>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<Windows::System::IDispatcherQueue> const,std::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>>>,0>>::_Find_lower_bound<Microsoft::WRL::ComPtr<Windows::System::IDispatcherQueue>>(
    v6,
    &v23,
    &v26);
  v7 = v25;
  if ( *((_BYTE *)v25 + 25) || (unsigned __int64)a1 < *((_QWORD *)v25 + 4) )
    v7 = (std::_Ref_count_base *)Windows::UI::Composition::CompositionCapabilitiesRegistration::s_eventSourceMap;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v26);
  if ( v7 == (std::_Ref_count_base *)Windows::UI::Composition::CompositionCapabilitiesRegistration::s_eventSourceMap )
  {
    v8 = (RTL_SRWLOCK *)operator new(0x18uLL);
    v9 = v8;
    if ( v8 )
    {
      v8[1].Ptr = 0LL;
      v8[2].Ptr = 0LL;
      v8->Ptr = 0LL;
      InitializeSRWLock(v8 + 1);
      InitializeSRWLock(v9 + 2);
    }
    else
    {
      v9 = 0LL;
    }
    v10 = std::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>(
            v21,
            v9);
    v11 = *(Windows::UI::Composition::CompositionCapabilitiesEvent **)v10;
    v12 = *(std::_Ref_count_base **)(v10 + 8);
    *(_QWORD *)v10 = 0LL;
    *(_QWORD *)(v10 + 8) = 0LL;
    v20[0] = v11;
    v20[1] = v12;
    if ( v22 )
      std::_Ref_count_base::_Decref(v22);
    v13 = Windows::UI::Composition::CompositionCapabilitiesEvent::AddListener(v11, a2, a3);
    v14 = v13;
    if ( v13 < 0 )
    {
      v19 = 468;
    }
    else
    {
      v23 = a1;
      std::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>(
        v24,
        v20);
      std::_Tree<std::_Tmap_traits<Microsoft::WRL::ComPtr<Windows::System::IDispatcherQueue>,std::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>,std::less<Microsoft::WRL::ComPtr<Windows::System::IDispatcherQueue>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<Windows::System::IDispatcherQueue> const,std::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>>>,0>>::_Emplace<std::pair<Windows::System::IDispatcherQueue *,std::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>>>(
        v15,
        v21,
        &v23);
      if ( v25 )
        std::_Ref_count_base::_Decref(v25);
      if ( *((_QWORD *)&Windows::UI::Composition::CompositionCapabilitiesRegistration::s_eventSourceMap + 1) != 1LL
        || (v13 = Windows::UI::Composition::CWnfSubscriber::Subscribe(), v14 = v13, v13 >= 0) )
      {
LABEL_13:
        v14 = 0;
        goto LABEL_14;
      }
      v19 = 473;
    }
  }
  else
  {
    v17 = std::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>(
            v21,
            (char *)v7 + 40);
    v18 = *(Windows::UI::Composition::CompositionCapabilitiesEvent **)v17;
    *(_QWORD *)v17 = 0LL;
    v12 = *(std::_Ref_count_base **)(v17 + 8);
    *(_QWORD *)(v17 + 8) = 0LL;
    if ( v22 )
      std::_Ref_count_base::_Decref(v22);
    v13 = Windows::UI::Composition::CompositionCapabilitiesEvent::AddListener(v18, a2, a3);
    v14 = v13;
    if ( v13 >= 0 )
      goto LABEL_13;
    v19 = 480;
  }
  DoStackCaptureDirect(v13, v19);
LABEL_14:
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  return v14;
}
