/*
 * XREFs of ??1CD2DBitmapCache@@MEAA@XZ @ 0x180032C6C
 * Callers:
 *     ??1CRenderTargetBitmap@@MEAA@XZ @ 0x18003C1CC (--1CRenderTargetBitmap@@MEAA@XZ.c)
 *     ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x18003DB54 (--1CDxHandleBitmapRealization@@MEAA@XZ.c)
 *     ??1CSectionBitmapRealization@@MEAA@XZ @ 0x1800F570C (--1CSectionBitmapRealization@@MEAA@XZ.c)
 *     ??_GCWICBitmapRealization@@UEAAPEAXI@Z @ 0x180101440 (--_GCWICBitmapRealization@@UEAAPEAXI@Z.c)
 *     ??_ECBitmapRealization@@UEAAPEAXI@Z @ 0x1802B01E0 (--_ECBitmapRealization@@UEAAPEAXI@Z.c)
 *     ??_ECD2DBitmapCache@@MEAAPEAXI@Z @ 0x1802B0240 (--_ECD2DBitmapCache@@MEAAPEAXI@Z.c)
 *     ??_ECColorKeyBitmapRealization@@UEAAPEAXI@Z @ 0x1802B0430 (--_ECColorKeyBitmapRealization@@UEAAPEAXI@Z.c)
 *     ??1CDxHandleStereoBitmapRealization@@MEAA@XZ @ 0x1802B3078 (--1CDxHandleStereoBitmapRealization@@MEAA@XZ.c)
 *     ??1CDxHandleYUVBitmapRealization@@MEAA@XZ @ 0x1802B3A30 (--1CDxHandleYUVBitmapRealization@@MEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180034304 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E247C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@0@@Z @ 0x1800F77CC (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U-$default_delete@V.c)
 *     ??1CCachedBitmap@CD2DBitmapCache@@QEAA@XZ @ 0x1800F9A30 (--1CCachedBitmap@CD2DBitmapCache@@QEAA@XZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VID2DBitmapCacheSource@@@@IEAAKXZ @ 0x180100D40 (-InternalRelease@-$CMILRefCountBaseT@VID2DBitmapCacheSource@@@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F4B8 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CD2DBitmapCache::~CD2DBitmapCache(CD2DBitmapCache *this)
{
  __int64 v2; // rdx
  CD2DBitmapCache::CCachedBitmap **v3; // rbp
  CD2DBitmapCache::CCachedBitmap **i; // rdi
  CD2DBitmapCache::CCachedBitmap *v5; // rsi

  *(_QWORD *)this = &CD2DBitmapCache::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16) = &CD2DBitmapCache::`vftable'{for `IDeviceResourceNotify'};
  v2 = *(int *)(*((_QWORD *)this + 2) + 4LL);
  *(_DWORD *)((char *)this + v2 + 12) = v2 - 72;
  v3 = (CD2DBitmapCache::CCachedBitmap **)*((_QWORD *)this + 7);
  for ( i = (CD2DBitmapCache::CCachedBitmap **)*((_QWORD *)this + 6); i != v3; ++i )
  {
    v5 = *i;
    if ( *i )
    {
      CD2DBitmapCache::CCachedBitmap::~CCachedBitmap(*i);
      operator delete(v5, 0x10uLL);
    }
  }
  *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
  if ( *((_QWORD *)this + 6) )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CD2DBitmapCache::CCachedBitmap>>>();
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 6),
      (*((_QWORD *)this + 8) - *((_QWORD *)this + 6)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
  }
  if ( *((_QWORD *)this + 5) )
    CMILRefCountBaseT<ID2DBitmapCacheSource>::InternalRelease();
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((char *)this + 32);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((char *)this + 24);
}
