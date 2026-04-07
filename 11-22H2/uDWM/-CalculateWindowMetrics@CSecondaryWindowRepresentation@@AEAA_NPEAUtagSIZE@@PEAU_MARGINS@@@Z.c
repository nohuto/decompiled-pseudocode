/*
 * XREFs of ?CalculateWindowMetrics@CSecondaryWindowRepresentation@@AEAA_NPEAUtagSIZE@@PEAU_MARGINS@@@Z @ 0x18002AA00
 * Callers:
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18001EDE0 (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 * Callees:
 *     ?GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z @ 0x180007928 (-GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001D634 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_NonClientAreaThumbnails@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18006517C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_NonClientAreaThumbnails@@@details@wil@@QE.c)
 */

char __fastcall CSecondaryWindowRepresentation::CalculateWindowMetrics(
        CSecondaryWindowRepresentation *this,
        struct tagSIZE *a2,
        struct _MARGINS *a3)
{
  CWindowData *v3; // rbx
  int v4; // r14d
  struct _MARGINS *v5; // rsi
  int v6; // r8d
  struct tagSIZE *v7; // r13
  CWindowData *v9; // rdi
  __int64 v10; // r12
  __int64 v11; // rbx
  _QWORD *v12; // rsi
  __int64 v13; // r15
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  struct _RTL_GENERIC_TABLE *v17; // rcx
  _QWORD *v18; // rax
  int v19; // eax
  int v20; // eax
  int v21; // r8d
  unsigned __int32 v22; // edx
  int v23; // ecx
  int v25; // r8d
  __int64 v26; // rdi
  int v27; // eax
  __int128 v28; // xmm0
  HMONITOR v29; // rax
  int v30; // eax
  PVOID RestartKey; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD Buffer[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v34; // [rsp+40h] [rbp-B8h]
  __int128 v35; // [rsp+50h] [rbp-A8h]
  __int128 v36; // [rsp+60h] [rbp-98h]
  __int64 v37; // [rsp+70h] [rbp-88h]
  char v38; // [rsp+78h] [rbp-80h]
  struct tagMONITORINFO mi; // [rsp+90h] [rbp-68h] BYREF

  v3 = (CWindowData *)*((_QWORD *)this + 8);
  v4 = 0;
  v5 = a3;
  v6 = *((_DWORD *)this + 18);
  v7 = a2;
  v9 = 0LL;
  if ( v6 == 1 )
    goto LABEL_2;
  v25 = v6 - 2;
  if ( !v25 )
  {
    v26 = *((_QWORD *)v3 + 60);
    if ( v26 )
    {
      v9 = *(CWindowData **)(v26 + 32);
      goto LABEL_3;
    }
LABEL_2:
    v9 = v3;
    goto LABEL_3;
  }
  if ( v25 == 1 )
  {
    if ( CWindowData::IsImmersiveWindow(v3) )
      goto LABEL_2;
    v9 = *(CWindowData **)(*((_QWORD *)v3 + 61) + 80LL);
  }
LABEL_3:
  v10 = *((_QWORD *)v9 + 55);
  if ( v10 )
  {
    if ( (*((_DWORD *)this + 10) & 0x100) == 0 )
    {
      v11 = *((_QWORD *)v9 + 5);
      v12 = 0LL;
      RestartKey = 0LL;
      if ( v11 )
      {
        v13 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 54);
        v14 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)(v13 + 8), &RestartKey);
        if ( v14 )
        {
          while ( !v12 )
          {
            v15 = v14 + 10;
            v16 = (_QWORD *)v14[10];
            if ( v16 != v15 )
            {
              while ( v16[5] != v11 )
              {
                v16 = (_QWORD *)*v16;
                if ( v16 == v15 )
                  goto LABEL_9;
              }
              v12 = v16;
            }
LABEL_9:
            v14 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)(v13 + 8), &RestartKey);
            if ( !v14 )
            {
              if ( !v12 )
                goto LABEL_13;
              break;
            }
          }
          Buffer[1] = 0LL;
          v34 = 0LL;
          v37 = -1LL;
          v17 = (struct _RTL_GENERIC_TABLE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 54) + 8LL);
          Buffer[0] = v12[17];
          v38 = 0;
          v35 = 0LL;
          v36 = 0LL;
          v18 = RtlLookupElementGenericTable(v17, Buffer);
          if ( v18 )
          {
            if ( v11 == v18[8] )
            {
              v29 = MonitorFromWindow(0LL, 1u);
              mi.cbSize = 40;
              if ( GetMonitorInfoW(v29, &mi) )
              {
                v30 = mi.rcMonitor.right - mi.rcMonitor.left;
                if ( mi.rcMonitor.right - mi.rcMonitor.left < 0 )
                  v30 = 0;
                v7->cx = v30;
                if ( mi.rcMonitor.bottom - mi.rcMonitor.top >= 0 )
                  v4 = mi.rcMonitor.bottom - mi.rcMonitor.top;
                v7->cy = v4;
                *a3 = (struct _MARGINS)xmmword_180120B18;
                return 1;
              }
            }
          }
        }
      }
LABEL_13:
      v5 = a3;
    }
    v19 = *((_DWORD *)v9 + 14) - *((_DWORD *)v9 + 12);
    if ( v19 < 0 )
      v19 = 0;
    v7->cx = v19;
    v20 = *((_DWORD *)v9 + 15) - *((_DWORD *)v9 + 13);
    if ( v20 < 0 )
      v20 = 0;
    v7->cy = v20;
    if ( (*((_BYTE *)this + 40) & 4) != 0
      || (LOBYTE(a2) = 1,
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_NonClientAreaThumbnails>::ReportUsage(
            &`wil::Feature<__WilFeatureTraits_Feature_NonClientAreaThumbnails>::GetImpl'::`2'::impl,
            a2),
          *((_DWORD *)this + 18) == 3) )
    {
      if ( *((_QWORD *)this + 6) )
      {
        *v5 = *((struct _MARGINS *)v9 + 4);
        return 1;
      }
      v27 = *((_DWORD *)v9 + 56) - *((_DWORD *)v9 + 54);
      if ( v27 < 0 )
        v27 = 0;
      v7->cx = v27;
      if ( *((_DWORD *)v9 + 57) - *((_DWORD *)v9 + 55) >= 0 )
        v4 = *((_DWORD *)v9 + 57) - *((_DWORD *)v9 + 55);
      v28 = xmmword_180120B18;
      v7->cy = v4;
      v7->cx = v27 - *((_DWORD *)v9 + 67) - *((_DWORD *)v9 + 66);
      v7->cy = v4 - *((_DWORD *)v9 + 69) - *((_DWORD *)v9 + 68);
    }
    else
    {
      if ( *((char *)this + 40) < 0 )
      {
        v21 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(v10 + 660), 4)) - *(_DWORD *)(v10 + 696);
        v22 = _mm_srli_si128(*(__m128i *)(v10 + 660), 8).m128i_u32[0] - *(_DWORD *)(v10 + 700);
        v23 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(v10 + 660), 12)) - *(_DWORD *)(v10 + 704);
        v5->cxLeftWidth = *(_OWORD *)(v10 + 660) - *(_DWORD *)(v10 + 692);
        v5->cxRightWidth = v21;
        v5->cyTopHeight = v22;
        v5->cyBottomHeight = v23;
        return 1;
      }
      if ( (*(_BYTE *)(v10 + 248) & 4) == 0 )
      {
        CTopLevelWindow::GetFrameMargins((CTopLevelWindow *)v10, v5);
        return 1;
      }
      v28 = *(_OWORD *)(v10 + 676);
    }
    *v5 = (struct _MARGINS)v28;
    return 1;
  }
  return 0;
}
