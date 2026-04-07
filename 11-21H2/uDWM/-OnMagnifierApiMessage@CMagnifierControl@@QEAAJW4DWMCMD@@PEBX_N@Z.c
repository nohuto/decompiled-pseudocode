/*
 * XREFs of ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x1800C6CF0
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180021CF0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnSetDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800BC868 (-OnSetDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z @ 0x1800BC8E4 (-OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z.c)
 *     ?OnSetDesktopMagnifierSamplingMode@CFullScreenMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@Z @ 0x1800BC934 (-OnSetDesktopMagnifierSamplingMode@CFullScreenMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@.c)
 *     ?OnSetPersistentDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800BC9C8 (-OnSetPersistentDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z @ 0x1800C5E60 (-OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z.c)
 *     ?OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800C60F8 (-OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?OnSetMagnifierSamplingMode@CMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@Z @ 0x1800C62B8 (-OnSetMagnifierSamplingMode@CMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@Z.c)
 *     ?OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x1800C6334 (-OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z.c)
 *     ??$wnf_query_nothrow@I@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAIPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1800C6798 (--$wnf_query_nothrow@I@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAIPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 *     ?LookupAndValidateMagnifier@CMagnifierControl@@AEAAJ_KPEAPEAVCMagnifier@@@Z @ 0x1800C6C8C (-LookupAndValidateMagnifier@CMagnifierControl@@AEAAJ_KPEAPEAVCMagnifier@@@Z.c)
 *     ?OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z @ 0x1800C72CC (-OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z.c)
 *     ?OnMagnifierDestroy@CMagnifierControl@@AEAAJPEAUHWND__@@@Z @ 0x1800C7494 (-OnMagnifierDestroy@CMagnifierControl@@AEAAJPEAUHWND__@@@Z.c)
 *     ?RenderAndCommit@CMagnifierControl@@AEAAJXZ @ 0x1800C786C (-RenderAndCommit@CMagnifierControl@@AEAAJXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C78CC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter@@@details@wi.c)
 *     ?reset@?$unique_ptr@VMagnifierExperienceHelper@@U?$default_delete@VMagnifierExperienceHelper@@@wistd@@@wistd@@QEAAXPEAVMagnifierExperienceHelper@@@Z @ 0x1800C79F8 (-reset@-$unique_ptr@VMagnifierExperienceHelper@@U-$default_delete@VMagnifierExperienceHelper@@@w.c)
 *     ??0MagnifierExperienceHelper@@QEAA@AEBNAEBM1@Z @ 0x1800C7A38 (--0MagnifierExperienceHelper@@QEAA@AEBNAEBM1@Z.c)
 *     ?SetMagnificationFactor@MagnifierExperienceHelper@@QEAAXAEBN@Z @ 0x1800C8358 (-SetMagnificationFactor@MagnifierExperienceHelper@@QEAAXAEBN@Z.c)
 *     CWindowList::ForEachSoftwareCursorListener__lambda_e7ecf37d3f646281150205d781ba1fb4___ @ 0x1801014E0 (CWindowList--ForEachSoftwareCursorListener__lambda_e7ecf37d3f646281150205d781ba1fb4___.c)
 *     ?RegisterForSoftwareCursorChangeNotification@CWindowList@@QEAAJPEAUISoftwareCursorChangeListener@@@Z @ 0x1801052F4 (-RegisterForSoftwareCursorChangeNotification@CWindowList@@QEAAJPEAUISoftwareCursorChangeListener.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CMagnifierControl::OnMagnifierApiMessage(unsigned __int64 a1, int a2, __int64 a3, char a4)
{
  unsigned int v7; // ebx
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r9
  int v12; // esi
  int v13; // esi
  int v14; // esi
  int v15; // esi
  int v16; // esi
  int v17; // eax
  CMagnifierControl *v18; // rcx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  double *v27; // rsi
  int v28; // eax
  int v29; // eax
  int v30; // esi
  int v31; // esi
  int v32; // esi
  int v33; // esi
  int v34; // esi
  CMagnifier *v35; // rax
  MagnifierExperienceHelper *v36; // rax
  unsigned __int64 v37; // r8
  CWindowList *v38; // rcx
  unsigned __int64 v39; // rax
  int v40; // eax
  int v41; // esi
  CMagnifier *v42; // rax
  MagnifierExperienceHelper *v43; // rax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  CMagnifier *v51; // [rsp+30h] [rbp-20h] BYREF
  struct _RTL_CRITICAL_SECTION *v52; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v53[2]; // [rsp+40h] [rbp-10h] BYREF
  float v54; // [rsp+88h] [rbp+38h] BYREF
  float v55; // [rsp+98h] [rbp+48h] BYREF

  LOBYTE(v55) = a4;
  v7 = 0;
  v8 = 0;
  v52 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( a2 > 1073741931 )
  {
    v30 = a2 - 1073741933;
    if ( !v30 )
    {
      v51 = 0LL;
      v48 = CMagnifierControl::LookupAndValidateMagnifier((CMagnifierControl *)a1, *(_QWORD *)(a3 + 4), &v51);
      v8 = v48;
      if ( v48 >= 0 )
      {
        v49 = CMagnifier::OnSetMagnifierSamplingMode((__int64)v51, *(_DWORD *)(a3 + 20));
        v8 = v49;
        if ( v49 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180122BC0, 1LL, v49, 0x12Du);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180122BC0, 1LL, v48, 0x12Bu);
      }
      goto LABEL_65;
    }
    v31 = v30 - 1;
    if ( !v31 )
    {
      v46 = CFullScreenMagnifier::OnSetDesktopMagnifierSamplingMode(*(_QWORD *)(a1 + 48), *(_DWORD *)(a3 + 12));
      v8 = v46;
      if ( v46 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180122BC0, 1LL, v46, 0x135u);
        goto LABEL_65;
      }
      goto LABEL_59;
    }
    v32 = v31 - 1;
    if ( !v32 )
    {
      v45 = CFullScreenMagnifier::OnSetPersistentDesktopColorEffect(
              *(CFullScreenMagnifier **)(a1 + 48),
              (const struct MilColorTransform *)(a3 + 12));
      v8 = v45;
      if ( v45 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180122BC0, 1LL, v45, 0x13Fu);
        goto LABEL_65;
      }
      goto LABEL_59;
    }
    v33 = v32 - 1;
    if ( v33 )
    {
      if ( v33 != 1 )
        goto LABEL_65;
      LOBYTE(v9) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter>::GetImpl'::`2'::impl,
        v9);
      v34 = *(_DWORD *)(a3 + 12);
      v35 = (CMagnifier *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                            WPF::g_pProcessHeap,
                            128LL);
      v51 = v35;
      if ( v35 )
        v36 = MagnifierExperienceHelper::MagnifierExperienceHelper(
                v35,
                (const double *)(a1 + 152),
                (const float *)(a3 + 16),
                (const float *)(a3 + 20));
      else
        v36 = 0LL;
      v51 = 0LL;
      wistd::unique_ptr<MagnifierExperienceHelper,wistd::default_delete<MagnifierExperienceHelper>>::reset(
        a1 + 160,
        v36);
      wistd::unique_ptr<MagnifierExperienceHelper,wistd::default_delete<MagnifierExperienceHelper>>::reset(&v51, 0LL);
      v37 = a1 + 16;
      v38 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 52);
      v39 = a1;
      if ( v34 )
      {
        v40 = CWindowList::RegisterForSoftwareCursorChangeNotification(
                v38,
                (struct ISoftwareCursorChangeListener *)(v37 & ((unsigned __int128)-(__int128)a1 >> 64)));
        v8 = v40;
        if ( v40 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180122BC0, 1LL, v40, 0x177u);
          goto LABEL_65;
        }
        goto LABEL_48;
      }
    }
    else
    {
      v41 = *(_DWORD *)(a3 + 12);
      v42 = (CMagnifier *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                            WPF::g_pProcessHeap,
                            128LL);
      v51 = v42;
      if ( v42 )
      {
        v55 = 0.0;
        v54 = 0.0;
        v43 = MagnifierExperienceHelper::MagnifierExperienceHelper(v42, (const double *)(a1 + 152), &v54, &v55);
      }
      else
      {
        v43 = 0LL;
      }
      v51 = 0LL;
      wistd::unique_ptr<MagnifierExperienceHelper,wistd::default_delete<MagnifierExperienceHelper>>::reset(
        a1 + 160,
        v43);
      wistd::unique_ptr<MagnifierExperienceHelper,wistd::default_delete<MagnifierExperienceHelper>>::reset(&v51, 0LL);
      v37 = a1 + 16;
      v38 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 52);
      v39 = a1;
      if ( v41 )
      {
        v44 = CWindowList::RegisterForSoftwareCursorChangeNotification(
                v38,
                (struct ISoftwareCursorChangeListener *)(v37 & ((unsigned __int128)-(__int128)a1 >> 64)));
        v8 = v44;
        if ( v44 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180122BC0, 1LL, v44, 0x158u);
          goto LABEL_65;
        }
LABEL_48:
        *(_BYTE *)(a1 + 128) = *(_DWORD *)(a3 + 12) != 0;
        goto LABEL_65;
      }
    }
    v51 = (CMagnifier *)(v37 & ((unsigned __int128)-(__int128)v39 >> 64));
    v53[0] = &v51;
    v53[1] = v38;
    CWindowList::ForEachSoftwareCursorListener__lambda_e7ecf37d3f646281150205d781ba1fb4___(v38, v53);
    goto LABEL_48;
  }
  if ( a2 == 1073741931 )
  {
    v27 = (double *)(a3 + 12);
    if ( *(_BYTE *)(a1 + 128) )
    {
      if ( *(double *)(a1 + 152) == *v27 )
      {
        v54 = 0.0;
        LOBYTE(v55) = 0;
        if ( (int)wil::wnf_query_nothrow<unsigned int>(v10, (char *)&v55, (__int64)&v54, v11) >= 0
          && LOBYTE(v55)
          && !LODWORD(v54) )
        {
          goto LABEL_65;
        }
      }
      *(double *)(a1 + 152) = *v27;
      MagnifierExperienceHelper::SetMagnificationFactor(
        *(MagnifierExperienceHelper **)(a1 + 160),
        (const double *)(a3 + 12));
      v28 = CFullScreenMagnifier::OnSetDesktopMagnificationFactor(
              *(CFullScreenMagnifier **)(a1 + 48),
              *v27,
              *(_DWORD *)(a3 + 20),
              *(_DWORD *)(a3 + 24));
      v8 = v28;
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180122BC0, 1LL, v28, 0x116u);
        goto LABEL_65;
      }
    }
    else
    {
      v29 = CFullScreenMagnifier::OnSetDesktopMagnificationFactor(
              *(CFullScreenMagnifier **)(a1 + 48),
              *v27,
              *(_DWORD *)(a3 + 20),
              *(_DWORD *)(a3 + 24));
      v8 = v29;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180122BC0, 1LL, v29, 0x11Eu);
        goto LABEL_65;
      }
    }
    goto LABEL_59;
  }
  v12 = a2 - 1073741923;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            if ( v16 != 3 )
              goto LABEL_65;
            v17 = CFullScreenMagnifier::OnSetDesktopColorEffect(
                    *(CFullScreenMagnifier **)(a1 + 48),
                    (const struct MilColorTransform *)(a3 + 12));
            v8 = v17;
            if ( v17 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180122BC0, 1LL, v17, 0xEFu);
              goto LABEL_65;
            }
LABEL_59:
            v47 = CMagnifierControl::RenderAndCommit(v18);
            v8 = v47;
            if ( v47 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180122BC0, 1LL, v47, 0x186u);
            goto LABEL_65;
          }
          v51 = 0LL;
          v19 = CMagnifierControl::LookupAndValidateMagnifier((CMagnifierControl *)a1, *(_QWORD *)(a3 + 8), &v51);
          v8 = v19;
          if ( v19 >= 0 )
          {
            v20 = CMagnifier::OnSetRenderTargetTextures(v51, (const struct MAGN_ADAPTERTEXTURES *)(a3 + 16));
            v8 = v20;
            if ( v20 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180122BC0, 1LL, v20, 0xE7u);
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180122BC0, 1LL, v19, 0xE3u);
          }
        }
        else
        {
          v51 = 0LL;
          v21 = CMagnifierControl::LookupAndValidateMagnifier((CMagnifierControl *)a1, *(_QWORD *)(a3 + 8), &v51);
          v8 = v21;
          if ( v21 >= 0 )
          {
            v22 = CMagnifier::OnModifyWindowFilterList(
                    (CMagnifierRenderTargetProxy **)v51,
                    (const struct MAGN_FILTERLIST *)(a3 + 16));
            v8 = v22;
            if ( v22 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180122BC0, 1LL, v22, 0xD9u);
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180122BC0, 1LL, v21, 0xD5u);
          }
        }
      }
      else
      {
        v51 = 0LL;
        v23 = CMagnifierControl::LookupAndValidateMagnifier((CMagnifierControl *)a1, *(_QWORD *)(a3 + 4), &v51);
        v8 = v23;
        if ( v23 >= 0 )
        {
          v24 = CMagnifier::OnSetColorEffect(v51, (const struct MilColorTransform *)(a3 + 20));
          v8 = v24;
          if ( v24 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180122BC0, 1LL, v24, 0xCBu);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180122BC0, 1LL, v23, 0xC9u);
        }
      }
    }
    else
    {
      *(_BYTE *)(a1 + 128) = 0;
      v25 = CMagnifierControl::OnMagnifierDestroy((CMagnifierControl *)a1, *(HWND *)(a3 + 4));
      v8 = v25;
      if ( v25 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180122BC0, 1LL, v25, 0xBFu);
    }
  }
  else
  {
    v26 = CMagnifierControl::OnMagnifierCreate((CMagnifierControl *)a1, *(HWND *)(a3 + 4), *(_DWORD *)(a3 + 20));
    v8 = v26;
    if ( v26 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180122BC0, 1LL, v26, 0xB4u);
  }
LABEL_65:
  if ( v8 != -2147023728 )
    v7 = v8;
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v52);
  return v7;
}
