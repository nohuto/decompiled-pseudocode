/*
 * XREFs of ?GetAvailableRegion@CTileClump@DirectComposition@@QEAAJPEAVCRegion@@@Z @ 0x1800053A0
 * Callers:
 *     ?PushDownClump@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@PEAVCTileClump@2@@Z @ 0x1800050F8 (-PushDownClump@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@PEAVCTileC.c)
 * Callees:
 *     ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x180038748 (--0CRegion@@QEAA@AEBUMilRectU@@@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18007A2AC (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18007A518 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180083180 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 */

__int64 __fastcall DirectComposition::CTileClump::GetAvailableRegion(
        DirectComposition::CTileClump *this,
        struct CRegion *a2)
{
  unsigned int *v4; // rax
  unsigned int v5; // r8d
  __int64 v6; // rdx
  _DWORD *v7; // rcx
  int v8; // ebx
  _DWORD **v9; // rsi
  __int64 v10; // rdi
  _BYTE v12[80]; // [rsp+20h] [rbp-78h] BYREF

  v4 = (unsigned int *)((char *)this + 248);
  v5 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 420LL);
  v6 = 4LL;
  do
  {
    v7 = (_DWORD *)*((_QWORD *)v4 - 9);
    if ( *v7 && *v4 <= v5 )
      *v7 = 0;
    v4 += 20;
    --v6;
  }
  while ( v6 );
  CRegion::CRegion((CRegion *)v12, (DirectComposition::CTileClump *)((char *)this + 56));
  v8 = FastRegion::CRegion::Subtract((FastRegion::CRegion *)v12, (DirectComposition::CTileClump *)((char *)this + 96));
  v9 = (_DWORD **)((char *)this + 176);
  v10 = 0LL;
  do
  {
    if ( v8 >= 0 && **v9 )
      v8 = FastRegion::CRegion::Subtract(
             (FastRegion::CRegion *)v12,
             (DirectComposition::CTileClump *)((char *)this + 80 * v10 + 176));
    v10 = (unsigned int)(v10 + 1);
    v9 += 10;
  }
  while ( (unsigned int)v10 < 4 );
  if ( v8 >= 0 )
    v8 = FastRegion::CRegion::Copy(a2, (const struct CRegion *)v12);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v12);
  return (unsigned int)v8;
}
