/*
 * XREFs of ?DxgkCddDisable@@YAJIII@Z @ 0x1C0187F00
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C0001F1C (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0002F24 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x1C00040B0 (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000438C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C00050E0 (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C0005288 (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C00052BC (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0005320 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007174 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00075BC (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000778C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C0007850 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007BB0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C01727C4 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C0173DFC (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C0180FCC (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C0183F9C (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C01863CC (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C01868E4 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0188608 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C018A268 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0195BF4 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0197D5C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C019D2BC (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C01DE3C8 (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C01DE470 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C01E5564 (DxgkRemoveSessionViewForCurrentSession.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C01EA554 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C03AE68C (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 */

__int64 __fastcall DxgkCddDisable(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 v5; // r14
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rbx
  volatile signed __int32 *v8; // rsi
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // r9
  __int64 v13; // rsi
  ADAPTER_DISPLAY **v14; // rbx
  __int64 v15; // rdi
  struct _LUID *v16; // r14
  struct DXGGLOBAL *Global; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // rcx
  DXGSESSIONMGR *v24; // rbx
  unsigned int v25; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  int v27; // eax
  SESSION_VIEW *SessionViewFromSource; // rax
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // r13
  SESSION_VIEW *v30; // r14
  unsigned int v31; // r15d
  __int64 v32; // rsi
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v34; // r9
  ADAPTER_RENDER *v35; // r10
  struct DXGDEVICE *v36; // rbx
  int v37; // eax
  ADAPTER_DISPLAY *v38; // rcx
  __int64 CurrentProcess; // rax
  const wchar_t *v40; // r14
  __int64 v41; // rsi
  int v42; // edx
  __int64 v43; // rax
  __int64 v44; // rbx
  const wchar_t *v45; // r9
  __int64 v46; // rax
  __int64 LowPart; // rcx
  unsigned __int8 v48; // r8
  unsigned int CurrentProcessSessionId; // eax
  __int64 v50; // rcx
  char v51[8]; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v52; // [rsp+58h] [rbp-A8h]
  int v53; // [rsp+60h] [rbp-A0h]
  int v54; // [rsp+68h] [rbp-98h] BYREF
  __int64 v55; // [rsp+70h] [rbp-90h]
  char v56; // [rsp+78h] [rbp-88h]
  struct tagRECT v57; // [rsp+80h] [rbp-80h] BYREF
  struct _LUID *v58; // [rsp+90h] [rbp-70h]
  _BYTE v59[24]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v60[80]; // [rsp+B0h] [rbp-50h] BYREF
  char v61[8]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v62[64]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v63[88]; // [rsp+148h] [rbp+48h] BYREF
  char v64[8]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v65[64]; // [rsp+1A8h] [rbp+A8h] BYREF
  char v66[88]; // [rsp+1E8h] [rbp+E8h] BYREF

  v54 = -1;
  v4 = (unsigned int)a3;
  v53 = a3;
  v5 = (unsigned int)a1;
  v55 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v56 = 1;
    v54 = 3003;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 3003);
  }
  else
  {
    v56 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v54, 3003);
  Current = DXGPROCESS::GetCurrent();
  v7 = (__int64)Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess();
    LODWORD(v15) = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    v40 = L"0x%I64x Unexpected process 0x%I64x";
    v41 = PsGetCurrentProcess();
    v7 = 0LL;
LABEL_58:
    v43 = -1073741811LL;
LABEL_78:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v40, v43, v41, v7, 0LL, 0LL);
    goto LABEL_21;
  }
  v8 = (volatile signed __int32 *)((char *)Current + 248);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v9 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
  if ( v9 >= *(_DWORD *)(v7 + 296) )
    goto LABEL_9;
  v10 = *(_QWORD *)(v7 + 280);
  if ( (((unsigned int)v5 >> 25) & 0x60) != (*(_BYTE *)(v10 + 16LL * v9 + 8) & 0x60) )
    goto LABEL_9;
  if ( (*(_DWORD *)(v10 + 16LL * v9 + 8) & 0x2000) != 0 )
    goto LABEL_9;
  v42 = *(_DWORD *)(v10 + 16LL * v9 + 8) & 0x1F;
  if ( !v42 )
    goto LABEL_9;
  if ( v42 != 3 )
  {
    WdLogSingleEntry1(2LL, 316LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 316LL, 0LL, 0LL, 0LL, 0LL);
LABEL_9:
    v11 = 0LL;
    goto LABEL_10;
  }
  v11 = *(_QWORD *)(v10 + 16LL * v9);
LABEL_10:
  _InterlockedDecrement(v8 + 4);
  ExReleasePushLockSharedEx(v8, 0LL);
  KeLeaveCriticalRegion();
  v52 = (struct DXGDEVICE *)v11;
  if ( !v11 )
  {
    LODWORD(v15) = -1073741811;
    v41 = v5;
    WdLogSingleEntry3(2LL, -1073741811LL, v5, v7);
    v40 = L"0x%I64x Invalid hDevice=0x%I64x specified DXGPROCESS=0x%I64x";
    goto LABEL_58;
  }
  v13 = *(_QWORD *)(v11 + 1880);
  v14 = (ADAPTER_DISPLAY **)(v13 + 2920);
  if ( !v13 || !*v14 )
  {
    WdLogSingleEntry1(1LL, 627LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pDisplayAdapter != NULL) && (pDisplayAdapter->IsDisplayAdapter())",
      627LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (a2 & 0x40000000) == 0 )
  {
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v64, v11, 1, v12, 0);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v64);
    if ( a2 == 1 && ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*v14) )
      ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(*v14, *(struct ADAPTER_RENDER **)(v11 + 16));
    if ( *(_DWORD *)(v13 + 200) == 1 )
      ADAPTER_DISPLAY::SetCddInterface((DXGADAPTER **)*v14, v4, 0LL);
    LODWORD(v15) = 0;
    COREACCESS::~COREACCESS((COREACCESS *)v66);
    COREACCESS::~COREACCESS((COREACCESS *)v65);
    v16 = (struct _LUID *)(v13 + 404);
LABEL_18:
    Global = DXGGLOBAL::GetGlobal();
    QDC_CACHE::InvalidateCache(*((QDC_CACHE **)Global + 187), 0LL, v18, v19);
    if ( (int)v15 < 0 )
    {
      v52 = 0LL;
      DxgkLogCodePointPacket(0x41u, v16->LowPart, v4, v15, 0LL);
    }
    LODWORD(v15) = 0;
    goto LABEL_21;
  }
  if ( ((a2 - 0x40000000) & 0xFFFFFFFB) != 0 )
  {
    WdLogSingleEntry1(1LL, 668LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(OLD_MODE_CHANGE == Win32kCommand) || ((PRESERVE_ACTIVE_VIDPN | OLD_MODE_CHANGE) == Win32kCommand)",
      668LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v24 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( !v24
    || (v25 = PsGetCurrentProcessSessionId(v23),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v24, v25)) == 0LL) )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v23);
    LODWORD(v15) = -1073741811;
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    v40 = L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.";
    v43 = (unsigned int)PsGetCurrentProcessSessionId(v50);
    v41 = -1073741811LL;
    v7 = 0LL;
    goto LABEL_78;
  }
  v51[0] = 0;
  v27 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v51, 1);
  LODWORD(v15) = v27;
  if ( v27 < 0 )
  {
    v44 = v27;
    WdLogSingleEntry1(2LL, v27);
    v45 = L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)";
    v46 = 0LL;
    LowPart = 0LL;
  }
  else
  {
    v16 = (struct _LUID *)(v13 + 404);
    v58 = (struct _LUID *)(v13 + 404);
    SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                              SessionDataForSpecifiedSession,
                              (const struct _LUID *)(v13 + 404),
                              v4);
    *(_QWORD *)&v57.left = SessionViewFromSource;
    if ( SessionViewFromSource )
    {
      PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
      if ( PrimaryDisplaySource )
      {
        v30 = *(SESSION_VIEW **)&v57.left;
        do
        {
          v31 = *((_DWORD *)PrimaryDisplaySource + 4);
          v32 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
          PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v30, PrimaryDisplaySource);
          CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                                   (struct _LUID *)(v32 + 404),
                                                   0);
          v15 = CddDeviceAndContextForCurrentSession;
          if ( CddDeviceAndContextForCurrentSession < 0 )
          {
            WdLogSingleEntry3(
              2LL,
              *(int *)(v32 + 408),
              *(unsigned int *)(v32 + 404),
              CddDeviceAndContextForCurrentSession);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Fail to get CDD device on DXGADAPTER 0x%I64x%08I64x (Status = 0x%I64x).",
              *(int *)(v32 + 408),
              *(unsigned int *)(v32 + 404),
              v15,
              0LL,
              0LL);
          }
          else
          {
            DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
              (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v59,
              v52);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v61, (__int64)v52, 1, v34, 0);
            COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v61);
            if ( *(_DWORD *)(v32 + 200) != 1 && *((_DWORD *)v52 + 152) == 4
              || *(_DWORD *)(v32 + 200) == 4
              || *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v52 + 2) + 16LL) + 200LL) == 4 )
            {
              COREACCESS::~COREACCESS((COREACCESS *)v63);
              COREACCESS::~COREACCESS((COREACCESS *)v62);
              DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v59);
            }
            else
            {
              if ( *(_QWORD *)(v32 + 2928) )
              {
                if ( DXGADAPTER::IsLegacyDisplayStateSynchronization(*(DXGADAPTER **)(*((_QWORD *)v52 + 2) + 16LL)) )
                  ADAPTER_RENDER::FlushScheduler(v35, 8LL, v31);
                else
                  ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(v35, 1 << v31, 0LL, 1 << v31, 0);
              }
              if ( *(_DWORD *)(v32 + 200) == 1 )
              {
                if ( (a2 & 4) != 0 )
                {
                  v36 = v52;
                  v37 = DmmDisablePathsFromVidPnSource(v52, v31);
                }
                else
                {
                  v48 = *(_BYTE *)(v32 + 2833)
                     && *(_BYTE *)(v32 + 2752)
                     && *(_DWORD *)(v32 + 412) != 1297040209
                     && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v32 + 216) + 64LL) + 1152LL);
                  v36 = v52;
                  v37 = DmmRemovePathsFromVidPnSource(v52, v31, v48);
                }
              }
              else
              {
                v36 = v52;
                v37 = ADAPTER_DISPLAY::DestroyCddAllocations(*(ADAPTER_DISPLAY **)(v32 + 2920), v52, v31);
              }
              LODWORD(v15) = v37;
              memset(v60, 0, sizeof(v60));
              ADAPTER_DISPLAY::SetPartOfDesktop(*(PERESOURCE ***)(v32 + 2920), v31, 0);
              ADAPTER_DISPLAY::SetDisplayModeInfo(
                *(DXGADAPTER ***)(v32 + 2920),
                v31,
                (const struct _DXGK_DISPLAYMODE_INFO *const)v60);
              ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(DXGADAPTER ***)(v32 + 2920), v31, 0);
              v38 = *(ADAPTER_DISPLAY **)(v32 + 2920);
              v57 = 0LL;
              ADAPTER_DISPLAY::SetContentRect(v38, v31, &v57);
              ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v32 + 2920), v31, 0LL);
              COREACCESS::~COREACCESS((COREACCESS *)v63);
              COREACCESS::~COREACCESS((COREACCESS *)v62);
              DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v59);
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v52 + 2), v52);
            }
          }
        }
        while ( PrimaryDisplaySource );
        v16 = v58;
        LODWORD(v4) = v53;
      }
      if ( ((a2 - 0x40000000) & 0xFFFFFFFB) == 0 )
        DxgkRemoveSessionViewForCurrentSession(v16, v4, 1u);
      if ( v51[0] )
        DxgkReleaseSessionModeChangeLock();
      goto LABEL_18;
    }
    v44 = v4;
    WdLogSingleEntry3(2LL, v4, *(int *)(v13 + 408), v16->LowPart);
    v46 = *(int *)(v13 + 408);
    v45 = L"Failed to find session view from caller specified VidPn source 0x%I64x on Adapter 0x%I64x%08I64x.";
    LowPart = v16->LowPart;
    LODWORD(v15) = 0;
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v45, v44, v46, LowPart, 0LL, 0LL);
  if ( v51[0] )
    DxgkReleaseSessionModeChangeLock();
LABEL_21:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54);
  if ( v56 )
  {
    LOBYTE(v20) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v54);
  }
  return (unsigned int)v15;
}
