/*
 * XREFs of ?WICOrientateFrame@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapDecoder@@PEAUIWICBitmapFrameDecode@@_NPEAPEAUIWICBitmapSource@@@Z @ 0x1805E58FC
 * Callers:
 *     ?LoadImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@W4LOAD_IMAGE_WITH_WIC_OPTION@@PEAPEAUIWICBitmapSource@@PEAPEAUIWICBitmapFrameDecode@@PEAU_GUID@@@Z @ 0x18005B5C8 (-LoadImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@W4LOAD_IMAGE_WITH_WIC_OPTION@@PEAPEAU.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?WICCreateCachedOrientedBitmapSource@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAUIWICMetadataQueryReader@@PEAPEAU2@@Z @ 0x1805E548C (-WICCreateCachedOrientedBitmapSource@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAUIWICM.c)
 *     ?WICCreateOrientedBitmapSource@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAUIWICMetadataQueryReader@@PEAPEAU2@@Z @ 0x1805E5620 (-WICCreateOrientedBitmapSource@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAUIWICMetadat.c)
 *     ?WICIsOrientationSupported@@YA_NPEAUIWICBitmapDecoder@@@Z @ 0x1805E57F8 (-WICIsOrientationSupported@@YA_NPEAUIWICBitmapDecoder@@@Z.c)
 */

__int64 __fastcall WICOrientateFrame(
        struct IWICImagingFactory *a1,
        struct IWICBitmapDecoder *a2,
        struct IWICBitmapSource *a3,
        char a4,
        struct IWICBitmapSource **a5)
{
  struct IWICBitmapSource **v5; // rsi
  unsigned int v7; // edi
  struct IWICBitmapFrameDecodeVtbl *lpVtbl; // rax
  unsigned int v11; // eax
  struct IWICBitmapSourceVtbl *AddRef; // rax

  v5 = a5;
  v7 = 0;
  *a5 = 0LL;
  if ( WICIsOrientationSupported(a2) )
  {
    lpVtbl = (struct IWICBitmapFrameDecodeVtbl *)a3->lpVtbl;
    a5 = 0LL;
    if ( ((int (__fastcall *)(struct IWICBitmapSource *, struct IWICBitmapSource ***))lpVtbl->GetMetadataQueryReader)(
           a3,
           &a5) < 0 )
    {
      *v5 = a3;
      AddRef = (struct IWICBitmapSourceVtbl *)a3->lpVtbl->AddRef;
    }
    else
    {
      if ( a4 )
        v11 = WICCreateCachedOrientedBitmapSource(a1, a3, (struct IWICMetadataQueryReader *)a5, v5);
      else
        v11 = WICCreateOrientedBitmapSource(a1, a3, (struct IWICMetadataQueryReader *)a5, v5);
      v7 = v11;
      AddRef = (*a5)[2].lpVtbl;
    }
    ((void (*)(void))AddRef)();
  }
  else
  {
    *v5 = a3;
    ((void (__fastcall *)(struct IWICBitmapSource *))a3->lpVtbl->AddRef)(a3);
  }
  return v7;
}
