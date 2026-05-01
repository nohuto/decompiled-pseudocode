/*
 * XREFs of ?OnBackComplete@WindowWrapperBase@@AEAAX_N@Z @ 0x18040B6B0
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::_)(Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_bool___lambda_de418c48813f31a125c98e350dfdbb32___1_Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus_::Invoke @ 0x18040B4A0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IAsyn_ea_18040B4A0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180072794 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1803070D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVis_ea_1803070D0.c)
 *     ??$MakeOrThrow@VUwpViewHandledEventArgs@@AEA_N@wil@@YA?AV?$ComPtr@VUwpViewHandledEventArgs@@@WRL@Microsoft@@AEA_N@Z @ 0x1804081E0 (--$MakeOrThrow@VUwpViewHandledEventArgs@@AEA_N@wil@@YA-AV-$ComPtr@VUwpViewHandledEventArgs@@@WRL.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall WindowWrapperBase::OnBackComplete(WindowWrapperBase *this, char a2)
{
  __int64 v3; // rbx
  __int64 *v4; // rax
  RTL_SRWLOCK *v5; // rcx
  void *v6; // [rsp+40h] [rbp+20h] BYREF
  char v7; // [rsp+48h] [rbp+28h] BYREF
  RTL_SRWLOCK *v8; // [rsp+50h] [rbp+30h] BYREF
  __int64 v9; // [rsp+58h] [rbp+38h] BYREF

  v7 = a2;
  v9 = 0LL;
  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 35) + 200LL))(*((_QWORD *)this + 35), &v8);
  v3 = 0LL;
  if ( *((_BYTE *)this + 184) )
  {
    *((_BYTE *)this + 184) = 0;
    v4 = (__int64 *)((char *)this + 192);
    if ( &v9 != (__int64 *)((char *)this + 192) )
    {
      v3 = *v4;
      *v4 = 0LL;
    }
    v9 = v3;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v8);
  v6 = 0LL;
  if ( v3 )
  {
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v6);
    if ( (int)AgileGitPtr::CopyLocal((AgileGitPtr *)&v9, &GUID_6723b702_a620_59ad_be1b_dbb8d6f48dd4, &v6) >= 0 )
    {
      wil::MakeOrThrow<UwpViewHandledEventArgs,bool &>((__int64 *)&v8, &v7);
      (*(void (__fastcall **)(void *, char *, RTL_SRWLOCK *))(*(_QWORD *)v6 + 24LL))(v6, (char *)this + 8, v8);
      v5 = v8;
      if ( v8 )
      {
        v8 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::Release((__int64)v5);
      }
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v6);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v9);
}
