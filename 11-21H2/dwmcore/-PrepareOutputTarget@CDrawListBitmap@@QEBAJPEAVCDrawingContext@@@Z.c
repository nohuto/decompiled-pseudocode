/*
 * XREFs of ?PrepareOutputTarget@CDrawListBitmap@@QEBAJPEAVCDrawingContext@@@Z @ 0x1801E4DD4
 * Callers:
 *     ?UpdateBitmaps@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801E85B0 (-UpdateBitmaps@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?UpdateBitmaps@CCubeMapRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z @ 0x1802AAE80 (-UpdateBitmaps@CCubeMapRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RecordBitmapRealizationInfo@CDrawingContext@@QEAAXPEAVIBitmapRealization@@@Z @ 0x1801B3D40 (-RecordBitmapRealizationInfo@CDrawingContext@@QEAAXPEAVIBitmapRealization@@@Z.c)
 *     ?RecordBitmapResourceInfo@CDrawingContext@@QEBAXPEAVIBitmapResource@@@Z @ 0x1801B3E8C (-RecordBitmapResourceInfo@CDrawingContext@@QEBAXPEAVIBitmapResource@@@Z.c)
 */

__int64 __fastcall CDrawListBitmap::PrepareOutputTarget(struct IBitmapResource **this, struct CDrawingContext *a2)
{
  struct IBitmapResource *v4; // rsi
  struct IBitmapResource *v5; // rdx
  __int64 v6; // rax
  __int64 (__fastcall *v7)(struct IBitmapResource *, struct IBitmapResource **); // r14
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  struct IBitmapResource *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 (__fastcall *v14)(struct IBitmapResource *, __int64, __int64 *); // rbx
  __int64 v15; // rax
  int v16; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v19; // [rsp+40h] [rbp+8h] BYREF

  if ( !*this )
    goto LABEL_6;
  CDrawingContext::RecordBitmapResourceInfo(a2, *this);
  v4 = *this;
  v5 = this[1];
  v6 = *(_QWORD *)*this;
  this[1] = 0LL;
  v7 = *(__int64 (__fastcall **)(struct IBitmapResource *, struct IBitmapResource **))(v6 + 56);
  if ( v5 )
  {
    v8 = (__int64)v5 + *(int *)(*((_QWORD *)v5 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = v7(v4, this + 1);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9A,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistbitmap.cpp",
      (const char *)(unsigned int)v9);
  }
  else
  {
LABEL_6:
    CDrawingContext::RecordBitmapRealizationInfo(a2, this[1]);
    v11 = this[1];
    v12 = *((_QWORD *)a2 + 3);
    v13 = *(_QWORD *)v11;
    v19 = 0LL;
    v14 = *(__int64 (__fastcall **)(struct IBitmapResource *, __int64, __int64 *))(v13 + 48);
    v15 = (*(__int64 (__fastcall **)(char *))(v12 + 40))((char *)a2 + 24);
    v16 = v14(v11, v15, &v19);
    v10 = v16;
    if ( v16 >= 0 )
      v10 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA6,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistbitmap.cpp",
        (const char *)(unsigned int)v16);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v19);
  }
  return v10;
}
