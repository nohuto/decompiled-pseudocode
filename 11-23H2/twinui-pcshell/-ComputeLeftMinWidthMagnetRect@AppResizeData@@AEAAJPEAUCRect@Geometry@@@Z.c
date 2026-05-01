/*
 * XREFs of ?ComputeLeftMinWidthMagnetRect@AppResizeData@@AEAAJPEAUCRect@Geometry@@@Z @ 0x1805DE7AC
 * Callers:
 *     ?ComputeDropTargets@AppResizeData@@AEAAJXZ @ 0x1805DE4F0 (-ComputeDropTargets@AppResizeData@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x18074608C (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppResizeData::ComputeLeftMinWidthMagnetRect(AppResizeData *this, struct Geometry::CRect *a2)
{
  int v4; // ebx
  int v5; // r12d
  int v6; // r14d
  int v7; // r13d
  const struct LAYOUT_ENVIRONMENT_DETAILS *v8; // rdx
  int v9; // r15d
  unsigned int v10; // r14d
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, _QWORD, __int64, GUID *, int *); // rbx
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // r10d
  int v16; // r11d
  int v17; // r9d
  int v18; // eax
  int v20[2]; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v21[4]; // [rsp+38h] [rbp-38h] BYREF
  int v22; // [rsp+48h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  *(_QWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 1) = 0LL;
  (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 5) + 24LL))(*((_QWORD *)this + 5), v21);
  v4 = v21[0];
  v5 = v21[1];
  v6 = v21[2];
  v7 = v21[3];
  v9 = ImmersiveApplicationLayout::ComputeGutterWidth((ImmersiveApplicationLayout *)v21, v8);
  v10 = v6 - v4 - v9;
  *(_QWORD *)v20 = 0LL;
  v11 = *((_QWORD *)this + 5);
  v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v11 + 104LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v20);
  v13 = v12(v11, 0LL, 5LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v20);
  v14 = v13;
  if ( v13 >= 0 )
  {
    v15 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD))(**(_QWORD **)v20 + 72LL))(*(_QWORD *)v20, v21, v10);
    v16 = v22;
    v17 = 320 * v22 / 100 + 2 * (v22 / 100);
    if ( v15 > v17 )
      v17 = v15;
    *((_DWORD *)a2 + 1) = v5;
    *((_DWORD *)a2 + 3) = v7;
    v18 = v21[0] + v9 / 2;
    *((_DWORD *)a2 + 2) = v18 + v17;
    *(_DWORD *)a2 = v18 + v17 - 175 * v16 / 100;
    v14 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCE,
      (int)"pcshell\\twinui\\tabletmode\\lib\\appresizedata.cpp",
      (const char *)(unsigned int)v13);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v20);
  return v14;
}
