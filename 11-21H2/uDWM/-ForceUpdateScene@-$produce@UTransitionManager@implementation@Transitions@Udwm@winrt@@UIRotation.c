/*
 * XREFs of ?ForceUpdateScene@?$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIRotationTransitionManager@Private@345@@impl@winrt@@UEAAHXZ @ 0x180040670
 * Callers:
 *     <none>
 * Callees:
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180040770 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x180040BB0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D3CDC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::Udwm::Transitions::Private::IRotationTransitionManager>::ForceUpdateScene(
        __int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rdi
  int v11; // eax
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF
  __int64 v14; // [rsp+38h] [rbp+10h] BYREF

  if ( a1 )
  {
    v1 = a1 + 80;
    v2 = a1 + 56;
    v3 = a1 + 40;
    v4 = a1 + 40;
  }
  else
  {
    v1 = 96LL;
    v2 = 72LL;
    v3 = 56LL;
    v4 = 56LL;
  }
  v5 = 2 * (*(_QWORD *)v1 & 0xAD2ACA7747985764uLL);
  v6 = *(_QWORD *)v2;
  v7 = *(_QWORD *)(*(_QWORD *)v2 + 8 * v5 + 8);
  v8 = *(_QWORD *)v3;
  if ( v7 == *(_QWORD *)v3 )
  {
LABEL_18:
    v7 = v8;
  }
  else
  {
    v3 = *(_QWORD *)(v6 + 8 * v5);
    while ( *(_DWORD *)(v7 + 16) != 1 )
    {
      if ( v7 == v3 )
        goto LABEL_18;
      v7 = *(_QWORD *)(v7 + 8);
    }
  }
  if ( v7 == *(_QWORD *)v4 )
  {
    v9 = 0LL;
    v13 = 0LL;
    v10 = 0LL;
  }
  else
  {
    v9 = *(_QWORD *)(v7 + 24);
    v10 = v9;
    v13 = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v9 + 8LL))(v9, v4, v3);
  }
  v14 = 0LL;
  if ( !(unsigned __int8)winrt::Windows::Foundation::operator==(&v13, &v14) )
  {
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 80LL))(v9);
    if ( v11 < 0 )
      winrt::throw_hresult((unsigned int)v11);
  }
  if ( v10 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v13);
  return 0LL;
}
