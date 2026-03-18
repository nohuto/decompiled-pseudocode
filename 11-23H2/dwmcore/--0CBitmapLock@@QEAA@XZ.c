/*
 * XREFs of ??0CBitmapLock@@QEAA@XZ @ 0x180029ACC
 * Callers:
 *     ?HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x180027A8C (-HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180029860 (-LockForRead@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@.c)
 *     ?LockForRead@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1800F6170 (-LockForRead@CSecondarySysmemBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@Rec.c)
 *     ??0CBitmapLockUnaligned@@QEAA@XZ @ 0x180281E7C (--0CBitmapLockUnaligned@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

CBitmapLock *__fastcall CBitmapLock::CBitmapLock(CBitmapLock *this, int a2)
{
  char *v2; // rdi
  CBitmapLock *result; // rax

  v2 = (char *)this + 8;
  if ( a2 )
    *(_QWORD *)v2 = &CBitmapLock::`vbtable';
  *(_QWORD *)this = &IBitmapLock::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*(_QWORD *)v2 + 4LL) + 8) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  *((_DWORD *)this + 4) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  *(_QWORD *)this = &CBitmapLock::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 3) = &CBitmapLock::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*(_QWORD *)v2 + 4LL) + 8) = &CBitmapLock::`vftable'{for `IUnknown'};
  result = this;
  *(_DWORD *)((char *)this + *(int *)(*(_QWORD *)v2 + 4LL) + 4) = *(_DWORD *)(*(_QWORD *)v2 + 4LL) - 144;
  *((_WORD *)this + 36) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = 0;
  *((_QWORD *)this + 17) = 0LL;
  return result;
}
