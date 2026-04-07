/*
 * XREFs of ?s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@_NPEAUtagSIZE@@PEAU_MARGINS@@@Z @ 0x1800307B0
 * Callers:
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18002190C (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 * Callees:
 *     ?GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z @ 0x18001B810 (-GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 */

char __fastcall CSecondaryWindowRepresentation::s_CalculateWindowMetrics(
        __int64 a1,
        __int16 a2,
        char a3,
        int *a4,
        struct _MARGINS *a5)
{
  __int64 v5; // r12
  struct _MARGINS *v7; // r9
  char v8; // bl
  int v10; // r15d
  __int64 v11; // rdi
  _QWORD *v12; // rsi
  __int64 v13; // r14
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
  int v25; // eax
  HMONITOR v26; // rax
  int v27; // eax
  char v28; // [rsp+20h] [rbp-E8h]
  PVOID RestartKey[2]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD Buffer[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v31; // [rsp+50h] [rbp-B8h]
  __int128 v32; // [rsp+60h] [rbp-A8h]
  __int128 v33; // [rsp+70h] [rbp-98h]
  __int64 v34; // [rsp+80h] [rbp-88h]
  char v35; // [rsp+88h] [rbp-80h]
  struct tagMONITORINFO mi; // [rsp+A0h] [rbp-68h] BYREF

  v5 = *(_QWORD *)(a1 + 440);
  v7 = a5;
  v8 = a2;
  v28 = a3;
  if ( v5 )
  {
    v10 = 0;
    if ( (a2 & 0x100) == 0 )
    {
      v11 = *(_QWORD *)(a1 + 40);
      v12 = 0LL;
      RestartKey[0] = 0LL;
      if ( v11 )
      {
        v13 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 52);
        v14 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)(v13 + 8), RestartKey);
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
                  goto LABEL_11;
              }
              v12 = v16;
            }
LABEL_11:
            v14 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)(v13 + 8), RestartKey);
            if ( !v14 )
            {
              if ( !v12 )
                goto LABEL_15;
              break;
            }
          }
          Buffer[1] = 0LL;
          v31 = 0LL;
          v34 = -1LL;
          v17 = (struct _RTL_GENERIC_TABLE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 52) + 8LL);
          Buffer[0] = v12[17];
          v35 = 0;
          v32 = 0LL;
          v33 = 0LL;
          v18 = RtlLookupElementGenericTable(v17, Buffer);
          if ( v18 )
          {
            if ( v11 == v18[8] )
            {
              v26 = MonitorFromWindow(0LL, 1u);
              mi.cbSize = 40;
              if ( GetMonitorInfoW(v26, &mi) )
              {
                v27 = 0;
                if ( mi.rcMonitor.right - mi.rcMonitor.left >= 0 )
                  v27 = mi.rcMonitor.right - mi.rcMonitor.left;
                *a4 = v27;
                if ( mi.rcMonitor.bottom - mi.rcMonitor.top >= 0 )
                  v10 = mi.rcMonitor.bottom - mi.rcMonitor.top;
                a4[1] = v10;
                *a5 = (struct _MARGINS)xmmword_18011AF60;
                return 1;
              }
            }
          }
        }
LABEL_15:
        v7 = a5;
        a3 = v28;
      }
    }
    v19 = *(_DWORD *)(a1 + 56) - *(_DWORD *)(a1 + 48);
    if ( v19 < 0 )
      v19 = 0;
    *a4 = v19;
    v20 = *(_DWORD *)(a1 + 60) - *(_DWORD *)(a1 + 52);
    if ( v20 < 0 )
      v20 = 0;
    a4[1] = v20;
    if ( (v8 & 4) != 0 )
    {
      if ( a3 )
      {
        *v7 = *(struct _MARGINS *)(a1 + 64);
      }
      else
      {
        v25 = *(_DWORD *)(a1 + 224) - *(_DWORD *)(a1 + 216);
        if ( v25 < 0 )
          v25 = 0;
        *a4 = v25;
        if ( *(_DWORD *)(a1 + 228) - *(_DWORD *)(a1 + 220) >= 0 )
          v10 = *(_DWORD *)(a1 + 228) - *(_DWORD *)(a1 + 220);
        a4[1] = v10;
        *a4 = v25 - *(_DWORD *)(a1 + 268) - *(_DWORD *)(a1 + 264);
        a4[1] = v10 - *(_DWORD *)(a1 + 276) - *(_DWORD *)(a1 + 272);
        *v7 = (struct _MARGINS)xmmword_18011AF60;
      }
    }
    else if ( v8 >= 0 )
    {
      CTopLevelWindow::GetFrameMargins((CTopLevelWindow *)v5, v7);
    }
    else
    {
      v21 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(v5 + 644), 4)) - *(_DWORD *)(v5 + 680);
      v22 = _mm_srli_si128(*(__m128i *)(v5 + 644), 8).m128i_u32[0] - *(_DWORD *)(v5 + 684);
      v23 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(v5 + 644), 12)) - *(_DWORD *)(v5 + 688);
      v7->cxLeftWidth = *(_OWORD *)(v5 + 644) - *(_DWORD *)(v5 + 676);
      v7->cxRightWidth = v21;
      v7->cyTopHeight = v22;
      v7->cyBottomHeight = v23;
    }
    return 1;
  }
  return 0;
}
