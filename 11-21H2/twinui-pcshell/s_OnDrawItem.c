/*
 * XREFs of s_OnDrawItem @ 0x1805F61A8
 * Callers:
 *     ?s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_HOW_SELECTED_FLAGS@@@Z @ 0x18023A696 (-s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_.c)
 * Callees:
 *     ?IsHighContrast@@YAHXZ @ 0x1800A6384 (-IsHighContrast@@YAHXZ.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800E7D10 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HVCZMTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180119ADC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HVCZMTest@@@details@wil@@QEAAX_NW4Reporti.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     floorf @ 0x180188EDC (floorf.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ??0CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHDC__@@@Z @ 0x18023A65A (--0CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND__@@_KI@Z @ 0x18023A78C (-GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND_.c)
 *     ?MulDiv@CRect@Geometry@@SA?AU12@AEBUtagRECT@@HH@Z @ 0x18052EF20 (-MulDiv@CRect@Geometry@@SA-AU12@AEBUtagRECT@@HH@Z.c)
 *     ??1CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1805F5420 (--1CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?CheckValidity@CompatibleDC@Wrappers@WRL@Microsoft@@QEAAJXZ @ 0x1805F5680 (-CheckValidity@CompatibleDC@Wrappers@WRL@Microsoft@@QEAAJXZ.c)
 *     ?SHComputeDPI@@YAXPEAUHWND__@@PEAH1@Z @ 0x1805F57B8 (-SHComputeDPI@@YAXPEAUHWND__@@PEAH1@Z.c)
 *     s_AreAeroUpdatesAvailable @ 0x1805F5804 (s_AreAeroUpdatesAvailable.c)
 *     s_DrawGlyph @ 0x1805F5834 (s_DrawGlyph.c)
 *     s_DrawThemeTextPPIAware @ 0x1805F5B78 (s_DrawThemeTextPPIAware.c)
 *     s_SetDwmAttributes @ 0x1805F705C (s_SetDwmAttributes.c)
 *     ?ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z @ 0x1805F8654 (-ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall s_OnDrawItem(HWND hWnd, __int64 a2)
{
  int ScaleFactorForWindow; // edi
  struct ContextMenuRenderingData *ContextMenuDataForItem; // r15
  const WCHAR *v6; // rdx
  HTHEME v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  unsigned int v16; // edi
  __int64 v17; // rdx
  int v18; // ebx
  int *v19; // rsi
  HTHEME v20; // r14
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // ebx
  int v24; // edi
  int v25; // r14d
  int v26; // esi
  int v27; // esi
  HTHEME v28; // r14
  int v29; // r9d
  int v30; // r8d
  int v31; // ebx
  int v32; // eax
  int v33; // eax
  int Error; // eax
  int v35; // r9d
  int v36; // r8d
  int v37; // ebx
  int v38; // eax
  int v39; // eax
  int v40; // esi
  int v41; // eax
  int v42; // r14d
  int v43; // ebx
  int v44; // ebx
  void *v45; // rbx
  int v46; // eax
  HWND v47; // rcx
  int v48; // esi
  int v49; // edi
  int v50; // r14d
  int v51; // r14d
  int v52; // r8d
  int v53; // ecx
  int v54; // esi
  int v55; // r14d
  BOOL v56; // eax
  HDC v57; // rcx
  int v58; // esi
  int v59; // edi
  int v60; // r9d
  int v61; // r8d
  int v62; // ebx
  int v63; // eax
  int v64; // eax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  int v70; // eax
  __int64 v71; // rdx
  int v72; // eax
  float v73; // xmm0_4
  char v74; // [rsp+60h] [rbp-A0h]
  unsigned int iStateId; // [rsp+64h] [rbp-9Ch]
  int nDenominator; // [rsp+68h] [rbp-98h] BYREF
  int yTop; // [rsp+6Ch] [rbp-94h]
  HDC hdc[2]; // [rsp+70h] [rbp-90h] BYREF
  int v79; // [rsp+80h] [rbp-80h]
  int v80; // [rsp+84h] [rbp-7Ch] BYREF
  HTHEME hTheme; // [rsp+88h] [rbp-78h]
  COLORREF pColor; // [rsp+90h] [rbp-70h] BYREF
  HGDIOBJ h; // [rsp+98h] [rbp-68h]
  _BYTE pv[4]; // [rsp+A0h] [rbp-60h] BYREF
  int nNumber; // [rsp+A4h] [rbp-5Ch]
  int hSrc; // [rsp+A8h] [rbp-58h]
  SHSTOCKICONINFO psii; // [rsp+C0h] [rbp-40h] BYREF
  HDC pRect[2]; // [rsp+2E0h] [rbp+1E0h] BYREF
  _BYTE v89[46]; // [rsp+2F0h] [rbp+1F0h] BYREF
  __int16 v90; // [rsp+31Eh] [rbp+21Eh]
  int v91; // [rsp+320h] [rbp+220h]

  ScaleFactorForWindow = -2147418113;
  ContextMenuDataForItem = ImmersiveContextMenuHelper::GetContextMenuDataForItem(
                             hWnd,
                             *(HWND *)(a2 + 56),
                             *(_DWORD *)(a2 + 8));
  if ( ContextMenuDataForItem )
  {
    if ( MonitorFromWindow(hWnd, 2u) )
    {
      ScaleFactorForWindow = GetScaleFactorForWindow(hWnd, &v80);
      if ( ScaleFactorForWindow >= 0 )
      {
        if ( *((_BYTE *)ContextMenuDataForItem + 68) )
        {
          v6 = L"DarkMode_ImmersiveStart::Menu";
        }
        else
        {
          v6 = L"LightMode_ImmersiveStart::Menu";
          if ( !*((_BYTE *)ContextMenuDataForItem + 69) )
            v6 = L"ImmersiveStart::Menu";
        }
        v7 = OpenThemeData(0LL, v6);
        hTheme = v7;
        if ( v7 )
        {
          v10 = *(_DWORD *)(a2 + 16);
          yTop = v10;
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_HVCZMTest>::ReportUsage(
            `wil::Feature<__WilFeatureTraits_Feature_HVCZMTest>::GetImpl'::`2'::impl,
            1u,
            v8,
            v9);
          if ( !(unsigned int)IsHighContrast() && s_AreAeroUpdatesAvailable(v12, v11, v13, v14) )
            s_SetDwmAttributes(*(_QWORD *)(a2 + 24), v7);
          v15 = *((_DWORD *)ContextMenuDataForItem + 14);
          v16 = 6;
          if ( (v15 & 1) != 0 )
          {
            if ( *((_BYTE *)ContextMenuDataForItem + 69) || (v17 = 2LL, (v15 & 4) != 0) )
              v17 = 6LL;
            *(_DWORD *)(a2 + 44) += DPIToPPIHelpers::ScaleByType(
                                      *((unsigned int *)ContextMenuDataForItem + 15),
                                      v17,
                                      hWnd,
                                      *((unsigned int *)ContextMenuDataForItem + 16));
            v15 = *((_DWORD *)ContextMenuDataForItem + 14);
          }
          if ( (v15 & 2) != 0 )
          {
            if ( !*((_BYTE *)ContextMenuDataForItem + 69) && (v15 & 4) == 0 )
              v16 = 2;
            *(_DWORD *)(a2 + 52) -= DPIToPPIHelpers::ScaleByType(
                                      *((unsigned int *)ContextMenuDataForItem + 15),
                                      v16,
                                      hWnd,
                                      *((unsigned int *)ContextMenuDataForItem + 16));
          }
          if ( (v10 & 4) != 0 )
          {
            if ( (v10 & 1) != 0 && *(_QWORD *)ContextMenuDataForItem && **(_WORD **)ContextMenuDataForItem )
              v18 = 4;
            else
              v18 = 3;
          }
          else if ( (v10 & 1) == 0
                 || !*(_QWORD *)ContextMenuDataForItem
                 || (v18 = 2, !**(_WORD **)ContextMenuDataForItem) )
          {
            v18 = 1;
          }
          iStateId = v18;
          v19 = (int *)(a2 + 40);
          v20 = hTheme;
          ScaleFactorForWindow = DrawThemeBackground(hTheme, *(HDC *)(a2 + 32), 14, v18, (LPCRECT)(a2 + 40), 0LL);
          if ( ScaleFactorForWindow < 0 )
            goto LABEL_87;
          if ( *(_QWORD *)ContextMenuDataForItem && **(_WORD **)ContextMenuDataForItem )
          {
            if ( *((_DWORD *)ContextMenuDataForItem + 6) != 2048 )
            {
              v23 = *v19;
              v24 = *(_DWORD *)(a2 + 44);
              v25 = *(_DWORD *)(a2 + 48);
              v26 = *(_DWORD *)(a2 + 52);
              LODWORD(hdc[0]) = DPIToPPIHelpers::ScaleByType(
                                  *((unsigned int *)ContextMenuDataForItem + 15),
                                  32LL,
                                  hWnd,
                                  *((unsigned int *)ContextMenuDataForItem + 16))
                              + v23;
              HIDWORD(hdc[0]) = v24;
              LODWORD(hdc[1]) = v25
                              - DPIToPPIHelpers::ScaleByType(
                                  *((unsigned int *)ContextMenuDataForItem + 15),
                                  17LL,
                                  hWnd,
                                  *((unsigned int *)ContextMenuDataForItem + 16));
              HIDWORD(hdc[1]) = v26;
              v27 = iStateId;
              v28 = hTheme;
              ScaleFactorForWindow = s_DrawThemeTextPPIAware(
                                       hTheme,
                                       iStateId,
                                       (__int64)hWnd,
                                       a2,
                                       (__int64)ContextMenuDataForItem,
                                       (__m128i *)hdc);
              if ( ScaleFactorForWindow < 0 )
                goto LABEL_86;
              v79 = *(_DWORD *)(a2 + 52) - *(_DWORD *)(a2 + 44);
              if ( (yTop & 8) == 0 || *((_QWORD *)ContextMenuDataForItem + 5) )
              {
                if ( *((_DWORD *)ContextMenuDataForItem + 7) == -1 )
                {
                  v45 = (void *)*((_QWORD *)ContextMenuDataForItem + 4);
                  if ( !v45 && ((yTop & 8) == 0 || (v45 = (void *)*((_QWORD *)ContextMenuDataForItem + 5)) == 0LL) )
                  {
                    v45 = (void *)*((_QWORD *)ContextMenuDataForItem + 6);
                    if ( !v45 )
                    {
LABEL_81:
                      if ( (*((_BYTE *)ContextMenuDataForItem + 24) & 0x10) != 0 )
                      {
                        *(__m128i *)pRect = _mm_load_si128((const __m128i *)&_xmm);
                        v59 = *(_DWORD *)(a2 + 48)
                            - DPIToPPIHelpers::ScaleByType(
                                *((unsigned int *)ContextMenuDataForItem + 15),
                                28LL,
                                hWnd,
                                *((unsigned int *)ContextMenuDataForItem + 16));
                        if ( *((_DWORD *)ContextMenuDataForItem + 15) == 1 )
                        {
                          v60 = 100;
                          v61 = v80;
                        }
                        else
                        {
                          v60 = 96;
                          v61 = *((_DWORD *)ContextMenuDataForItem + 16);
                        }
                        *(_OWORD *)pRect = *(_OWORD *)Geometry::CRect::MulDiv((int *)hdc, (int *)pRect, v61, v60);
                        v62 = *(_DWORD *)(a2 + 44);
                        v63 = DPIToPPIHelpers::ScaleByType(
                                *((unsigned int *)ContextMenuDataForItem + 15),
                                16LL,
                                hWnd,
                                *((unsigned int *)ContextMenuDataForItem + 16));
                        v64 = v79 / 2 - v63 / 2;
                        LODWORD(hdc[0]) = v59 + LODWORD(pRect[0]);
                        HIDWORD(hdc[0]) = v62 + v64 + HIDWORD(pRect[0]);
                        LODWORD(hdc[1]) = v59 + LODWORD(pRect[1]);
                        HIDWORD(hdc[1]) = v62 + HIDWORD(pRect[1]) + v64;
                        ScaleFactorForWindow = s_DrawGlyph(
                                                 hWnd,
                                                 *((_DWORD *)ContextMenuDataForItem + 16),
                                                 v28,
                                                 *(HDC *)(a2 + 32),
                                                 16,
                                                 *((_DWORD *)ContextMenuDataForItem + 6),
                                                 v27,
                                                 (struct tagRECT *)hdc,
                                                 *((_DWORD *)ContextMenuDataForItem + 15));
                      }
                      goto LABEL_86;
                    }
                  }
                  ScaleFactorForWindow = -2147467259;
                  if ( !GetObjectW(v45, 32, pv) )
                    goto LABEL_86;
                  Microsoft::WRL::Wrappers::CompatibleDC::CompatibleDC(
                    (Microsoft::WRL::Wrappers::CompatibleDC *)hdc,
                    *(HDC *)(a2 + 32));
                  ScaleFactorForWindow = Microsoft::WRL::Wrappers::CompatibleDC::CheckValidity((Microsoft::WRL::Wrappers::CompatibleDC *)hdc);
                  if ( ScaleFactorForWindow >= 0 )
                  {
                    v46 = DPIToPPIHelpers::ScaleByType(
                            *((unsigned int *)ContextMenuDataForItem + 15),
                            16LL,
                            hWnd,
                            *((unsigned int *)ContextMenuDataForItem + 16));
                    v48 = hSrc;
                    v49 = nNumber;
                    v74 = 0;
                    if ( hSrc > v46 || nNumber > v46 )
                    {
                      v50 = *((_DWORD *)ContextMenuDataForItem + 16);
                      SHComputeDPI(v47, &nDenominator, 0LL);
                      if ( nDenominator > v50 )
                      {
                        v74 = 1;
                        v49 = MulDiv(v49, v50, nDenominator);
                        v48 = MulDiv(v48, v50, nDenominator);
                      }
                    }
                    v51 = *(_DWORD *)(a2 + 44);
                    v52 = DPIToPPIHelpers::ScaleByType(
                            *((unsigned int *)ContextMenuDataForItem + 15),
                            16LL,
                            hWnd,
                            *((unsigned int *)ContextMenuDataForItem + 16));
                    if ( v52 > v49 )
                    {
                      v74 = 1;
                      v52 = 2 * v52 - v49;
                    }
                    v53 = (v79 - v48) / 2;
                    yTop = v52 / 2;
                    v54 = v53 + v51 + v48;
                    v55 = v53 + v51;
                    pColor = 0;
                    GetThemeColor(hTheme, 14, iStateId, 3803, &pColor);
                    pRect[0] = hdc[1];
                    h = SelectObject(hdc[1], v45);
                    if ( GetObjectW(v45, 104, v89) == 104 && v90 == 32 && !v91 )
                    {
                      nDenominator = 33488896;
                      v56 = GdiAlphaBlend(
                              *(HDC *)(a2 + 32),
                              yTop,
                              v55,
                              v49,
                              v54 - v55,
                              hdc[1],
                              0,
                              0,
                              nNumber,
                              hSrc,
                              (BLENDFUNCTION)33488896);
                    }
                    else
                    {
                      v57 = *(HDC *)(a2 + 32);
                      v58 = v54 - v55;
                      if ( v74 )
                      {
                        SetStretchBltMode(v57, 3);
                        v56 = StretchBlt(*(HDC *)(a2 + 32), yTop, v55, v49, v58, hdc[1], 0, 0, nNumber, hSrc, 0xCC0020u);
                      }
                      else
                      {
                        v56 = BitBlt(v57, yTop, v55, v49, v58, hdc[1], 0, 0, 0xCC0020u);
                      }
                    }
                    if ( v56 )
                      ScaleFactorForWindow = 0;
                    else
                      ScaleFactorForWindow = ResultFromKnownLastError();
                    SelectObject(pRect[0], h);
                  }
                  Microsoft::WRL::Wrappers::CompatibleDC::~CompatibleDC((Microsoft::WRL::Wrappers::CompatibleDC *)hdc);
LABEL_79:
                  if ( ScaleFactorForWindow >= 0 )
                    goto LABEL_80;
LABEL_86:
                  v19 = (int *)(a2 + 40);
LABEL_87:
                  ExcludeClipRect(
                    *(HDC *)(a2 + 32),
                    *v19,
                    *(_DWORD *)(a2 + 44),
                    *(_DWORD *)(a2 + 48),
                    *(_DWORD *)(a2 + 52));
                  CloseThemeData(hTheme);
                  return (unsigned int)ScaleFactorForWindow;
                }
                *(__m128i *)pRect = _mm_load_si128((const __m128i *)&_xmm);
                if ( *((_DWORD *)ContextMenuDataForItem + 15) == 1 )
                {
                  v35 = 100;
                  v36 = v80;
                }
                else
                {
                  v35 = 96;
                  v36 = *((_DWORD *)ContextMenuDataForItem + 16);
                }
                *(_OWORD *)pRect = *(_OWORD *)Geometry::CRect::MulDiv((int *)hdc, (int *)pRect, v36, v35);
                v37 = *(_DWORD *)(a2 + 44);
                v38 = DPIToPPIHelpers::ScaleByType(
                        *((unsigned int *)ContextMenuDataForItem + 15),
                        16LL,
                        hWnd,
                        *((unsigned int *)ContextMenuDataForItem + 16));
                v39 = v79 / 2 - v38 / 2;
                v40 = v37 + v39 + HIDWORD(pRect[1]);
                yTop = v37 + HIDWORD(pRect[0]) + v39;
                if ( *((_DWORD *)ContextMenuDataForItem + 15) )
                {
                  v43 = (int)pRect[1];
                  v42 = (int)pRect[0];
                }
                else
                {
                  v41 = (int)DPIToPPIHelpers::ScaleByType(
                               0LL,
                               16LL,
                               hWnd,
                               *((unsigned int *)ContextMenuDataForItem + 16))
                      / 2;
                  v42 = v41 + LODWORD(pRect[0]);
                  v43 = v41 + LODWORD(pRect[1]);
                }
                memset_0(&psii.cbSize + 1, 0, 0x21CuLL);
                psii.cbSize = 544;
                v44 = v43 - v42;
                if ( SHGetStockIconInfo(*((SHSTOCKICONID *)ContextMenuDataForItem + 7), (v44 < 24) + 256, &psii) < 0 )
                  goto LABEL_80;
                if ( DrawIconEx(*(HDC *)(a2 + 32), v42, yTop, psii.hIcon, v44, v40 - yTop, 0, 0LL, 3u) )
                {
                  ScaleFactorForWindow = 0;
LABEL_80:
                  v27 = iStateId;
                  v28 = hTheme;
                  goto LABEL_81;
                }
                Error = ResultFromKnownLastError();
              }
              else
              {
                *(__m128i *)pRect = _mm_load_si128((const __m128i *)&_xmm);
                if ( *((_DWORD *)ContextMenuDataForItem + 15) == 1 )
                {
                  v29 = 100;
                  v30 = v80;
                }
                else
                {
                  v29 = 96;
                  v30 = *((_DWORD *)ContextMenuDataForItem + 16);
                }
                *(_OWORD *)pRect = *(_OWORD *)Geometry::CRect::MulDiv((int *)hdc, (int *)pRect, v30, v29);
                v31 = *(_DWORD *)(a2 + 44);
                v32 = DPIToPPIHelpers::ScaleByType(
                        *((unsigned int *)ContextMenuDataForItem + 15),
                        16LL,
                        hWnd,
                        *((unsigned int *)ContextMenuDataForItem + 16));
                v33 = v79 / 2 - v32 / 2;
                HIDWORD(pRect[1]) += v31 + v33;
                HIDWORD(pRect[0]) += v31 + v33;
                *(_OWORD *)hdc = *(_OWORD *)pRect;
                Error = s_DrawGlyph(
                          hWnd,
                          *((_DWORD *)ContextMenuDataForItem + 16),
                          v28,
                          *(HDC *)(a2 + 32),
                          11,
                          *((_DWORD *)ContextMenuDataForItem + 6),
                          iStateId,
                          (struct tagRECT *)hdc,
                          *((_DWORD *)ContextMenuDataForItem + 15));
              }
              ScaleFactorForWindow = Error;
              goto LABEL_79;
            }
          }
          else if ( *((_DWORD *)ContextMenuDataForItem + 6) != 2048 )
          {
            goto LABEL_87;
          }
          pRect[0] = *(HDC *)v19;
          pRect[1] = *(HDC *)(a2 + 48);
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_HVCZMTest>::ReportUsage(
            `wil::Feature<__WilFeatureTraits_Feature_HVCZMTest>::GetImpl'::`2'::impl,
            1u,
            v21,
            v22);
          if ( !s_AreAeroUpdatesAvailable(v67, v66, v68, v69) )
          {
            v70 = DPIToPPIHelpers::ScaleByType(
                    *((unsigned int *)ContextMenuDataForItem + 15),
                    8LL,
                    hWnd,
                    *((unsigned int *)ContextMenuDataForItem + 16));
            LODWORD(pRect[0]) += v70;
            LODWORD(pRect[1]) -= v70;
          }
          if ( *((_BYTE *)ContextMenuDataForItem + 69)
            || (v71 = 7LL, (*((_BYTE *)ContextMenuDataForItem + 56) & 4) != 0) )
          {
            v71 = 9LL;
          }
          v72 = DPIToPPIHelpers::ScaleByType(
                  *((unsigned int *)ContextMenuDataForItem + 15),
                  v71,
                  hWnd,
                  *((unsigned int *)ContextMenuDataForItem + 16));
          v73 = floorf((double)(v72 - 5) * 0.5);
          HIDWORD(pRect[0]) += (int)v73;
          --HIDWORD(pRect[1]);
          DrawThemeBackground(v20, *(HDC *)(a2 + 32), 15, v18, (LPCRECT)pRect, 0LL);
          goto LABEL_87;
        }
      }
    }
  }
  return (unsigned int)ScaleFactorForWindow;
}
