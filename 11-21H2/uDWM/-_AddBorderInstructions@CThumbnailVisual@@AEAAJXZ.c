/*
 * XREFs of ?_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ @ 0x1800E3738
 * Callers:
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x1800080BC (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x18001C938 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateProxy@VCRectangleGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18000DBA0 (--$CreateProxy@VCRectangleGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180025C70 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCRectangleGeometryProxy@@KM@Z @ 0x1800E2E28 (-AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCRectangleGeometryProxy@@KM@Z.c)
 */

__int64 __fastcall CThumbnailVisual::_AddBorderInstructions(CThumbnailVisual *this)
{
  struct CRectangleGeometryProxy **v1; // rsi
  int v3; // eax
  unsigned int v4; // ebx
  void *Theme; // rbp
  HRESULT ThemeColor; // eax
  HRESULT ThemeInt; // eax
  int v8; // eax
  unsigned int pColor; // [rsp+20h] [rbp-28h]
  int piVal; // [rsp+50h] [rbp+8h] BYREF
  COLORREF v12; // [rsp+58h] [rbp+10h] BYREF

  v1 = (struct CRectangleGeometryProxy **)((char *)this + 432);
  if ( !*((_QWORD *)this + 54) )
  {
    v3 = CCompositor::CreateProxy<CRectangleGeometryProxy>(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
           (CBaseObject **)this + 54);
    v4 = v3;
    if ( v3 < 0 )
    {
      pColor = 1310;
LABEL_14:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, pColor);
      return v4;
    }
  }
  Theme = (void *)CDesktopManager::GetTheme(0);
  ThemeColor = GetThemeColor(Theme, 63, 0, 3801, &v12);
  v4 = ThemeColor;
  if ( ThemeColor >= 0 )
  {
    ThemeInt = GetThemeInt(Theme, 63, 0, 2403, (int *)this + 126);
    v4 = ThemeInt;
    if ( ThemeInt >= 0 )
    {
      v3 = GetThemeInt(Theme, 63, 0, 2402, &piVal);
      v4 = v3;
      if ( v3 < 0 )
      {
        pColor = 1318;
        goto LABEL_14;
      }
      v8 = CThumbnailAnimatedVisual::AddSolidBrushInstruction(this, *v1, v12, (double)piVal / 255.0);
      v4 = v8;
      if ( v8 >= 0 )
      {
        v3 = CThumbnailAnimatedVisual::AddSolidBrushInstruction(
               this,
               *((struct CRectangleGeometryProxy **)this + 53),
               0,
               1.0);
        v4 = v3;
        if ( v3 < 0 )
        {
          pColor = 1320;
          goto LABEL_14;
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x527u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ThemeInt, 0x525u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ThemeColor, 0x524u);
  }
  return v4;
}
