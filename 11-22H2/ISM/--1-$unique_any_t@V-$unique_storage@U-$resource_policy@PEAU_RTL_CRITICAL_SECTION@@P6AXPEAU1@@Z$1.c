/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800A4E04
 * Callers:
 *     ?InterceptGamepadInput@GamepadInterceptionHelper@@QEAAXG_N@Z @ 0x18006A8E4 (-InterceptGamepadInput@GamepadInterceptionHelper@@QEAAXG_N@Z.c)
 *     ?start@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA?AU_GUID@@XZ @ 0x18006CEE0 (-start@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     __lambda_ee4fb4173948ca8af83f1cabbba8acb3_::operator()_::_1_::dtor$1 @ 0x1801071BC (__lambda_ee4fb4173948ca8af83f1cabbba8acb3_--operator()_--_1_--dtor$1.c)
 *     _VirtualTouchpadControllerProxy::ConfigureVirtualTouchpad_::_1_::dtor$1 @ 0x180152987 (_VirtualTouchpadControllerProxy--ConfigureVirtualTouchpad_--_1_--dtor$1.c)
 *     _VirtualTouchpadControllerProxy::TraceCurrentState_::_1_::dtor$0 @ 0x1801541C4 (_VirtualTouchpadControllerProxy--TraceCurrentState_--_1_--dtor$0.c)
 *     ?GetCurrentContext@VirtualTouchpadContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x1801C97D0 (-GetCurrentContext@VirtualTouchpadContextProvider@@UEAAJPEAV-$variant@Umonostate@std@@UInputConf.c)
 *     _VirtualTouchpadContextProvider::GetCurrentContext_::_1_::dtor$0 @ 0x1801C98BF (_VirtualTouchpadContextProvider--GetCurrentContext_--_1_--dtor$0.c)
 *     ?OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z @ 0x1801C9970 (-OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z.c)
 *     _VirtualTouchpadContextProvider::OnTouchpadAdded_::_1_::dtor$0 @ 0x1801C9AE4 (_VirtualTouchpadContextProvider--OnTouchpadAdded_--_1_--dtor$0.c)
 *     ?OnTouchpadRemoved@VirtualTouchpadContextProvider@@QEAAJ_K@Z @ 0x1801C9B04 (-OnTouchpadRemoved@VirtualTouchpadContextProvider@@QEAAJ_K@Z.c)
 *     _VirtualTouchpadContextProvider::OnTouchpadRemoved_::_1_::dtor$0 @ 0x1801C9C5E (_VirtualTouchpadContextProvider--OnTouchpadRemoved_--_1_--dtor$0.c)
 *     ?OnTouchpadUpdated@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z @ 0x1801C9C7C (-OnTouchpadUpdated@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z.c)
 *     _VirtualTouchpadContextProvider::OnTouchpadUpdated_::_1_::dtor$0 @ 0x1801C9DD1 (_VirtualTouchpadContextProvider--OnTouchpadUpdated_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(
        struct _RTL_CRITICAL_SECTION **a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rcx

  v1 = *a1;
  if ( v1 )
    LeaveCriticalSection(v1);
}
