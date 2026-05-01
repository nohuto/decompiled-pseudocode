/*
 * XREFs of ?ContactCount@?$consume_Windows_UI_Input_IManipulationUpdatedEventArgs2@UManipulationUpdatedEventArgs@Input@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18064FDA4
 * Callers:
 *     _lambda_cd8c6316c996060cbab4a596526042be_::operator()_winrt::Windows::UI::Internal::Input::PhysicalGestureRecognizer_ @ 0x18064E204 (_lambda_cd8c6316c996060cbab4a596526042be_--operator()_winrt--Windows--UI--Internal--Input--Physi.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_UI_Input_IManipulationUpdatedEventArgs2<winrt::Windows::UI::Input::ManipulationUpdatedEventArgs>::ContactCount(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rbx
  signed int v3; // eax
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0;
  v1 = *a1;
  if ( v1 )
  {
    v6 = 0LL;
    (**(void (__fastcall ***)(__int64, void *, __int64 *))v1)(
      v1,
      &winrt::impl::guid_v<winrt::Windows::UI::Input::IManipulationUpdatedEventArgs2>,
      &v6);
    v1 = v6;
    v2 = v6;
  }
  else
  {
    v2 = 0LL;
  }
  v7 = v1;
  v3 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v1 + 48LL))(v1, &v5);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  if ( v2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
  return v5;
}
