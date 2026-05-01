/*
 * XREFs of ?LoadImageByPath@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEBGPEAUtagSIZE@@PEAPEAUIDCompositionVisual@@@Z @ 0x1805E9E80
 * Callers:
 *     _lambda_53dc6f5411cb2511b6cb0ef5cd4a893d_::operator() @ 0x1801B6B30 (_lambda_53dc6f5411cb2511b6cb0ef5cd4a893d_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateVisualFromBitmap@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEAUID2D1Bitmap1@@AEBUtagSIZE@@PEAPEAUIDCompositionVisual@@@Z @ 0x1805E9724 (-CreateVisualFromBitmap@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEAUID2D1Bitmap1@@AEBUtagSIZE.c)
 *     ?LoadBitmapByPath@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEBGPEAUtagSIZE@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1805E9B74 (-LoadBitmapByPath@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEBGPEAUtagSIZE@@PEAPEAUID2D1Bitmap.c)
 */

__int64 __fastcall ImageLoaders::CDCompVisualImageLoader::LoadImageByPath(
        ImageLoaders::CDCompVisualImageLoader *this,
        const unsigned __int16 *a2,
        struct tagSIZE *a3,
        struct IDCompositionVisual **a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  __int64 *v10; // rbx
  int v11; // eax
  struct IDCompositionVisual *v12; // rax
  struct tagSIZE v14; // [rsp+20h] [rbp-10h] BYREF
  __int64 v15; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IDCompositionVisual *v17; // [rsp+60h] [rbp+30h] BYREF
  struct ID2D1Bitmap1 *v18; // [rsp+68h] [rbp+38h] BYREF

  *a4 = 0LL;
  *a3 = 0LL;
  v18 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v18);
  v8 = ImageLoaders::CDCompVisualImageLoader::LoadBitmapByPath(this, a2, &v14, &v18);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v17 = 0LL;
    v10 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v17, &v15);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v10);
    v11 = ImageLoaders::CDCompVisualImageLoader::CreateVisualFromBitmap(
            this,
            v18,
            &v14,
            (struct IDCompositionVisual **)v10);
    v9 = v11;
    if ( v11 >= 0 )
    {
      v12 = v17;
      v17 = 0LL;
      *a4 = v12;
      v9 = 0;
      *a3 = v14;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x24,
        (__int64)"onecoreuap\\shell\\onecore\\libs\\imageloaders\\dcompvisualimageloader.cpp",
        (const char *)(unsigned int)v11);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v17);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21,
      (__int64)"onecoreuap\\shell\\onecore\\libs\\imageloaders\\dcompvisualimageloader.cpp",
      (const char *)(unsigned int)v8);
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v18);
  return v9;
}
