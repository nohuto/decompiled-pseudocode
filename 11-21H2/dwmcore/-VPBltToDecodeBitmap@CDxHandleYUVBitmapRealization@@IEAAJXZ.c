/*
 * XREFs of ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1802A6358
 * Callers:
 *     ?GetDeviceTexture@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180116222 (-GetDeviceTexture@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTextur.c)
 *     ?GetD2DBitmap@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802A56EC (-GetD2DBitmap@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@.c)
 * Callees:
 *     ?CalcImageTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z @ 0x1800093A4 (-CalcImageTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z.c)
 *     ?CalcSourceRect@CBitmapRealization@@QEBAAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18000D0C4 (-CalcSourceRect@CBitmapRealization@@QEBAAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectU.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180089D54 (-IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1800AD824 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?Transform2DBounds@CMILMatrix@@QEBAXAEBUtagRECT@@AEAU2@@Z @ 0x180260F8C (-Transform2DBounds@CMILMatrix@@QEBAXAEBUtagRECT@@AEAU2@@Z.c)
 *     ?GetAdapterLuid@CDxHandleYUVBitmapRealization@@UEBA?AU_LUID@@XZ @ 0x1802A56BC (-GetAdapterLuid@CDxHandleYUVBitmapRealization@@UEBA-AU_LUID@@XZ.c)
 *     ?GetDevice@CDxHandleYUVBitmapRealization@@UEBAPEAVCD3DDevice@@XZ @ 0x1802A5A74 (-GetDevice@CDxHandleYUVBitmapRealization@@UEBAPEAVCD3DDevice@@XZ.c)
 *     ?IsHardwareProtected@CDxHandleYUVBitmapRealization@@UEBA_NXZ @ 0x1802A6014 (-IsHardwareProtected@CDxHandleYUVBitmapRealization@@UEBA_NXZ.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x1802A6874 (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInf.c)
 *     ?VideoProcessorBlt@CDecodeBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@W4_D3DDDI_ROTATION@@PEAUDXGI_HDR_METADATA_HDR10@@2@Z @ 0x1802A6A50 (-VideoProcessorBlt@CDecodeBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBUtagREC.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::VPBltToDecodeBitmap(CDxHandleYUVBitmapRealization *this)
{
  bool v2; // zf
  bool v3; // bl
  __m128i *v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // xmm0_8
  struct tagRECT v7; // xmm0
  __int64 v8; // r9
  LONG top; // rdx^4
  LONG left; // r8d
  LONG bottom; // eax
  LONG right; // ecx
  int v13; // eax
  bool IsHardwareProtected; // al
  int v15; // ecx
  CDecodeBitmap *v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // ebx
  int v20; // eax
  __int64 v21; // rcx
  struct D2D_SIZE_U v23; // [rsp+40h] [rbp-59h] BYREF
  __int64 v24; // [rsp+48h] [rbp-51h] BYREF
  int v25; // [rsp+50h] [rbp-49h]
  __int64 v26; // [rsp+58h] [rbp-41h] BYREF
  int v27; // [rsp+60h] [rbp-39h]
  int v28; // [rsp+64h] [rbp-35h]
  int v29; // [rsp+68h] [rbp-31h]
  bool v30; // [rsp+6Ch] [rbp-2Dh]
  _BYTE v31[64]; // [rsp+70h] [rbp-29h] BYREF
  int v32; // [rsp+B0h] [rbp+17h]
  struct tagRECT v33; // [rsp+C0h] [rbp+27h] BYREF
  struct tagRECT v34; // [rsp+D0h] [rbp+37h] BYREF

  v34.top = 0;
  v34.right = 0;
  v34.bottom = 0;
  v2 = (*((_DWORD *)this + 58) & 0x4000) == 0;
  v33 = 0LL;
  if ( v2 )
  {
    v34 = *(struct tagRECT *)((char *)this + 148);
    v33 = *(struct tagRECT *)((char *)this + 216);
    v23 = (struct D2D_SIZE_U)*((_QWORD *)this + 26);
    goto LABEL_13;
  }
  v32 = 0;
  v3 = CBitmapRealization::CalcImageTransform(this, (struct CMILMatrix *)v31);
  v4 = (__m128i *)CBitmapRealization::CalcSourceRect((__int64)this);
  v5 = v4->m128i_i64[0];
  v6 = _mm_srli_si128(*v4, 8).m128i_u64[0];
  v34.left = (LONG)*v4;
  v34.top = HIDWORD(v5);
  *(_QWORD *)&v34.right = v6;
  v7 = v34;
  if ( v3 )
  {
    if ( CMILMatrix::IsTranslateAndScale<1>((__int64)v31) )
    {
      CMILMatrix::Transform2DBounds((CMILMatrix *)v31, &v34, &v33, v8);
      goto LABEL_7;
    }
    v7 = v34;
  }
  v33 = v7;
LABEL_7:
  top = v33.top;
  left = v33.left;
  if ( v33.left || v33.top )
  {
    right = v33.right - v33.left;
    v33.left = 0;
    v33.right -= left;
    bottom = v33.bottom - v33.top;
    v33.top = 0;
    v33.bottom -= top;
  }
  else
  {
    bottom = v33.bottom;
    right = v33.right;
  }
  v23.width = right;
  v23.height = bottom;
LABEL_13:
  CDxHandleYUVBitmapRealization::GetAdapterLuid((CDxHandleYUVBitmapRealization *)((char *)this + 488), &v26);
  v13 = *((_DWORD *)this + 70);
  v28 = 0;
  v29 = 0;
  v27 = v13;
  IsHardwareProtected = CDxHandleYUVBitmapRealization::IsHardwareProtected((CDxHandleYUVBitmapRealization *)((char *)this + 488));
  v15 = *((_DWORD *)this + 36);
  v30 = IsHardwareProtected;
  if ( IsDXGIColorSpaceRec2020(v15)
    && *((int *)CDxHandleYUVBitmapRealization::GetDevice((CDxHandleYUVBitmapRealization *)((char *)this + 488)) + 146) >= 40960 )
  {
    v29 = (int)FLOAT_1_0;
    LODWORD(v24) = 10;
    v25 = 1;
  }
  else
  {
    v25 = 0;
    LODWORD(v24) = 28;
  }
  v16 = (CDecodeBitmap *)*((_QWORD *)this + 36);
  HIDWORD(v24) = 3;
  v17 = CDecodeBitmap::EnsureTargetBitmap(
          v16,
          &v23,
          (const struct PixelFormatInfo *)&v24,
          (const struct RenderTargetInfo *)&v26);
  v19 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, v17, 0x25Eu);
  }
  else
  {
    v20 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))CDecodeBitmap::VideoProcessorBlt)(
            *((_QWORD *)this + 36) + 120LL,
            *(_QWORD *)(*((_QWORD *)this + 47) + 96LL),
            *((unsigned int *)this + 68),
            *((unsigned int *)this + 36),
            &v34,
            1,
            0LL,
            &v33,
            v23,
            v24,
            v25);
    v19 = v20;
    if ( v20 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0LL, v20, 0x26Du);
  }
  return v19;
}
