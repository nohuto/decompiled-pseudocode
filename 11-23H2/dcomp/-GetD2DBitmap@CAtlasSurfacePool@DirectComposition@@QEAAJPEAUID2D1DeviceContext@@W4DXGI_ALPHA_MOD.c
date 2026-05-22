/*
 * XREFs of ?GetD2DBitmap@CAtlasSurfacePool@DirectComposition@@QEAAJPEAUID2D1DeviceContext@@W4DXGI_ALPHA_MODE@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800E9960
 * Callers:
 *     ?GetD2DCommandList@CPrimitiveGroup@DirectComposition@@IEAAJPEAUID2D1DeviceContext@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x1800FA130 (-GetD2DCommandList@CPrimitiveGroup@DirectComposition@@IEAAJPEAUID2D1DeviceContext@@PEAPEAUID2D1P.c)
 * Callees:
 *     ??$ReleaseInterface@UID3D11Device1@@@@YAXAEAPEAUID3D11Device1@@@Z @ 0x18001B210 (--$ReleaseInterface@UID3D11Device1@@@@YAXAEAPEAUID3D11Device1@@@Z.c)
 *     ??1SwapDeviceContextState@DirectComposition@@QEAA@XZ @ 0x180035000 (--1SwapDeviceContextState@DirectComposition@@QEAA@XZ.c)
 *     ??$ReleaseInterface@UIUnknown@@@@YAXAEAPEAUIUnknown@@@Z @ 0x180038A94 (--$ReleaseInterface@UIUnknown@@@@YAXAEAPEAUIUnknown@@@Z.c)
 *     ??$ReleaseInterface@UID3D11Texture2D@@@@YAXAEAPEAUID3D11Texture2D@@@Z @ 0x180038AD0 (--$ReleaseInterface@UID3D11Texture2D@@@@YAXAEAPEAUID3D11Texture2D@@@Z.c)
 *     ??$ReleaseInterface@UID2D1Bitmap1@@@@YAXAEAPEAUID2D1Bitmap1@@@Z @ 0x180038B6C (--$ReleaseInterface@UID2D1Bitmap1@@@@YAXAEAPEAUID2D1Bitmap1@@@Z.c)
 *     ??$ReleaseInterface@UIDXGIDevice@@@@YAXAEAPEAUIDXGIDevice@@@Z @ 0x18008BF74 (--$ReleaseInterface@UIDXGIDevice@@@@YAXAEAPEAUIDXGIDevice@@@Z.c)
 *     ??$ReleaseInterface@UID2D1Device2@@@@YAXAEAPEAUID2D1Device2@@@Z @ 0x18008CE90 (--$ReleaseInterface@UID2D1Device2@@@@YAXAEAPEAUID2D1Device2@@@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??0SwapDeviceContextState@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z @ 0x18009B9F4 (--0SwapDeviceContextState@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ReleaseInterface@UIDXGIResource@@@@YAXAEAPEAUIDXGIResource@@@Z @ 0x1800E7B48 (--$ReleaseInterface@UIDXGIResource@@@@YAXAEAPEAUIDXGIResource@@@Z.c)
 *     ??$ReleaseInterface@UIDXGIAdapter@@@@YAXAEAPEAUIDXGIAdapter@@@Z @ 0x1800E950C (--$ReleaseInterface@UIDXGIAdapter@@@@YAXAEAPEAUIDXGIAdapter@@@Z.c)
 *     ??$ReleaseInterface@UIDXGIKeyedMutex@@@@YAXAEAPEAUIDXGIKeyedMutex@@@Z @ 0x1800E9548 (--$ReleaseInterface@UIDXGIKeyedMutex@@@@YAXAEAPEAUIDXGIKeyedMutex@@@Z.c)
 *     ??$ReleaseInterface@UIDXGISurface@@@@YAXAEAPEAUIDXGISurface@@@Z @ 0x1800E9584 (--$ReleaseInterface@UIDXGISurface@@@@YAXAEAPEAUIDXGISurface@@@Z.c)
 *     ?CopySurface@CAtlasSurfacePool@DirectComposition@@QEAAXPEAUID3D11Resource@@IIAEBUtagRECT@@@Z @ 0x1800E9778 (-CopySurface@CAtlasSurfacePool@DirectComposition@@QEAAXPEAUID3D11Resource@@IIAEBUtagRECT@@@Z.c)
 *     ?GetD2DBitmap@CAtlasSurfacePool@DirectComposition@@AEAAJW4DXGI_ALPHA_MODE@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800E985C (-GetD2DBitmap@CAtlasSurfacePool@DirectComposition@@AEAAJW4DXGI_ALPHA_MODE@@PEAPEAUID2D1Bitmap1@@.c)
 *     ?CreateTexture@CDxDevice@DirectComposition@@QEAAJAEBUD3D11_TEXTURE2D_DESC@@_NPEAPEAUID3D11Texture2D@@@Z @ 0x1800F761C (-CreateTexture@CDxDevice@DirectComposition@@QEAAJAEBUD3D11_TEXTURE2D_DESC@@_NPEAPEAUID3D11Textur.c)
 */

__int64 __fastcall DirectComposition::CAtlasSurfacePool::GetD2DBitmap(
        DirectComposition::CAtlasSurfacePool *this,
        struct ID2D1DeviceContext *a2,
        enum DXGI_ALPHA_MODE a3,
        struct ID2D1Bitmap1 **a4)
{
  __int64 v8; // rax
  int (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rbx
  int D2DBitmap; // ebx
  __int64 v11; // rcx
  __int64 v12; // rdx
  DXGI_FORMAT v13; // r8d
  bool v14; // cf
  UINT v15; // eax
  __int64 v16; // rcx
  struct ID3D11Resource *v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  UINT v21; // eax
  int v22; // eax
  struct ID3D11Texture2D *v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v27; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+48h] [rbp-B8h] BYREF
  struct ID3D11Texture2D *v29; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+68h] [rbp-98h] BYREF
  __int64 v33; // [rsp+70h] [rbp-90h] BYREF
  __int64 (__fastcall ***v34)(_QWORD, GUID *, struct ID3D11Texture2D **); // [rsp+78h] [rbp-88h] BYREF
  __int64 v35; // [rsp+80h] [rbp-80h] BYREF
  __int64 v36; // [rsp+88h] [rbp-78h] BYREF
  struct tagRECT v37; // [rsp+90h] [rbp-70h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-60h]
  unsigned int v39; // [rsp+A8h] [rbp-58h]
  __int128 v40; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v41; // [rsp+C0h] [rbp-40h] BYREF
  struct ID3D11Texture2D *v42; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v43; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v44; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v45; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD v46[6]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v47; // [rsp+100h] [rbp+0h]
  const struct DirectComposition::CDxDevice *v48[2]; // [rsp+108h] [rbp+8h] BYREF
  struct D3D11_TEXTURE2D_DESC v49; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v50[296]; // [rsp+150h] [rbp+50h] BYREF
  int v51; // [rsp+278h] [rbp+178h]
  int v52; // [rsp+27Ch] [rbp+17Ch]
  _BYTE v53[296]; // [rsp+280h] [rbp+180h] BYREF
  int v54; // [rsp+3A8h] [rbp+2A8h]
  int v55; // [rsp+3ACh] [rbp+2ACh]

  v8 = *(_QWORD *)a2;
  v9 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)(*((_QWORD *)this + 18) + 128LL) + 88LL);
  v33 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  (*(void (__fastcall **)(struct ID2D1DeviceContext *, __int64 *))(v8 + 584))(a2, &v33);
  *a4 = 0LL;
  if ( !v9 || (**v9)(v9, &GUID_00000000_0000_0000_c000_000000000046, &v31) >= 0 )
    (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v33)(v33, &GUID_00000000_0000_0000_c000_000000000046, &v32);
  if ( v31 == v32 )
  {
    D2DBitmap = DirectComposition::CAtlasSurfacePool::GetD2DBitmap(this, a3, a4);
  }
  else
  {
    ReleaseInterface<IUnknown>(&v31);
    ReleaseInterface<IUnknown>(&v32);
    v35 = 0LL;
    v30 = 0LL;
    v36 = 0LL;
    v43 = 0LL;
    v44 = 0LL;
    v45 = 0LL;
    memset_0(v53, 0, 0x130uLL);
    memset_0(v50, 0, 0x130uLL);
    D2DBitmap = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 4))(
                  *((_QWORD *)this + 4),
                  &GUID_cafcb56c_6ac3_4889_bf47_9e23bbd260ec,
                  &v36);
    if ( D2DBitmap >= 0 )
    {
      D2DBitmap = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v36 + 56LL))(
                    v36,
                    &GUID_54ec77fa_1377_44e6_8c32_88fd5f44c84c,
                    &v35);
      if ( D2DBitmap >= 0 )
      {
        D2DBitmap = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v33)(
                      v33,
                      &GUID_a44472e1_8dfb_4e60_8492_6e2861c9ca8b,
                      &v43);
        if ( D2DBitmap >= 0 )
        {
          D2DBitmap = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v43 + 112LL))(v43, &v30);
          if ( D2DBitmap >= 0 )
          {
            D2DBitmap = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v35)(
                          v35,
                          &GUID_00000000_0000_0000_c000_000000000046,
                          &v31);
            if ( D2DBitmap >= 0 )
            {
              D2DBitmap = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v30)(
                            v30,
                            &GUID_00000000_0000_0000_c000_000000000046,
                            &v32);
              if ( D2DBitmap >= 0 )
              {
                D2DBitmap = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v35 + 56LL))(v35, &v44);
                if ( D2DBitmap >= 0 )
                {
                  D2DBitmap = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v30 + 56LL))(v30, &v45);
                  if ( D2DBitmap >= 0 )
                  {
                    D2DBitmap = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v44 + 64LL))(v44, v53);
                    if ( D2DBitmap >= 0 )
                    {
                      D2DBitmap = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v45 + 64LL))(v45, v50);
                      if ( D2DBitmap >= 0 )
                      {
                        v11 = *(_QWORD *)(*((_QWORD *)this + 18) + 128LL);
                        if ( *(_QWORD *)(v11 + 40) )
                        {
                          DirectComposition::SwapDeviceContextState::SwapDeviceContextState(
                            v48,
                            (DirectComposition::CDevice **)((v11 + 8) & -(__int64)(v11 != 0)));
                          v12 = *((_QWORD *)this + 18);
                          v13 = *((_DWORD *)this + 40);
                          v46[0] = v13;
                          v46[1] = a3;
                          v46[2] = 1119879168;
                          v46[3] = 1119879168;
                          v14 = *(_BYTE *)(*(_QWORD *)(v12 + 128) + 104LL) != 0;
                          v47 = 0LL;
                          v46[4] = v14 ? 3 : 1;
                          if ( v54 == v51 && v55 == v52 )
                          {
                            v49.Width = *((_DWORD *)this + 38);
                            v15 = *((_DWORD *)this + 39);
                            v49.Format = v13;
                            v49.Height = v15;
                            v41 = 0LL;
                            *(_QWORD *)&v40 = 0LL;
                            v34 = 0LL;
                            v28 = 0LL;
                            v29 = 0LL;
                            v27 = 0LL;
                            v49.SampleDesc = (DXGI_SAMPLE_DESC)1LL;
                            v49.CPUAccessFlags = 0;
                            v49.MipLevels = 1;
                            v49.ArraySize = 1;
                            v49.Usage = D3D11_USAGE_DEFAULT;
                            v49.MiscFlags = 256;
                            v49.BindFlags = 40;
                            v16 = *(_QWORD *)(v12 + 128);
                            v42 = 0LL;
                            D2DBitmap = DirectComposition::CDxDevice::CreateTexture(
                                          (DirectComposition::CDxDevice *)(v16 + 8),
                                          &v49,
                                          0,
                                          &v42);
                            if ( D2DBitmap >= 0 )
                            {
                              v17 = (struct ID3D11Resource *)v42;
                              D2DBitmap = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, GUID *, __int64 *))v42->lpVtbl->QueryInterface)(
                                            v42,
                                            &GUID_9d8e1289_d7b3_465f_8126_250e349af85d,
                                            &v28);
                              if ( D2DBitmap >= 0 )
                              {
                                D2DBitmap = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v28 + 64LL))(
                                              v28,
                                              0LL,
                                              0xFFFFFFFFLL);
                                if ( D2DBitmap >= 0 )
                                {
                                  v37.right = v49.Width;
                                  v37.bottom = v49.Height;
                                  *(_QWORD *)&v37.left = 0LL;
                                  DirectComposition::CAtlasSurfacePool::CopySurface(
                                    this,
                                    v17,
                                    0,
                                    0,
                                    (struct ID3D11Resource *)&v37);
                                  D2DBitmap = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 72LL))(
                                                v28,
                                                1LL);
                                  if ( D2DBitmap >= 0 )
                                  {
                                    D2DBitmap = ((__int64 (__fastcall *)(struct ID3D11Resource *, GUID *, __int64 *))v17->lpVtbl->QueryInterface)(
                                                  v17,
                                                  &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
                                                  &v41);
                                    if ( D2DBitmap >= 0 )
                                    {
                                      D2DBitmap = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v41 + 64LL))(
                                                    v41,
                                                    &v27);
                                      if ( D2DBitmap >= 0 )
                                      {
                                        D2DBitmap = (**(__int64 (__fastcall ***)(__int64, GUID *, __int128 *))v30)(
                                                      v30,
                                                      &GUID_a04bfb29_08ef_43d6_a49c_a9bdbdcbe686,
                                                      &v40);
                                        if ( D2DBitmap >= 0 )
                                        {
                                          D2DBitmap = (*(__int64 (__fastcall **)(_QWORD, __int64, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, struct ID3D11Texture2D **)))(*(_QWORD *)v40 + 224LL))(
                                                        v40,
                                                        v27,
                                                        &GUID_cafcb56c_6ac3_4889_bf47_9e23bbd260ec,
                                                        &v34);
                                          if ( D2DBitmap >= 0 )
                                          {
                                            D2DBitmap = (**v34)(v34, &GUID_9d8e1289_d7b3_465f_8126_250e349af85d, &v29);
                                            if ( D2DBitmap >= 0 )
                                            {
                                              D2DBitmap = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, __int64, __int64))v29->lpVtbl->SetEvictionPriority)(
                                                            v29,
                                                            1LL,
                                                            0xFFFFFFFFLL);
                                              if ( D2DBitmap >= 0 )
                                                D2DBitmap = (*(__int64 (__fastcall **)(struct ID2D1DeviceContext *, __int64 (__fastcall ***)(_QWORD, GUID *, struct ID3D11Texture2D **), _DWORD *, struct ID2D1Bitmap1 **))(*(_QWORD *)a2 + 496LL))(
                                                              a2,
                                                              v34,
                                                              v46,
                                                              a4);
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            ReleaseInterface<IDXGIResource>(&v41);
                            ReleaseInterface<ID3D11Texture2D>((__int64 *)&v42);
                            ReleaseInterface<ID3D11Device1>((__int64 *)&v40);
                            ReleaseInterface<IDXGISurface>((__int64 *)&v34);
                            ReleaseInterface<IDXGIKeyedMutex>(&v28);
                            ReleaseInterface<IDXGIKeyedMutex>((__int64 *)&v29);
                          }
                          else
                          {
                            v18 = *(_QWORD *)(v12 + 128);
                            if ( *(_QWORD *)(v18 + 64) )
                            {
                              v37.left = 13;
                              v28 = 0LL;
                              D2DBitmap = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v36)(
                                            v36,
                                            &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
                                            &v28);
                              if ( D2DBitmap >= 0 )
                              {
                                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 80LL))(v28, 2013265920LL);
                                v19 = *((_QWORD *)this + 18);
                                v37.top = 0;
                                *(_QWORD *)&v37.right = 1LL;
                                v38 = 0LL;
                                v39 = 0;
                                D2DBitmap = (*(__int64 (__fastcall **)(_QWORD, struct tagRECT *))(**(_QWORD **)(*(_QWORD *)(v19 + 128) + 64LL)
                                                                                                + 24LL))(
                                              *(_QWORD *)(*(_QWORD *)(v19 + 128) + 64LL),
                                              &v37);
                                if ( D2DBitmap >= 0 )
                                {
                                  v27 = *((_QWORD *)this + 19);
                                  D2DBitmap = (*(__int64 (__fastcall **)(struct ID2D1DeviceContext *, __int64, __int64, _QWORD, _DWORD *, struct ID2D1Bitmap1 **))(*(_QWORD *)a2 + 456LL))(
                                                a2,
                                                v27,
                                                v38,
                                                v39,
                                                v46,
                                                a4);
                                }
                              }
                              if ( v38 )
                              {
                                v27 = 14LL;
                                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 80LL))(v28, 2013265920LL);
                                v20 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 18) + 128LL) + 64LL);
                                D2DBitmap = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 24LL))(
                                              v20,
                                              &v27);
                              }
                              ReleaseInterface<IDXGIResource>(&v28);
                            }
                            else
                            {
                              v49.Width = *((_DWORD *)this + 38);
                              v21 = *((_DWORD *)this + 39);
                              v49.Format = v13;
                              v49.Height = v21;
                              v29 = 0LL;
                              v40 = 0LL;
                              v49.SampleDesc = (DXGI_SAMPLE_DESC)1LL;
                              *(_QWORD *)&v49.Usage = 3LL;
                              *(_QWORD *)&v49.CPUAccessFlags = 0x20000LL;
                              v49.MipLevels = 1;
                              v49.ArraySize = 1;
                              v22 = DirectComposition::CDxDevice::CreateTexture(
                                      (DirectComposition::CDxDevice *)(v18 + 8),
                                      &v49,
                                      0,
                                      &v29);
                              v23 = v29;
                              D2DBitmap = v22;
                              if ( v22 >= 0 )
                              {
                                v37.right = v49.Width;
                                v37.bottom = v49.Height;
                                *(_QWORD *)&v37.left = 0LL;
                                DirectComposition::CAtlasSurfacePool::CopySurface(
                                  this,
                                  (struct ID3D11Resource *)v29,
                                  0,
                                  0,
                                  (struct ID3D11Resource *)&v37);
                                v24 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 18) + 128LL) + 80LL);
                                D2DBitmap = (*(__int64 (__fastcall **)(__int64, struct ID3D11Texture2D *, _QWORD, __int64, _DWORD, __int128 *))(*(_QWORD *)v24 + 112LL))(
                                              v24,
                                              v23,
                                              0LL,
                                              1LL,
                                              0,
                                              &v40);
                                if ( D2DBitmap >= 0 )
                                {
                                  v27 = *((_QWORD *)this + 19);
                                  D2DBitmap = (*(__int64 (__fastcall **)(struct ID2D1DeviceContext *, __int64, _QWORD, _QWORD, _DWORD *, struct ID2D1Bitmap1 **))(*(_QWORD *)a2 + 456LL))(
                                                a2,
                                                v27,
                                                v40,
                                                DWORD2(v40),
                                                v46,
                                                a4);
                                }
                              }
                              if ( (_QWORD)v40 )
                              {
                                v25 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 18) + 128LL) + 80LL);
                                (*(void (__fastcall **)(__int64, struct ID3D11Texture2D *, _QWORD))(*(_QWORD *)v25
                                                                                                  + 120LL))(
                                  v25,
                                  v23,
                                  0LL);
                              }
                              ReleaseInterface<ID3D11Texture2D>((__int64 *)&v29);
                            }
                          }
                          DirectComposition::SwapDeviceContextState::~SwapDeviceContextState((DirectComposition::SwapDeviceContextState *)v48);
                        }
                        else
                        {
                          D2DBitmap = -2147467262;
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
    }
    ReleaseInterface<IDXGIDevice>(&v35);
    ReleaseInterface<IDXGIDevice>(&v30);
    ReleaseInterface<IDXGISurface>(&v36);
    ReleaseInterface<ID2D1Device2>(&v43);
    ReleaseInterface<IDXGIAdapter>(&v44);
    ReleaseInterface<IDXGIAdapter>(&v45);
  }
  ReleaseInterface<IUnknown>(&v31);
  ReleaseInterface<IUnknown>(&v32);
  if ( v33 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    v33 = 0LL;
  }
  if ( D2DBitmap < 0 )
    ReleaseInterface<ID2D1Bitmap1>((__int64 *)a4);
  return (unsigned int)D2DBitmap;
}
