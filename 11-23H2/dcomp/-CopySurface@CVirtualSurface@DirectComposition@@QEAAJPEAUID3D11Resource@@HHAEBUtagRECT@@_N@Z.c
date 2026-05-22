/*
 * XREFs of ?CopySurface@CVirtualSurface@DirectComposition@@QEAAJPEAUID3D11Resource@@HHAEBUtagRECT@@_N@Z @ 0x1800FD9C0
 * Callers:
 *     ?CopySurface@CVirtualSurface@DirectComposition@@UEAAJPEAUIUnknown@@HHPEBUtagRECT@@@Z @ 0x1800FDB40 (-CopySurface@CVirtualSurface@DirectComposition@@UEAAJPEAUIUnknown@@HHPEBUtagRECT@@@Z.c)
 *     ?CopySurface@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z @ 0x1800FDCB0 (-CopySurface@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z.c)
 *     ?ReclumpRect@CVirtualSurface@DirectComposition@@AEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800FE024 (-ReclumpRect@CVirtualSurface@DirectComposition@@AEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNo.c)
 *     ?Scroll@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z @ 0x1800FE370 (-Scroll@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z.c)
 * Callees:
 *     ?TryIntersect@CRegion@@QEAAJAEBV1@0@Z @ 0x1800054BC (-TryIntersect@CRegion@@QEAAJAEBV1@0@Z.c)
 *     ?CopyRegionToSurface@CTileClump@DirectComposition@@QEAAJPEAUID3D11Resource@@HHAEBVCRegion@@_N@Z @ 0x1800055D0 (-CopyRegionToSurface@CTileClump@DirectComposition@@QEAAJPEAUID3D11Resource@@HHAEBVCRegion@@_N@Z.c)
 *     ?AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ @ 0x180032860 (-AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180038788 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x180081C68 (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180083180 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ?FlushD2D@CBitmapInfoFront@DirectComposition@@QEAA_NXZ @ 0x1800EA888 (-FlushD2D@CBitmapInfoFront@DirectComposition@@QEAA_NXZ.c)
 */

__int64 __fastcall DirectComposition::CVirtualSurface::CopySurface(
        DirectComposition::CVirtualSurface *this,
        struct ID3D11Resource *a2,
        int a3,
        int a4,
        const struct tagRECT *a5,
        bool a6)
{
  _QWORD *v6; // r12
  int v9; // r14d
  int v10; // r13d
  char v11; // di
  __int64 v12; // rbx
  const struct FastRegion::Internal::CRgnData *v13; // rcx
  _QWORD *v14; // rax
  int v16; // [rsp+30h] [rbp-B9h]
  int *v18; // [rsp+40h] [rbp-A9h] BYREF
  int v19; // [rsp+48h] [rbp-A1h] BYREF
  struct FastRegion::Internal::CRgnData *v20[10]; // [rsp+90h] [rbp-59h] BYREF

  v6 = (_QWORD *)((char *)this + 256);
  DirectComposition::CDeviceLock::AssertIsOwned((DirectComposition::CDeviceLock *)(*(_QWORD *)(*((_QWORD *)this + 13)
                                                                                             + 24LL)
                                                                                 + 96LL));
  v9 = 0;
  v10 = a5->left - a3;
  v11 = 0;
  v16 = a5->top - a4;
  v12 = *v6 - 16LL;
  if ( (_QWORD *)*v6 == v6 )
    v12 = 0LL;
  do
  {
    if ( !v12 )
      break;
    FastRegion::CRegion::CRegion((FastRegion::CRegion *)v20, a5);
    v13 = *(const struct FastRegion::Internal::CRgnData **)(v12 + 96);
    if ( !*(_DWORD *)v13 || !*(_DWORD *)v20[0] || !FastRegion::Internal::CRgnData::Intersects(v13, v20[0]) )
      v11 = 1;
    FastRegion::CRegion::FreeMemory((void **)v20);
    if ( v11 )
    {
      v11 = 0;
    }
    else
    {
      v11 = 0;
      v18 = &v19;
      v19 = 0;
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)v20, a5);
      v9 = CRegion::TryIntersect((CRegion *)&v18, (const struct CRegion *)v20, (const struct CRegion *)(v12 + 96));
      FastRegion::CRegion::FreeMemory((void **)v20);
      if ( v9 >= 0 )
      {
        DirectComposition::CBitmapInfoFront::FlushD2D(*(DirectComposition::CBitmapInfoFront **)(v12 + 72));
        v9 = DirectComposition::CTileClump::CopyRegionToSurface(
               (DirectComposition::CTileClump *)v12,
               a2,
               v10,
               v16,
               (const struct CRegion *)&v18,
               a6);
      }
      FastRegion::CRegion::FreeMemory((void **)&v18);
    }
    v14 = *(_QWORD **)(v12 + 16);
    v12 = (__int64)(v14 - 2);
    if ( v14 == v6 )
      v12 = 0LL;
  }
  while ( v9 >= 0 );
  return (unsigned int)v9;
}
