/*
 * XREFs of ?WICCreateOrientedBitmapSource@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAUIWICMetadataQueryReader@@PEAPEAU2@@Z @ 0x18057CB30
 * Callers:
 *     ?WICOrientateFrame@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapDecoder@@PEAUIWICBitmapFrameDecode@@_NPEAPEAUIWICBitmapSource@@@Z @ 0x18057CDD4 (-WICOrientateFrame@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapDecoder@@PEAUIWICBitmapFrameDecode@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?WICGetTransformOptionFromMetadata@@YAJPEAUIWICMetadataQueryReader@@PEAW4WICBitmapTransformOptions@@@Z @ 0x18057CC1C (-WICGetTransformOptionFromMetadata@@YAJPEAUIWICMetadataQueryReader@@PEAW4WICBitmapTransformOptio.c)
 */

__int64 __fastcall WICCreateOrientedBitmapSource(
        struct IWICImagingFactory *a1,
        struct IWICBitmapSource *a2,
        struct IWICMetadataQueryReader *a3,
        struct IWICBitmapSource **a4)
{
  int v7; // ebx
  struct IWICBitmapSource *v8; // rcx
  struct IWICBitmapSource *v10; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v11; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v11 = 0;
  v7 = WICGetTransformOptionFromMetadata(a3, (enum WICBitmapTransformOptions *)&v11);
  if ( v7 >= 0 )
  {
    v10 = 0LL;
    v7 = ((__int64 (__fastcall *)(struct IWICImagingFactory *, struct IWICBitmapSource **))a1->lpVtbl->CreateBitmapFlipRotator)(
           a1,
           &v10);
    if ( v7 >= 0 )
    {
      v7 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, struct IWICBitmapSource *, _QWORD))v10->lpVtbl[1].QueryInterface)(
             v10,
             a2,
             v11);
      if ( v7 >= 0 )
      {
        v8 = v10;
        *a4 = v10;
        ((void (__fastcall *)(struct IWICBitmapSource *))v8->lpVtbl->AddRef)(v8);
      }
      ((void (__fastcall *)(struct IWICBitmapSource *))v10->lpVtbl->Release)(v10);
    }
  }
  return (unsigned int)v7;
}
