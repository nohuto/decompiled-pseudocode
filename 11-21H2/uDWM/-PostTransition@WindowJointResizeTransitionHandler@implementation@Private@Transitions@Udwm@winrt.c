/*
 * XREFs of ?PostTransition@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800F7E38
 * Callers:
 *     ?PostTransition@?$produce@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@@impl@winrt@@UEAAHXZ @ 0x1800F7DE0 (-PostTransition@-$produce@UWindowJointResizeTransitionHandler@implementation@Private@Transitions.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x180006224 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x180040BB0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$make_weak@UITransitionState@Transitions@Udwm@winrt@@@winrt@@YA?AU?$weak_ref@UITransitionState@Transitions@Udwm@winrt@@@0@AEBUITransitionState@Transitions@Udwm@0@@Z @ 0x180063270 (--$make_weak@UITransitionState@Transitions@Udwm@winrt@@@winrt@@YA-AU-$weak_ref@UITransitionState.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D3CDC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$end@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@$0A@@impl@winrt@@YA?AU?$fast_iterator@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@@01@AEBU?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@1@@Z @ 0x1800F77B4 (--$end@U-$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winr.c)
 *     ??$get_weak@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@?$root_implements@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@U1345@UIUserResizeVisualNative@34@@impl@winrt@@IEAA?AU?$weak_ref@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@2@XZ @ 0x1800F77E8 (--$get_weak@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@-$root_implements@UUserRes.c)
 *     winrt::impl::make_delegate_winrt::Udwm::Transitions::UnloadDelegate__lambda_c60948a4075e9d25cd4406f3dd63722d___ @ 0x1800F78B8 (winrt--impl--make_delegate_winrt--Udwm--Transitions--UnloadDelegate__lambda_c60948a4075e9d25cd44.c)
 *     ?Clear@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@UUserResizeVisual@Transitions@Udwm@5@@impl@winrt@@QEBAXXZ @ 0x1800F7CA0 (-Clear@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UUserResizeVisual@Transitions.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@UUserResizeVisual@Transitions@Udwm@5@@impl@winrt@@QEBA?AUUserResizeVisual@Transitions@Udwm@3@I@Z @ 0x1800F7CD8 (-GetAt@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UUserResizeVisual@Transitions.c)
 *     ?Size@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@UUserResizeVisual@Transitions@Udwm@5@@impl@winrt@@QEBAIXZ @ 0x1800F82C0 (-Size@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UUserResizeVisual@Transitions@.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler::PostTransition(
        winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler *this)
{
  _QWORD *v2; // rdi
  unsigned int v3; // esi
  __int64 v4; // rax
  signed int v5; // eax
  __int64 v6; // [rsp+28h] [rbp-30h] BYREF
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v8[8]; // [rsp+38h] [rbp-20h] BYREF
  int v9; // [rsp+40h] [rbp-18h]
  __int64 v10; // [rsp+80h] [rbp+28h] BYREF
  __int64 v11; // [rsp+88h] [rbp+30h] BYREF
  __int64 v12; // [rsp+90h] [rbp+38h] BYREF
  __int64 v13; // [rsp+98h] [rbp+40h] BYREF

  v2 = (_QWORD *)((char *)this + 32);
  if ( (unsigned int)winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::Udwm::Transitions::UserResizeVisual>::Size((char *)this + 32) )
  {
    *((_DWORD *)this + 10) = winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::Udwm::Transitions::UserResizeVisual>::Size(v2);
    winrt::make_weak<winrt::Udwm::Transitions::ITransitionState>(
      &v13,
      (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 3);
    v3 = 0;
    winrt::impl::end<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>,0>(
      (__int64)v8,
      (__int64)v2);
    while ( v3 != v9 )
    {
      winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::Udwm::Transitions::UserResizeVisual>::GetAt(
        v2,
        &v12,
        v3);
      winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::UserResizeVisual,winrt::Udwm::Transitions::UserResizeVisual,Udwm::Transitions::IUserResizeVisualNative>::get_weak<winrt::Udwm::Transitions::implementation::UserResizeVisual>(
        (volatile signed __int64 *)this,
        &v10);
      v4 = v10;
      v10 = 0LL;
      v6 = v4;
      v7 = v13;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      winrt::impl::make_delegate_winrt::Udwm::Transitions::UnloadDelegate__lambda_c60948a4075e9d25cd4406f3dd63722d___(
        &v11,
        &v6);
      if ( v7 )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v7);
      if ( v6 )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v6);
      v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 80LL))(v12, v11);
      if ( v5 < 0 )
        winrt::throw_hresult(v5);
      if ( v11 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v11);
      if ( v10 )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v10);
      if ( v12 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
      ++v3;
    }
    winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::Udwm::Transitions::UserResizeVisual>::Clear(v2);
    if ( v13 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v13);
  }
}
