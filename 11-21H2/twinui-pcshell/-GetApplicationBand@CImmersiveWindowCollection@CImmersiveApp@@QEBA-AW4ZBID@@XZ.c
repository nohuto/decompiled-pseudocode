/*
 * XREFs of ?GetApplicationBand@CImmersiveWindowCollection@CImmersiveApp@@QEBA?AW4ZBID@@XZ @ 0x1800327A0
 * Callers:
 *     ?GetZbid@CImmersiveApp@@UEAA?AW4ZBID@@XZ @ 0x180032770 (-GetZbid@CImmersiveApp@@UEAA-AW4ZBID@@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::GetApplicationBand(__int64 a1)
{
  __int64 v1; // rdi
  int (__fastcall *v2)(__int64, __int64 *); // rbx
  unsigned int v3; // ebx
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0;
  v6 = 0LL;
  v1 = *(_QWORD *)(a1 + 152);
  v2 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v1 + 136LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v6);
  if ( v2(v1, &v6) >= 0 && (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 24LL))(v6, &v7) >= 0 )
    GetWindowBand(v7, &v5);
  v3 = v5;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v6);
  return v3;
}
