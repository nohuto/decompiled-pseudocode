/*
 * XREFs of _lambda_4328ccf16b233a81f6b03adc706b18ed_::operator() @ 0x1801193D0
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_4328ccf16b233a81f6b03adc706b18ed__Windows::Internal::CMarshaledInterfaceResult_Windows::UI::Composition::Internal::IHolographicCompositionDisplay___::Run @ 0x18011A390 (Windows--Internal--COperationLambdaVar_0__lambda_4328ccf16b233a81f6b03adc706b18ed___ea_18011A390.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?InternalQueryInterface@NestableRuntimeClass@WRL2@Microsoft@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180074FB0 (-InternalQueryInterface@NestableRuntimeClass@WRL2@Microsoft@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIAsyncDeferral@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAsyncDeferral@Internal@Windows@@@Z @ 0x180115738 (--4-$ComPtr@UIAsyncDeferral@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAsyncDeferral@Int.c)
 *     ?GetDeferral@CResultBase@Internal@Windows@@QEAAPEAUIAsyncDeferral@23@XZ @ 0x180116CB0 (-GetDeferral@CResultBase@Internal@Windows@@QEAAPEAUIAsyncDeferral@23@XZ.c)
 *     ?Set@?$CMarshaledInterfaceResult@UIHolographicCompositionDisplay@Internal@Composition@UI@Windows@@@Internal@Windows@@QEAAJPEAUIHolographicCompositionDisplay@2Composition@UI@3@@Z @ 0x18011A510 (-Set@-$CMarshaledInterfaceResult@UIHolographicCompositionDisplay@Internal@Composition@UI@Windows.c)
 *     ?SetStartupDeferral@HolographicCompositionDisplay@Internal@Composition@UI@Windows@@QEAAXPEAUIAsyncDeferral@25@@Z @ 0x18011A624 (-SetStartupDeferral@HolographicCompositionDisplay@Internal@Composition@UI@Windows@@QEAAXPEAUIAsy.c)
 */

__int64 __fastcall lambda_4328ccf16b233a81f6b03adc706b18ed_::operator()(
        Windows::UI::Composition::Internal::HolographicCompositionDisplay **a1,
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
  Windows::UI::Composition::Internal::HolographicCompositionDisplay::SetStartupDeferral(*a1, v11);
  v6 = *a1;
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v10);
  v7 = Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
         v6,
         &GUID_ba20ba1f_e54e_4b7b_be58_9d0beadbb1db,
         &v10);
  v8 = v7;
  if ( v7 < 0 )
  {
    DoStackCaptureDirect(v7, 0x155u);
    (*(void (__fastcall **)(struct Windows::Internal::IAsyncDeferral *, _QWORD))(*(_QWORD *)v5 + 24LL))(v5, v8);
  }
  else
  {
    Windows::Internal::CMarshaledInterfaceResult<Windows::UI::Composition::Internal::IHolographicCompositionDisplay>::Set(
      a2,
      v10);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v10);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v11);
  return v8;
}
