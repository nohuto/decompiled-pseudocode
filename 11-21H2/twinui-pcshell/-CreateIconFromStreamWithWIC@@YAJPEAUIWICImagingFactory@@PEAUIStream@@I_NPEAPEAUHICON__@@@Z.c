/*
 * XREFs of ?CreateIconFromStreamWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@I_NPEAPEAUHICON__@@@Z @ 0x180030D10
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_ResumeCoro$1 @ 0x1801BB9D0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowIconAsync$_ResumeCoro$.c)
 * Callees:
 *     ??1?$CComPtr@UIWICImagingFactory@@@ATL@@QEAA@XZ @ 0x180030DBC (--1-$CComPtr@UIWICImagingFactory@@@ATL@@QEAA@XZ.c)
 *     ?LoadImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@W4LOAD_IMAGE_WITH_WIC_OPTION@@PEAPEAUIWICBitmapSource@@PEAPEAUIWICBitmapFrameDecode@@PEAU_GUID@@@Z @ 0x180030DEC (-LoadImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@W4LOAD_IMAGE_WITH_WIC_OPTION@@PEAPEAU.c)
 *     CoCreateInstance_0 @ 0x180189A77 (CoCreateInstance_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ConvertWICBitmapToHBITMAP@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAPEAUHBITMAP__@@@Z @ 0x180239068 (-ConvertWICBitmapToHBITMAP@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAPEAUHBITMAP__@@@.c)
 *     ?CreateIconFromBitmap@@YAJIPEAUHBITMAP__@@PEAPEAUHICON__@@@Z @ 0x18023A04E (-CreateIconFromBitmap@@YAJIPEAUHBITMAP__@@PEAPEAUHICON__@@@Z.c)
 *     ?ScaleImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUHBITMAP__@@UtagSIZE@@_NPEAPEAU2@@Z @ 0x18023A1D0 (-ScaleImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUHBITMAP__@@UtagSIZE@@_NPEAPEAU2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreateIconFromStreamWithWIC(HICON *a1, struct IStream *a2, unsigned int a3, __int64 a4, HICON *ppv)
{
  HICON *v7; // r15
  HICON *v8; // rcx
  HRESULT Instance_0; // esi
  bool v11; // r9
  HBITMAP v12; // rbx
  struct IWICBitmapSource *v13; // [rsp+30h] [rbp-10h] BYREF
  struct tagSIZE v14; // [rsp+38h] [rbp-8h]
  HGDIOBJ ho; // [rsp+60h] [rbp+20h] BYREF

  v7 = ppv;
  *ppv = 0LL;
  ppv = a1;
  if ( !a1 || ((*((void (__fastcall **)(HICON *))*a1 + 1))(a1), (v8 = ppv) == 0LL) )
  {
    Instance_0 = CoCreateInstance_0(
                   &CLSID_WICImagingFactory2,
                   0LL,
                   1u,
                   &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70,
                   (LPVOID *)&ppv);
    if ( Instance_0 < 0 )
      goto LABEL_6;
    v8 = ppv;
  }
  v13 = 0LL;
  Instance_0 = LoadImageWithWIC(v8, a2, 2LL, &v13);
  if ( Instance_0 >= 0 )
  {
    ho = 0LL;
    Instance_0 = ConvertWICBitmapToHBITMAP((struct IWICImagingFactory *)ppv, v13, (HBITMAP *)&ho);
    v12 = (HBITMAP)ho;
    if ( Instance_0 >= 0 )
    {
      v14.cx = a3;
      v14.cy = a3;
      ho = 0LL;
      Instance_0 = ScaleImageWithWIC((struct IWICImagingFactory *)ppv, v12, v14, v11, (HBITMAP *)&ho);
      if ( Instance_0 >= 0 )
        Instance_0 = CreateIconFromBitmap(a3, (HBITMAP)ho, v7);
      if ( ho )
        DeleteObject(ho);
    }
    if ( v12 )
      DeleteObject(v12);
  }
  if ( v13 )
    ((void (__fastcall *)(struct IWICBitmapSource *))v13->lpVtbl->Release)(v13);
LABEL_6:
  ATL::CComPtr<IWICImagingFactory>::~CComPtr<IWICImagingFactory>(&ppv);
  return (unsigned int)Instance_0;
}
