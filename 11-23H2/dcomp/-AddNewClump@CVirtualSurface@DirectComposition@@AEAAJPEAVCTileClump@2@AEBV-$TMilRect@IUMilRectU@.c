/*
 * XREFs of ?AddNewClump@CVirtualSurface@DirectComposition@@AEAAJPEAVCTileClump@2@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180037D34
 * Callers:
 *     ?EndDrawInternal@CVirtualSurface@DirectComposition@@AEAAJPEAVCRegion@@@Z @ 0x180038474 (-EndDrawInternal@CVirtualSurface@DirectComposition@@AEAAJPEAVCRegion@@@Z.c)
 *     ?ReclumpRect@CVirtualSurface@DirectComposition@@AEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800FE024 (-ReclumpRect@CVirtualSurface@DirectComposition@@AEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNo.c)
 * Callees:
 *     ?RemoveFromValidRegion@CTileClump@DirectComposition@@QEAAJAEBVCRegion@@K@Z @ 0x1800380E4 (-RemoveFromValidRegion@CTileClump@DirectComposition@@QEAAJAEBVCRegion@@K@Z.c)
 *     ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x180038748 (--0CRegion@@QEAA@AEBUMilRectU@@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18007A3CC (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x180081C68 (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180083180 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 */

__int64 __fastcall DirectComposition::CVirtualSurface::AddNewClump(__int64 a1, __int64 a2, const struct MilRectU *a3)
{
  const struct FastRegion::Internal::CRgnData **v5; // r14
  int v6; // ebx
  __int64 v7; // rcx
  bool v8; // zf
  DirectComposition::CTileClump *i; // rdi
  const struct FastRegion::Internal::CRgnData *v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // rcx
  _BYTE v15[80]; // [rsp+20h] [rbp-88h] BYREF

  CRegion::CRegion((CRegion *)v15, a3);
  v5 = (const struct FastRegion::Internal::CRgnData **)(a2 + 96);
  *(_BYTE *)(a2 + 88) = 1;
  v6 = FastRegion::CRegion::Union((FastRegion::CRegion *)(a2 + 96), (const struct CRegion *)v15);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v15);
  v7 = *(_QWORD *)(a1 + 256);
  v8 = v7 == a1 + 256;
  for ( i = (DirectComposition::CTileClump *)(v7 - 16); ; i = (DirectComposition::CTileClump *)(v11 - 16) )
  {
    if ( v8 )
      i = 0LL;
    if ( v6 < 0 )
      break;
    if ( !i )
    {
      v12 = *(_QWORD **)(a1 + 264);
      v13 = (_QWORD *)(a2 + 16);
      if ( *v12 != a1 + 256 )
        __fastfail(3u);
      *v13 = a1 + 256;
      *(_QWORD *)(a2 + 24) = v12;
      *v12 = v13;
      *(_QWORD *)(a1 + 264) = v13;
      ++*(_DWORD *)(a1 + 248);
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a2 + 8));
      *(_BYTE *)(a1 + 132) |= 8u;
      return (unsigned int)v6;
    }
    v10 = (const struct FastRegion::Internal::CRgnData *)*((_QWORD *)i + 12);
    if ( *(_DWORD *)v10 && *(_DWORD *)*v5 && FastRegion::Internal::CRgnData::Intersects(v10, *v5) )
      v6 = DirectComposition::CTileClump::RemoveFromValidRegion(
             i,
             (const struct CRegion *)(a2 + 96),
             *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 24LL) + 416LL));
    v11 = *((_QWORD *)i + 2);
    v8 = v11 == a1 + 256;
  }
  return (unsigned int)v6;
}
