/*
 * XREFs of ?put_Completed@VisualCapture@Composition@UI@Windows@@QEAAJPEAU?$IAsyncOperationCompletedHandler@PEAUICompositionSurface@Composition@UI@Windows@@@Foundation@4@@Z @ 0x18015545C
 * Callers:
 *     ?put_Completed@AsyncOperation@VisualCapture@Composition@UI@Windows@@UEAAJPEAU?$IAsyncOperationCompletedHandler@PEAUICompositionSurface@Composition@UI@Windows@@@Foundation@5@@Z @ 0x1801553D0 (-put_Completed@AsyncOperation@VisualCapture@Composition@UI@Windows@@UEAAJPEAU-$IAsyncOperationCo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180086C8C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CheckValidStateForDelegateCall@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVHolographicCompositionDisplay@Internal@Composition@UI@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAJXZ @ 0x180116194 (-CheckValidStateForDelegateCall@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVHolographicCo.c)
 *     ??4?$ComPtr@U?$IAsyncOperationCompletedHandler@PEAUICompositionSurface@Composition@UI@Windows@@@Foundation@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAU?$IAsyncOperationCompletedHandler@PEAUICompositionSurface@Composition@UI@Windows@@@Foundation@Windows@@@Z @ 0x1801544C0 (--4-$ComPtr@U-$IAsyncOperationCompletedHandler@PEAUICompositionSurface@Composition@UI@Windows@@@.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::UI::Composition::ICompositionSurface___::_)(Windows::Foundation::IAsyncOperation_Windows::UI::Composition::ICompositionSurface______enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::UI::Composition::ICompositionSurface_____lambda_14ae217e9e304371259d70194bfbaad7___1_Windows::Foundation::IAsyncOperation_Windows::UI::Composition::ICompositionSurface______enum_ABI::Windows::Foundation::AsyncStatus_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::UI::Composition::ICompositionSurface_____lambda_14ae217e9e304371259d70194bfbaad7___1_Windows::Foundation::IAsyncOperation_Windows::UI::Composition::ICompositionSurface______enum_ABI::Windows::Foundation::AsyncStatus_ @ 0x180154BD0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IAsyncOperationCom.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualCapture::put_Completed(
        Microsoft::WRL2::NestableRuntimeClass *this,
        _QWORD *a2)
{
  void (__fastcall **v4)(_QWORD *, GUID *, Microsoft::WRL2::NestableRuntimeClass **); // rax
  void (__fastcall *v5)(_QWORD *, GUID *, Microsoft::WRL2::NestableRuntimeClass **); // rbx
  unsigned int v6; // ebx
  int v7; // eax
  Microsoft::WRL2::NestableRuntimeClass *v8; // rbx
  LPVOID v9; // rax
  __int64 v10; // rax
  Microsoft::WRL2::NestableRuntimeClass *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r9
  int v14; // eax
  Microsoft::WRL2::NestableRuntimeClass *v16; // [rsp+20h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-28h] BYREF
  __int64 v18; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  if ( !a2 )
  {
LABEL_5:
    v7 = Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::UI::Composition::Internal::HolographicCompositionDisplay *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::CheckValidStateForDelegateCall(((unsigned __int64)this + 152) & -(__int64)(this != 0LL));
    v6 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCF,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisualcapture.cpp",
        (const char *)(unsigned int)v7);
      return v6;
    }
    if ( this )
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(this);
    v8 = this;
    v16 = this;
    v9 = DefaultHeap::Alloc(0x18uLL);
    if ( v9 )
    {
      v10 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::UI::Composition::ICompositionSurface___::___Windows::Foundation::IAsyncOperation_Windows::UI::Composition::ICompositionSurface______enum_ABI::Windows::Foundation::AsyncStatus__::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::UI::Composition::ICompositionSurface_____lambda_14ae217e9e304371259d70194bfbaad7___1_Windows::Foundation::IAsyncOperation_Windows::UI::Composition::ICompositionSurface______enum_ABI::Windows::Foundation::AsyncStatus_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::UI::Composition::ICompositionSurface_____lambda_14ae217e9e304371259d70194bfbaad7___1_Windows::Foundation::IAsyncOperation_Windows::UI::Composition::ICompositionSurface______enum_ABI::Windows::Foundation::AsyncStatus_(
              (__int64)v9,
              &v16);
      v8 = v16;
      v11 = (Microsoft::WRL2::NestableRuntimeClass *)v10;
    }
    else
    {
      v11 = 0LL;
    }
    v16 = v11;
    if ( v8 )
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v8);
    if ( v11 )
    {
      v14 = (*(__int64 (__fastcall **)(unsigned __int64, Microsoft::WRL2::NestableRuntimeClass *))(*(_QWORD *)(((unsigned __int64)this + 152) & -(__int64)(this != 0LL))
                                                                                                 + 112LL))(
              ((unsigned __int64)this + 152) & -(__int64)(this != 0LL),
              v11);
      v6 = v14;
      if ( v14 >= 0 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::UI::Composition::ICompositionSurface *>>::operator=(
          (__int64 *)this + 32,
          (__int64)a2);
        v6 = 0;
        goto LABEL_20;
      }
      v13 = (unsigned int)v14;
      v12 = 239LL;
    }
    else
    {
      v6 = -2147024882;
      v12 = 238LL;
      v13 = 2147942414LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisualcapture.cpp",
      (const char *)v13);
LABEL_20:
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v16);
    return v6;
  }
  v4 = (void (__fastcall **)(_QWORD *, GUID *, Microsoft::WRL2::NestableRuntimeClass **))*a2;
  v16 = 0LL;
  v5 = *v4;
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v16);
  v5(a2, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90, &v16);
  if ( v16 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v16);
    goto LABEL_5;
  }
  v18 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Capture completed delegate MUST be Agile",
    0x29u,
    0x28u);
  v6 = -2147483620;
  RoOriginateError(2147483676LL, v18);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCB,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisualcapture.cpp",
    (const char *)0x8000001CLL);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v16);
  return v6;
}
