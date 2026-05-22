/*
 * XREFs of ?SetSourceRect@CCompositionTexture@DirectComposition@@UEAAJAEBUD2D_RECT_U@@@Z @ 0x1800A03A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeGuard@VCDeviceLock@DirectComposition@@@@YA?AV?$CGuard@VCDeviceLock@DirectComposition@@@@AEAVCDeviceLock@DirectComposition@@@Z @ 0x1800246CC (--$MakeGuard@VCDeviceLock@DirectComposition@@@@YA-AV-$CGuard@VCDeviceLock@DirectComposition@@@@A.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CCompositionTexture::SetSourceRect(
        DirectComposition::CCompositionTexture *this,
        const struct D2D_RECT_U *a2)
{
  UINT32 left; // r8d
  UINT32 top; // eax
  UINT32 bottom; // edx
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // rdx
  _QWORD *v13; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v14[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  MakeGuard<DirectComposition::CDeviceLock>(
    (DirectComposition::CDeviceLock **)&v13,
    (DirectComposition::CDeviceLock *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 96LL));
  left = a2->left;
  if ( a2->left > 0x7FFFFFFF
    || (top = a2->top, top > 0x7FFFFFFF)
    || a2->right > 0x7FFFFFFF
    || (bottom = a2->bottom, bottom > 0x7FFFFFFF) )
  {
    v9 = -2147024809;
    v11 = 98LL;
    v10 = 2147942487LL;
    goto LABEL_9;
  }
  v14[2] = a2->right;
  v7 = *((_QWORD *)this + 2);
  v14[0] = left;
  v14[1] = top;
  v14[3] = bottom;
  v8 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v7 + 56LL))(v7, v14);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = (unsigned int)v8;
    v11 = 109LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\compositiontexture.cpp",
      (const char *)v10);
    goto LABEL_10;
  }
  v9 = 0;
LABEL_10:
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v13);
  return v9;
}
