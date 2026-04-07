/*
 * XREFs of ?ForceUpdateScene@?$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIRotationTransitionManager@Private@345@@impl@winrt@@UEAAHXZ @ 0x18002F590
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18002FA10 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x18002FA40 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D894C (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::Udwm::Transitions::Private::IRotationTransitionManager>::ForceUpdateScene(
        __int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  int v10; // eax
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF

  if ( a1 )
  {
    v1 = a1 + 88;
    v2 = a1 + 64;
    v3 = a1 + 48;
    v4 = a1 + 48;
  }
  else
  {
    v1 = 104LL;
    v2 = 80LL;
    v3 = 64LL;
    v4 = 64LL;
  }
  v5 = 2 * (*(_QWORD *)v1 & 0xAD2ACA7747985764uLL);
  v6 = *(_QWORD *)v2;
  v7 = *(_QWORD *)(v6 + 16 * (*(_QWORD *)v1 & 0xAD2ACA7747985764uLL) + 8);
  if ( v7 == *(_QWORD *)v3 )
  {
LABEL_20:
    v7 = 0LL;
  }
  else
  {
    v8 = *(_QWORD *)(v6 + 8 * v5);
    while ( *(_DWORD *)(v7 + 16) != 1 )
    {
      if ( v7 == v8 )
        goto LABEL_20;
      v7 = *(_QWORD *)(v7 + 8);
    }
  }
  if ( !v7 )
    v7 = *(_QWORD *)v3;
  if ( v7 == *(_QWORD *)v4 )
  {
    v9 = 0LL;
    v12 = 0LL;
  }
  else
  {
    v9 = *(_QWORD *)(v7 + 24);
    v12 = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  }
  v13 = 0LL;
  if ( !(unsigned __int8)winrt::Windows::Foundation::operator==(&v12, &v13) )
  {
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 80LL))(v9);
    if ( v10 < 0 )
      winrt::throw_hresult((unsigned int)v10);
  }
  if ( v9 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  return 0LL;
}
