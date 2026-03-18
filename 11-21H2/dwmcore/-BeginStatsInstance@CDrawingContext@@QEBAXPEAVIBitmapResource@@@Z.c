/*
 * XREFs of ?BeginStatsInstance@CDrawingContext@@QEBAXPEAVIBitmapResource@@@Z @ 0x180006BFC
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180006310 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 * Callees:
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDrawingContext::BeginStatsInstance(CDrawingContext *this, struct IBitmapResource *a2)
{
  _QWORD *v2; // rcx
  bool v3; // bl
  __int128 v5; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+30h] [rbp-28h]
  int v7; // [rsp+38h] [rbp-20h]

  v2 = (_QWORD *)*((_QWORD *)this + 6);
  v3 = 0;
  v6 = 0LL;
  v7 = 0;
  v5 = 0LL;
  if ( v2 )
    v3 = (**(int (__fastcall ***)(_QWORD, __int128 *))*v2)(*v2, &v5) >= 0;
  (*(void (__fastcall **)(struct IBitmapResource *, unsigned __int64))(*(_QWORD *)a2 + 32LL))(
    a2,
    (unsigned __int64)&v5 & -(__int64)v3);
}
