/*
 * XREFs of ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x180278F5C
 * Callers:
 *     ?TryGetShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@IW4DXGI_MODE_ROTATION@@_N@Z @ 0x18027B394 (-TryGetShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@IW4DXGI_MODE_ROTAT.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800047F0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x18000ECE0 (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 *     ?CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z @ 0x1800165C0 (-CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z.c)
 *     ?FlushD2D@CD2DContext@@UEAAJPEBVID2DContextOwner@@@Z @ 0x180019EF0 (-FlushD2D@CD2DContext@@UEAAJPEBVID2DContextOwner@@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002731C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x1800287A0 (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180029388 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z @ 0x180074A70 (-PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z.c)
 *     ?SetClip@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x180076980 (-SetClip@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180097C78 (--2@YAPEAX_K@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800AEEE0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800AF120 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E359C (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??0?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCD3DDevice@@@Z @ 0x1800FE9F0 (--0-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCD3DDevice@@@Z.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Clear@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBU_D3DCOLORVALUE@@@Z @ 0x180134D40 (-Clear@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ??$make_shared@UShapeData@CCursorState@@$$V@std@@YA?AV?$shared_ptr@UShapeData@CCursorState@@@0@XZ @ 0x180278A50 (--$make_shared@UShapeData@CCursorState@@$$V@std@@YA-AV-$shared_ptr@UShapeData@CCursorState@@@0@X.c)
 *     ??0?$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCSystemMemoryBitmap@@@Z @ 0x180278AB0 (--0-$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCSystemMemoryBit.c)
 *     gsl::final_action__lambda_d4d69d0dd690f9a056e445a8894bc90a___::_final_action__lambda_d4d69d0dd690f9a056e445a8894bc90a___ @ 0x180278C30 (gsl--final_action__lambda_d4d69d0dd690f9a056e445a8894bc90a___--_final_action__lambda_d4d69d0dd69.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z @ 0x180280D9C (-HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z.c)
 *     ?GetWarpDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x18028595C (-GetWarpDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 *     ?GetWarpAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x180285CE8 (-GetWarpAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 *     ?CreateBitmapFromWicBitmap@CD2DContext@@QEAAJPEAUIWICBitmapSource@@PEAPEAUID2D1Bitmap@@@Z @ 0x180285F48 (-CreateBitmapFromWicBitmap@CD2DContext@@QEAAJPEAUIWICBitmapSource@@PEAPEAUID2D1Bitmap@@@Z.c)
 *     ?DrawImage@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_POINT_2F@@@Z @ 0x1802863A0 (-DrawImage@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_POINT_2F@@@Z.c)
 */

_QWORD *__fastcall CCursorState::AddShadowToShape(CDeviceManager *a1, _QWORD *a2, _QWORD **a3)
{
  CD3DDevice *v5; // rcx
  CD3DDevice *v6; // rbx
  CD2DContext *v7; // r12
  struct CD2DEffect *v8; // rdi
  struct ID2D1Effect *v9; // rsi
  struct CD2DEffect *v10; // rdi
  ID2D1Effect *v11; // r14
  struct CD2DEffect *v12; // rdi
  ID2D1Effect *v13; // rdi
  _QWORD *v14; // rax
  CDisplayManager *v15; // rcx
  struct IRenderTargetBitmap *v16; // rsi
  struct IDeviceTarget *v17; // rax
  __int64 v18; // rax
  CSystemMemoryBitmap *v19; // rax
  CSystemMemoryBitmap *v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rax
  bool v24; // cf
  __int64 v25; // rdi
  __int64 v26; // rcx
  struct CD2DEffect *v28; // [rsp+40h] [rbp-79h] BYREF
  struct ID2D1Bitmap *v29; // [rsp+48h] [rbp-71h] BYREF
  struct ID2D1Effect *v30; // [rsp+50h] [rbp-69h] BYREF
  struct IRenderTargetBitmap *v31; // [rsp+58h] [rbp-61h] BYREF
  ID2D1Effect *v32; // [rsp+60h] [rbp-59h] BYREF
  struct D3D11_SUBRESOURCE_DATA v33; // [rsp+68h] [rbp-51h] BYREF
  __int64 v34; // [rsp+78h] [rbp-41h] BYREF
  __int128 v35; // [rsp+80h] [rbp-39h] BYREF
  struct D2D_RECT_F v36; // [rsp+90h] [rbp-29h] BYREF
  int v37; // [rsp+A0h] [rbp-19h]
  char v38; // [rsp+A4h] [rbp-15h]
  __int128 v39; // [rsp+A8h] [rbp-11h] BYREF
  float v40; // [rsp+B8h] [rbp-1h]
  int v41; // [rsp+BCh] [rbp+3h]
  _QWORD v42[2]; // [rsp+C0h] [rbp+7h] BYREF

  *(_QWORD *)&v36.left = 0LL;
  if ( CDeviceManager::GetWarpDevice(a1, (struct CD3DDevice **)&v36) >= 0 )
  {
    v6 = *(CD3DDevice **)&v36.left;
    v30 = 0LL;
    v28 = 0LL;
    v7 = (CD2DContext *)(*(_QWORD *)&v36.left + 16LL);
    if ( (int)CD2DContext::CreateD2DEffect((CD2DContext *)(*(_QWORD *)&v36.left + 16LL), &CLSID_D2D1Shadow, &v28) >= 0 )
    {
      v8 = v28;
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v28 + 10) + 8LL))(*((_QWORD *)v28 + 10));
      v9 = (struct ID2D1Effect *)*((_QWORD *)v8 + 10);
      v30 = v9;
      v32 = 0LL;
      v28 = 0LL;
      if ( v8 )
        (*(void (__fastcall **)(struct CD2DEffect *))(*(_QWORD *)v8 + 16LL))(v8);
      if ( (int)CD2DContext::CreateD2DEffect(v7, &CLSID_D2D12DAffineTransform, &v28) >= 0 )
      {
        v10 = v28;
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v28 + 10) + 8LL))(*((_QWORD *)v28 + 10));
        *(_QWORD *)&v33.SysMemPitch = 0LL;
        v28 = 0LL;
        v11 = (ID2D1Effect *)*((_QWORD *)v10 + 10);
        v32 = v11;
        if ( v10 )
          (*(void (__fastcall **)(struct CD2DEffect *))(*(_QWORD *)v10 + 16LL))(v10);
        if ( (int)CD2DContext::CreateD2DEffect(v7, &CLSID_D2D1Composite, &v28) >= 0 )
        {
          v12 = v28;
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v28 + 10) + 8LL))(*((_QWORD *)v28 + 10));
          v13 = (ID2D1Effect *)*((_QWORD *)v12 + 10);
          v14 = *a3;
          v29 = 0LL;
          *(_QWORD *)&v33.SysMemPitch = v13;
          if ( (int)CD2DContext::CreateBitmapFromWicBitmap(v7, (struct IWICBitmapSource *)v14[3], &v29) >= 0 )
          {
            (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, struct ID2D1Bitmap *, __int64))(*(_QWORD *)v9 + 112LL))(
              v9,
              0LL,
              v29,
              1LL);
            *(float *)&v31 = FLOAT_2_0;
            (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, struct IRenderTargetBitmap **, int))(*(_QWORD *)v9 + 72LL))(
              v9,
              0LL,
              0LL,
              &v31,
              4);
            ID2D1Effect::SetInputEffect(v11, 0, v9);
            v39 = *(_OWORD *)&_xmm;
            v40 = FLOAT_3_0;
            v41 = (int)FLOAT_1_0;
            (*(void (__fastcall **)(ID2D1Effect *, __int64, _QWORD, __int128 *, int))(*(_QWORD *)v11 + 72LL))(
              v11,
              2LL,
              0LL,
              &v39,
              24);
            ID2D1Effect::SetInputEffect(v13, 0, v11);
            (*(void (__fastcall **)(ID2D1Effect *, __int64, struct ID2D1Bitmap *, __int64))(*(_QWORD *)v13 + 112LL))(
              v13,
              1LL,
              v29,
              1LL);
            if ( (*(int (__fastcall **)(_QWORD, struct D3D11_SUBRESOURCE_DATA *, char *))(*(_QWORD *)(*a3)[3] + 24LL))(
                   (*a3)[3],
                   &v33,
                   (char *)&v33.pSysMem + 4) >= 0 )
            {
              LODWORD(v33.pSysMem) += 6;
              HIDWORD(v33.pSysMem) += 4;
              v31 = 0LL;
              LODWORD(v35) = 87;
              *(_QWORD *)((char *)&v35 + 4) = 1LL;
              CDisplayManager::GetWarpAdapterLuid(v15);
              v37 = 0;
              LODWORD(v36.right) = DisplayId::All;
              v36.bottom = 0.0;
              v38 = 0;
              wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&v31);
              DWORD2(v39) = 13;
              *(_QWORD *)&v39 = "Cursor Shadow";
              if ( (int)CD3DDevice::CreateRenderTargetBitmap(
                          v6,
                          (const struct CResourceTag *)&v39,
                          &v33,
                          (const struct PixelFormatInfo *)&v35,
                          (struct RenderTargetInfo *)&v36,
                          1,
                          &v31) < 0
                || (v16 = v31,
                    v17 = (struct IDeviceTarget *)(*(__int64 (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v31 + 64LL))(v31),
                    (int)CD2DContext::PushTarget((unsigned __int64)v7, 0LL, v17) < 0) )
              {
                *a2 = 0LL;
                a2[1] = 0LL;
              }
              else
              {
                wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::com_ptr_t<CD3DDevice,wil::err_returncode_policy>(
                  &v36,
                  (__int64)v6);
                v18 = *(_QWORD *)&v36.left;
                v36.left = 0.0;
                v36.top = 0.0;
                *(_QWORD *)&v39 = v18;
                BYTE8(v39) = 1;
                v36.right = (float)SLODWORD(v33.pSysMem);
                v36.bottom = (float)SHIDWORD(v33.pSysMem);
                CD2DContext::SetClip(v7, 0LL, &v36, D2D1_ANTIALIAS_MODE_ALIASED);
                v36 = 0LL;
                CD2DContext::Clear(v7, 0LL, (const struct _D3DCOLORVALUE *)&v36);
                if ( (int)CD2DContext::DrawImage(v7, 0LL, v13, 0LL) >= 0 )
                {
                  v34 = 0LL;
                  if ( (**(int (__fastcall ***)(struct ID2D1Bitmap *, GUID *, __int64 *))v29)(
                         v29,
                         &GUID_a898a84c_3873_4588_b08b_ebbf978df041,
                         &v34) < 0
                    || (int)CD2DContext::FlushD2D(v7, 0LL) < 0 )
                  {
                    *a2 = 0LL;
                    a2[1] = 0LL;
                  }
                  else
                  {
                    v19 = (CSystemMemoryBitmap *)operator new(0xD8uLL);
                    if ( v19 )
                      v20 = CSystemMemoryBitmap::CSystemMemoryBitmap(v19, 1);
                    else
                      v20 = 0LL;
                    wil::com_ptr_t<CSystemMemoryBitmap,wil::err_returncode_policy>::com_ptr_t<CSystemMemoryBitmap,wil::err_returncode_policy>(
                      &v36,
                      (__int64)v20);
                    v21 = *(_QWORD *)&v36.left;
                    if ( CSystemMemoryBitmap::HrInit(
                           *(CSystemMemoryBitmap **)&v36.left,
                           (unsigned int)v33.pSysMem,
                           HIDWORD(v33.pSysMem),
                           (const struct PixelFormatInfo *)&v35,
                           0) < 0
                      || (v42[1] = v33.pSysMem,
                          v42[0] = 0LL,
                          (*(int (__fastcall **)(struct IRenderTargetBitmap *, _QWORD *, __int64, _QWORD, _DWORD))(*(_QWORD *)v16 + 48LL))(
                            v16,
                            v42,
                            (v21 + 24) & -(__int64)(v21 != 0),
                            0LL,
                            0) < 0) )
                    {
                      *a2 = 0LL;
                      a2[1] = 0LL;
                    }
                    else
                    {
                      std::make_shared<CCursorState::ShapeData,>(&v35);
                      v22 = v35;
                      *(_QWORD *)v35 = **a3;
                      *(_DWORD *)(v22 + 8) = *((_DWORD *)*a3 + 2);
                      *(_DWORD *)(v22 + 12) = *((_DWORD *)*a3 + 3);
                      v23 = v21 + 48;
                      *(_BYTE *)(v22 + 16) = *((_BYTE *)*a3 + 16);
                      v24 = v21 != 0;
                      *(_BYTE *)(v22 + 17) = 1;
                      v25 = *(_QWORD *)(v22 + 24);
                      v26 = v23 & -(__int64)v24;
                      *(_QWORD *)(v22 + 24) = v26;
                      if ( v26 )
                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
                      if ( v25 )
                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
                      a2[1] = *((_QWORD *)&v35 + 1);
                      *a2 = v22;
                    }
                    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v36);
                  }
                  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(&v34);
                }
                else
                {
                  *a2 = 0LL;
                  a2[1] = 0LL;
                }
                gsl::final_action__lambda_d4d69d0dd690f9a056e445a8894bc90a___::_final_action__lambda_d4d69d0dd690f9a056e445a8894bc90a___((CD3DDevice **)&v39);
              }
              wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v31);
            }
            else
            {
              *a2 = 0LL;
              a2[1] = 0LL;
            }
          }
          else
          {
            *a2 = 0LL;
            a2[1] = 0LL;
          }
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v29);
        }
        else
        {
          *a2 = 0LL;
          a2[1] = 0LL;
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v33.SysMemPitch);
      }
      else
      {
        *a2 = 0LL;
        a2[1] = 0LL;
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v32);
    }
    else
    {
      *a2 = 0LL;
      a2[1] = 0LL;
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v30);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v28);
    if ( v6 )
    {
      v5 = v6;
LABEL_46:
      CD3DDevice::Release(v5);
    }
  }
  else
  {
    v5 = *(CD3DDevice **)&v36.left;
    *a2 = 0LL;
    a2[1] = 0LL;
    if ( v5 )
      goto LABEL_46;
  }
  return a2;
}
