/*
 * XREFs of ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1C01A4940
 * Callers:
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHHH@Z @ 0x1C01A32D0 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 *     DxgkRedrawCursorForPostCompositon @ 0x1C032DE78 (DxgkRedrawCursorForPostCompositon.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
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
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ??1?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ @ 0x1C002FA24 (--1-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x1C0044E7C (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@ZPEBU2@PEBU3@II@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z23IIP6AJPEAV3@423II@Z@Z @ 0x1C01A1FB8 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DX.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C01A24CC (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C01A3618 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ @ 0x1C01A5490 (-_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C01A54B4 (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C01A5654 (-DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z.c)
 *     ?FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOSITION@@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C01A582C (-FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOS.c)
 *     ?ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU3@4PEBU_DXGK_DRIVERCAPS@@AEAH@Z @ 0x1C01A5940 (-ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SE.c)
 *     ?GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C01A59E0 (-GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C01A5AA4 (-GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C01E9C14 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?GetPristineCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@K@Z @ 0x1C0222676 (-GetPristineCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@K@Z.c)
 *     ?ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C032CBE0 (-ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z.c)
 *     ?RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGK_DRIVERCAPS@@@Z @ 0x1C032D424 (-RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATIO.c)
 */

__int64 __fastcall SetPointerShapeForDisplaySource(
        struct DISPLAY_SOURCE *this,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        const struct _DXGKARG_SETPOINTERSHAPE *a3,
        struct SESSION_VIEW *a4,
        void *const a5,
        unsigned int a6,
        unsigned int a7,
        bool a8,
        bool a9,
        bool a10)
{
  _DXGKARG_SETPOINTERPOSITION v10; // xmm0
  __int64 v11; // rax
  __int64 v14; // r14
  int v16; // ebx
  unsigned int v17; // r8d
  bool v18; // r12
  __int64 v19; // r13
  DXGMONITOR *v20; // rbx
  bool IsVirtualModeSupportDisabled; // di
  char v22; // al
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // r13d
  UINT v24; // r8d
  UINT Height; // ecx
  UINT v26; // edx
  struct _DXGKARG_SETPOINTERSHAPE *SavedCursor; // rdi
  void *pPixels; // rcx
  struct _DXGKARG_SETPOINTERSHAPE *ClippedCursor; // rdx
  int v30; // eax
  void *v31; // rcx
  UINT YHot; // eax
  int v33; // r11d
  int v34; // ecx
  struct tagRECT v35; // xmm0
  int v36; // r8d
  int v37; // r10d
  bool v38; // zf
  int v39; // ebx
  LONG v40; // r9d
  LONG top; // ebx
  LONG left; // r12d
  int v43; // eax
  int v44; // r9d
  int v45; // eax
  int v46; // r10d
  INT v47; // edx
  INT v48; // r8d
  int v49; // r9d
  __int64 v50; // rcx
  __int64 v51; // r8
  char v52; // al
  int v53; // eax
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  unsigned int *v55; // rbx
  struct DISPLAY_SOURCE *v56; // rdi
  __int64 v57; // rdx
  __int64 v58; // r9
  __int64 v60; // rcx
  UINT v61; // edx
  UINT v62; // r8d
  UINT XHot; // eax
  UINT v64; // ecx
  int v65; // ecx
  int v66; // ecx
  const wchar_t *v67; // r9
  struct _DXGKARG_SETPOINTERSHAPE *PristineCursor; // rax
  int v69; // ecx
  const struct _DXGKARG_SETPOINTERSHAPE *v70; // rcx
  DXGMONITOR *v71; // rbx
  void *v72; // rcx
  INT v73; // eax
  UINT v74; // r8d
  struct _DXGKARG_SETPOINTERSHAPE *v75; // rax
  const struct _DXGKARG_SETPOINTERSHAPE *v76; // rbx
  struct _DXGKARG_SETPOINTERSHAPE *v77; // rax
  struct _DXGKARG_SETPOINTERSHAPE *v78; // rbx
  void *v79; // rcx
  struct _DXGKARG_SETPOINTERSHAPE *v80; // [rsp+20h] [rbp-E0h]
  struct _DXGKARG_SETPOINTERSHAPE *v81; // [rsp+28h] [rbp-D8h]
  struct _DXGK_DRIVERCAPS *v82; // [rsp+30h] [rbp-D0h]
  int *v83; // [rsp+38h] [rbp-C8h]
  bool v84; // [rsp+50h] [rbp-B0h]
  int v85; // [rsp+54h] [rbp-ACh] BYREF
  DXGMONITOR *v86; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v87; // [rsp+60h] [rbp-A0h]
  int v88; // [rsp+68h] [rbp-98h]
  int v89; // [rsp+6Ch] [rbp-94h]
  int v90; // [rsp+70h] [rbp-90h]
  LONG right; // [rsp+74h] [rbp-8Ch]
  int v92; // [rsp+78h] [rbp-88h]
  int Width; // [rsp+7Ch] [rbp-84h]
  SESSION_VIEW *v94; // [rsp+80h] [rbp-80h]
  struct tagRECT v95; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v96[16]; // [rsp+98h] [rbp-68h] BYREF
  void *v97; // [rsp+A8h] [rbp-58h]
  __int128 v98; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v99; // [rsp+C0h] [rbp-40h]
  _DXGKARG_SETPOINTERPOSITION v100; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v101[16]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v102; // [rsp+F0h] [rbp-10h]
  __int64 v103; // [rsp+F8h] [rbp-8h]
  char v104; // [rsp+100h] [rbp+0h]
  __int64 v105; // [rsp+108h] [rbp+8h]
  __int64 v106; // [rsp+130h] [rbp+30h]
  __int64 v107; // [rsp+138h] [rbp+38h]
  char v108; // [rsp+140h] [rbp+40h]
  __int64 v109; // [rsp+148h] [rbp+48h]

  v10 = *a2;
  v99 = 0LL;
  v11 = *((_QWORD *)this + 1);
  v100 = v10;
  v94 = a4;
  v87 = (__int64)a2;
  v14 = *(_QWORD *)(v11 + 16);
  v97 = a5;
  v98 = 0LL;
  if ( !v14 )
  {
    WdLogSingleEntry1(1LL, 1090LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 1090LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*(_QWORD *)(v14 + 2792) )
  {
    WdLogSingleEntry1(1LL, 1091LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
      1091LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v101[1] = 0;
  v103 = v14;
  v104 = 0;
  v105 = 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)(v14 + 24));
  v107 = v14;
  v102 = -1LL;
  v108 = 0;
  v109 = 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)(v14 + 24));
  v106 = -1LL;
  v16 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v101, 0LL);
  if ( v16 >= 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v96, (struct DXGFASTMUTEX *const)(*(_QWORD *)(v14 + 2792) + 464LL), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v96);
    if ( !a9 )
    {
LABEL_7:
      if ( !a8 )
      {
        v92 = a7;
        Width = a6;
        goto LABEL_9;
      }
      if ( *(_DWORD *)(v14 + 1968) < 0x7000u )
      {
        WdLogSingleEntry1(1LL, 1137LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pDisplayAdapter->GetDriverDdiInterfaceVersion() >= DXGKDDI_INTERFACE_VERSION_WDDM2_2_RS2_1",
          1137LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      PristineCursor = DISPLAY_SOURCE::GetPristineCursor(this, 0);
      a3 = PristineCursor;
      if ( PristineCursor->pPixels )
      {
        v69 = (PristineCursor->Flags.Value & 1) + 1;
        Width = PristineCursor->Width;
        v92 = PristineCursor->Height * v69;
LABEL_9:
        if ( (*(_DWORD *)(v14 + 436) & 0x100) == 0 && (**(_DWORD **)(v14 + 2696) & 8) != 0 )
          goto LABEL_93;
        v100.VidPnSourceId = *((_DWORD *)this + 4);
        if ( !ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v14 + 2792), v100.VidPnSourceId) )
        {
          v16 = -1073741823;
          WdLogSingleEntry4(2LL, -1073741823LL, *((unsigned int *)this + 4), a3->Flags.Value, a5);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"0x%I64x VidPnSourceId=0x%I64x Primary is not visible: 0x%I64x DXGADAPTER=0x%I64x",
            -1073741823LL,
            *((unsigned int *)this + 4),
            a3->Flags.Value,
            (__int64)a5,
            0LL);
          goto LABEL_62;
        }
        if ( (*(_DWORD *)(v14 + 436) & 0x20) != 0
          && !ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v14 + 2792)) )
        {
          goto LABEL_93;
        }
        v17 = *((_DWORD *)this + 272);
        v18 = 1;
        v84 = 1;
        if ( v17 != -1 )
        {
          v19 = *(_QWORD *)(v14 + 2792);
          if ( v19 )
          {
            MONITOR_MGR::AcquireMonitorShared(&v86, v14, v17);
            v20 = v86;
            if ( !v86 )
            {
              WdLogSingleEntry1(2LL, -1073741632LL);
              RESOURCE_LOCK_ACCESSOR<DXGMONITOR>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR>((__int64 *)&v86);
              goto LABEL_19;
            }
            if ( *((_DWORD *)v86 + 78) != 1 )
              WdLogSingleEntry0(1LL);
            IsVirtualModeSupportDisabled = DXGMONITOR::_IsVirtualModeSupportDisabled(v20);
            ExReleaseResourceLite((PERESOURCE)((char *)v20 + 24));
            KeLeaveCriticalRegion();
            if ( !IsVirtualModeSupportDisabled )
            {
LABEL_19:
              v22 = *(_BYTE *)(v19 + 289);
              v18 = v22 == 0;
              v84 = v22 == 0;
              if ( v22 )
                goto LABEL_20;
              v84 = 1;
              if ( *(_BYTE *)(v19 + 290) )
                goto LABEL_20;
              goto LABEL_67;
            }
            v84 = 1;
LABEL_67:
            if ( !*((_BYTE *)this + 704) )
            {
LABEL_68:
              v53 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v14 + 2792), a3);
              if ( v53 < 0 )
              {
LABEL_69:
                v16 = v53;
                goto LABEL_62;
              }
              goto LABEL_53;
            }
LABEL_20:
            if ( a10 )
              goto LABEL_68;
            CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(
                                                 *((_QWORD *)this + 1),
                                                 *((_DWORD *)this + 4),
                                                 v18);
            v24 = *(_DWORD *)(v14 + 2112);
            if ( a3->Width > v24
              || (Height = a3->Height, v26 = *(_DWORD *)(v14 + 2116), Height > v26)
              || a3->Pitch * ((a3->Flags.Value & 1) + 1) * Height > 4 * (unsigned __int64)(v24 * v26) )
            {
LABEL_93:
              v16 = -1073741823;
LABEL_62:
              if ( v96[8] )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v96);
              goto LABEL_64;
            }
            SavedCursor = DISPLAY_SOURCE::GetSavedCursor(this, 1);
            pPixels = (void *)SavedCursor->pPixels;
            if ( !pPixels
              || (memset(
                    pPixels,
                    0,
                    4 * *(unsigned int *)(v14 + 2112) * (unsigned __int64)*(unsigned int *)(v14 + 2116)),
                  ClippedCursor = DISPLAY_SOURCE::GetClippedCursor(this, 1),
                  v86 = (DXGMONITOR *)ClippedCursor,
                  !ClippedCursor->pPixels) )
            {
              v16 = -1073741801;
              goto LABEL_62;
            }
            v85 = 0;
            if ( *((_BYTE *)this + 704) )
            {
              *(_QWORD *)&v95.left = 0LL;
              *(_QWORD *)&v95.right = *(_QWORD *)((char *)this + 708);
              v30 = ScaleCursorShape(
                      &v95,
                      (const struct tagRECT *)((char *)v94 + 24),
                      CurrentOrientation,
                      a3,
                      ClippedCursor,
                      SavedCursor,
                      (const struct _DXGK_DRIVERCAPS *)(v14 + 2088),
                      &v85);
            }
            else
            {
              v30 = ScaleCursorShape(
                      (const struct tagRECT *)this + 43,
                      (const struct tagRECT *)((char *)v94 + 24),
                      CurrentOrientation,
                      a3,
                      ClippedCursor,
                      SavedCursor,
                      (const struct _DXGK_DRIVERCAPS *)(v14 + 2088),
                      &v85);
            }
            v16 = v30;
            if ( v30 < 0 )
              goto LABEL_62;
            if ( v85 )
            {
              if ( CurrentOrientation != D3DKMDT_VPPR_IDENTITY && !v18 )
              {
                v70 = (const struct _DXGKARG_SETPOINTERSHAPE *)v86;
LABEL_107:
                RotateCursorShape(v70, SavedCursor, CurrentOrientation, (const struct _DXGK_DRIVERCAPS *)(v14 + 2088));
LABEL_33:
                v33 = *((_DWORD *)this + 174) - *((_DWORD *)this + 172);
                v34 = *((_DWORD *)this + 175) - *((_DWORD *)this + 173);
                v35 = (struct tagRECT)*((_OWORD *)this + 43);
                v36 = *((_DWORD *)v94 + 8) - *((_DWORD *)v94 + 6);
                v37 = *((_DWORD *)v94 + 9) - *((_DWORD *)v94 + 7);
                v38 = *((_BYTE *)this + 704) == 0;
                v39 = *((_DWORD *)this + 178);
                v40 = *((_DWORD *)this + 177);
                LODWORD(v86) = v39;
                right = v40;
                v95 = v35;
                v88 = v33;
                v85 = v34;
                if ( v38 )
                {
                  top = v95.top;
                  left = v95.left;
                  LODWORD(v86) = v95.bottom;
                  right = v95.right;
                }
                else
                {
                  left = 0;
                  v85 = v39;
                  v34 = v39;
                  v88 = v40;
                  top = 0;
                  v33 = v40;
                }
                v43 = *(_DWORD *)(v87 + 4);
                if ( ((CurrentOrientation - 1) & 0xFFFFFFFD) != 0 )
                {
                  v44 = v34 * v43 / v36;
                  v45 = v33 * *(_DWORD *)(v87 + 8);
                }
                else
                {
                  v44 = v33 * v43 / v36;
                  v45 = v34 * *(_DWORD *)(v87 + 8);
                }
                v89 = v44;
                v46 = v45 / v37;
                v90 = v46;
                if ( v84 )
                {
                  v100.X = v44 + left;
                  v73 = v46 + top;
                  goto LABEL_116;
                }
                if ( CurrentOrientation == D3DKMDT_VPPR_ROTATE90 )
                {
                  v47 = v46 + left;
                  v100.X = v46 + left;
                  v74 = top - SavedCursor->Height - v44;
                }
                else
                {
                  if ( CurrentOrientation != D3DKMDT_VPPR_ROTATE180 )
                  {
                    if ( CurrentOrientation == D3DKMDT_VPPR_ROTATE270 )
                    {
                      v48 = v44 + top;
                      v47 = v33 + left - SavedCursor->Width - v46;
                    }
                    else
                    {
                      if ( CurrentOrientation != D3DKMDT_VPPR_IDENTITY )
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
                        v33 = v88;
                      }
                      v47 = left + v89;
                      v48 = top + v90;
                    }
                    v49 = v85;
                    v100.X = v47;
                    goto LABEL_45;
                  }
                  v47 = v33 + left - SavedCursor->Width - v44;
                  v100.X = v47;
                  v74 = top - SavedCursor->Height - v46;
                }
                v49 = v85;
                v48 = v85 + v74;
LABEL_45:
                v100.Y = v48;
                if ( (signed int)(v47 + SavedCursor->Width) >= left
                  && v47 <= right
                  && (signed int)(v48 + SavedCursor->Height) >= top
                  && v48 <= (int)v86 )
                {
                  goto LABEL_49;
                }
                v100.X = left + v33 / 2;
                v73 = top + v49 / 2;
LABEL_116:
                v100.Y = v73;
LABEL_49:
                FillClipParams(SavedCursor, this, &v100, (struct CURSOR_CLIP_PARAMS *)&v98);
                if ( HIDWORD(v99) )
                {
                  v75 = DISPLAY_SOURCE::GetClippedCursor(this, 1);
                  v76 = v75;
                  if ( !v75->pPixels )
                    goto LABEL_122;
                  ClipCurrentCursor(SavedCursor, v75, (struct CURSOR_CLIP_PARAMS *)&v98);
                  v76->VidPnSourceId = *((_DWORD *)this + 4);
                  v16 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v14 + 2792), v76);
                  if ( v16 < 0 )
                    goto LABEL_62;
                  v52 = 1;
                }
                else
                {
                  SavedCursor->VidPnSourceId = *((_DWORD *)this + 4);
                  v16 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v14 + 2792), SavedCursor);
                  if ( v16 < 0 )
                    goto LABEL_62;
                  v52 = 0;
                }
                *((_BYTE *)this + 766) = v52;
LABEL_53:
                if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                {
                  LODWORD(v83) = v100.Flags.0;
                  LODWORD(v82) = v100.Y;
                  LODWORD(v81) = v100.X;
                  LODWORD(v80) = v100.VidPnSourceId;
                  McTemplateK0pqtqq_EtwWriteTransfer(v50, &EventSetPointerPosition, v51, v97, v80, v81, v82, v83);
                }
                v53 = ADAPTER_DISPLAY::DdiSetPointerPosition(*(ADAPTER_DISPLAY **)(v14 + 2792), &v100);
                if ( v53 < 0 )
                  goto LABEL_69;
                PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v94);
                v55 = (unsigned int *)v87;
                v56 = PrimaryDisplaySource;
                ADAPTER_DISPLAY::SavePointerInfo(
                  *(ADAPTER_DISPLAY **)(v14 + 2792),
                  v100.VidPnSourceId,
                  *(_BYTE *)&v100.Flags.0 & 1,
                  v100.X,
                  v100.Y,
                  *(_DWORD *)(v87 + 4),
                  *(_DWORD *)(v87 + 8));
                if ( a8 || *(_DWORD *)(v14 + 1968) < 0x7000u )
                {
LABEL_59:
                  if ( this == v56 )
                  {
                    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v96);
                    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v101);
                    OutputDuplThunks<long (OUTPUTDUPL_MGR::*)(_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int),_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int>::RunForAdapter(
                      (struct DXGADAPTER *)v14,
                      v57,
                      *v55,
                      v58,
                      (__int64)v55,
                      (__int64)a3,
                      Width,
                      v92,
                      (__int64 (__fastcall *)(struct OUTPUTDUPL_MGR *, __int64 (__fastcall *)(OUTPUTDUPL_MGR *, const struct _DXGKARG_SETPOINTERPOSITION *, const struct _DXGKARG_SETPOINTERSHAPE *, UINT, UINT), __int64, __int64, int, int))_lambda_103e920f2f8a7257353075347c127b30_::_lambda_invoker_cdecl_);
                  }
                  v16 = 0;
                  goto LABEL_62;
                }
                v77 = DISPLAY_SOURCE::GetPristineCursor(this, a3->Height * a3->Pitch * ((a3->Flags.Value & 1) + 1));
                v78 = v77;
                v79 = (void *)v77->pPixels;
                if ( v79 )
                {
                  v77->Flags.Value = a3->Flags.Value;
                  v77->Width = a3->Width;
                  v77->Height = a3->Height;
                  v77->Pitch = a3->Pitch;
                  memmove(v79, a3->pPixels, a3->Height * a3->Pitch * ((a3->Flags.Value & 1) + 1));
                  v78->XHot = a3->XHot;
                  v78->YHot = a3->YHot;
                  v55 = (unsigned int *)v87;
                  goto LABEL_59;
                }
LABEL_122:
                v16 = -1073741801;
                goto LABEL_62;
              }
              v71 = v86;
              v72 = (void *)SavedCursor->pPixels;
              SavedCursor->Flags.Value = *(_DWORD *)v86;
              SavedCursor->Width = *((_DWORD *)v71 + 1);
              SavedCursor->Height = *((_DWORD *)v71 + 2);
              SavedCursor->Pitch = *((_DWORD *)v71 + 3);
              memmove(
                v72,
                *((const void **)v71 + 3),
                *((_DWORD *)v71 + 2) * *((_DWORD *)v71 + 3) * ((*(_DWORD *)v71 & 1u) + 1));
              SavedCursor->XHot = *((_DWORD *)v71 + 8);
              YHot = *((_DWORD *)v71 + 9);
            }
            else
            {
              if ( CurrentOrientation != D3DKMDT_VPPR_IDENTITY && !v18 )
              {
                v70 = a3;
                goto LABEL_107;
              }
              v31 = (void *)SavedCursor->pPixels;
              SavedCursor->Flags.Value = a3->Flags.Value;
              SavedCursor->Width = a3->Width;
              SavedCursor->Height = a3->Height;
              SavedCursor->Pitch = a3->Pitch;
              memmove(v31, a3->pPixels, a3->Height * a3->Pitch * ((a3->Flags.Value & 1) + 1));
              SavedCursor->XHot = a3->XHot;
              YHot = a3->YHot;
            }
            SavedCursor->YHot = YHot;
            goto LABEL_33;
          }
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
        }
        WdLogSingleEntry4(
          2LL,
          *((unsigned int *)this + 4),
          *(int *)(v14 + 408),
          *(unsigned int *)(v14 + 404),
          -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"IsVirtualizationDisabledForTarget failed on VidPn Source 0x%I64x adapter 0x%I64x%08I64x, returning 0x%I64x.",
          *((unsigned int *)this + 4),
          *(int *)(v14 + 408),
          *(unsigned int *)(v14 + 404),
          -1073741811LL,
          0LL);
        goto LABEL_67;
      }
LABEL_87:
      v16 = -1073741811;
      goto LABEL_62;
    }
    v60 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    if ( ((a3->Flags.Value - 2) & 0xFFFFFFFD) == 0
      && (v61 = a3->Width, v61 <= *(_DWORD *)(v60 + 2112))
      && (v62 = a3->Height, v62 <= *(_DWORD *)(v60 + 2116))
      && a3->Pitch == 4 * v61
      && a3->VidPnSourceId < *(_DWORD *)(*(_QWORD *)(v60 + 2792) + 96LL)
      && a3->pPixels
      && (XHot = a3->XHot, XHot < v61)
      && (v64 = a3->YHot, v64 < v62) )
    {
      *((_DWORD *)this + 943) = XHot;
      *((_DWORD *)this + 944) = v64;
      if ( XHot != -1 || *((_DWORD *)this + 944) != -1 )
      {
        v65 = XHot + a2->X;
        if ( v65 >= 0 && v65 < *((_DWORD *)this + 252) )
        {
          v66 = a2->Y + *((_DWORD *)this + 944);
          if ( v66 >= 0 && v66 < *((_DWORD *)this + 253) )
            goto LABEL_7;
        }
      }
      WdLogSingleEntry3(2LL, *(int *)(v14 + 408), *(unsigned int *)(v14 + 404), *((unsigned int *)this + 4));
      v67 = L"Invalid DXGKARG_SETPOINTERPOSITION passed in SetPointerShapeForDisplaySource() function: Adapter LUID: (0x%I"
             "64x%08I64x) VidpnSourceId: (0x%I64x).";
    }
    else
    {
      WdLogSingleEntry3(2LL, *(int *)(v14 + 408), *(unsigned int *)(v14 + 404), *((unsigned int *)this + 4));
      v67 = L"Invalid DXGKARG_SETPOINTERSHAPE passed in SetPointerShapeForDisplaySource() function: Adapter LUID: (0x%I64x"
             "%08I64x) VidpnSourceId: (0x%I64x).";
    }
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)v67,
      *(int *)(v14 + 408),
      *(unsigned int *)(v14 + 404),
      *((unsigned int *)this + 4),
      0LL,
      0LL);
    goto LABEL_87;
  }
LABEL_64:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v101);
  return (unsigned int)v16;
}
