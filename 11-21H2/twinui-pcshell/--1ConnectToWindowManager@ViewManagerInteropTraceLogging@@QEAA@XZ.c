/*
 * XREFs of ??1ConnectToWindowManager@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1800622C8
 * Callers:
 *     ?WaitForWindowManagerConnection@WindowManagerBridge@@UEAAJXZ @ 0x180062210 (-WaitForWindowManagerConnection@WindowManagerBridge@@UEAAJXZ.c)
 *     _WindowManagerBridge::WaitForWindowManagerConnection_::_1_::dtor$0 @ 0x180216D99 (_WindowManagerBridge--WaitForWindowManagerConnection_--_1_--dtor$0.c)
 *     ?WaitForWindowManagerConnection@UwpWindowManagerBridge@@UEAAJXZ @ 0x180403870 (-WaitForWindowManagerConnection@UwpWindowManagerBridge@@UEAAJXZ.c)
 *     _UwpWindowManagerBridge::WaitForWindowManagerConnection_::_1_::dtor$0 @ 0x18040393A (_UwpWindowManagerBridge--WaitForWindowManagerConnection_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800979CC (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall ViewManagerInteropTraceLogging::ConnectToWindowManager::~ConnectToWindowManager(
        ViewManagerInteropTraceLogging::ConnectToWindowManager *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::ConnectToWindowManager::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
