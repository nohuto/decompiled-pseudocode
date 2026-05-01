/*
 * XREFs of ?ContactCount@?$consume_Windows_UI_Input_IManipulationUpdatedEventArgs2@UManipulationUpdatedEventArgs@Input@UI@Windows@winrt@@@impl@winrt@@QEBAIXZ @ 0x18058DE04
 * Callers:
 *     _lambda_cd8c6316c996060cbab4a596526042be_::operator()_winrt::Windows::UI::Internal::Input::PhysicalGestureRecognizer_ @ 0x18058C7FC (_lambda_cd8c6316c996060cbab4a596526042be_--operator()_winrt--Windows--UI--Internal--Input--Physi.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_UI_Input_IManipulationUpdatedEventArgs2<winrt::Windows::UI::Input::ManipulationUpdatedEventArgs>::ContactCount(
        __int64 *a1)
{
  __int64 v1; // rcx
  signed int v2; // eax
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  v1 = *a1;
  if ( v1 )
  {
    v5 = 0LL;
    (**(void (__fastcall ***)(__int64, void *, __int64 *))v1)(
      v1,
      &winrt::impl::guid_v<winrt::Windows::UI::Input::IManipulationUpdatedEventArgs2>,
      &v5);
    v1 = v5;
  }
  v6 = v1;
  v2 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v1 + 48LL))(v1, &v4);
  if ( v2 < 0 )
    winrt::throw_hresult(v2);
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  return v4;
}
