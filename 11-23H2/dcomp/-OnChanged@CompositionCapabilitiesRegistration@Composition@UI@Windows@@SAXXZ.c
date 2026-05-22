/*
 * XREFs of ?OnChanged@CompositionCapabilitiesRegistration@Composition@UI@Windows@@SAXXZ @ 0x180160F4C
 * Callers:
 *     ?WnfCapabilitiesChangeCallback@CWnfSubscriber@Composition@UI@Windows@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18011B9F0 (-WnfCapabilitiesChangeCallback@CWnfSubscriber@Composition@UI@Windows@@CAJU_WNF_STATE_NAME@@KPEAU.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800680E0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@QEAA@AEBV01@@Z @ 0x180068148 (--0-$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@QEAA@AEBV01@@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18006A0E8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UID.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180088E0C (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?RaiseEvents@CompositionCapabilitiesEvent@Composition@UI@Windows@@QEAAJPEAUIDispatcherQueue@System@4@@Z @ 0x18016100C (-RaiseEvents@CompositionCapabilitiesEvent@Composition@UI@Windows@@QEAAJPEAUIDispatcherQueue@Syst.c)
 */

void Windows::UI::Composition::CompositionCapabilitiesRegistration::OnChanged(void)
{
  __int64 v0; // rax
  __int64 v1; // rdi
  struct Windows::System::IDispatcherQueue *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  Windows::UI::Composition::CompositionCapabilitiesEvent *v6; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v7; // [rsp+28h] [rbp-10h]
  struct Windows::System::IDispatcherQueue *v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v0 = Windows::UI::Composition::CompositionCapabilitiesRegistration::s_eventSourceMap;
  v1 = *(_QWORD *)Windows::UI::Composition::CompositionCapabilitiesRegistration::s_eventSourceMap;
  v9 = *(_QWORD *)Windows::UI::Composition::CompositionCapabilitiesRegistration::s_eventSourceMap;
  while ( v1 != v0 )
  {
    v8 = *(struct Windows::System::IDispatcherQueue **)(v1 + 32);
    v2 = v8;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v8);
    std::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>(
      &v6,
      (_QWORD *)(v1 + 40));
    Windows::UI::Composition::CompositionCapabilitiesEvent::RaiseEvents(v6, v2);
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v8);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<Windows::System::IDispatcherQueue> const,std::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>>>>,std::_Iterator_base0>::operator++(
      &v9,
      v3,
      v4,
      v5);
    v0 = Windows::UI::Composition::CompositionCapabilitiesRegistration::s_eventSourceMap;
    v1 = v9;
  }
}
