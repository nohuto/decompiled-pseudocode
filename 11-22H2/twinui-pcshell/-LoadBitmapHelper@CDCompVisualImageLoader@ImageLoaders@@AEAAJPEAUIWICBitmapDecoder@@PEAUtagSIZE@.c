/*
 * XREFs of ?LoadBitmapHelper@CDCompVisualImageLoader@ImageLoaders@@AEAAJPEAUIWICBitmapDecoder@@PEAUtagSIZE@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18073E310
 * Callers:
 *     ?LoadBitmapByPath@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEBGPEAUtagSIZE@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18073E21C (-LoadBitmapByPath@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEBGPEAUtagSIZE@@PEAPEAUID2D1Bitmap.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006F258 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIApplicationResolver@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIApplicationResolver@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800C29A0 (--I-$ComPtr@UIApplicationResolver@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UIApplicationRes.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ImageLoaders::CDCompVisualImageLoader::LoadBitmapHelper(
        ImageLoaders::CDCompVisualImageLoader *this,
        struct IWICBitmapDecoder *a2,
        struct tagSIZE *a3,
        struct ID2D1Bitmap1 **a4)
{
  struct IWICBitmapDecoderVtbl *lpVtbl; // rax
  HRESULT (__stdcall *GetFrame)(IWICBitmapDecoder *, UINT, IWICBitmapFrameDecode **); // rdi
  __int64 *v10; // rbx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rsi
  __int64 (__fastcall *v14)(__int64, __int64 *); // rdi
  __int64 *v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // rdx
  struct ID2D1Bitmap1 *v21; // rax
  __int64 v23; // [rsp+40h] [rbp-20h] BYREF
  __int64 v24; // [rsp+48h] [rbp-18h] BYREF
  _QWORD v25[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  unsigned int v27; // [rsp+A8h] [rbp+48h] BYREF
  unsigned int v28; // [rsp+B0h] [rbp+50h] BYREF
  struct ID2D1Bitmap1 *v29; // [rsp+B8h] [rbp+58h] BYREF

  *a3 = 0LL;
  *a4 = 0LL;
  lpVtbl = a2->lpVtbl;
  v24 = 0LL;
  GetFrame = lpVtbl->GetFrame;
  v10 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v24, v25);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v10);
  v11 = ((__int64 (__fastcall *)(struct IWICBitmapDecoder *, _QWORD, __int64 *))GetFrame)(a2, 0LL, v10);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v13 = *(_QWORD *)this;
    v23 = 0LL;
    v14 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 80LL);
    v15 = (__int64 *)*Microsoft::WRL::ComPtr<IApplicationResolver>::operator&((__int64)&v23, v25);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(v15);
    v16 = v14(v13, v15);
    v12 = v16;
    if ( v16 < 0 )
    {
      v17 = 100LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (int)"onecoreuap\\shell\\onecore\\libs\\imageloaders\\dcompvisualimageloader.cpp",
        (const char *)(unsigned int)v16);
LABEL_15:
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v23);
      goto LABEL_16;
    }
    v16 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)v23 + 64LL))(
            v23,
            v24,
            &GUID_WICPixelFormat32bppPBGRA,
            0LL,
            0LL,
            0LL,
            1);
    v12 = v16;
    if ( v16 < 0 )
    {
      v17 = 101LL;
      goto LABEL_7;
    }
    v29 = 0LL;
    v18 = *((_QWORD *)this + 1);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v29);
    v19 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct ID2D1Bitmap1 **))(*(_QWORD *)v18 + 464LL))(
            v18,
            v23,
            0LL,
            &v29);
    v12 = v19;
    if ( v19 >= 0 )
    {
      v19 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned int *))(*(_QWORD *)v23 + 24LL))(
              v23,
              &v27,
              &v28);
      v12 = v19;
      if ( v19 >= 0 )
      {
        v25[0] = __PAIR64__(v28, v27);
        *a3 = (struct tagSIZE)__PAIR64__(v28, v27);
        v21 = v29;
        v29 = 0LL;
        v12 = 0;
        *a4 = v21;
        goto LABEL_14;
      }
      v20 = 110LL;
    }
    else
    {
      v20 = 105LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (int)"onecoreuap\\shell\\onecore\\libs\\imageloaders\\dcompvisualimageloader.cpp",
      (const char *)(unsigned int)v19);
LABEL_14:
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v29);
    goto LABEL_15;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x60,
    (int)"onecoreuap\\shell\\onecore\\libs\\imageloaders\\dcompvisualimageloader.cpp",
    (const char *)(unsigned int)v11);
LABEL_16:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
  return v12;
}
