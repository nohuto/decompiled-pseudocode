/*
 * XREFs of ?GetFrameworkViewTypeInternal@CImmersiveApp@@UEAA?AW4FRAMEWORK_VIEW_TYPE@@XZ @ 0x18009AEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802E6814 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveApp::GetFrameworkViewTypeInternal(__int64 a1)
{
  unsigned int v2; // esi
  int (__fastcall *v3)(__int64, __int64, GUID *, __int64 *); // rbx
  __int64 v4; // rbx
  int (__fastcall *v5)(__int64, GUID *, __int64 *); // rdi
  __int64 v6; // rbx
  int (__fastcall *v7)(__int64, HSTRING, unsigned int *); // rdi
  HRESULT v8; // eax
  int v9; // edx
  unsigned int v10; // r8d
  __int64 v12; // [rsp+30h] [rbp-40h] BYREF
  __int64 v13; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+40h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  HSTRING string; // [rsp+60h] [rbp-10h] BYREF

  v2 = 6;
  v13 = 0LL;
  v3 = *(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a1 + 352LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
  if ( v3(a1, 2LL, &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee, &v13) >= 0 )
  {
    v12 = 0LL;
    v4 = v13;
    v5 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v13 + 40LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
    if ( v5(v4, &GUID_79eaeb1a_4280_4be7_b345_9f7a790149f5, &v12) >= 0 )
    {
      v6 = v12;
      v7 = *(int (__fastcall **)(__int64, HSTRING, unsigned int *))(*(_QWORD *)v12 + 368LL);
      string = 0LL;
      v8 = WindowsCreateStringReference(L"FrameworkViewType", 0x11u, &hstringHeader, &string);
      if ( v8 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8, v9, v10);
        JUMPOUT(0x18009B02CLL);
      }
      if ( v7(v6, string, &v14) >= 0 )
        v2 = v14;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
  return v2;
}
