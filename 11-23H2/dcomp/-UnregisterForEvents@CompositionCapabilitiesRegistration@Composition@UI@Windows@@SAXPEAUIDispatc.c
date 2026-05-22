/*
 * XREFs of ?UnregisterForEvents@CompositionCapabilitiesRegistration@Composition@UI@Windows@@SAXPEAUIDispatcherQueue@System@4@UEventRegistrationToken@@@Z @ 0x180069EFC
 * Callers:
 *     ?remove_Changed@Api@CompositionCapabilities@Composition@UI@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x1800119D0 (-remove_Changed@Api@CompositionCapabilities@Composition@UI@Windows@@UEAAJUEventRegistrationToken.c)
 *     ??1CompositionCapabilities@Composition@UI@Windows@@UEAA@XZ @ 0x18003C660 (--1CompositionCapabilities@Composition@UI@Windows@@UEAA@XZ.c)
 * Callees:
 *     ?Remove@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180011A54 (-Remove@-$EventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$InvokeModeOptio.c)
 *     ??$_Find_lower_bound@V?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@@?$_Tree@V?$_Tmap_traits@V?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@U?$less@V?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@@5@V?$allocator@U?$pair@$$CBV?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@std@@PEAX@std@@@1@AEBV?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@@Z @ 0x180068070 (--$_Find_lower_bound@V-$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@@-$_Tree@V-$_Tm.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800680E0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@QEAA@AEBV01@@Z @ 0x180068148 (--0-$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18006A010 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIDispatcherQueue@System@Windo.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180088E0C (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

void __fastcall Windows::UI::Composition::CompositionCapabilitiesRegistration::UnregisterForEvents(
        struct Windows::System::IDispatcherQueue *a1,
        struct EventRegistrationToken a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  struct IUnknown *value; // rdx
  RTL_SRWLOCK *v7; // rbx
  __int64 v8; // rbx
  std::_Ref_count_base *v9; // rcx
  RTL_SRWLOCK *v10; // rsi
  __int64 v11; // rbx
  RTL_SRWLOCK *v12; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+30h] [rbp-18h]
  struct Windows::System::IDispatcherQueue *v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = a1;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v15);
  std::_Tree<std::_Tmap_traits<Microsoft::WRL::ComPtr<Windows::System::IDispatcherQueue>,std::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>,std::less<Microsoft::WRL::ComPtr<Windows::System::IDispatcherQueue>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<Windows::System::IDispatcherQueue> const,std::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>>>,0>>::_Find_lower_bound<Microsoft::WRL::ComPtr<Windows::System::IDispatcherQueue>>(
    v4,
    (__int64)&v12,
    (unsigned __int64 *)&v15);
  v5 = v14;
  if ( *(_BYTE *)(v14 + 25) || (unsigned __int64)a1 < *(_QWORD *)(v14 + 32) )
    v5 = Windows::UI::Composition::CompositionCapabilitiesRegistration::s_eventSourceMap;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v15);
  if ( v5 != (_QWORD)Windows::UI::Composition::CompositionCapabilitiesRegistration::s_eventSourceMap )
  {
    std::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>(
      &v12,
      (_QWORD *)(v5 + 40));
    value = (struct IUnknown *)a2.value;
    v7 = v12;
    Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
      v12,
      value);
    if ( !v7->Ptr )
      goto LABEL_5;
    v10 = v7 + 1;
    AcquireSRWLockExclusive(v7 + 1);
    if ( v7->Ptr )
      v11 = (__int64)(*((_QWORD *)v7->Ptr + 3) - *((_QWORD *)v7->Ptr + 2)) >> 3;
    else
      v11 = 0LL;
    if ( v10 )
      ReleaseSRWLockExclusive(v10);
    if ( !v11 )
    {
LABEL_5:
      v8 = std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<Windows::System::IDispatcherQueue> const,std::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>>>>::_Extract(
             &Windows::UI::Composition::CompositionCapabilitiesRegistration::s_eventSourceMap,
             v5);
      v9 = *(std::_Ref_count_base **)(v8 + 48);
      if ( v9 )
        std::_Ref_count_base::_Decref(v9);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v8 + 32);
      std::_Deallocate<16,0>(v8, 56LL);
    }
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
  }
  if ( !*((_QWORD *)&Windows::UI::Composition::CompositionCapabilitiesRegistration::s_eventSourceMap + 1) )
  {
    RtlUnsubscribeWnfStateChangeNotification(Windows::UI::Composition::CWnfSubscriber::s_wnfCapabilitiesSubscription);
    Windows::UI::Composition::CWnfSubscriber::s_wnfCapabilitiesSubscription = 0LL;
  }
}
