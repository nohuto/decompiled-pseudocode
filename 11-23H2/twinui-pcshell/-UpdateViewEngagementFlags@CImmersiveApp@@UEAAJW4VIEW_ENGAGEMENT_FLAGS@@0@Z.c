/*
 * XREFs of ?UpdateViewEngagementFlags@CImmersiveApp@@UEAAJW4VIEW_ENGAGEMENT_FLAGS@@0@Z @ 0x180065670
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::UpdateViewEngagementFlags(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rdi
  int (__fastcall *v6)(__int64, __int64, GUID *, __int64 *); // rbx
  __int64 v7; // rbx
  int (__fastcall *v8)(__int64, GUID *, __int64 *); // rdi
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  *(_DWORD *)(a1 + 808) |= a2;
  *(_DWORD *)(a1 + 812) = a3 | ~a3 & *(_DWORD *)(a1 + 812);
  if ( a2 )
  {
    v11 = 0LL;
    v5 = a1 + 16;
    v6 = *(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)(a1 + 16) + 352LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
    if ( v6(v5, 1LL, &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee, &v11) >= 0 )
    {
      v10 = 0LL;
      v7 = v11;
      v8 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v11 + 40LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v10);
      if ( v8(v7, &GUID_79eaeb1a_4280_4be7_b345_9f7a790149f5, &v10) >= 0 )
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v10 + 608LL))(v10, a2, a3);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v10);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
  }
  return 0LL;
}
