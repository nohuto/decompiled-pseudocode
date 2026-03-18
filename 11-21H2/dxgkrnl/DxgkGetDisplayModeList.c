/*
 * XREFs of DxgkGetDisplayModeList @ 0x1C01EBFF0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000F8D4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00138D4 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0013C94 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01798C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1C01A455C (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C01A46EC (DxgkReleaseSessionModeChangeLock.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1C01D2768 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x1C01DB11C (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C01E3A64 (-ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z.c)
 *     ?AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z @ 0x1C01E3A98 (-AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z.c)
 */

__int64 __fastcall DxgkGetDisplayModeList(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _KTHREAD **Current; // r13
  struct _D3DKMT_GETDISPLAYMODELIST *v13; // rax
  struct DXGADAPTER *v14; // rsi
  int PairingAdapters; // eax
  unsigned int DisplayModeList; // ebx
  struct DXGADAPTER *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 v23; // rcx
  PRKPROCESS *v24; // r14
  int v25; // eax
  ADAPTER_DISPLAY *v26; // rcx
  UINT ModeCount; // ecx
  UINT v28; // r11d
  unsigned int v29; // r13d
  unsigned int v30; // eax
  ULONG64 v31; // r8
  __int64 v32; // r9
  unsigned int v33; // esi
  size_t v34; // r8
  D3DKMT_DISPLAYMODE *pModeList; // rdx
  char *v36; // rcx
  struct _D3DKMT_DISPLAYMODE *v37; // rdx
  unsigned int v38; // edx
  ULONG64 v39; // r8
  ULONG64 v40; // rcx
  UINT v41; // r8d
  __int64 v42; // rcx
  struct DXGGLOBAL *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 CurrentProcess; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  __int64 hAdapter; // r9
  struct _KTHREAD **VidPnSourceId; // r8
  __int64 v55; // rdx
  __int64 v56; // rcx
  bool v57; // sf
  int v58; // eax
  __int64 v59; // rbx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  char v63; // [rsp+50h] [rbp-1B8h]
  unsigned __int8 v64[3]; // [rsp+51h] [rbp-1B7h] BYREF
  int v65; // [rsp+54h] [rbp-1B4h]
  unsigned int v66; // [rsp+58h] [rbp-1B0h]
  int v67; // [rsp+60h] [rbp-1A8h] BYREF
  __int64 v68; // [rsp+68h] [rbp-1A0h]
  char v69; // [rsp+70h] [rbp-198h]
  UINT v70; // [rsp+78h] [rbp-190h]
  struct _D3DKMT_GETDISPLAYMODELIST Src; // [rsp+80h] [rbp-188h] BYREF
  __int64 v72; // [rsp+98h] [rbp-170h]
  UINT v73; // [rsp+A0h] [rbp-168h]
  unsigned int v74; // [rsp+A4h] [rbp-164h]
  unsigned int v75; // [rsp+A8h] [rbp-160h]
  struct _D3DKMT_DISPLAYMODE *v76; // [rsp+B0h] [rbp-158h] BYREF
  ULONG64 v77; // [rsp+B8h] [rbp-150h]
  struct DXGADAPTER *v78; // [rsp+C0h] [rbp-148h] BYREF
  struct DXGADAPTER *v79; // [rsp+C8h] [rbp-140h] BYREF
  PRKPROCESS *v80; // [rsp+D0h] [rbp-138h]
  struct _KTHREAD **v81; // [rsp+D8h] [rbp-130h]
  DXGADAPTER *v82; // [rsp+E0h] [rbp-128h] BYREF
  unsigned __int64 v83; // [rsp+F0h] [rbp-118h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+F8h] [rbp-110h] BYREF
  char v85; // [rsp+128h] [rbp-E0h]
  _BYTE v86[144]; // [rsp+130h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+1C0h] [rbp-48h]
  int v88; // [rsp+1D0h] [rbp-38h]
  int v89; // [rsp+1D4h] [rbp-34h]
  int v90; // [rsp+1D8h] [rbp-30h]

  v77 = a1;
  v67 = -1;
  v68 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v69 = 1;
    v67 = 2017;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2017);
  }
  else
  {
    v69 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v67, 2017);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  v81 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v9, v8, v10, v11);
    DisplayModeList = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    v52 = PsGetCurrentProcess(v49, v48, v50, v51);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x 0x%I64x encountered exception",
      -1073741811LL,
      v52,
      0LL,
      0LL,
      0LL);
LABEL_56:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
    if ( !v69 )
      return DisplayModeList;
    v57 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_65:
    if ( v57 )
      McTemplateK0q_EtwWriteTransfer(v44, &EventProfilerExit, v45, v67);
    return DisplayModeList;
  }
  v64[0] = 0;
  v63 = 0;
  v13 = (struct _D3DKMT_GETDISPLAYMODELIST *)a1;
  if ( a1 >= MmUserProbeAddress )
    v13 = (struct _D3DKMT_GETDISPLAYMODELIST *)MmUserProbeAddress;
  Src = *v13;
  LODWORD(v72) = Src.pModeList != 0LL;
  Src.pModeList = 0LL;
  v78 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v82, Src.hAdapter, Current, &v78, 1);
  v14 = v78;
  if ( !v78 )
  {
    hAdapter = Src.hAdapter;
    VidPnSourceId = Current;
    DisplayModeList = -1073741811;
    v55 = -1073741811LL;
    v56 = 3LL;
LABEL_63:
    WdLogSingleEntry3(v56, v55, VidPnSourceId, hAdapter);
LABEL_54:
    if ( v82 )
      DXGADAPTER::ReleaseReference(v82);
    goto LABEL_56;
  }
  v79 = 0LL;
  v83 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v78, Src.VidPnSourceId, 0LL, 0LL, &v79, &v83, 0);
  DisplayModeList = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    hAdapter = PairingAdapters;
    VidPnSourceId = (struct _KTHREAD **)Src.VidPnSourceId;
    v55 = (__int64)v14;
    v56 = 4LL;
    goto LABEL_63;
  }
  v17 = v79;
  if ( !v79 )
  {
    WdLogSingleEntry1(1LL, 5825LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 5825LL, 0LL, 0LL, 0LL, 0LL);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v86, v17, 0LL);
  DXGADAPTER::ReleaseReference(v17);
  if ( !(unsigned int)DxgIsRemoteSessionUsingWddmMonitors(v19, v18, v20, v21) )
  {
    Global = DXGGLOBAL_GetGlobal();
    v24 = (PRKPROCESS *)DXGSESSIONMGR::AcquireConsoleSessionModeChangeLock(*((DXGSESSIONMGR **)Global + 122));
    v80 = v24;
    if ( !v24 )
    {
      DisplayModeList = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire console session mode change shared lock, returning 0x%I64x.",
        -1073741811LL,
        0LL,
        0LL,
        0LL,
        0LL);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v86);
      if ( v82 )
        DXGADAPTER::ReleaseReference(v82);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
      if ( !v69 )
        return DisplayModeList;
      LOBYTE(v44) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v57 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_65;
    }
LABEL_12:
    v85 = 0;
    if ( v24 && (unsigned int)PsGetCurrentProcessSessionId(v23) != *(_DWORD *)v24 )
    {
      v63 = 1;
      CPROCESSATTACHHELPER::Attach(&ApcState, v24[2331]);
    }
    v76 = 0LL;
    v25 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v86, 0LL);
    DisplayModeList = v25;
    v65 = v25;
    if ( v25 < 0 )
    {
      WdLogSingleEntry4(7LL, v25, Current, Src.hAdapter, v17);
    }
    else
    {
      v26 = (ADAPTER_DISPLAY *)*((_QWORD *)v17 + 349);
      if ( Src.VidPnSourceId >= *((_DWORD *)v26 + 24) )
      {
        DisplayModeList = -1071774972;
        v65 = -1071774972;
        v62 = Src.VidPnSourceId;
      }
      else
      {
        if ( ADAPTER_DISPLAY::IsPartOfDesktop(v26, Src.VidPnSourceId) )
        {
          DisplayModeList = DxgkpGetDisplayModeList(
                              v17,
                              (struct COREADAPTERACCESS *)v86,
                              0,
                              &Src,
                              (const struct _D3DKMT_DISPLAYMODE **)&v76,
                              v64);
          v65 = DisplayModeList;
          goto LABEL_19;
        }
        DisplayModeList = -1071774972;
        v65 = -1071774972;
        v62 = Src.VidPnSourceId;
      }
      WdLogSingleEntry3(7LL, -1071774972LL, v17, v62);
    }
LABEL_19:
    if ( v63 && v85 )
    {
      KeUnstackDetachProcess(&ApcState);
      v85 = 0;
    }
    if ( (DisplayModeList & 0x80000000) == 0 )
    {
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      v88 = 31;
      v89 = 119;
      v90 = 113;
      ModeCount = Src.ModeCount;
      v28 = (v76 != 0LL) + Src.ModeCount;
      v70 = v28;
      v29 = *((_QWORD *)v17 + 350) == 0LL ? 7 : 1;
      v30 = v28 * v29;
      v66 = v28 * v29;
      v31 = v77;
      if ( (_BYTE)v72 )
      {
        if ( *(_DWORD *)(v77 + 16) < v30 )
        {
          DisplayModeList = -1073741789;
          v65 = -1073741789;
        }
        else
        {
          v32 = *(_QWORD *)(v77 + 8);
          v72 = v32;
          v33 = 0;
          v74 = 0;
          while ( v33 < v29 )
          {
            v34 = 44LL * ModeCount;
            pModeList = Src.pModeList;
            v36 = (char *)(v32 + 44LL * v28 * v33);
            if ( (unsigned __int64)&v36[v34] > MmUserProbeAddress || &v36[v34] <= v36 )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v36, pModeList, v34);
            v37 = v76;
            v28 = v70;
            v32 = v72;
            if ( v76 )
            {
              v39 = v72 + 44LL * v70 * (v33 + 1);
              v40 = v39 - 44;
              if ( v39 > MmUserProbeAddress || v39 <= v40 )
                *(_BYTE *)MmUserProbeAddress = 0;
              *(_OWORD *)v40 = *(_OWORD *)&v37->Width;
              *(_OWORD *)(v40 + 16) = *(_OWORD *)&v37->RefreshRate.Numerator;
              *(_QWORD *)(v40 + 32) = *(_QWORD *)&v37->DisplayFixedOutput;
              *(_DWORD *)(v40 + 40) = *((_DWORD *)&v37->Flags + 1);
            }
            if ( v33 )
            {
              v41 = 0;
              v73 = 0;
              while ( v41 < v28 )
              {
                *(_DWORD *)(44LL * (v28 * v33 + v41++) + v32 + 8) = si128.m128i_i32[v33];
                v73 = v41;
              }
            }
            v74 = ++v33;
            ModeCount = Src.ModeCount;
          }
          v38 = 0;
          v30 = v66;
          while ( 1 )
          {
            v75 = v38;
            if ( v38 >= v30 )
              break;
            if ( Src.pModeList->RefreshRate.Numerator == -2 && Src.pModeList->RefreshRate.Denominator == -2 )
            {
              v42 = 44LL * v38;
              *(_DWORD *)(v42 + v32 + 16) = 64;
              *(_DWORD *)(v42 + v32 + 20) = 1;
              *(_DWORD *)(v42 + v32 + 12) = 64;
              v30 = v66;
            }
            ++v38;
          }
          v31 = v77;
        }
      }
      *(_DWORD *)(v31 + 16) = v30;
    }
    if ( v64[0] )
    {
      operator delete[](Src.pModeList);
      Src.pModeList = 0LL;
    }
    if ( v24 )
    {
      v43 = DXGGLOBAL_GetGlobal();
      DXGSESSIONMGR::ReleaseConsoleSessionModeChangeLock(*((DXGSESSIONMGR **)v43 + 122), (struct DXGSESSIONDATA *)v24);
    }
    else
    {
      DxgkReleaseSessionModeChangeLock();
    }
    if ( v85 )
    {
      KeUnstackDetachProcess(&ApcState);
      v85 = 0;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v86);
    goto LABEL_54;
  }
  v24 = 0LL;
  v80 = 0LL;
  v58 = DxgkAcquireSessionModeChangeLock(0);
  v66 = v58;
  if ( v58 >= 0 )
    goto LABEL_12;
  v59 = v58;
  WdLogSingleEntry1(2LL, v58);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to acquire current session mode change shared lock, returning 0x%I64x.",
    v59,
    0LL,
    0LL,
    0LL,
    0LL);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v86);
  if ( v82 )
    DXGADAPTER::ReleaseReference(v82);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
  if ( v69 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v60, &EventProfilerExit, v61, v67);
  return v66;
}
