/*
 * XREFs of ?SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C01B633C
 * Callers:
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z @ 0x1C01B6150 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z @ 0x1C000F304 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000F6D8 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000F7D4 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHHHH@Z @ 0x1C000F808 (-SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHHHH@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ @ 0x1C002FA24 (--1-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x1C0044E7C (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C01A24CC (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C01A3618 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ @ 0x1C01A5490 (-_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C01A54B4 (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C01A5654 (-DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z.c)
 *     ?FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOSITION@@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C01A582C (-FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOS.c)
 *     ?GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C01A59E0 (-GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C01A5AA4 (-GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2@@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z2P6AJPEAV3@32@Z@Z @ 0x1C01B67AC (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2.c)
 *     ?ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C032CBE0 (-ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z.c)
 */

__int64 __fastcall SetPointerPositionForDisplaySource(
        struct DISPLAY_SOURCE *this,
        struct SESSION_VIEW *a2,
        const struct _DXGKARG_SETPOINTERPOSITION *a3,
        int a4,
        int a5)
{
  __int64 v5; // rax
  __int64 v9; // rsi
  int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // r8d
  __int64 v16; // r13
  DXGMONITOR *v17; // rbx
  char IsVirtualModeSupportDisabled; // di
  __int64 v19; // r8
  char v20; // al
  char v21; // dl
  signed int v22; // r13d
  struct _DXGKARG_SETPOINTERSHAPE *SavedCursor; // rax
  struct _DXGKARG_SETPOINTERSHAPE *v25; // rdi
  const void *pPixels; // r9
  int v27; // ecx
  int v28; // r9d
  int v29; // r11d
  __int128 v30; // xmm0
  int v31; // r8d
  int v32; // r10d
  int v33; // edx
  signed int v34; // ebx
  int v35; // r8d
  INT X; // eax
  int v37; // r9d
  int v38; // eax
  int v39; // r10d
  INT v40; // edx
  INT v41; // r8d
  int v42; // r9d
  int v43; // eax
  int v44; // eax
  int v45; // ecx
  __int64 v46; // rax
  const wchar_t *v47; // r9
  __int64 Height; // rcx
  __int64 v49; // rdx
  INT v50; // eax
  UINT v51; // edx
  struct _DXGKARG_SETPOINTERSHAPE *ClippedCursor; // rax
  const struct _DXGKARG_SETPOINTERSHAPE *v53; // rbx
  const void *v54; // r9
  __int64 v55; // r8
  int v56; // eax
  __int64 v57; // rbx
  int v58; // eax
  __int64 v59; // rbx
  _QWORD *v60; // rax
  __int64 v61; // rcx
  __int64 v62; // [rsp+20h] [rbp-E0h]
  __int64 v63; // [rsp+28h] [rbp-D8h]
  int v64[2]; // [rsp+30h] [rbp-D0h]
  __int64 v65; // [rsp+38h] [rbp-C8h]
  bool v66; // [rsp+50h] [rbp-B0h]
  int v67; // [rsp+54h] [rbp-ACh]
  int CurrentOrientation; // [rsp+58h] [rbp-A8h]
  int v69; // [rsp+58h] [rbp-A8h]
  int v70; // [rsp+5Ch] [rbp-A4h]
  int v71; // [rsp+60h] [rbp-A0h]
  UINT Width; // [rsp+64h] [rbp-9Ch]
  INT v73; // [rsp+68h] [rbp-98h]
  DXGMONITOR *v74; // [rsp+70h] [rbp-90h] BYREF
  SESSION_VIEW *v75; // [rsp+78h] [rbp-88h]
  __int128 v76; // [rsp+80h] [rbp-80h]
  _BYTE v77[16]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v78; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v79; // [rsp+B0h] [rbp-50h]
  struct _DXGKARG_SETPOINTERPOSITION v80; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v81[144]; // [rsp+D0h] [rbp-30h] BYREF

  v75 = a2;
  v79 = 0LL;
  v5 = *((_QWORD *)this + 1);
  v78 = 0LL;
  v9 = *(_QWORD *)(v5 + 16);
  if ( !v9 )
  {
    WdLogSingleEntry1(1LL, 1787LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 1787LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*(_QWORD *)(v9 + 2792) )
  {
    WdLogSingleEntry1(1LL, 1788LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
      1788LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v80 = *a3;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v81, (struct DXGADAPTER *const)v9, 0LL);
  v10 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v81, 0LL);
  v11 = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry3(2LL, *(int *)(v9 + 408), *(unsigned int *)(v9 + 404), v10);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get CoreAdapterAccess lock on adapter 0x%I64x%08I64x, returning 0x%I64x.",
      *(int *)(v9 + 408),
      *(unsigned int *)(v9 + 404),
      v11,
      0LL,
      0LL);
    LODWORD(v11) = 0;
    goto LABEL_27;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v77, (struct DXGFASTMUTEX *const)(*(_QWORD *)(v9 + 2792) + 464LL), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v77);
  if ( a4 && (a3->Flags.Value & 1) != 0 )
  {
    v43 = *((_DWORD *)this + 943);
    if ( v43 == -1 && *((_DWORD *)this + 944) == -1
      || (v44 = a3->X + v43, v44 < 0)
      || v44 >= *((_DWORD *)this + 252)
      || (v45 = a3->Y + *((_DWORD *)this + 944), v45 < 0)
      || v45 >= *((_DWORD *)this + 253) )
    {
      WdLogSingleEntry3(2LL, *(int *)(v9 + 408), *(unsigned int *)(v9 + 404), *((unsigned int *)this + 4));
      v46 = *((unsigned int *)this + 4);
      v47 = L"Invalid DXGKARG_SETPOINTERPOSITION passed in DxgkSetPointerPosition() function: Adapter LUID: (0x%I64x%08I64"
             "x) VidpnSourceId: (0x%I64x).";
      Height = *(unsigned int *)(v9 + 404);
      v49 = *(int *)(v9 + 408);
      goto LABEL_86;
    }
    LODWORD(v11) = 0;
  }
  if ( (*(_DWORD *)(v9 + 436) & 0x100) == 0 && (**(_DWORD **)(v9 + 2696) & 8) != 0 )
  {
    LODWORD(v11) = 0;
    goto LABEL_25;
  }
  v80.VidPnSourceId = *((_DWORD *)this + 4);
  if ( !ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v9 + 2792), v80.VidPnSourceId) )
  {
    v60 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12);
    v60[3] = -1073741823LL;
    v60[4] = v80.VidPnSourceId;
    v61 = *(_BYTE *)&v80.Flags.0 & 1;
    v60[6] = v9;
    v60[5] = v61;
LABEL_23:
    ADAPTER_DISPLAY::SavePointerInfo(
      *(ADAPTER_DISPLAY **)(v9 + 2792),
      v80.VidPnSourceId,
      *(_BYTE *)&v80.Flags.0 & 1,
      v80.X,
      v80.Y,
      a3->X,
      a3->Y);
    if ( this == SESSION_VIEW::GetPrimaryDisplaySource(v75) )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v77);
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v81);
      OutputDuplThunks<void (OUTPUTDUPL_MGR::*)(_DXGKARG_SETPOINTERPOSITION const *),_DXGKARG_SETPOINTERPOSITION const *>::RunForAdapter(
        (struct DXGADAPTER *)v9,
        (__int64)a3,
        (__int64)_lambda_b9a5656a752cedcbf1444dc35c6078d9_::_lambda_invoker_cdecl_);
    }
    goto LABEL_25;
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v65) = v80.Flags.0;
    v64[0] = v80.Y;
    LODWORD(v63) = v80.X;
    LODWORD(v62) = v80.VidPnSourceId;
    McTemplateK0pqtqq_EtwWriteTransfer(v13, &EventSetPointerPosition, v14, v9, v62, v63, *(_QWORD *)v64, v65);
  }
  v15 = *((_DWORD *)this + 272);
  if ( v15 == -1 )
    goto LABEL_65;
  v16 = *(_QWORD *)(v9 + 2792);
  if ( !v16 )
  {
    WdLogSingleEntry1(2LL, 9372LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The selected adapter is render-only",
      9372LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_65:
    WdLogSingleEntry4(2LL, *((unsigned int *)this + 4), *(int *)(v9 + 408), *(unsigned int *)(v9 + 404), -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"IsVirtualizationDisabledForTarget failed on VidPn Source 0x%I64x adapter 0x%I64x%08I64x, returning 0x%I64x.",
      *((unsigned int *)this + 4),
      *(int *)(v9 + 408),
      *(unsigned int *)(v9 + 404),
      -1073741811LL,
      0LL);
    goto LABEL_21;
  }
  MONITOR_MGR::AcquireMonitorShared(&v74, v9, v15);
  v17 = v74;
  if ( v74 )
  {
    if ( *((_DWORD *)v74 + 78) != 1 )
      WdLogSingleEntry0(1LL);
    IsVirtualModeSupportDisabled = DXGMONITOR::_IsVirtualModeSupportDisabled(v17);
    ExReleaseResourceLite((PERESOURCE)((char *)v17 + 24));
    KeLeaveCriticalRegion();
    if ( IsVirtualModeSupportDisabled )
      goto LABEL_21;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741632LL);
    RESOURCE_LOCK_ACCESSOR<DXGMONITOR>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR>((__int64 *)&v74);
  }
  v20 = *(_BYTE *)(v16 + 289);
  v21 = *(_BYTE *)(v16 + 290);
  v22 = 0;
  v66 = v20 == 0;
  if ( !v20 && (v66 = 1, !v21) || (*(_BYTE *)&v80.Flags.0 & 1) == 0 || a5 )
  {
LABEL_21:
    LODWORD(v11) = ADAPTER_DISPLAY::DdiSetPointerPosition(*(ADAPTER_DISPLAY **)(v9 + 2792), &v80, v19);
    if ( (int)v11 < 0 )
    {
      WdLogSingleEntry1(1LL, 1972LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 1972LL, 0LL, 0LL, 0LL, 0LL);
    }
    goto LABEL_23;
  }
  CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation(*((_QWORD *)this + 1), *((_DWORD *)this + 4), v20 == 0);
  SavedCursor = DISPLAY_SOURCE::GetSavedCursor(this, 0);
  v25 = SavedCursor;
  pPixels = SavedCursor->pPixels;
  if ( pPixels )
  {
    Width = SavedCursor->Width;
    if ( Width <= *(_DWORD *)(v9 + 2112) && SavedCursor->Height <= *(_DWORD *)(v9 + 2116) )
    {
      v27 = *((_DWORD *)this + 174) - *((_DWORD *)this + 172);
      v28 = *((_DWORD *)v75 + 8) - *((_DWORD *)v75 + 6);
      v29 = *((_DWORD *)this + 175) - *((_DWORD *)this + 173);
      v30 = *((_OWORD *)this + 43);
      v31 = *((_DWORD *)this + 178);
      v32 = *((_DWORD *)v75 + 9) - *((_DWORD *)v75 + 7);
      v33 = *((_DWORD *)this + 177);
      LODWORD(v74) = v31;
      v73 = v33;
      v76 = v30;
      v67 = v27;
      v70 = v29;
      if ( *((_BYTE *)this + 704) )
      {
        v27 = v33;
        v67 = v33;
        v29 = v31;
        v70 = v31;
        v34 = 0;
      }
      else
      {
        v34 = DWORD1(v76);
        v22 = v76;
        LODWORD(v74) = HIDWORD(v76);
        v73 = DWORD2(v76);
      }
      v35 = CurrentOrientation;
      X = a3->X;
      if ( ((CurrentOrientation - 1) & 0xFFFFFFFD) != 0 )
      {
        v37 = v29 * X / v28;
        v38 = v27 * a3->Y;
      }
      else
      {
        v37 = v27 * X / v28;
        v38 = v29 * a3->Y;
      }
      v71 = v37;
      v39 = v38 / v32;
      v69 = v39;
      if ( v66 )
      {
        v80.X = v37 + v22;
        v50 = v39 + v34;
        goto LABEL_74;
      }
      switch ( v35 )
      {
        case 2:
          v40 = v39 + v22;
          v80.X = v39 + v22;
          v41 = v29 + v34 - v37 - v25->Height;
          break;
        case 3:
          v51 = v22 - v37 - Width;
          v42 = v67;
          v40 = v67 + v51;
          v80.X = v40;
          v41 = v29 + v34 - v39 - v25->Height;
LABEL_44:
          v80.Y = v41;
          if ( (signed int)(v40 + v25->Width) >= v22
            && v40 <= v73
            && (signed int)(v41 + v25->Height) >= v34
            && v41 <= (int)v74 )
          {
            goto LABEL_48;
          }
          v80.X = v22 + v42 / 2;
          v50 = v34 + v29 / 2;
LABEL_74:
          v80.Y = v50;
LABEL_48:
          FillClipParams(v25, this, &v80, (struct CURSOR_CLIP_PARAMS *)&v78);
          if ( !HIDWORD(v79) )
          {
            if ( *((_BYTE *)this + 766) )
            {
              v58 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v9 + 2792), v25, v19);
              if ( v58 < 0 )
              {
                v59 = v58;
                WdLogSingleEntry4(
                  2LL,
                  *((unsigned int *)this + 4),
                  *(int *)(v9 + 408),
                  *(unsigned int *)(v9 + 404),
                  v58);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"DdiSetPointerShape failed while setting last saved cursor shape on VidPn Source 0x%I64x adapt"
                            "er 0x%I64x%08I64x, returning 0x%I64x.",
                  *((unsigned int *)this + 4),
                  *(int *)(v9 + 408),
                  *(unsigned int *)(v9 + 404),
                  v59,
                  0LL);
              }
              *((_BYTE *)this + 766) = 0;
            }
            goto LABEL_21;
          }
          ClippedCursor = DISPLAY_SOURCE::GetClippedCursor(this, 0);
          v53 = ClippedCursor;
          v54 = ClippedCursor->pPixels;
          if ( v54 && ClippedCursor->Width <= *(_DWORD *)(v9 + 2112) && ClippedCursor->Height <= *(_DWORD *)(v9 + 2116) )
          {
            ClipCurrentCursor(v25, ClippedCursor, (struct CURSOR_CLIP_PARAMS *)&v78);
            v53->VidPnSourceId = *((_DWORD *)this + 4);
            v56 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v9 + 2792), v53, v55);
            if ( v56 < 0 )
            {
              v57 = v56;
              WdLogSingleEntry4(2LL, *((unsigned int *)this + 4), *(int *)(v9 + 408), *(unsigned int *)(v9 + 404), v56);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"DdiSetPointerShape failed while setting clipped shape on VidPn Source 0x%I64x adapter 0x%I64x%0"
                          "8I64x, returning 0x%I64x.",
                *((unsigned int *)this + 4),
                *(int *)(v9 + 408),
                *(unsigned int *)(v9 + 404),
                v57,
                0LL);
            }
            *((_BYTE *)this + 766) = 1;
            goto LABEL_21;
          }
          WdLogSingleEntry3(2LL, ClippedCursor->Width, ClippedCursor->Height, v54);
          Height = v53->Height;
          v47 = L"GetClippedCursor() returned invalid cursor shape, Width:0x%I64x, Height:0x%I64x, pPixel:0x%I64x.";
          v49 = v53->Width;
          v46 = (__int64)v53->pPixels;
          goto LABEL_86;
        case 4:
          v41 = v37 + v34;
          v40 = v67 + v22 - v39 - Width;
          v80.X = v40;
          break;
        default:
          if ( v35 != 1 )
          {
            WdLogSingleEntry1(1LL, 686LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"Orientation == D3DKMDT_VPPR_IDENTITY",
              686LL,
              0LL,
              0LL,
              0LL,
              0LL);
            v29 = v70;
          }
          v40 = v22 + v71;
          v80.X = v22 + v71;
          v41 = v34 + v69;
          break;
      }
      v42 = v67;
      goto LABEL_44;
    }
  }
  WdLogSingleEntry3(2LL, SavedCursor->Width, SavedCursor->Height, pPixels);
  Height = v25->Height;
  v47 = L"GetSavedCursor() returned invalid cursor shape, Width:0x%I64x, Height:0x%I64x, pPixel:0x%I64x.";
  v49 = v25->Width;
  v46 = (__int64)v25->pPixels;
LABEL_86:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v47, v49, Height, v46, 0LL, 0LL);
  LODWORD(v11) = -1073741811;
LABEL_25:
  if ( v77[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v77);
LABEL_27:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v81);
  return (unsigned int)v11;
}
