/*
 * XREFs of ?OnGlobalTimeUpdated@CGlobalTimeTrackVisual@@UEAAJXZ @ 0x180100190
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x180040BB0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D3CDC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CGlobalTimeTrackVisual::OnGlobalTimeUpdated(CGlobalTimeTrackVisual *this)
{
  __int64 v1; // rcx
  void (__fastcall ***v2)(_QWORD, __int64 *, _QWORD *); // rbx
  void (__fastcall ***v3)(_QWORD, __int64 *, _QWORD *); // rcx
  signed int v4; // eax
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void (__fastcall ***v8)(_QWORD, __int64 *, _QWORD *); // [rsp+30h] [rbp+8h] BYREF
  void (__fastcall ***v9)(_QWORD, __int64 *, _QWORD *); // [rsp+38h] [rbp+10h] BYREF
  void (__fastcall ***v10)(_QWORD, __int64 *, _QWORD *); // [rsp+40h] [rbp+18h] BYREF

  v1 = *((_QWORD *)this + 36);
  if ( v1 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD *))(*(_QWORD *)v1 + 24LL))(
      v1,
      &winrt::impl::guid_v<winrt::Udwm::Transitions::ITransitionHandler>,
      &v8);
    v2 = v8;
  }
  else
  {
    v2 = 0LL;
  }
  v10 = v2;
  if ( v2 )
  {
    v8 = 0LL;
    (**v2)(v2, &winrt::impl::guid_v<winrt::Udwm::Transitions::Private::IScreenRotationRejuvTransitionHandler>, &v8);
    v3 = v8;
  }
  else
  {
    v3 = 0LL;
  }
  v9 = v3;
  v4 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, __int64 *, _QWORD *)))(*v3)[6])(v3);
  try
  {
    if ( v4 < 0 )
      winrt::throw_hresult(v4);
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
    if ( v2 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x21,
      (int)"clientcore\\windows\\dwm\\udwm\\udwmglobaltimetrackvisual.cpp",
      v5);
  }
  return 0LL;
}
