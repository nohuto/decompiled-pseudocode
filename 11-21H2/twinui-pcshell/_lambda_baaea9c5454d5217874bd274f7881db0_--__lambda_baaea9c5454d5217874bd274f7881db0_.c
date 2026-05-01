/*
 * XREFs of _lambda_baaea9c5454d5217874bd274f7881db0_::__lambda_baaea9c5454d5217874bd274f7881db0_ @ 0x18042E794
 * Callers:
 *     XamlExplorerHostWindowCreatedCallback__lambda_baaea9c5454d5217874bd274f7881db0___::_scalar_deleting_destructor_ @ 0x180430BF0 (XamlExplorerHostWindowCreatedCallback__lambda_baaea9c5454d5217874bd274f7881db0___--_scalar_delet.c)
 *     ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1804324F4 (-CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     _XamlAllUpViewHost::CreateFrameForMonitor_::_1_::dtor$13 @ 0x180432E70 (_XamlAllUpViewHost--CreateFrameForMonitor_--_1_--dtor$13.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1WindowCreatedCallback@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18042EE74 (--1WindowCreatedCallback@XamlSwitcherTelemetry@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_baaea9c5454d5217874bd274f7881db0_::__lambda_baaea9c5454d5217874bd274f7881db0_(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  XamlSwitcherTelemetry::WindowCreatedCallback::~WindowCreatedCallback((XamlSwitcherTelemetry::WindowCreatedCallback *)(a1 + 13));
  v2 = a1[12];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = a1[11];
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = a1[10];
  if ( v4 )
  {
    a1[10] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = a1[9];
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = a1[8];
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = a1[3];
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<XamlAllUpViewHost>::InternalRelease(a1);
}
