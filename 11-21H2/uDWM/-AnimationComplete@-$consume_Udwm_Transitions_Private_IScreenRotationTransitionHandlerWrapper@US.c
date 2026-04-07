/*
 * XREFs of ?AnimationComplete@?$consume_Udwm_Transitions_Private_IScreenRotationTransitionHandlerWrapper@UScreenRotationTransitionHandlerWrapper@Private@Transitions@Udwm@winrt@@@impl@winrt@@QEBAXXZ @ 0x1800D21C4
 * Callers:
 *     ?Stop@CScreenRotation@@QEAAX_N0@Z @ 0x1800D3484 (-Stop@CScreenRotation@@QEAAX_N0@Z.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x180040BB0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D3CDC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::consume_Udwm_Transitions_Private_IScreenRotationTransitionHandlerWrapper<winrt::Udwm::Transitions::Private::ScreenRotationTransitionHandlerWrapper>::AnimationComplete(
        __int64 *a1)
{
  __int64 v1; // rcx
  int v2; // eax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v1 = *a1;
  if ( v1 )
  {
    v3 = 0LL;
    (**(void (__fastcall ***)(__int64, void *, __int64 *))v1)(
      v1,
      &winrt::impl::guid_v<winrt::Udwm::Transitions::Private::IScreenRotationTransitionHandlerWrapper>,
      &v3);
    v1 = v3;
  }
  v4 = v1;
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 48LL))(v1);
  if ( v2 < 0 )
    winrt::throw_hresult((unsigned int)v2);
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v4);
}
