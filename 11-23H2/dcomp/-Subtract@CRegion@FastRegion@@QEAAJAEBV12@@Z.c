/*
 * XREFs of ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18007A2AC
 * Callers:
 *     ?PushDownClump@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@PEAVCTileClump@2@@Z @ 0x1800050F8 (-PushDownClump@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@PEAVCTileC.c)
 *     ?GetAvailableRegion@CTileClump@DirectComposition@@QEAAJPEAVCRegion@@@Z @ 0x1800053A0 (-GetAvailableRegion@CTileClump@DirectComposition@@QEAAJPEAVCRegion@@@Z.c)
 *     ?RemoveFromValidRegion@CTileClump@DirectComposition@@QEAAJAEBVCRegion@@K@Z @ 0x1800380E4 (-RemoveFromValidRegion@CTileClump@DirectComposition@@QEAAJAEBVCRegion@@K@Z.c)
 *     ?TrimTileClumps@CVirtualSurface@DirectComposition@@AEAAJPEBUtagRECT@@I@Z @ 0x180093600 (-TrimTileClumps@CVirtualSurface@DirectComposition@@AEAAJPEBUtagRECT@@I@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z @ 0x18007A380 (-SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z.c)
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x18007A4A8 (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     ?EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18007A6FC (-EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18007A954 (-Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??1CWorkBuffer@Internal@FastRegion@@QEAA@XZ @ 0x1800FD0D4 (--1CWorkBuffer@Internal@FastRegion@@QEAA@XZ.c)
 */

__int64 __fastcall FastRegion::CRegion::Subtract(
        const struct FastRegion::Internal::CRgnData **this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  const struct FastRegion::Internal::CRgnData *v4; // rdx
  const struct FastRegion::Internal::CRgnData *v5; // rcx
  int v6; // eax
  int v7; // esi
  unsigned int v8; // ebx
  int v10; // [rsp+20h] [rbp-128h] BYREF
  void *lpMem; // [rsp+28h] [rbp-120h]
  _BYTE v12[256]; // [rsp+30h] [rbp-118h] BYREF

  v4 = *a2;
  if ( !*(_DWORD *)v4 )
    return 0LL;
  v5 = *this;
  if ( !*(_DWORD *)v5 )
    return 0LL;
  v6 = FastRegion::Internal::CRgnData::EstimateSizeSubtract(v5, v4);
  v10 = 0;
  lpMem = v12;
  v7 = FastRegion::Internal::CWorkBuffer::SetupBuffer((FastRegion::Internal::CWorkBuffer *)&v10, v6);
  if ( v7 < 0 )
  {
    FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v10);
    return (unsigned int)v7;
  }
  else
  {
    FastRegion::Internal::CRgnData::Subtract((FastRegion::Internal::CRgnData *)lpMem, *this, *a2);
    v8 = FastRegion::CRegion::SaveResult((FastRegion::CRegion *)this, (struct FastRegion::Internal::CWorkBuffer *)&v10);
    if ( v12 != lpMem )
      operator delete(lpMem);
    return v8;
  }
}
