/*
 * XREFs of ?OnGlobalTimeUpdated@?$consume_Udwm_Transitions_Private_IScreenRotationResponsiveTransitionHandler@UScreenRotationResponsiveTransitionHandler@Private@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801053D4
 * Callers:
 *     ?OnGlobalTimeUpdated@CGlobalTimeTrackVisual@@UEAAJXZ @ 0x180105470 (-OnGlobalTimeUpdated@CGlobalTimeTrackVisual@@UEAAJXZ.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18002FA10 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D894C (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

void __fastcall winrt::impl::consume_Udwm_Transitions_Private_IScreenRotationResponsiveTransitionHandler<winrt::Udwm::Transitions::Private::ScreenRotationResponsiveTransitionHandler>::OnGlobalTimeUpdated(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rbx
  signed int v3; // eax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v1 = *a1;
  if ( v1 )
  {
    v4 = 0LL;
    (**(void (__fastcall ***)(__int64, __int64 *, __int64 *))v1)(
      v1,
      &winrt::impl::guid_v<winrt::Udwm::Transitions::Private::IScreenRotationResponsiveTransitionHandler>,
      &v4);
    v1 = v4;
    v2 = v4;
  }
  else
  {
    v2 = 0LL;
  }
  v5 = v1;
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 48LL))(v1);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  if ( v2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v5);
}
