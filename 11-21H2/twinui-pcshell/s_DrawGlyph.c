/*
 * XREFs of s_DrawGlyph @ 0x1805F5834
 * Callers:
 *     s_OnDrawItem @ 0x1805F61A8 (s_OnDrawItem.c)
 * Callees:
 *     ?IsHighContrast@@YAHXZ @ 0x1800A6384 (-IsHighContrast@@YAHXZ.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800E7D10 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1800E80F4 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HVCZMTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180119ADC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HVCZMTest@@@details@wil@@QEAAX_NW4Reporti.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     s_AreAeroUpdatesAvailable @ 0x1805F5804 (s_AreAeroUpdatesAvailable.c)
 *     ?ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z @ 0x1805F8654 (-ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall s_DrawGlyph(
        HWND hWnd,
        COLORREF a2,
        void *a3,
        HDC a4,
        int a5,
        __int16 a6,
        int iStateId,
        struct tagRECT *a8,
        unsigned int a9)
{
  int Error; // edi
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  char v17; // r15
  int v18; // eax
  int *v19; // rsi
  int v20; // eax
  LONG v21; // eax
  HFONT v22; // rbx
  BOOL v23; // r12d
  int v24; // r13d
  COLORREF v25; // eax
  COLORREF v26; // r12d
  HGDIOBJ v27; // r15
  COLORREF v29; // [rsp+30h] [rbp-B1h] BYREF
  UINT format; // [rsp+34h] [rbp-ADh]
  int v31; // [rsp+38h] [rbp-A9h] BYREF
  WCHAR chText[2]; // [rsp+3Ch] [rbp-A5h] BYREF
  int v33; // [rsp+40h] [rbp-A1h] BYREF
  int v34; // [rsp+44h] [rbp-9Dh] BYREF
  COLORREF pColor; // [rsp+48h] [rbp-99h] BYREF
  HTHEME hTheme; // [rsp+50h] [rbp-91h]
  HGDIOBJ v37; // [rsp+58h] [rbp-89h]
  LPRECT lprc; // [rsp+60h] [rbp-81h]
  HFONT v39; // [rsp+68h] [rbp-79h]
  LOGFONTW lf; // [rsp+70h] [rbp-71h] BYREF

  hTheme = a3;
  v29 = a2;
  lprc = a8;
  wcscpy(chText, L"");
  v31 = 57575;
  v33 = 59244;
  v34 = 59243;
  Error = -2147023728;
  v12 = -13;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HVCZMTest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_HVCZMTest>::GetImpl'::`2'::impl,
    1u,
    (__int64)a3,
    (__int64)a4);
  if ( s_AreAeroUpdatesAvailable(v14, v13, v15, v16) )
    v12 = -8;
  v17 = 0;
  format = 37;
  if ( a5 == 11 )
  {
    if ( (a6 & 0x200) != 0 )
    {
      v18 = 1;
      v12 = -16;
    }
    else
    {
      v18 = 0;
    }
    v19 = &v31;
    if ( v18 )
      v19 = (int *)chText;
  }
  else
  {
    if ( a5 != 16 )
      return (unsigned int)Error;
    v20 = GetWindowLongW(hWnd, -20) & 0x400000;
    v17 = 1;
    v19 = &v33;
    if ( v20 )
      v19 = &v34;
    format = v20 != 0 ? 131109 : 37;
  }
  memset_0(&lf, 0, sizeof(lf));
  v21 = DPIToPPIHelpers::ScaleByType(a9, v12, hWnd, v29);
  if ( v17 && (v21 & 1) == 0 )
    --v21;
  lf.lfHeight = v21;
  lf.lfWeight = 400;
  lf.lfCharSet = 1;
  lf.lfQuality = 5;
  Error = StringCchCopyW(lf.lfFaceName, 32LL, L"Segoe MDL2 Assets");
  if ( Error >= 0 )
  {
    v22 = CreateFontIndirectW(&lf);
    v39 = v22;
    if ( v22 )
    {
      Error = 0;
      v23 = (unsigned int)IsHighContrast() && ((iStateId - 2) & 0xFFFFFFFD) == 0;
      v24 = SetBkMode(a4, 1);
      GetThemeColor(hTheme, 9, 0, 3802, &pColor);
      v25 = 0;
      if ( BYTE2(pColor) + 5 * BYTE1(pColor) + 2 * (unsigned int)(unsigned __int8)pColor <= 0x400 )
        v25 = 0xFFFFFF;
      v29 = v25;
      if ( v23 )
      {
        GetThemeColor(hTheme, 14, iStateId, 3803, &v29);
        v25 = v29;
      }
      v26 = SetTextColor(a4, v25);
      hTheme = a4;
      v27 = SelectObject(a4, v22);
      v37 = v27;
      if ( !DrawTextW(a4, (LPCWSTR)v19, 1, lprc, format) )
        Error = ResultFromKnownLastError();
      SetTextColor(a4, v26);
      SetBkMode(a4, v24);
      SelectObject(a4, v27);
    }
    else
    {
      Error = -2147467259;
    }
    if ( v22 )
      DeleteObject(v22);
  }
  return (unsigned int)Error;
}
