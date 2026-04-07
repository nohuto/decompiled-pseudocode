/*
 * XREFs of ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x18002DB10
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18002B020 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?GetMetricsForCaptionBar@CWindowData@@QEBAHH_N@Z @ 0x180003098 (-GetMetricsForCaptionBar@CWindowData@@QEBAHH_N@Z.c)
 *     ?SetMargin@@YA_NPEAU_MARGINS@@HHHHPEBU1@@Z @ 0x18000B430 (-SetMargin@@YA_NPEAU_MARGINS@@HHHHPEBU1@@Z.c)
 *     ?GetMonitorRect@CTopLevelWindow@@AEAA_NPEBUtagRECT@@PEAU2@@Z @ 0x180010174 (-GetMonitorRect@CTopLevelWindow@@AEAA_NPEBUtagRECT@@PEAU2@@Z.c)
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x1800181B0 (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z @ 0x18001DBE4 (-SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _o_ceil_0 @ 0x180060EA4 (_o_ceil_0.c)
 *     floor @ 0x180060EC8 (floor.c)
 *     IsOpenThemeDataPresent @ 0x180061548 (IsOpenThemeDataPresent.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateMarginsDependentOnStyle(CTopLevelWindow *this)
{
  __int64 v1; // rsi
  int v2; // edi
  char v4; // al
  char v5; // di
  int v6; // ecx
  char v7; // r14
  int v8; // r9d
  int v9; // r8d
  int v10; // r10d
  const struct _MARGINS *v11; // rsi
  unsigned __int8 v12; // di
  int v14; // edi
  int MetricsForCaptionBar; // eax
  double v16; // xmm6_8
  double v17; // xmm0_8
  int v18; // r14d
  double v19; // xmm0_8
  int v20; // r15d
  int v21; // edx
  int v22; // r12d
  int v23; // r13d
  int v24; // ecx
  int v25; // eax
  int v26; // r15d
  int v27; // eax
  int v28; // r12d
  int v29; // r13d
  CAtlasedRectsVisual *v30; // rcx
  char v31; // al
  __int64 v32; // rcx
  int v33; // eax
  int v34; // eax
  int v35; // edx
  int v36[4]; // [rsp+38h] [rbp-49h]
  struct tagRECT v37; // [rsp+58h] [rbp-29h] BYREF
  struct tagRECT v38; // [rsp+68h] [rbp-19h] BYREF

  v1 = *((_QWORD *)this + 94);
  v2 = *((_DWORD *)this + 152);
  if ( (unsigned __int8)IsOpenThemeDataPresent()
    && (v2 & 6) != 0
    && *(_DWORD *)(v1 + 64) >= CTopLevelWindow::s_marMinInflationThickness.cxLeftWidth
    && *(_DWORD *)(v1 + 68) >= dword_180142CBC
    && *(_DWORD *)(v1 + 72) >= dword_180142CC0
    && *(_DWORD *)(v1 + 76) >= dword_180142CC4
    && (*(_DWORD *)(v1 + 120) & 0x800000) == 0
    && (int)GetSystemMetricsForDpi(92LL, *(unsigned int *)(v1 + 348)) > 0 )
  {
    v14 = 0;
    if ( (*(_BYTE *)(v1 + 118) & 0xC0) == 0xC0 )
    {
      if ( *(char *)(v1 + 120) < 0 )
        MetricsForCaptionBar = CWindowData::GetMetricsForCaptionBar((CWindowData *)v1, 0x33u, 0);
      else
        MetricsForCaptionBar = GetSystemMetricsForDpi(4LL, *(unsigned int *)(v1 + 348));
      v14 = MetricsForCaptionBar;
    }
    v16 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 51);
    if ( v16 < 0.0 )
    {
      v17 = v16 - 0.5;
      o_ceil_0();
    }
    else
    {
      v17 = floor(v16 + 0.5);
    }
    v18 = (int)v17;
    if ( v16 < 0.0 )
    {
      v19 = v16 - 0.5;
      o_ceil_0();
    }
    else
    {
      v19 = floor(v16 + 0.5);
    }
    v20 = *(_DWORD *)(v1 + 64);
    v21 = v14 + v18;
    v22 = *(_DWORD *)(v1 + 68);
    v23 = *(_DWORD *)(v1 + 72);
    v24 = (int)v19;
    v25 = (int)v19;
    if ( v20 > (int)v19 )
      v25 = *(_DWORD *)(v1 + 64);
    v26 = v20 - v25;
    v27 = *(_DWORD *)(v1 + 76);
    if ( v22 > v24 )
      v24 = *(_DWORD *)(v1 + 68);
    v28 = v22 - v24;
    if ( v23 > v21 )
      v21 = *(_DWORD *)(v1 + 72);
    v29 = v23 - v21;
    if ( v27 > v18 )
      v18 = *(_DWORD *)(v1 + 76);
    v4 = SetMargin(
           (struct _MARGINS *)((char *)this + 644),
           v26,
           v28,
           v29,
           v27 - v18,
           (const struct _MARGINS *)((char *)this + 628));
  }
  else
  {
    v4 = SetMargin((struct _MARGINS *)((char *)this + 644), 0, 0, 0, 0, (const struct _MARGINS *)((char *)this + 628));
  }
  v5 = v4;
  if ( (*((_DWORD *)this + 152) & 0x200020) != 0 )
  {
    v32 = *((_QWORD *)this + 94);
    v38 = *(struct tagRECT *)(v32 + 48);
    v33 = *(_DWORD *)(v32 + 224) - *(_DWORD *)(v32 + 216);
    if ( v33 < 0 )
      v33 = 0;
    v38.right = v38.left + (int)((double)v33 * *(double *)(v32 + 336));
    v34 = *(_DWORD *)(v32 + 228) - *(_DWORD *)(v32 + 220);
    if ( v34 < 0 )
      v34 = 0;
    v38.bottom = v38.top + (int)((double)v34 * *(double *)(v32 + 336));
    if ( !CTopLevelWindow::GetMonitorRect((CTopLevelWindow *)(unsigned int)v38.bottom, &v38, &v37) )
      v37 = v38;
    v10 = 0;
    v9 = 0;
    v8 = 0;
    if ( v37.left - v38.left >= 0 )
      v10 = v37.left - v38.left;
    v36[0] = v10;
    if ( v38.right - v37.right >= 0 )
      v9 = v38.right - v37.right;
    if ( v37.top - v38.top >= 0 )
      v8 = v37.top - v38.top;
    v35 = *(_DWORD *)(v1 + 112);
    v6 = 0;
    if ( v38.bottom - v37.bottom >= 0 )
      v6 = v38.bottom - v37.bottom;
    if ( v10 > v35 - *((_DWORD *)this + 161) )
    {
      v10 = 0;
      v36[0] = 0;
    }
    v36[1] = v9;
    if ( v9 > v35 - *((_DWORD *)this + 162) )
    {
      v9 = 0;
      v36[1] = 0;
    }
    v36[2] = v8;
    if ( v8 > v35 - *((_DWORD *)this + 163) )
    {
      v8 = 0;
      v36[2] = 0;
    }
    v36[3] = v6;
    if ( v6 > v35 - *((_DWORD *)this + 164) )
    {
      v6 = 0;
      v36[3] = 0;
    }
    v7 = 1;
    *(_OWORD *)(*((_QWORD *)this + 94) + 300LL) = *(_OWORD *)v36;
  }
  else
  {
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v10 = 0;
  }
  v11 = (const struct _MARGINS *)((char *)this + 660);
  v12 = SetMargin((struct _MARGINS *)((char *)this + 660), v10, v9, v8, v6, 0LL) | v5;
  if ( v7 || (*((_BYTE *)this + 248) & 4) != 0 )
  {
    v30 = (CAtlasedRectsVisual *)*((_QWORD *)this + 36);
    v31 = (4 * v7) | *((_BYTE *)this + 248) & 0xFB;
    *((_BYTE *)this + 248) = v31;
    if ( (v31 & 4) == 0 )
      v11 = 0LL;
    CAtlasedRectsVisual::SetClipMargins(v30, v11);
    CTopLevelWindow::UpdateClientAreaMaximizedClip(this);
  }
  return v12;
}
