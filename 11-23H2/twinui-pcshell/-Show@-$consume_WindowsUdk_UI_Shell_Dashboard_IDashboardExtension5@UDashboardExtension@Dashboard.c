/*
 * XREFs of ?Show@?$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension5@UDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUguid@3@AEBW4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@3@AEBURect@Foundation@Windows@3@_KAEBUGestureAnimationData@Input@893@@Z @ 0x180697D58
 * Callers:
 *     _lambda_0c5affb431bf714a4aabb516927c6336_::operator() @ 0x180235F10 (_lambda_0c5affb431bf714a4aabb516927c6336_--operator().c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension5<winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension>::Show(
        __int64 *a1,
        __int128 *a2,
        unsigned int *a3,
        __int128 *a4,
        __int64 a5,
        __int128 *a6)
{
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, __int128 *, _QWORD, __int128 *, __int64, __int128 *); // r11
  signed int v12; // eax
  __int128 v13; // [rsp+40h] [rbp-30h] BYREF
  __int128 v14; // [rsp+50h] [rbp-20h] BYREF
  __int128 v15; // [rsp+60h] [rbp-10h] BYREF
  __int64 v16; // [rsp+90h] [rbp+20h] BYREF
  __int64 v17; // [rsp+98h] [rbp+28h] BYREF

  v9 = *a1;
  if ( v9 )
  {
    v16 = 0LL;
    (**(void (__fastcall ***)(__int64, void *, __int64 *))v9)(
      v9,
      &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtension5>,
      &v16);
    v9 = v16;
    v10 = v16;
  }
  else
  {
    v10 = 0LL;
  }
  v17 = v9;
  v11 = *(__int64 (__fastcall **)(__int64, __int128 *, _QWORD, __int128 *, __int64, __int128 *))(*(_QWORD *)v9 + 48LL);
  v13 = *a6;
  v14 = *a4;
  v15 = *a2;
  v12 = v11(v9, &v15, *a3, &v14, a5, &v13);
  if ( v12 < 0 )
    winrt::throw_hresult(v12);
  if ( v10 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v17);
}
