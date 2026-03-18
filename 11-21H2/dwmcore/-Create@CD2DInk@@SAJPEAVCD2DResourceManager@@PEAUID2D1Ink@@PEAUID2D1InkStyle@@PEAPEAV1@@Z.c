/*
 * XREFs of ?Create@CD2DInk@@SAJPEAVCD2DResourceManager@@PEAUID2D1Ink@@PEAUID2D1InkStyle@@PEAPEAV1@@Z @ 0x18028D3CC
 * Callers:
 *     ?CreateD2DInk@CD2DContext@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@PEAPEAVCD2DInk@@@Z @ 0x180277A60 (-CreateD2DInk@CD2DContext@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@PEAPEAVCD2DIn.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CD2DInk@@IEAA@PEAVCD2DResourceManager@@@Z @ 0x18028D244 (--0CD2DInk@@IEAA@PEAVCD2DResourceManager@@@Z.c)
 *     ?Initialize@CD2DInk@@IEAAJPEAUID2D1Ink@@PEAUID2D1InkStyle@@@Z @ 0x18028D4BC (-Initialize@CD2DInk@@IEAAJPEAUID2D1Ink@@PEAUID2D1InkStyle@@@Z.c)
 */

__int64 __fastcall CD2DInk::Create(
        struct CD2DResourceManager *a1,
        struct ID2D1Ink *a2,
        struct ID2D1InkStyle *a3,
        struct CD2DInk **a4)
{
  CD2DInk *v8; // rax
  __int64 v9; // rcx
  CD2DInk *v10; // rax
  CD2DInk *v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // edi

  *a4 = 0LL;
  v8 = (CD2DInk *)operator new(0x88uLL);
  if ( v8 && (v10 = CD2DInk::CD2DInk(v8, a1), (v11 = v10) != 0LL) )
  {
    (*(void (__fastcall **)(CD2DInk *))(*(_QWORD *)v10 + 8LL))(v10);
    v12 = CD2DInk::Initialize(v11, a2, a3);
    v14 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0x16u);
      (*(void (__fastcall **)(CD2DInk *))(*(_QWORD *)v11 + 16LL))(v11);
    }
    else
    {
      *a4 = v11;
    }
  }
  else
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, -2147024882, 0x13u);
  }
  return v14;
}
