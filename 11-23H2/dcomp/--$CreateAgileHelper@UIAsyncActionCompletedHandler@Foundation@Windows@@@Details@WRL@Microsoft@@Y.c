/*
 * XREFs of ??$CreateAgileHelper@UIAsyncActionCompletedHandler@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAUIAsyncActionCompletedHandler@Foundation@Windows@@PEAPEAU345@@Z @ 0x180064B50
 * Callers:
 *     ?put_Completed@CommitCompletionWaiter@Composition@UI@Windows@@QEAAJPEAUIAsyncActionCompletedHandler@Foundation@4@@Z @ 0x180064AA4 (-put_Completed@CommitCompletionWaiter@Composition@UI@Windows@@QEAAJPEAUIAsyncActionCompletedHand.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncActionCompletedHandler@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_2a41ea20f21462c29868894764bbafd5_@@$0?0PEAUIAsyncAction@Foundation@Windows@@W4AsyncStatus@67ABI@@@?$DelegateArgTraits@P8IAsyncActionCompletedHandler@Foundation@Windows@@EAAJPEAUIAsyncAction@23@W4AsyncStatus@23ABI@@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_2a41ea20f21462c29868894764bbafd5_@@@Z @ 0x180064CBC (--0-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncActionCom.c)
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x180064D60 (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::IAsyncActionCompletedHandler>(
        __int64 a1,
        __int64 *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  int AgileReference; // ebx
  __int64 v7; // rax
  LPVOID v8; // rax
  __int64 v9; // rbx
  __int64 v11; // rax
  __int64 v12; // [rsp+40h] [rbp+20h] BYREF
  __int64 *v13; // [rsp+48h] [rbp+28h] BYREF
  __int64 v14; // [rsp+50h] [rbp+30h] BYREF

  *a2 = 0LL;
  v12 = 0LL;
  v13 = &v12;
  v4 = (_QWORD *)Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::AgileRef>::operator Microsoft::WRL::AgileRef *(&v13);
  v5 = v4;
  if ( a1 )
  {
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v4);
    AgileReference = RoGetAgileReference(0LL, &GUID_a4ed5c81_76c9_40bd_8be6_b1d90fb20ae7, a1, v5);
    if ( AgileReference < 0 )
      goto LABEL_7;
  }
  else
  {
    v11 = *v4;
    v14 = 0LL;
    *v5 = 0LL;
    v13 = (__int64 *)v11;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v13);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v14);
  }
  v7 = v12;
  v12 = 0LL;
  v14 = v7;
  v8 = DefaultHeap::Alloc(0x48uLL);
  if ( v8 )
    v9 = Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::IAsyncActionCompletedHandler::*)(Windows::Foundation::IAsyncAction *,enum ABI::Windows::Foundation::AsyncStatus)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::FtmBase>,_lambda_2a41ea20f21462c29868894764bbafd5_,-1,Windows::Foundation::IAsyncAction *,enum ABI::Windows::Foundation::AsyncStatus>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::FtmBase>,_lambda_2a41ea20f21462c29868894764bbafd5_,-1,Windows::Foundation::IAsyncAction *,enum ABI::Windows::Foundation::AsyncStatus>(
           v8,
           &v14);
  else
    v9 = 0LL;
  v13 = (__int64 *)v9;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v14);
  if ( v9 )
  {
    v13 = 0LL;
    *a2 = v9;
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v13);
    AgileReference = 0;
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v13);
    AgileReference = -2147024882;
  }
LABEL_7:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v12);
  return (unsigned int)AgileReference;
}
