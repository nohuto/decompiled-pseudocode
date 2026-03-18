/*
 * XREFs of ?EnumerateBrushes@CMultiPrimitiveDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800D14A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMultiPrimitiveDrawListBrush::EnumerateBrushes(
        CMultiPrimitiveDrawListBrush *this,
        const struct CDrawingContext *a2,
        int (*a3)(const struct CDrawListBrush *, void *),
        void *a4)
{
  unsigned int v4; // esi
  __int128 *v6; // rbx
  int v9; // r12d
  __int128 *v10; // rdi
  __int128 v11; // xmm0
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx

  v4 = 0;
  v6 = (__int128 *)*((_QWORD *)this + 11);
  v9 = *(_DWORD *)(*((_QWORD *)this + 9) + 48LL);
  v10 = &v6[*((_QWORD *)this + 10)];
  while ( v6 != v10 )
  {
    v12 = *((_QWORD *)this + 9);
    v11 = *v6;
    *(_BYTE *)(v12 + 52) = 1;
    *(_OWORD *)(v12 + 32) = v11;
    *(_DWORD *)(v12 + 48) = v9;
    v13 = ((__int64 (__fastcall *)(_QWORD, void *))a3)(*((_QWORD *)this + 9), a4);
    v4 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, v13, 0x47u);
      return v4;
    }
    ++v6;
  }
  return v4;
}
