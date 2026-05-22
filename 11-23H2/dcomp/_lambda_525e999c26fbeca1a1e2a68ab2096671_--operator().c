/*
 * XREFs of _lambda_525e999c26fbeca1a1e2a68ab2096671_::operator() @ 0x180115804
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_525e999c26fbeca1a1e2a68ab2096671__Windows::Internal::CMarshaledInterfaceResult_Windows::UI::Composition::Internal::IHolographicCompositor___::Run @ 0x1801179A0 (Windows--Internal--COperationLambdaVar_0__lambda_525e999c26fbeca1a1e2a68ab2096671___ea_1801179A0.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?InternalQueryInterface@NestableRuntimeClass@WRL2@Microsoft@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180074FB0 (-InternalQueryInterface@NestableRuntimeClass@WRL2@Microsoft@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIAsyncDeferral@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAsyncDeferral@Internal@Windows@@@Z @ 0x180115738 (--4-$ComPtr@UIAsyncDeferral@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAsyncDeferral@Int.c)
 *     ?GetDeferral@CResultBase@Internal@Windows@@QEAAPEAUIAsyncDeferral@23@XZ @ 0x180116CB0 (-GetDeferral@CResultBase@Internal@Windows@@QEAAPEAUIAsyncDeferral@23@XZ.c)
 *     ?Set@?$CMarshaledInterfaceResult@UIHolographicCompositor@Internal@Composition@UI@Windows@@@Internal@Windows@@QEAAJPEAUIHolographicCompositor@2Composition@UI@3@@Z @ 0x180117AB4 (-Set@-$CMarshaledInterfaceResult@UIHolographicCompositor@Internal@Composition@UI@Windows@@@Inter.c)
 *     ?SetStartupDeferral@HolographicCompositor@Internal@Composition@UI@Windows@@QEAAXPEAUIAsyncDeferral@25@@Z @ 0x180117B6C (-SetStartupDeferral@HolographicCompositor@Internal@Composition@UI@Windows@@QEAAXPEAUIAsyncDeferr.c)
 */

__int64 __fastcall lambda_525e999c26fbeca1a1e2a68ab2096671_::operator()(
        Windows::UI::Composition::Internal::HolographicCompositor **a1,
        Windows::Internal::CResultBase *a2)
{
  struct Windows::Internal::IAsyncDeferral *Deferral; // rax
  struct Windows::Internal::IAsyncDeferral *v5; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v6; // rdi
  int v7; // eax
  unsigned int v8; // edi
  void *v10; // [rsp+30h] [rbp+8h] BYREF
  struct Windows::Internal::IAsyncDeferral *v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = 0LL;
  v10 = 0LL;
  Deferral = Windows::Internal::CResultBase::GetDeferral(a2);
  Microsoft::WRL::ComPtr<Windows::Internal::IAsyncDeferral>::operator=((__int64 *)&v11, (__int64)Deferral);
  v5 = v11;
  Windows::UI::Composition::Internal::HolographicCompositor::SetStartupDeferral(*a1, v11);
  v6 = *a1;
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v10);
  v7 = Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
         v6,
         &GUID_d68605ad_f831_4356_b91e_4e18fb1727ad,
         &v10);
  v8 = v7;
  if ( v7 < 0 )
  {
    DoStackCaptureDirect(v7, 0x104u);
    (*(void (__fastcall **)(struct Windows::Internal::IAsyncDeferral *, _QWORD))(*(_QWORD *)v5 + 24LL))(v5, v8);
  }
  else
  {
    Windows::Internal::CMarshaledInterfaceResult<Windows::UI::Composition::Internal::IHolographicCompositor>::Set(
      a2,
      v10);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v10);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v11);
  return v8;
}
