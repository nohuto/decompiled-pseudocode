/*
 * XREFs of ?OnBackComplete@UwpWindowWrapperBase@@AEAAX_N@Z @ 0x1804F1424
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::_)(Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_bool___lambda_0e5e2bc010872c975ebdb37d94dbe1e8___1_Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus_::Invoke @ 0x1804F12F0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IAsyn_ea_1804F12F0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x18009CC20 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802D4390 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVis_ea_1802D4390.c)
 *     ??$MakeOrThrow@VUwpViewHandledEventArgs@@AEA_N@wil@@YA?AV?$ComPtr@VUwpViewHandledEventArgs@@@WRL@Microsoft@@AEA_N@Z @ 0x1804E37B0 (--$MakeOrThrow@VUwpViewHandledEventArgs@@AEA_N@wil@@YA-AV-$ComPtr@VUwpViewHandledEventArgs@@@WRL.c)
 */

void __fastcall UwpWindowWrapperBase::OnBackComplete(UwpWindowWrapperBase *this, char a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 *v5; // rcx
  PSRWLOCK v6; // rcx
  void *v7; // [rsp+40h] [rbp+20h] BYREF
  char v8; // [rsp+48h] [rbp+28h] BYREF
  PSRWLOCK SRWLock; // [rsp+50h] [rbp+30h] BYREF
  __int64 v10; // [rsp+58h] [rbp+38h] BYREF

  v8 = a2;
  v10 = 0LL;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 35) + 208LL))(*((_QWORD *)this + 35), &SRWLock);
  v3 = 0LL;
  v4 = 0LL;
  if ( *((_BYTE *)this + 184) )
  {
    *((_BYTE *)this + 184) = 0;
    v5 = (__int64 *)((char *)this + 192);
    if ( &v10 != (__int64 *)((char *)this + 192) )
    {
      v3 = *v5;
      *v5 = 0LL;
    }
    v10 = v3;
    v4 = v3;
  }
  if ( SRWLock )
  {
    ReleaseSRWLockExclusive(SRWLock);
    v3 = v4;
  }
  v7 = 0LL;
  if ( v3 )
  {
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v7);
    if ( (int)AgileGitPtr::CopyLocal((AgileGitPtr *)&v10, &GUID_6723b702_a620_59ad_be1b_dbb8d6f48dd4, &v7) >= 0 )
    {
      wil::MakeOrThrow<UwpViewHandledEventArgs,bool &>((__int64 *)&SRWLock, &v8);
      (*(void (__fastcall **)(void *, unsigned __int64, PSRWLOCK))(*(_QWORD *)v7 + 24LL))(
        v7,
        ((unsigned __int64)this + 8) & -(__int64)(this != 0LL),
        SRWLock);
      v6 = SRWLock;
      if ( SRWLock )
      {
        SRWLock = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::Release((__int64)v6);
      }
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v7);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v10);
}
