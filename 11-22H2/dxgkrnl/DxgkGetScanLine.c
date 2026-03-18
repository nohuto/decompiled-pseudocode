/*
 * XREFs of DxgkGetScanLine @ 0x1C02D1910
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002DEC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00074F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C00076A0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0007998 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0008770 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C017687C (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01C71F0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1C01E1158 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?DdiGetScanLine@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C02C8AD8 (-DdiGetScanLine@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 *     ?GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C034C4BC (-GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 *     ?GetScanLineEmulation@BLTQUEUE@@QEAAXPEAIPEAE@Z @ 0x1C03D1ACC (-GetScanLineEmulation@BLTQUEUE@@QEAAXPEAIPEAE@Z.c)
 */

__int64 __fastcall DxgkGetScanLine(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct _KTHREAD **Current; // rbx
  unsigned int ScanLine; // ebx
  __int64 v7; // rcx
  __int64 v8; // r8
  bool v9; // sf
  _OWORD *v10; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v12; // rcx
  struct DXGADAPTER *v13; // rbx
  __int64 v14; // rcx
  DXGSESSIONMGR *v15; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  REMOTE_VSYNC *v18; // rcx
  __int64 v19; // rsi
  int PairingAdapters; // eax
  int v21; // r12d
  __int64 v22; // rcx
  __int64 v23; // r8
  struct DXGADAPTER *v25; // rbx
  __int64 v26; // r10
  __int64 v27; // rcx
  unsigned int v28; // r8d
  BOOLEAN InVerticalBlank; // al
  bool v30; // cc
  UINT v31; // ecx
  __int64 v32; // r8
  __int64 v33; // rdx
  ADAPTER_DISPLAY *v34; // rcx
  unsigned int v35; // eax
  _BYTE *v36; // rdx
  _DWORD *v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // [rsp+50h] [rbp-118h] BYREF
  __int64 v41; // [rsp+58h] [rbp-110h]
  char v42; // [rsp+60h] [rbp-108h]
  struct DXGADAPTER *v43; // [rsp+68h] [rbp-100h] BYREF
  DXGADAPTER *v44; // [rsp+70h] [rbp-F8h] BYREF
  unsigned int v45[4]; // [rsp+80h] [rbp-E8h]
  unsigned __int64 v46; // [rsp+90h] [rbp-D8h] BYREF
  _DXGKARG_GETSCANLINE v47; // [rsp+98h] [rbp-D0h] BYREF
  _BYTE v48[144]; // [rsp+B0h] [rbp-B8h] BYREF

  v40 = -1;
  v41 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v42 = 1;
    v40 = 2034;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2034);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v40, 2034);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v4);
  if ( !Current )
  {
    ScanLine = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    if ( !v42 )
      return ScanLine;
    v9 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_46:
    if ( v9 )
      McTemplateK0q_EtwWriteTransfer(v7, &EventProfilerExit, v8, v40);
    return ScanLine;
  }
  v10 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v10 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v45 = *v10;
  *(_QWORD *)&v47.VidPnTargetId = 0LL;
  v47.ScanLine = 0;
  if ( v45[0] || !(unsigned int)DxgIsRemoteSessionUsingXddmMonitors(MmUserProbeAddress) )
  {
    v43 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v44, v45[0], Current, &v43, 1);
    v13 = v43;
    if ( !v43 )
    {
      ScanLine = -1073741811;
      WdLogSingleEntry2(3LL, v45[0], -1073741811LL);
      if ( v44 )
        DXGADAPTER::ReleaseReference(v44);
      goto LABEL_7;
    }
    if ( (unsigned int)DxgIsRemoteSessionUsingXddmMonitors(v12) )
    {
      if ( *((_BYTE *)v13 + 209)
        && ((v15 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118)) == 0LL
          ? (SessionDataForSpecifiedSession = 0LL)
          : (CurrentProcessSessionId = PsGetCurrentProcessSessionId(v14),
             SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                v15,
                                                CurrentProcessSessionId)),
            *((_DWORD *)SessionDataForSpecifiedSession + 4738)) )
      {
        v18 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal() + 1064);
      }
      else
      {
        v18 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal() + 992);
      }
      ScanLine = REMOTE_VSYNC::GetScanLine(v18, &v47);
LABEL_67:
      if ( v44 )
        DXGADAPTER::ReleaseReference(v44);
      goto LABEL_69;
    }
    v43 = 0LL;
    v19 = v45[1];
    PairingAdapters = DxgkpGetPairingAdapters(v13, v45[1], 0LL, 0LL, &v43, &v46, 0);
    v21 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      WdLogSingleEntry3(4LL, v13, (unsigned int)v19, PairingAdapters);
LABEL_28:
      if ( v44 )
        DXGADAPTER::ReleaseReference(v44);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
      if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v40);
      return (unsigned int)v21;
    }
    v25 = v43;
    if ( !v43 )
    {
      WdLogSingleEntry1(1LL, 7931LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 7931LL, 0LL, 0LL, 0LL, 0LL);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v48, v25, 0LL);
    DXGADAPTER::ReleaseReference(v25);
    v21 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v48, 0LL);
    if ( v21 < 0 )
    {
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v48);
      goto LABEL_28;
    }
    if ( !*((_QWORD *)v25 + 365) )
    {
      WdLogSingleEntry1(1LL, 7945LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
        7945LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (unsigned int)v19 >= *(_DWORD *)(*((_QWORD *)v25 + 365) + 96LL) )
    {
      ScanLine = -1073741811;
      WdLogSingleEntry2(3LL, v19, -1073741811LL);
LABEL_42:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v48);
      if ( v44 )
        DXGADAPTER::ReleaseReference(v44);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
      if ( !v42 )
        return ScanLine;
      LOBYTE(v7) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v9 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_46;
    }
    if ( !DXGADAPTER::IsVSyncAvailable(v25, v19) )
    {
      v26 = *((_QWORD *)v25 + 365);
      v27 = *(_QWORD *)(v26 + 128);
      v28 = *(_DWORD *)(v27 + 4000 * v19 + 1096) + 20;
      InVerticalBlank = v47.InVerticalBlank;
      v30 = v28 <= *(_DWORD *)(v27 + 4000 * v19 + 1012);
      if ( v28 > *(_DWORD *)(v27 + 4000 * v19 + 1012) )
        InVerticalBlank = 1;
      v47.InVerticalBlank = InVerticalBlank;
      v31 = 0;
      if ( v30 )
        v31 = v28;
      *(_DWORD *)(4000 * v19 + *(_QWORD *)(v26 + 128) + 1096) = v31;
      v47.ScanLine = v31;
      ScanLine = 0;
      goto LABEL_66;
    }
    v32 = *(unsigned int *)(4000 * v19 + *(_QWORD *)(*((_QWORD *)v25 + 365) + 128LL) + 1088);
    v47.VidPnTargetId = v32;
    if ( (_DWORD)v32 == -1 )
    {
      ScanLine = -1071774912;
      WdLogSingleEntry3(4LL, v19, v45[0], -1071774912LL);
      goto LABEL_42;
    }
    if ( *((_QWORD *)v25 + 366) )
    {
      v34 = (ADAPTER_DISPLAY *)*((_QWORD *)v25 + 365);
    }
    else
    {
      v33 = *(_QWORD *)(*((_QWORD *)v25 + 365) + 448LL);
      if ( !v33 )
      {
        ScanLine = -1073741811;
LABEL_66:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v48);
        goto LABEL_67;
      }
      if ( !*(_BYTE *)(v33 + 96) )
      {
        BLTQUEUE::GetScanLineEmulation(
          (BLTQUEUE *)(*(_QWORD *)(v33 + 8) + 2920 * v19),
          &v47.ScanLine,
          &v47.InVerticalBlank);
        v35 = 0;
LABEL_65:
        ScanLine = v35;
        goto LABEL_66;
      }
      v34 = *(ADAPTER_DISPLAY **)(v33 + 88);
    }
    v35 = ADAPTER_DISPLAY::DdiGetScanLine(v34, &v47, v32);
    goto LABEL_65;
  }
  Global = DXGGLOBAL::GetGlobal();
  ScanLine = REMOTE_VSYNC::GetScanLine((struct DXGGLOBAL *)((char *)Global + 992), &v47);
LABEL_69:
  if ( (ScanLine & 0x80000000) != 0 )
    goto LABEL_7;
  v36 = (_BYTE *)(a1 + 8);
  if ( a1 + 8 >= MmUserProbeAddress )
    v36 = (_BYTE *)MmUserProbeAddress;
  *v36 = v47.InVerticalBlank;
  v37 = (_DWORD *)(a1 + 12);
  if ( a1 + 12 >= MmUserProbeAddress )
    v37 = (_DWORD *)MmUserProbeAddress;
  *v37 = v47.ScanLine;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
  if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v38, &EventProfilerExit, v39, v40);
  return 0LL;
}
