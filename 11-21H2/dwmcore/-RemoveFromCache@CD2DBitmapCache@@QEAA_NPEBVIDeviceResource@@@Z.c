/*
 * XREFs of ?RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z @ 0x1800FF28C
 * Callers:
 *     ?NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x1800FF11C (-NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CD2DBitmapCache@@UEAAXPEBVIDeviceResource@@@Z @ 0x1800FF27C (-NotifyInvalidResource@CD2DBitmapCache@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802A43B0 (-NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CDxHandleStereoBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802A4BAC (-NotifyInvalidResource@CDxHandleStereoBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ??1CCachedBitmap@CD2DBitmapCache@@QEAA@XZ @ 0x180032D30 (--1CCachedBitmap@CD2DBitmapCache@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

char __fastcall CD2DBitmapCache::RemoveFromCache(CD2DBitmapCache *this, const struct IDeviceResource *a2)
{
  CD2DBitmapCache::CCachedBitmap **v2; // rbx
  char v5; // di
  CD2DBitmapCache::CCachedBitmap **v6; // rsi
  __int64 v7; // rdx
  const struct IDeviceResource *v8; // rax
  CD2DBitmapCache::CCachedBitmap **v9; // rbp
  CD2DBitmapCache::CCachedBitmap **v10; // rax
  void *v11; // rbx
  CD2DBitmapCache::CCachedBitmap *v13; // rax
  CD2DBitmapCache::CCachedBitmap *v14; // r15

  v2 = (CD2DBitmapCache::CCachedBitmap **)*((_QWORD *)this + 6);
  v5 = 0;
  while ( 1 )
  {
    v6 = v2;
    if ( v2 == *((CD2DBitmapCache::CCachedBitmap ***)this + 7) )
      break;
    v7 = *((_QWORD *)*v2 + 1);
    if ( v7 )
      v8 = (const struct IDeviceResource *)(*(int *)(*(_QWORD *)(v7 + 16) + 8LL) + v7 + 16);
    else
      v8 = 0LL;
    ++v2;
    if ( v8 == a2 )
    {
      v9 = (CD2DBitmapCache::CCachedBitmap **)*((_QWORD *)this + 7);
      v10 = v9;
      if ( v2 != v9 )
      {
        do
        {
          if ( v6 != v2 )
          {
            v13 = *v2;
            *v2 = 0LL;
            v14 = *v6;
            *v6 = v13;
            if ( v14 )
            {
              CD2DBitmapCache::CCachedBitmap::~CCachedBitmap(v14);
              operator delete(v14, 0x10uLL);
            }
          }
          ++v2;
          ++v6;
        }
        while ( v2 != v9 );
        v9 = (CD2DBitmapCache::CCachedBitmap **)*((_QWORD *)this + 7);
        v10 = v9;
      }
      v11 = *(v9 - 1);
      if ( v11 )
      {
        CD2DBitmapCache::CCachedBitmap::~CCachedBitmap(*(v9 - 1));
        operator delete(v11, 0x10uLL);
        v10 = (CD2DBitmapCache::CCachedBitmap **)*((_QWORD *)this + 7);
      }
      v5 = 1;
      *((_QWORD *)this + 7) = v10 - 1;
      return v5;
    }
  }
  return v5;
}
