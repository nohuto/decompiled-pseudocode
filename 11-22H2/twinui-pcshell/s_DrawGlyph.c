/*
 * XREFs of s_DrawGlyph @ 0x18074C2A8
 * Callers:
 *     s_OnDrawItemHelper @ 0x18028640C (s_OnDrawItemHelper.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18004EB90 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1800ECFC4 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HVCZMTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180115270 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HVCZMTest@@@details@wil@@QEAAX_NW4Reporti.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     s_AreAeroUpdatesAvailable @ 0x18074C278 (s_AreAeroUpdatesAvailable.c)
 *     ?ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z @ 0x18074E754 (-ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z.c)
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
  int Error; // esi
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  char v17; // di
  UINT v18; // r13d
  int v19; // eax
  int *v20; // r15
  int v21; // eax
  LONG v22; // eax
  HFONT v23; // rbx
  COLORREF v24; // eax
  COLORREF v25; // r12d
  HGDIOBJ v26; // rdi
  COLORREF v28; // [rsp+30h] [rbp-B1h] BYREF
  int v29; // [rsp+34h] [rbp-ADh] BYREF
  WCHAR chText[2]; // [rsp+38h] [rbp-A9h] BYREF
  int v31; // [rsp+3Ch] [rbp-A5h] BYREF
  int v32; // [rsp+40h] [rbp-A1h] BYREF
  COLORREF pColor; // [rsp+44h] [rbp-9Dh] BYREF
  int mode; // [rsp+48h] [rbp-99h]
  HTHEME hTheme; // [rsp+50h] [rbp-91h]
  HGDIOBJ v36; // [rsp+58h] [rbp-89h]
  LPRECT lprc; // [rsp+60h] [rbp-81h]
  HFONT v38; // [rsp+68h] [rbp-79h]
  LOGFONTW lf; // [rsp+70h] [rbp-71h] BYREF

  hTheme = a3;
  v28 = a2;
  lprc = a8;
  wcscpy(chText, L"");
  v29 = 63372;
  v31 = 59764;
  v32 = 59763;
  Error = -2147023728;
  v12 = -13;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HVCZMTest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_HVCZMTest>::GetImpl'::`2'::impl,
    1u,
    (__int64)a3,
    (__int64)a4);
  if ( s_AreAeroUpdatesAvailable(v14, v13, v15, v16) )
    v12 = -10;
  v17 = 0;
  v18 = 37;
  if ( a5 == 11 )
  {
    if ( (a6 & 0x200) != 0 )
    {
      v12 = -16;
      v19 = 1;
    }
    else
    {
      v19 = 0;
    }
    v20 = &v29;
    if ( v19 )
      v20 = (int *)chText;
  }
  else
  {
    if ( a5 != 16 )
      return (unsigned int)Error;
    v21 = GetWindowLongW(hWnd, -20) & 0x400000;
    v17 = 1;
    v20 = &v31;
    if ( v21 )
      v20 = &v32;
    v18 = v21 != 0 ? 131109 : 37;
  }
  memset_0(&lf, 0, sizeof(lf));
  v22 = DPIToPPIHelpers::ScaleByType(a9, v12, hWnd, v28);
  if ( v17 && (v22 & 1) == 0 )
    --v22;
  lf.lfHeight = v22;
  lf.lfWeight = 400;
  lf.lfCharSet = 1;
  lf.lfQuality = 5;
  Error = StringCchCopyW(lf.lfFaceName, 32LL, L"Segoe Fluent Icons");
  if ( Error >= 0 )
  {
    v23 = CreateFontIndirectW(&lf);
    v38 = v23;
    if ( v23 )
    {
      Error = 0;
      mode = SetBkMode(a4, 1);
      GetThemeColor(hTheme, 9, 0, 3802, &pColor);
      v24 = 0;
      if ( BYTE2(pColor) + 5 * BYTE1(pColor) + 2 * (unsigned int)(unsigned __int8)pColor <= 0x400 )
        v24 = 0xFFFFFF;
      v28 = v24;
      if ( ((iStateId - 2) & 0xFFFFFFFD) == 0 )
      {
        GetThemeColor(hTheme, 27, iStateId, 3803, &v28);
        v24 = v28;
      }
      v25 = SetTextColor(a4, v24);
      hTheme = a4;
      v26 = SelectObject(a4, v23);
      v36 = v26;
      if ( !DrawTextW(a4, (LPCWSTR)v20, 1, lprc, v18) )
        Error = ResultFromKnownLastError();
      SetTextColor(a4, v25);
      SetBkMode(a4, mode);
      SelectObject(a4, v26);
    }
    else
    {
      Error = -2147467259;
    }
    if ( v23 )
      DeleteObject(v23);
  }
  return (unsigned int)Error;
}
