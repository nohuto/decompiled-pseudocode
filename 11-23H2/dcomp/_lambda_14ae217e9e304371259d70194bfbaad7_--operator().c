/*
 * XREFs of _lambda_14ae217e9e304371259d70194bfbaad7_::operator() @ 0x180154C54
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::UI::Composition::ICompositionSurface___::_)(Windows::Foundation::IAsyncOperation_Windows::UI::Composition::ICompositionSurface______enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::UI::Composition::ICompositionSurface_____lambda_14ae217e9e304371259d70194bfbaad7___1_Windows::Foundation::IAsyncOperation_Windows::UI::Composition::ICompositionSurface______enum_ABI::Windows::Foundation::AsyncStatus_::Invoke @ 0x180155200 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IAsyn_ea_180155200.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_14ae217e9e304371259d70194bfbaad7_::operator()(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  __int64 *v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v6 = *(struct _RTL_CRITICAL_SECTION **)(*a1 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v6);
  v7 = (__int64 *)(v3 + 256);
  v8 = 0LL;
  v9 = 0LL;
  v11 = 0LL;
  if ( &v11 != v7 )
  {
    v9 = *v7;
    *v7 = 0LL;
    v8 = v9;
    v11 = v9;
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v6);
  if ( v8 )
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v9 + 24LL))(v9, a2, a3);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v11);
  return 0LL;
}
