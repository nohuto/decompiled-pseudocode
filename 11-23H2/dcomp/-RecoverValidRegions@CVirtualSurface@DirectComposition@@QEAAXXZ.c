/*
 * XREFs of ?RecoverValidRegions@CVirtualSurface@DirectComposition@@QEAAXXZ @ 0x1800FE280
 * Callers:
 *     ?CopyRegionToClump@CTileClump@DirectComposition@@QEAAJPEAV12@PEAUID3D11Texture2D@@AEBVCRegion@@K@Z @ 0x1800054F4 (-CopyRegionToClump@CTileClump@DirectComposition@@QEAAJPEAV12@PEAUID3D11Texture2D@@AEBVCRegion@@K.c)
 *     ?EndDrawInternal@CVirtualSurface@DirectComposition@@AEAAJPEAVCRegion@@@Z @ 0x180038474 (-EndDrawInternal@CVirtualSurface@DirectComposition@@AEAAJPEAVCRegion@@@Z.c)
 *     ?TrimTileClumps@CVirtualSurface@DirectComposition@@AEAAJPEBUtagRECT@@I@Z @ 0x180093600 (-TrimTileClumps@CVirtualSurface@DirectComposition@@AEAAJPEBUtagRECT@@I@Z.c)
 * Callees:
 *     ?QueueUnavailableRegion@CTileClump@DirectComposition@@AEAAXAEBVCRegion@@K@Z @ 0x180038164 (-QueueUnavailableRegion@CTileClump@DirectComposition@@AEAAXAEBVCRegion@@K@Z.c)
 *     ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x180038748 (--0CRegion@@QEAA@AEBUMilRectU@@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18007A3CC (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180083180 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 */

void __fastcall DirectComposition::CVirtualSurface::RecoverValidRegions(DirectComposition::CVirtualSurface *this)
{
  const struct FastRegion::Internal::CRgnData **v1; // r15
  char *v2; // r14
  char *i; // rax
  int v5; // ebx
  char *v6; // rdi
  void *v7[10]; // [rsp+20h] [rbp-88h] BYREF

  v1 = (const struct FastRegion::Internal::CRgnData **)((char *)this + 136);
  v2 = (char *)this + 256;
  **((_DWORD **)this + 17) = 0;
  *((_BYTE *)this + 132) &= ~2u;
  for ( i = (char *)*((_QWORD *)this + 32); ; i = (char *)*((_QWORD *)v6 + 2) )
  {
    v6 = i - 16;
    if ( i == v2 )
      v6 = 0LL;
    if ( !v6 )
      break;
    if ( !**((_DWORD **)v6 + 12)
      || (int)FastRegion::CRegion::Union(v1, (const struct FastRegion::Internal::CRgnData **)v6 + 12) < 0 )
    {
      v5 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 13) + 24LL) + 416LL);
      v6[88] = 1;
      CRegion::CRegion((CRegion *)v7, (struct tagRECT *)(v6 + 56));
      DirectComposition::CTileClump::QueueUnavailableRegion(
        (DirectComposition::CTileClump *)v6,
        (const struct CRegion *)v7,
        v5);
      **((_DWORD **)v6 + 12) = 0;
      FastRegion::CRegion::FreeMemory(v7);
    }
  }
}
