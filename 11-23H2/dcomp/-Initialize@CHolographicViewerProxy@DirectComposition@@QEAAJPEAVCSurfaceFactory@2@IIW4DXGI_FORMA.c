/*
 * XREFs of ?Initialize@CHolographicViewerProxy@DirectComposition@@QEAAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@_NIAEBU_GUID@@I@Z @ 0x1800E7D48
 * Callers:
 *     ?CreateHolographicViewerCore@CDevice@DirectComposition@@AEAAJIIW4DXGI_FORMAT@@_NIAEBU_GUID@@IPEAPEAUIDCompositionHolographicViewer@@@Z @ 0x18010003C (-CreateHolographicViewerCore@CDevice@DirectComposition@@AEAAJIIW4DXGI_FORMAT@@_NIAEBU_GUID@@IPEA.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?SetHandleProperty@CResourceProxy@DirectComposition@@QEAAJIPEAX@Z @ 0x18001A23C (-SetHandleProperty@CResourceProxy@DirectComposition@@QEAAJIPEAX@Z.c)
 *     ?SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z @ 0x180032AEC (-SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z.c)
 *     ??$ReleaseInterface@UID3D11Texture2D@@@@YAXAEAPEAUID3D11Texture2D@@@Z @ 0x180038AD0 (--$ReleaseInterface@UID3D11Texture2D@@@@YAXAEAPEAUID3D11Texture2D@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18005F634 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z @ 0x180063770 (-SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180073310 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ReleaseInterface@UIDXGIResource@@@@YAXAEAPEAUIDXGIResource@@@Z @ 0x1800E7B48 (--$ReleaseInterface@UIDXGIResource@@@@YAXAEAPEAUIDXGIResource@@@Z.c)
 *     ?CreateTexture@CDxDevice@DirectComposition@@QEAAJAEBUD3D11_TEXTURE2D_DESC@@_NPEAPEAUID3D11Texture2D@@@Z @ 0x1800F761C (-CreateTexture@CDxDevice@DirectComposition@@QEAAJAEBUD3D11_TEXTURE2D_DESC@@_NPEAPEAUID3D11Textur.c)
 */

__int64 __fastcall DirectComposition::CHolographicViewerProxy::Initialize(
        DirectComposition::CHolographicViewerProxy *this,
        struct DirectComposition::CSurfaceFactory *a2,
        UINT a3,
        UINT a4,
        enum DXGI_FORMAT a5,
        bool a6,
        unsigned int a7,
        struct _GUID *a8,
        unsigned int a9)
{
  UINT v9; // ebx
  unsigned int v12; // r14d
  unsigned int v13; // r15d
  HANDLE EventW; // rax
  signed int LastError; // eax
  signed int v16; // ebx
  unsigned int v17; // edx
  int v18; // ecx
  unsigned int v19; // edi
  unsigned int i; // esi
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // r8
  __int64 v26; // rdx
  int v27; // eax
  DirectComposition::CHolographicViewerProxy *v28; // r12
  __int64 (__fastcall ***v29)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v30)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v31; // rbx
  __int64 (__fastcall *v32)(__int64, __int64 *); // rdi
  void *v33; // rbx
  __int64 (__fastcall *v34)(void *, __int64, _QWORD, _QWORD, _QWORD, int, _QWORD, int, _QWORD, void **, char *); // rsi
  __int64 *v35; // rdi
  __int64 v36; // rsi
  __int64 v40; // [rsp+68h] [rbp-98h] BYREF
  struct ID3D11Texture2D *v41; // [rsp+70h] [rbp-90h] BYREF
  __int64 v42; // [rsp+78h] [rbp-88h] BYREF
  void *ppFactory; // [rsp+80h] [rbp-80h] BYREF
  __int64 v44; // [rsp+88h] [rbp-78h] BYREF
  __int128 v45; // [rsp+90h] [rbp-70h] BYREF
  __int64 v46; // [rsp+A0h] [rbp-60h]
  unsigned int v47; // [rsp+A8h] [rbp-58h]
  __int128 v48; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v49; // [rsp+C0h] [rbp-40h]
  unsigned int v50; // [rsp+C8h] [rbp-38h]
  DirectComposition::CHolographicViewerProxy *v51; // [rsp+D0h] [rbp-30h]
  void *v52; // [rsp+D8h] [rbp-28h] BYREF
  void *v53; // [rsp+E0h] [rbp-20h]
  D3D11_TEXTURE2D_DESC v54; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v55[296]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v56[8]; // [rsp+248h] [rbp+148h] BYREF

  v9 = a4;
  v53 = a8;
  v51 = this;
  v49 = 0LL;
  v50 = 0;
  v46 = 0LL;
  v47 = 0;
  v12 = 0;
  v40 = 0LL;
  v13 = 0;
  ppFactory = 0LL;
  v42 = 0LL;
  v48 = 0LL;
  v45 = 0LL;
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)this + 2) = EventW;
  if ( !EventW )
  {
    LastError = GetLastError();
    v16 = LastError;
    if ( LastError > 0 )
      v16 = (unsigned __int16)LastError | 0x80070000;
    if ( v16 < 0 )
    {
      v17 = 77;
      v18 = v16;
      goto LABEL_52;
    }
    v9 = a4;
  }
  v19 = 4;
  if ( a7 )
    v19 = a7;
  for ( i = 0; i < v19; ++i )
  {
    v41 = 0LL;
    v54.CPUAccessFlags = 0;
    v54.Width = a3;
    v54.Height = v9;
    v54.MipLevels = 1;
    v54.SampleDesc.Quality = 0;
    v54.Usage = D3D11_USAGE_DEFAULT;
    v54.ArraySize = a6 + 1;
    v54.Format = a5;
    v54.SampleDesc.Count = 1;
    v54.BindFlags = 40;
    v54.MiscFlags = 2050;
    v21 = DirectComposition::CDxDevice::CreateTexture(
            (DirectComposition::CDxDevice *)(((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL)),
            &v54,
            0,
            &v41);
    v16 = v21;
    if ( v21 < 0 )
    {
      v17 = 90;
      goto LABEL_51;
    }
    v22 = v12 + 1;
    if ( (unsigned int)v22 >= v12 )
    {
      if ( (unsigned int)v22 > HIDWORD(v49) )
      {
        v24 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v48, 8u, v22, &v41);
        if ( v24 < 0 )
          DoStackCaptureDirect(v24, 0xC0u);
        v12 = v50;
      }
      else
      {
        v23 = v12++;
        v50 = v22;
        *(_QWORD *)(v48 + 8 * v23) = v41;
      }
    }
    else
    {
      DoStackCaptureDirect(-2147024362, 0xB5u);
    }
    v21 = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, GUID *, __int64 *))v41->lpVtbl->QueryInterface)(
            v41,
            &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
            &v44);
    v16 = v21;
    if ( v21 < 0 )
    {
      v17 = 96;
      goto LABEL_51;
    }
    v25 = v13 + 1;
    if ( (unsigned int)v25 >= v13 )
    {
      if ( (unsigned int)v25 > HIDWORD(v46) )
      {
        v27 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v45, 8u, v25, &v44);
        if ( v27 < 0 )
          DoStackCaptureDirect(v27, 0xC0u);
        v13 = v47;
      }
      else
      {
        v26 = v13++;
        v47 = v25;
        *(_QWORD *)(v45 + 8 * v26) = v44;
      }
    }
    else
    {
      DoStackCaptureDirect(-2147024362, 0xB5u);
    }
    ReleaseInterface<IDXGIResource>(&v44);
    v9 = a4;
  }
  v28 = v51;
  v29 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)a2 + 4);
  v30 = **v29;
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v40);
  v21 = v30(v29, &GUID_54ec77fa_1377_44e6_8c32_88fd5f44c84c, &v40);
  v16 = v21;
  if ( v21 < 0 )
  {
    v17 = 104;
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&ppFactory);
    v21 = CreateDXGIFactory2(0, &GUID_b14887d9_f537_4af5_b379_7d33031be773, &ppFactory);
    v16 = v21;
    if ( v21 < 0 )
    {
      v17 = 105;
    }
    else
    {
      v31 = v40;
      v32 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v40 + 56LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v42);
      v21 = v32(v31, &v42);
      v16 = v21;
      if ( v21 < 0 )
      {
        v17 = 106;
      }
      else
      {
        v21 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v42 + 64LL))(v42, v55);
        v16 = v21;
        if ( v21 < 0 )
        {
          v17 = 107;
        }
        else
        {
          v33 = ppFactory;
          v34 = *(__int64 (__fastcall **)(void *, __int64, _QWORD, _QWORD, _QWORD, int, _QWORD, int, _QWORD, void **, char *))(*(_QWORD *)ppFactory + 24LL);
          Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)v28 + 3);
          v21 = v34(v33, v40, v13, v45, *((_QWORD *)v28 + 2), 8, 0LL, 0x10000000, 0LL, &v52, (char *)v28 + 24);
          v16 = v21;
          if ( v21 < 0 )
          {
            v17 = 123;
          }
          else
          {
            v21 = DirectComposition::CResourceProxy::SetScalarIntegerProperty(
                    (DirectComposition::CHolographicViewerProxy *)((char *)v28 + 8),
                    0,
                    a3);
            v16 = v21;
            if ( v21 < 0 )
            {
              v17 = 126;
            }
            else
            {
              v21 = DirectComposition::CResourceProxy::SetScalarIntegerProperty(
                      (DirectComposition::CHolographicViewerProxy *)((char *)v28 + 8),
                      1,
                      a4);
              v16 = v21;
              if ( v21 < 0 )
              {
                v17 = 127;
              }
              else
              {
                v21 = DirectComposition::CResourceProxy::SetBufferProperty(
                        (DirectComposition::CHolographicViewerProxy *)((char *)v28 + 8),
                        2,
                        v56,
                        8uLL);
                v16 = v21;
                if ( v21 < 0 )
                {
                  v17 = 128;
                }
                else
                {
                  v21 = DirectComposition::CResourceProxy::SetHandleProperty(
                          (DirectComposition::CHolographicViewerProxy *)((char *)v28 + 8),
                          3u,
                          v52);
                  v16 = v21;
                  if ( v21 < 0 )
                  {
                    v17 = 129;
                  }
                  else
                  {
                    v21 = DirectComposition::CResourceProxy::SetBufferProperty(
                            (DirectComposition::CHolographicViewerProxy *)((char *)v28 + 8),
                            4,
                            v53,
                            0x10uLL);
                    v16 = v21;
                    if ( v21 < 0 )
                    {
                      v17 = 130;
                    }
                    else
                    {
                      v21 = DirectComposition::CResourceProxy::SetScalarIntegerProperty(
                              (DirectComposition::CHolographicViewerProxy *)((char *)v28 + 8),
                              5,
                              a9);
                      v16 = v21;
                      if ( v21 >= 0 )
                        goto LABEL_53;
                      v17 = 131;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_51:
  v18 = v21;
LABEL_52:
  DoStackCaptureDirect(v18, v17);
LABEL_53:
  if ( v12 )
  {
    v35 = (__int64 *)v48;
    v36 = v12;
    do
    {
      ReleaseInterface<ID3D11Texture2D>(v35++);
      --v36;
    }
    while ( v36 );
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v42);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&ppFactory);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v40);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)&v45);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)&v48);
  return (unsigned int)v16;
}
