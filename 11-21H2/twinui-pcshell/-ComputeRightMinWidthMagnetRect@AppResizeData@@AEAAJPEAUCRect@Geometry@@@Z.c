/*
 * XREFs of ?ComputeRightMinWidthMagnetRect@AppResizeData@@AEAAJPEAUCRect@Geometry@@@Z @ 0x1805260BC
 * Callers:
 *     ?ComputeDropTargets@AppResizeData@@AEAAJXZ @ 0x180525B8C (-ComputeDropTargets@AppResizeData@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1805EF8A0 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppResizeData::ComputeRightMinWidthMagnetRect(AppResizeData *this, struct Geometry::CRect *a2)
{
  int v4; // ebx
  int v5; // esi
  const struct LAYOUT_ENVIRONMENT_DETAILS *v6; // rdx
  int v7; // r15d
  unsigned int v8; // esi
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, __int64, __int64, GUID *, int *); // rbx
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // r10d
  int v14; // r11d
  int v15; // r9d
  int v16; // ecx
  int v18[2]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v19; // [rsp+38h] [rbp-48h]
  __int128 v20; // [rsp+48h] [rbp-38h] BYREF
  int v21; // [rsp+58h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  *(_DWORD *)a2 = 0;
  *((_DWORD *)a2 + 1) = 0;
  *((_DWORD *)a2 + 2) = 0;
  *((_DWORD *)a2 + 3) = 0;
  (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 5) + 24LL))(*((_QWORD *)this + 5), &v20);
  v4 = v20;
  v19 = v20;
  v5 = DWORD2(v20);
  v7 = ImmersiveApplicationLayout::ComputeGutterWidth((ImmersiveApplicationLayout *)&v20, v6);
  v8 = v5 - v4 - v7;
  *(_QWORD *)v18 = 0LL;
  v9 = *((_QWORD *)this + 5);
  v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64, GUID *, int *))(*(_QWORD *)v9 + 104LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v18);
  v11 = v10(v9, 1LL, 5LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v18);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD))(**(_QWORD **)v18 + 72LL))(*(_QWORD *)v18, &v20, v8);
    v14 = v21;
    v15 = 320 * v21 / 100 + 2 * (v21 / 100);
    if ( v13 > v15 )
      v15 = v13;
    *(_OWORD *)a2 = v19;
    v16 = DWORD2(v20) - v7 / 2 - v15;
    *(_DWORD *)a2 = v16;
    *((_DWORD *)a2 + 2) = v16 + 175 * v14 / 100;
    v12 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE8,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizedata.cpp",
      (const char *)(unsigned int)v11);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v18);
  return v12;
}
