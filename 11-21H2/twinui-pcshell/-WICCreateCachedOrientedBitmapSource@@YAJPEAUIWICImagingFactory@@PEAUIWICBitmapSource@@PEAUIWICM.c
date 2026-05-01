/*
 * XREFs of ?WICCreateCachedOrientedBitmapSource@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAUIWICMetadataQueryReader@@PEAPEAU2@@Z @ 0x18057C99C
 * Callers:
 *     ?WICOrientateFrame@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapDecoder@@PEAUIWICBitmapFrameDecode@@_NPEAPEAUIWICBitmapSource@@@Z @ 0x18057CDD4 (-WICOrientateFrame@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapDecoder@@PEAUIWICBitmapFrameDecode@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?WICGetTransformOptionFromMetadata@@YAJPEAUIWICMetadataQueryReader@@PEAW4WICBitmapTransformOptions@@@Z @ 0x18057CC1C (-WICGetTransformOptionFromMetadata@@YAJPEAUIWICMetadataQueryReader@@PEAW4WICBitmapTransformOptio.c)
 */

__int64 __fastcall WICCreateCachedOrientedBitmapSource(
        struct IWICImagingFactory *a1,
        struct IWICBitmapSource *a2,
        struct IWICMetadataQueryReader *a3,
        struct IWICBitmapSource **a4)
{
  int v7; // ebx
  struct IWICBitmapSource *v8; // rcx
  struct IWICBitmapSource *v10; // [rsp+30h] [rbp-10h] BYREF
  __int64 v11; // [rsp+38h] [rbp-8h] BYREF
  WICBitmapTransformOptions v12; // [rsp+78h] [rbp+38h] BYREF

  *a4 = 0LL;
  v12 = WICBitmapTransformRotate0;
  v7 = WICGetTransformOptionFromMetadata(a3, &v12);
  if ( v7 >= 0 )
  {
    if ( v12 == WICBitmapTransformRotate0 )
    {
      *a4 = a2;
      ((void (__fastcall *)(struct IWICBitmapSource *))a2->lpVtbl->AddRef)(a2);
      return (unsigned int)v7;
    }
    v10 = 0LL;
    v7 = ((__int64 (__fastcall *)(struct IWICImagingFactory *, struct IWICBitmapSource **))a1->lpVtbl->CreateBitmapFlipRotator)(
           a1,
           &v10);
    if ( v7 < 0 )
      return (unsigned int)v7;
    if ( (v12 & 0x11) != 0 || v12 == WICBitmapTransformRotate180 )
    {
      v11 = 0LL;
      v7 = ((__int64 (__fastcall *)(struct IWICImagingFactory *, struct IWICBitmapSource *, __int64, __int64 *))a1->lpVtbl->CreateBitmapFromSource)(
             a1,
             a2,
             2LL,
             &v11);
      if ( v7 < 0 )
      {
LABEL_12:
        ((void (__fastcall *)(struct IWICBitmapSource *))v10->lpVtbl->Release)(v10);
        return (unsigned int)v7;
      }
      v7 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, __int64, _QWORD))v10->lpVtbl[1].QueryInterface)(
             v10,
             v11,
             (unsigned int)v12);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    else
    {
      v7 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, struct IWICBitmapSource *, _QWORD))v10->lpVtbl[1].QueryInterface)(
             v10,
             a2,
             (unsigned int)v12);
    }
    if ( v7 >= 0 )
    {
      v8 = v10;
      *a4 = v10;
      ((void (__fastcall *)(struct IWICBitmapSource *))v8->lpVtbl->AddRef)(v8);
    }
    goto LABEL_12;
  }
  return (unsigned int)v7;
}
