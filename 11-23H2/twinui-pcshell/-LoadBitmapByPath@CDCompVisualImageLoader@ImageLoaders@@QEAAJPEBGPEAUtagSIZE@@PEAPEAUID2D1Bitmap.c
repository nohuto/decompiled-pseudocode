/*
 * XREFs of ?LoadBitmapByPath@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEBGPEAUtagSIZE@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18073E21C
 * Callers:
 *     ?LoadImageByPath@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEBGPEAUtagSIZE@@PEAPEAUIDCompositionVisual@@@Z @ 0x18073E528 (-LoadImageByPath@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEBGPEAUtagSIZE@@PEAPEAUIDCompositio.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?LoadBitmapHelper@CDCompVisualImageLoader@ImageLoaders@@AEAAJPEAUIWICBitmapDecoder@@PEAUtagSIZE@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18073E310 (-LoadBitmapHelper@CDCompVisualImageLoader@ImageLoaders@@AEAAJPEAUIWICBitmapDecoder@@PEAUtagSIZE@.c)
 */

__int64 __fastcall ImageLoaders::CDCompVisualImageLoader::LoadBitmapByPath(
        ImageLoaders::CDCompVisualImageLoader *this,
        const unsigned __int16 *a2,
        struct tagSIZE *a3,
        struct ID2D1Bitmap1 **a4)
{
  __int64 v5; // rsi
  __int64 (__fastcall *v9)(__int64, const unsigned __int16 *, GUID *, __int64, _DWORD, __int64 *); // rdi
  __int64 *v10; // rbx
  int BitmapHelper; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct IWICBitmapDecoder *v16; // [rsp+70h] [rbp+8h] BYREF
  __int64 v17; // [rsp+80h] [rbp+18h] BYREF

  *a4 = 0LL;
  *a3 = 0LL;
  v5 = *(_QWORD *)this;
  v16 = 0LL;
  v9 = *(__int64 (__fastcall **)(__int64, const unsigned __int16 *, GUID *, __int64, _DWORD, __int64 *))(*(_QWORD *)v5 + 24LL);
  v10 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v16, &v17);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v10);
  BitmapHelper = v9(v5, a2, &GUID_VendorMicrosoftBuiltIn, 0x80000000LL, 0, v10);
  v12 = BitmapHelper;
  if ( BitmapHelper >= 0 )
  {
    BitmapHelper = ImageLoaders::CDCompVisualImageLoader::LoadBitmapHelper(this, v16, a3, a4);
    v12 = BitmapHelper;
    if ( BitmapHelper >= 0 )
    {
      v12 = 0;
      goto LABEL_7;
    }
    v13 = 54LL;
  }
  else
  {
    v13 = 52LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"onecoreuap\\shell\\onecore\\libs\\imageloaders\\dcompvisualimageloader.cpp",
    (const char *)(unsigned int)BitmapHelper);
LABEL_7:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v16);
  return v12;
}
