/*
 * XREFs of ??1CreateXamlExplorerHostWindow@XamlExplorerHostTelemetry@@QEAA@XZ @ 0x18041FD8C
 * Callers:
 *     WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::XamlExplorerHostLaunchHandler__lambda_c8d6b8e58017b711112620b136cf3b89___ @ 0x18041F4C8 (WindowsInternal--ComposableShell--Desktop--XamlExplorerHostLaunchHandler--XamlExplorerHostLaunch.c)
 *     _lambda_c8d6b8e58017b711112620b136cf3b89_::__lambda_c8d6b8e58017b711112620b136cf3b89_ @ 0x18041FD20 (_lambda_c8d6b8e58017b711112620b136cf3b89_--__lambda_c8d6b8e58017b711112620b136cf3b89_.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_c8d6b8e58017b711112620b136cf3b89__void_Windows::UI::Xaml::Window___HWND_____::_scalar_deleting_destructor_ @ 0x180420370 (Platform--Details--__abi_FunctorCapture__lambda_c8d6b8e58017b711112620b136cf3b89__void_Windows--.c)
 *     ?CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@KPEAUIPrivilegedPresentationOperations@@PEAUIXamlExplorerHost@@AEBU_GUID@@PEAPEAX@Z @ 0x1804204C4 (-CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedC.c)
 *     _XamlExplorerHost::CreateXamlExplorerHostWindowInBand_::_1_::dtor$0 @ 0x18042076D (_XamlExplorerHost--CreateXamlExplorerHostWindowInBand_--_1_--dtor$0.c)
 *     _XamlExplorerHost::CreateXamlExplorerHostWindowInBand_::_1_::dtor$4 @ 0x180420791 (_XamlExplorerHost--CreateXamlExplorerHostWindowInBand_--_1_--dtor$4.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18041D9A8 (-Destroy@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 */

void __fastcall XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow::~CreateXamlExplorerHostWindow(
        XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow *this)
{
  *(_QWORD *)this = &XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow::`vftable';
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
