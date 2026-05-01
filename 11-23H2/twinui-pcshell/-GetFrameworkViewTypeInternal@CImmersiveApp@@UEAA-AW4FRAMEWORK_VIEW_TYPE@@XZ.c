/*
 * XREFs of ?GetFrameworkViewTypeInternal@CImmersiveApp@@UEAA?AW4FRAMEWORK_VIEW_TYPE@@XZ @ 0x180025460
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveApp::GetFrameworkViewTypeInternal(__int64 a1)
{
  unsigned int v2; // esi
  int (__fastcall *v3)(__int64, __int64, GUID *, __int64 *); // rbx
  __int64 v4; // rbx
  int (__fastcall *v5)(__int64, GUID *, __int64 *); // rdi
  __int64 v6; // rbx
  int (__fastcall *v7)(__int64, __int64, unsigned int *); // rdi
  __int64 v9; // [rsp+30h] [rbp-40h] BYREF
  __int64 v10; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v11; // [rsp+40h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  __int64 v13; // [rsp+60h] [rbp-10h]

  v2 = 6;
  v10 = 0LL;
  v3 = *(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a1 + 352LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v10);
  if ( v3(a1, 2LL, &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee, &v10) >= 0 )
  {
    v9 = 0LL;
    v4 = v10;
    v5 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v10 + 40LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v9);
    if ( v5(v4, &GUID_79eaeb1a_4280_4be7_b345_9f7a790149f5, &v9) >= 0 )
    {
      v6 = v9;
      v7 = *(int (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)v9 + 368LL);
      v13 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"FrameworkViewType", 0x12u, 0x11u);
      if ( v7(v6, v13, &v11) >= 0 )
        v2 = v11;
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v9);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v10);
  return v2;
}
