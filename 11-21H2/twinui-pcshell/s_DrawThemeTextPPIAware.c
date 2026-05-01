/*
 * XREFs of s_DrawThemeTextPPIAware @ 0x1805F5B78
 * Callers:
 *     s_OnDrawItem @ 0x1805F61A8 (s_OnDrawItem.c)
 * Callees:
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18003D54C (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800E7D10 (-ResultFromKnownLastError@@YAJXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ??0CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHDC__@@@Z @ 0x18023A65A (--0CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHDC__@@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802E6814 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??1CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1805F5420 (--1CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalClose@?$HandleT@UHBITMAPTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@MEAA_NXZ @ 0x1805F5730 (-InternalClose@-$HandleT@UHBITMAPTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Micro.c)
 *     ?DrawThemeTextExPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEAUtagRECT@@PEAU_DTTOPTS@@@Z @ 0x1805F82B8 (-DrawThemeTextExPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEA.c)
 *     ?GetThemeTextExtentPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEAU_DTTOPTS@@PEAUtagRECT@@7@Z @ 0x1805F83F0 (-GetThemeTextExtentPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHK.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall s_DrawThemeTextPPIAware(HTHEME hTheme, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __m128i *a6)
{
  HDC v8; // rcx
  signed int Error; // edi
  int v10; // r12d
  int v11; // edi
  HBITMAP v12; // rax
  __m128i v13; // xmm0
  int v14; // eax
  HFONT v15; // rbx
  __int16 *v16; // r12
  __int64 v17; // rdi
  __int16 *v18; // rcx
  unsigned int v19; // r14d
  __int16 i; // ax
  HDC v21; // r13
  __int64 v22; // rdx
  signed int LastError; // eax
  _BYTE v25[8]; // [rsp+78h] [rbp-88h] BYREF
  HDC hdc; // [rsp+80h] [rbp-80h]
  __int32 v27; // [rsp+88h] [rbp-78h]
  int yoriginDest; // [rsp+8Ch] [rbp-74h]
  int wDest; // [rsp+90h] [rbp-70h]
  int xoriginDest; // [rsp+94h] [rbp-6Ch]
  HTHEME v31; // [rsp+98h] [rbp-68h]
  __int64 v32; // [rsp+A0h] [rbp-60h]
  __int128 v33; // [rsp+A8h] [rbp-58h]
  void **v34; // [rsp+B8h] [rbp-48h] BYREF
  HBITMAP v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  HGDIOBJ h; // [rsp+D0h] [rbp-30h]
  HDC v38; // [rsp+D8h] [rbp-28h]
  HDC v39; // [rsp+E0h] [rbp-20h]
  HGDIOBJ v40; // [rsp+E8h] [rbp-18h]
  void *ppvBits; // [rsp+F0h] [rbp-10h] BYREF
  int v42; // [rsp+100h] [rbp+0h]
  int v43[19]; // [rsp+104h] [rbp+4h] BYREF
  int v44; // [rsp+150h] [rbp+50h]
  int v45; // [rsp+154h] [rbp+54h]
  int v46; // [rsp+158h] [rbp+58h]
  int v47; // [rsp+15Ch] [rbp+5Ch]
  BITMAPINFO pbmi; // [rsp+160h] [rbp+60h] BYREF
  LOGFONTW pFont; // [rsp+190h] [rbp+90h] BYREF
  int pvParam; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v51[220]; // [rsp+1F4h] [rbp+F4h] BYREF
  LOGFONTW v52; // [rsp+2D0h] [rbp+1D0h]

  v36 = a4;
  v32 = a3;
  v31 = hTheme;
  Microsoft::WRL::Wrappers::CompatibleDC::CompatibleDC((Microsoft::WRL::Wrappers::CompatibleDC *)v25, *(HDC *)(a4 + 32));
  v8 = hdc;
  if ( !hdc )
  {
    Error = ResultFromKnownLastError();
    if ( Error < 0 )
      goto LABEL_38;
    v8 = hdc;
  }
  memset(&pbmi.bmiHeader.biSizeImage, 0, 24);
  pbmi.bmiHeader.biSize = 44;
  v10 = a6->m128i_i32[0];
  xoriginDest = v10;
  wDest = a6->m128i_i32[2] - v10;
  pbmi.bmiHeader.biWidth = wDest;
  v11 = a6->m128i_i32[1];
  yoriginDest = v11;
  v27 = a6->m128i_i32[3];
  pbmi.bmiHeader.biHeight = v11 - v27;
  *(_QWORD *)&pbmi.bmiHeader.biPlanes = 2097153LL;
  v12 = CreateDIBSection(v8, &pbmi, 0, &ppvBits, 0LL, 0);
  v34 = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HBITMAPTraits>::`vftable';
  v35 = v12;
  if ( !v12 )
  {
    Error = -2147024882;
    goto LABEL_33;
  }
  v38 = hdc;
  v39 = hdc;
  v40 = SelectObject(hdc, v12);
  v13 = *a6;
  v44 = _mm_cvtsi128_si32(*a6) - v10;
  v46 = v13.m128i_i32[2] - v10;
  v47 = v13.m128i_i32[3] - v11;
  v45 = v13.m128i_i32[1] - v11;
  memset_0(v51, 0, 0x1F4uLL);
  pvParam = 504;
  if ( SystemParametersInfoW(0x29u, 0x1F8u, &pvParam, 0) || (Error = ResultFromKnownLastError(), Error >= 0) )
  {
    v42 = 72;
    memset_0(v43, 0, 0x44uLL);
    if ( GetThemeFont(hTheme, hdc, 14, 0, 210, &pFont) < 0 )
    {
      pFont = v52;
      v14 = v43[0];
    }
    else
    {
      v14 = v43[0] | 0x40;
      v43[0] |= 0x40u;
      if ( v52.lfHeight <= 0 )
      {
        if ( v52.lfHeight >= pFont.lfHeight )
          goto LABEL_14;
      }
      else if ( v52.lfHeight <= pFont.lfHeight )
      {
        goto LABEL_14;
      }
      pFont.lfHeight = v52.lfHeight;
    }
LABEL_14:
    if ( (*(_BYTE *)(a4 + 16) & 0x20) != 0 )
    {
      pFont.lfWeight = 700;
      v43[0] = v14 | 0x40;
    }
    v15 = CreateFontIndirectW(&pFont);
    if ( !v15 )
    {
      Error = -2147467259;
      goto LABEL_31;
    }
    v16 = *(__int16 **)a5;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount((_QWORD *)a5);
    v17 = *(_QWORD *)(a5 + 8);
    *(_QWORD *)&v33 = v17;
    v18 = v16;
    v19 = 0;
    for ( i = *v16; i && i != 9; i = *v18 )
    {
      ++v18;
      ++v19;
    }
    v21 = hdc;
    h = SelectObject(hdc, v15);
    v22 = a5 + 64;
    if ( v19 )
    {
      Error = DPIToPPIHelpers::DrawThemeTextExPPI(v32, *(unsigned int *)(a5 + 60), a5 + 64, v31, hdc);
      if ( Error < 0 )
      {
LABEL_29:
        SelectObject(v21, h);
        DeleteObject(v15);
        goto LABEL_31;
      }
      v22 = a5 + 64;
      v17 = v33;
    }
    if ( v19 >= (unsigned __int64)(v17 - 1)
      || (v33 = 0LL,
          Error = DPIToPPIHelpers::GetThemeTextExtentPPI(v32, *(unsigned int *)(a5 + 60), v22, v31, hdc),
          Error >= 0)
      && (v44 = v46 + v33 - DWORD2(v33),
          Error = DPIToPPIHelpers::DrawThemeTextExPPI(v32, *(unsigned int *)(a5 + 60), a5 + 64, v31, hdc),
          Error >= 0) )
    {
      Error = 0;
      if ( !GdiAlphaBlend(
              *(HDC *)(v36 + 32),
              xoriginDest,
              yoriginDest,
              wDest,
              v27 - yoriginDest,
              hdc,
              0,
              0,
              wDest,
              v27 - yoriginDest,
              (BLENDFUNCTION)33488896) )
        Error = ResultFromKnownLastError();
    }
    goto LABEL_29;
  }
LABEL_31:
  SelectObject(v38, v40);
  v12 = v35;
LABEL_33:
  v34 = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HBITMAPTraits>::`vftable';
  if ( v12
    && !Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HBITMAPTraits>::InternalClose((__int64)&v34) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)LastError);
  }
LABEL_38:
  Microsoft::WRL::Wrappers::CompatibleDC::~CompatibleDC((Microsoft::WRL::Wrappers::CompatibleDC *)v25);
  return (unsigned int)Error;
}
