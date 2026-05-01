/*
 * XREFs of ?Initialize@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEAUID2D1DeviceContext@@PEAUIDCompositionDevice@@@Z @ 0x18073E16C
 * Callers:
 *     _lambda_52bfc6edea7729ed62f4f356328b854f_::operator() @ 0x1802173FC (_lambda_52bfc6edea7729ed62f4f356328b854f_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006F258 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIApplicationResolver@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIApplicationResolver@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800C29A0 (--I-$ComPtr@UIApplicationResolver@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UIApplicationRes.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIDCompositionDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDCompositionDevice@@@Z @ 0x1802D5344 (--4-$ComPtr@UIDCompositionDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDCompositionDevice@@@Z.c)
 *     ??4?$ComPtr@UID2D1DeviceContext@@@WRL@Microsoft@@QEAAAEAV012@PEAUID2D1DeviceContext@@@Z @ 0x18073DD6C (--4-$ComPtr@UID2D1DeviceContext@@@WRL@Microsoft@@QEAAAEAV012@PEAUID2D1DeviceContext@@@Z.c)
 */

__int64 __fastcall ImageLoaders::CDCompVisualImageLoader::Initialize(
        ImageLoaders::CDCompVisualImageLoader *this,
        struct ID2D1DeviceContext *a2,
        struct IDCompositionDevice *a3)
{
  __int64 *ppv; // rbx
  HRESULT Instance; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  ppv = (__int64 *)*Microsoft::WRL::ComPtr<IApplicationResolver>::operator&((__int64)this, &v11);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(ppv);
  Instance = CoCreateInstance(
               &CLSID_WICImagingFactory2,
               0LL,
               1u,
               &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70,
               (LPVOID *)ppv);
  v8 = Instance;
  if ( Instance >= 0 )
  {
    Microsoft::WRL::ComPtr<ID2D1DeviceContext>::operator=((__int64 *)this + 1, (__int64)a2);
    Microsoft::WRL::ComPtr<IDCompositionDevice>::operator=((__int64 *)this + 2, (__int64)a3);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14,
      (int)"onecoreuap\\shell\\onecore\\libs\\imageloaders\\dcompvisualimageloader.cpp",
      (const char *)(unsigned int)Instance);
    return v8;
  }
}
