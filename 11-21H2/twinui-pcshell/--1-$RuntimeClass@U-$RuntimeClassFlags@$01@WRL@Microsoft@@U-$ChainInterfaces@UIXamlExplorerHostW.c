/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIXamlExplorerHostWindowInternal@@UIXamlExplorerHostWindow@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VFtmBase@23@@WRL@Microsoft@@UEAA@XZ @ 0x1802DF804
 * Callers:
 *     _AgileRegistrationList::AgileCallbackArray::AgileCallbackArray_::_1_::dtor$0 @ 0x18018FDE8 (_AgileRegistrationList--AgileCallbackArray--AgileCallbackArray_--_1_--dtor$0.c)
 *     _Win32AppStateManager::Win32AppStateManager_::_1_::dtor$0 @ 0x18021D820 (_Win32AppStateManager--Win32AppStateManager_--_1_--dtor$0.c)
 *     _XamlExplorerHostWindow::_XamlExplorerHostWindow_::_1_::dtor$0 @ 0x180428A4B (_XamlExplorerHostWindow--_XamlExplorerHostWindow_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IXamlExplorerHostWindowInternal,IXamlExplorerHostWindow,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IXamlExplorerHostWindowInternal,IXamlExplorerHostWindow,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 44) = -1073741823;
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 32));
}
