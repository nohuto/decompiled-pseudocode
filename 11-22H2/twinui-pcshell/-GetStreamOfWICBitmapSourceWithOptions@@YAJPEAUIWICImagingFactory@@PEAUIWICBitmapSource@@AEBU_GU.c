/*
 * XREFs of ?GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GUID@@U3@W4EncodingOptions@@PEAPEAUIStream@@@Z @ 0x18048E464
 * Callers:
 *     ?GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@PEAPEAUIWICBitmapSource@@@Z @ 0x18048E1F0 (-GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@.c)
 *     _anonymous_namespace_::GetBitmapStreamFromHICON @ 0x1805481B8 (_anonymous_namespace_--GetBitmapStreamFromHICON.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006F258 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@VRecentAppsCache@Discover@PenWorkspace@@@WRL@Microsoft@@IEBAXXZ @ 0x1800704AC (-InternalAddRef@-$ComPtr@VRecentAppsCache@Discover@PenWorkspace@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18028E190 (_guard_dispatch_icall_nop.c)
 *     ?AddFrameToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapEncoder@@PEAUIWICBitmapSource@@U_GUID@@W4EncodingOptions@@@Z @ 0x18048DE28 (-AddFrameToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapEncoder@@PEAUIWICBitmapSource@@U_.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall GetStreamOfWICBitmapSourceWithOptions(
        void *a1,
        struct IWICBitmapSource *a2,
        __int64 a3,
        struct _GUID *a4,
        char a5,
        IStream *a6)
{
  IStream *v9; // rsi
  int v10; // ebx
  LPVOID v11; // rbx
  __int64 (__fastcall *v12)(LPVOID, __int64, GUID *, __int64 *); // rdi
  IStream *v13; // rcx
  __int64 v15[2]; // [rsp+30h] [rbp-20h] BYREF
  struct _GUID v16; // [rsp+40h] [rbp-10h] BYREF
  LPVOID ppv; // [rsp+80h] [rbp+30h] BYREF

  v9 = a6;
  *(_QWORD *)a6 = 0LL;
  ppv = a1;
  Microsoft::WRL::ComPtr<PenWorkspace::Discover::RecentAppsCache>::InternalAddRef((__int64 *)&ppv);
  if ( ppv
    || (Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv),
        v10 = CoCreateInstance(&CLSID_WICImagingFactory2, 0LL, 1u, &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70, &ppv),
        v10 >= 0) )
  {
    a6 = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&a6);
    a6 = SHCreateMemStream(0LL, 0);
    if ( a6 )
    {
      v15[0] = 0LL;
      v11 = ppv;
      v12 = *(__int64 (__fastcall **)(LPVOID, __int64, GUID *, __int64 *))(*(_QWORD *)ppv + 64LL);
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(v15);
      v10 = v12(v11, a3, &GUID_VendorMicrosoft, v15);
      if ( v10 >= 0 )
      {
        v10 = (*(__int64 (__fastcall **)(__int64, IStream *, __int64))(*(_QWORD *)v15[0] + 24LL))(v15[0], a6, 2LL);
        if ( v10 >= 0 )
        {
          v16 = *a4;
          v10 = AddFrameToWICBitmap((struct IWICImagingFactory *)ppv, v15[0], a2, &v16, a5);
          if ( v10 >= 0 )
          {
            v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15[0] + 88LL))(v15[0]);
            if ( v10 >= 0 )
            {
              v10 = (*(__int64 (__fastcall **)(IStream *, __int64, _QWORD, _QWORD))(*(_QWORD *)a6 + 40LL))(
                      a6,
                      `GetStreamOfWICBitmapSourceWithOptions'::`23'::lnBeginning,
                      0LL,
                      0LL);
              if ( v10 >= 0 )
              {
                v13 = a6;
                if ( a6 )
                {
                  (*(void (__fastcall **)(IStream *))(*(_QWORD *)a6 + 8LL))(a6);
                  v13 = a6;
                }
                *(_QWORD *)v9 = v13;
                v10 = 0;
              }
            }
          }
        }
      }
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(v15);
    }
    else
    {
      v10 = -2147024882;
    }
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&a6);
  }
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
  return (unsigned int)v10;
}
