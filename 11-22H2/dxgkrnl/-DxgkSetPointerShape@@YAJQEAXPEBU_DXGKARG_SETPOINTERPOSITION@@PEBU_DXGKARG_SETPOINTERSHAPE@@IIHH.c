/*
 * XREFs of ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHHH@Z @ 0x1C01F2650
 * Callers:
 *     ?DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C01F25D0 (-DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@I.c)
 *     DxgkWin32kSetPointerShape @ 0x1C033AEF0 (DxgkWin32kSetPointerShape.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0002AE8 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002DEC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007174 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00074F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C00076A0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008468 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0008770 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C0180FCC (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C0183F9C (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C01863CC (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C01946BC (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C019D2BC (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01C71F0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1C01F2970 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     OutputDuplProcessRemoteSessionSetPointerShape @ 0x1C0330FF0 (OutputDuplProcessRemoteSessionSetPointerShape.c)
 */

__int64 __fastcall DxgkSetPointerShape(
        struct DXGADAPTER *a1,
        struct _DXGKARG_SETPOINTERPOSITION *a2,
        struct _DXGKARG_SETPOINTERSHAPE *a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        int a7,
        int a8)
{
  int v12; // r15d
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // edx
  int PairingAdapters; // eax
  _QWORD *v15; // rdi
  struct _LUID v16; // rbx
  __int64 v17; // rcx
  DXGSESSIONMGR *v18; // rdi
  unsigned int v19; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rdi
  int v21; // eax
  SESSION_VIEW *SessionViewFromSource; // rax
  __int64 v23; // rcx
  SESSION_VIEW *v24; // r12
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  int v26; // r10d
  struct DISPLAY_SOURCE *NextDisplaySource; // rdi
  struct _DXGKARG_SETPOINTERPOSITION *v28; // r13
  bool v29; // al
  struct DISPLAY_SOURCE *i; // rax
  struct DISPLAY_SOURCE *v31; // r13
  __int64 v32; // rcx
  __int64 v33; // r8
  ADAPTER_DISPLAY **v35; // rdi
  int v36; // eax
  __int64 v37; // r8
  unsigned int v38; // eax
  __int64 v39; // rdi
  __int64 v40; // rcx
  unsigned int v41; // eax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v42; // r9d
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v43; // eax
  __int64 HighPart; // r14
  __int64 v45; // rdi
  unsigned int CurrentProcessSessionId; // eax
  __int64 v47; // rcx
  unsigned int v48; // eax
  char v49; // [rsp+50h] [rbp-B0h] BYREF
  bool v50; // [rsp+51h] [rbp-AFh]
  struct _LUID v51; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v52; // [rsp+60h] [rbp-A0h]
  struct _DXGKARG_SETPOINTERPOSITION *v53; // [rsp+68h] [rbp-98h]
  int v54; // [rsp+70h] [rbp-90h] BYREF
  __int64 v55; // [rsp+78h] [rbp-88h]
  char v56; // [rsp+80h] [rbp-80h]
  unsigned __int64 v57; // [rsp+88h] [rbp-78h] BYREF
  char v58; // [rsp+90h] [rbp-70h]
  struct _DXGKARG_SETPOINTERPOSITION v59; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v60[144]; // [rsp+B0h] [rbp-50h] BYREF

  v54 = -1;
  v52 = a4;
  v53 = a2;
  v55 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v56 = 1;
    v54 = 3012;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 3012);
  }
  else
  {
    v56 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v54, 3012);
  v12 = 0;
  v59 = 0LL;
  if ( !a3 || !a2 )
    goto LABEL_39;
  v59 = *a2;
  if ( a6 )
  {
    OutputDuplProcessRemoteSessionSetPointerShape(a2, a3, a4, a5);
    goto LABEL_24;
  }
  if ( a3->Flags.Value >= 8 )
  {
    WdLogSingleEntry2(2LL, a3->Flags.Value, a1);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"invalid Flags specified: 0x%I64x DXGADAPTER=0x%I64x",
      a3->Flags.Value,
      (__int64)a1,
      0LL,
      0LL,
      0LL);
LABEL_39:
    v12 = -1073741811;
    goto LABEL_24;
  }
  VidPnSourceId = a3->VidPnSourceId;
  v51 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(a1, VidPnSourceId, 0LL, 0LL, (struct DXGADAPTER **)&v51, &v57, 0);
  v12 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    WdLogSingleEntry3(4LL, a1, a3->VidPnSourceId, PairingAdapters);
    goto LABEL_24;
  }
  v15 = (_QWORD *)v51;
  if ( !*(_QWORD *)&v51 )
  {
    WdLogSingleEntry1(1LL, 1460LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 1460LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !v15[365] )
  {
    WdLogSingleEntry1(1LL, 1461LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
      1461LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v16 = *(struct _LUID *)((char *)v15 + 404);
  v51 = v16;
  DXGADAPTER::ReleaseReference((DXGADAPTER *)v15);
  v18 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( !v18
    || (v19 = PsGetCurrentProcessSessionId(v17),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v18, v19)) == 0LL) )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v17);
    v12 = -1073741811;
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    v48 = PsGetCurrentProcessSessionId(v47);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
      v48,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_24;
  }
  v49 = 0;
  v21 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v49, 0);
  v12 = v21;
  if ( v21 < 0 )
  {
    WdLogSingleEntry1(4LL, v21);
  }
  else
  {
    SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                              SessionDataForSpecifiedSession,
                              &v51,
                              a3->VidPnSourceId);
    v24 = SessionViewFromSource;
    if ( SessionViewFromSource )
    {
      PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
      NextDisplaySource = PrimaryDisplaySource;
      if ( a8 != v26 )
      {
        v12 = -1073741823;
        if ( PrimaryDisplaySource )
        {
          v42 = a3->VidPnSourceId;
          while ( *((_DWORD *)NextDisplaySource + 4) != v42
               || a1 != *(struct DXGADAPTER **)(*((_QWORD *)NextDisplaySource + 1) + 16LL) )
          {
            NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v24, NextDisplaySource);
            if ( !NextDisplaySource )
              goto LABEL_20;
          }
          v12 = SetPointerShapeForDisplaySource(NextDisplaySource, v53, a3, v24, a1, v52, a5, v26, a7 != v26, 1);
LABEL_51:
          if ( v12 >= 0 )
            goto LABEL_22;
        }
        goto LABEL_20;
      }
      if ( PrimaryDisplaySource )
      {
        v28 = v53;
        v29 = a7 != v26;
        v50 = a7 != v26;
        while ( 1 )
        {
          v12 = SetPointerShapeForDisplaySource(NextDisplaySource, v28, a3, v24, a1, v52, a5, v26, v29, v26);
          if ( v12 < 0 )
            break;
          NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v24, NextDisplaySource);
          v29 = v50;
          if ( !NextDisplaySource )
            goto LABEL_51;
        }
LABEL_20:
        for ( i = SESSION_VIEW::GetPrimaryDisplaySource(v24); ; i = SESSION_VIEW::GetNextDisplaySource(v24, v31) )
        {
          v31 = i;
          if ( !i )
            break;
          v35 = *(ADAPTER_DISPLAY ***)(*((_QWORD *)i + 1) + 16LL);
          if ( !v35 )
          {
            WdLogSingleEntry1(1LL, 1544LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 1544LL, 0LL, 0LL, 0LL, 0LL);
          }
          if ( !v35[365] )
          {
            WdLogSingleEntry1(1LL, 1545LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
              1545LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v60, (struct DXGADAPTER *const)v35, 0LL);
          v36 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v60, 0LL);
          if ( v36 < 0 )
          {
            HighPart = v51.HighPart;
            v45 = v36;
            WdLogSingleEntry3(2LL, v51.HighPart, v16.LowPart, v36);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to aquire adapter access on adapter = 0x%I64x%08I64x , Status = 0x%I64x.",
              HighPart,
              v16.LowPart,
              v45,
              0LL,
              0LL);
          }
          else
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v57, (ADAPTER_DISPLAY *)((char *)v35[365] + 464), 0);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v57);
            if ( ADAPTER_DISPLAY::IsVidPnSourceActive(v35[365], *((_DWORD *)v31 + 4)) )
            {
              v43 = *((_DWORD *)v31 + 4);
              *(_QWORD *)&v59.X = 0LL;
              v59.Flags.Value &= ~1u;
              v59.VidPnSourceId = v43;
              ADAPTER_DISPLAY::DdiSetPointerPosition(v35[365], &v59, v37);
            }
            *((_BYTE *)v31 + 765) = 0;
            *((_DWORD *)v31 + 943) = -1;
            *((_DWORD *)v31 + 944) = -1;
            if ( v58 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v57);
          }
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v60);
        }
      }
    }
    else
    {
      v38 = PsGetCurrentProcessSessionId(v23);
      v39 = v51.HighPart;
      v12 = -1071774937;
      WdLogSingleEntry5(2LL, a3->VidPnSourceId, v51.HighPart, v16.LowPart, v38, -1071774937LL);
      v41 = PsGetCurrentProcessSessionId(v40);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Cannot find the session view for VidPn source 0x%I64x on adapter 0x%I64x%08I64x in session 0x%I64x, returning 0x%I64x.",
        a3->VidPnSourceId,
        v39,
        v16.LowPart,
        v41,
        -1071774937LL);
    }
  }
LABEL_22:
  if ( v49 )
    DxgkReleaseSessionModeChangeLock();
LABEL_24:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54);
  if ( v56 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v54);
  return (unsigned int)v12;
}
