/*
 * XREFs of ??1WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1800B4BE4
 * Callers:
 *     ?UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIActivationRequestedEventArgs@WindowManagement@ApplicationModel@56@@Z @ 0x18009D834 (-UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLife.c)
 *     _UwpWindowEventDispatcher::UwpWindowActivationRequested_::_1_::dtor$0 @ 0x1802B7D11 (_UwpWindowEventDispatcher--UwpWindowActivationRequested_--_1_--dtor$0.c)
 *     sub_1802F4F0D @ 0x1802F4F0D (sub_1802F4F0D.c)
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804BE170 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 *     _WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor$0 @ 0x1804BF6A9 (_WindowEventDispatcher--AppViewActivationRequested_--_1_--dtor$0.c)
 *     ?AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804BF900 (-AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedE.c)
 *     _WindowEventDispatcher::AppViewActivationShowRequested_::_1_::dtor$0 @ 0x1804BFC26 (_WindowEventDispatcher--AppViewActivationShowRequested_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800B4E38 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivationRequested::~WindowEventDispatcher_AppViewActivationRequested(
        ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivationRequested *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivationRequested::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
