/*
 * XREFs of ?ResumeDraw@CAtlasSurface@DirectComposition@@QEAAXPEAUID2D1Bitmap@@PEAUID2D1Image@@PEAUID2D1DrawingStateBlock@@AEBUtagRECT@@@Z @ 0x180039434
 * Callers:
 *     ?ResumeDraw@CBitmapInfoBack@DirectComposition@@QEAAXXZ @ 0x1800393DC (-ResumeDraw@CBitmapInfoBack@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     ?SetGuardRect@CAtlasSurfacePool@DirectComposition@@AEAAXAEBUtagRECT@@@Z @ 0x1800394D4 (-SetGuardRect@CAtlasSurfacePool@DirectComposition@@AEAAXAEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CAtlasSurface::ResumeDraw(
        DirectComposition::CAtlasSurface *this,
        struct ID2D1Bitmap *a2,
        struct ID2D1Image *a3,
        struct ID2D1DrawingStateBlock *a4,
        const struct tagRECT *a5)
{
  __int64 v5; // rbx
  int v9; // edx
  int v10; // r9d
  struct tagRECT v11; // [rsp+20h] [rbp-38h] BYREF

  v5 = *((_QWORD *)this + 8);
  v9 = *((_DWORD *)this + 18) + (*((_DWORD *)this + 22) & 1);
  v10 = *((_DWORD *)this + 19) + ((*((_DWORD *)this + 22) >> 2) & 1);
  v11.left = v9 + a5->left;
  v11.top = v10 + a5->top;
  v11.right = v9 + a5->right;
  v11.bottom = v10 + a5->bottom;
  if ( a2 )
  {
    (*(void (__fastcall **)(_QWORD, struct ID2D1Bitmap *, struct tagRECT *))(**(_QWORD **)(v5 + 88) + 72LL))(
      *(_QWORD *)(v5 + 88),
      a2,
      &v11);
    if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v5 + 144) + 128LL) + 354LL) )
    {
      (*(void (__fastcall **)(_QWORD, struct ID2D1Image *))(**(_QWORD **)(v5 + 56) + 592LL))(*(_QWORD *)(v5 + 56), a3);
      (*(void (__fastcall **)(_QWORD, struct ID2D1DrawingStateBlock *))(**(_QWORD **)(v5 + 56) + 352LL))(
        *(_QWORD *)(v5 + 56),
        a4);
    }
  }
  DirectComposition::CAtlasSurfacePool::SetGuardRect((DirectComposition::CAtlasSurfacePool *)v5, &v11);
}
