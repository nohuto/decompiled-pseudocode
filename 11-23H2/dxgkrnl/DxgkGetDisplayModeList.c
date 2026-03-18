/*
 * XREFs of DxgkGetDisplayModeList @ 0x1C01A7B20
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002DEC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00074F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C00076A0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0007998 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0008248 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C00082D8 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0008770 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z @ 0x1C0167D78 (-AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1C019D0F4 (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C019D2BC (DxgkReleaseSessionModeChangeLock.c)
 *     ?ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C01A7AE0 (-ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1C01AB50C (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x1C01B6388 (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01C71F0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     _lambda_4ad224167d91228276911ab76f1e9490_::operator() @ 0x1C02FEFDC (_lambda_4ad224167d91228276911ab76f1e9490_--operator().c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C031266C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkGetDisplayModeList(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct _KTHREAD **Current; // rdi
  D3DKMT_DISPLAYMODE *pModeList; // r13
  UINT ModeCount; // r12d
  char v8; // r15
  ULONG64 v9; // rcx
  __int64 v10; // rsi
  struct DXGADAPTER *v11; // rbx
  __int64 v12; // r14
  int PairingAdapters; // eax
  __int64 v14; // rsi
  volatile signed __int64 *v15; // rbx
  signed __int64 v16; // rax
  struct DXGADAPTER *v17; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v19; // rcx
  struct DXGSESSIONDATA *v20; // r14
  __int64 v21; // rcx
  struct _KPROCESS *v22; // rsi
  int v23; // eax
  int DisplayModeList; // r14d
  ADAPTER_DISPLAY *v25; // rcx
  UINT v26; // esi
  char v27; // di
  __int64 v28; // rcx
  unsigned int v29; // eax
  unsigned int v30; // esi
  ULONG64 v31; // r10
  __int64 v32; // rbx
  _DWORD *v33; // rcx
  UINT i; // eax
  ULONG64 v35; // r8
  __int64 v36; // rdx
  _DWORD *v37; // r11
  __int32 v38; // r9d
  struct DXGSESSIONDATA *v39; // rdi
  struct DXGGLOBAL *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 CurrentProcess; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r8
  DXGADAPTER *v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // r8
  int v52; // eax
  UINT v53; // edx
  __int64 v54; // rax
  int v55; // ecx
  UINT v56; // eax
  unsigned __int8 v57[4]; // [rsp+50h] [rbp-1E8h] BYREF
  int v58; // [rsp+54h] [rbp-1E4h]
  int v59; // [rsp+58h] [rbp-1E0h]
  int v60; // [rsp+60h] [rbp-1D8h] BYREF
  __int64 v61; // [rsp+68h] [rbp-1D0h]
  char v62; // [rsp+70h] [rbp-1C8h]
  char v63; // [rsp+78h] [rbp-1C0h]
  struct DXGADAPTER *v64; // [rsp+80h] [rbp-1B8h] BYREF
  UINT v65; // [rsp+88h] [rbp-1B0h]
  int v66; // [rsp+8Ch] [rbp-1ACh]
  struct _D3DKMT_DISPLAYMODE *v67; // [rsp+90h] [rbp-1A8h] BYREF
  struct DXGSESSIONDATA *v68; // [rsp+98h] [rbp-1A0h]
  unsigned int v69[4]; // [rsp+A0h] [rbp-198h]
  __int64 v70; // [rsp+B0h] [rbp-188h]
  struct DXGADAPTER *v71; // [rsp+B8h] [rbp-180h] BYREF
  struct DXGADAPTER *v72; // [rsp+C8h] [rbp-170h] BYREF
  ULONG64 v73; // [rsp+D0h] [rbp-168h]
  D3DKMT_DISPLAYMODE *v74; // [rsp+D8h] [rbp-160h]
  struct _KTHREAD **v75; // [rsp+E0h] [rbp-158h]
  struct _D3DKMT_GETDISPLAYMODELIST v76; // [rsp+E8h] [rbp-150h] BYREF
  unsigned __int64 v77; // [rsp+100h] [rbp-138h] BYREF
  ULONG64 v78; // [rsp+108h] [rbp-130h]
  ULONG64 v79; // [rsp+110h] [rbp-128h]
  struct _KAPC_STATE ApcState; // [rsp+118h] [rbp-120h] BYREF
  char v81; // [rsp+148h] [rbp-F0h]
  _BYTE v82[144]; // [rsp+150h] [rbp-E8h] BYREF
  __m128i si128; // [rsp+1E0h] [rbp-58h]
  int v84; // [rsp+1F0h] [rbp-48h]
  int v85; // [rsp+1F4h] [rbp-44h]
  int v86; // [rsp+1F8h] [rbp-40h]

  v78 = a1;
  v60 = -1;
  v61 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v62 = 1;
    v60 = 2017;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2017);
  }
  else
  {
    v62 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v60, 2017);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v75 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v4);
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    v46 = PsGetCurrentProcess(v45);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x 0x%I64x encountered exception",
      -1073741811LL,
      v46,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60);
    if ( !v62 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_91;
  }
  pModeList = 0LL;
  v74 = 0LL;
  ModeCount = 0;
  v57[0] = 0;
  v8 = 0;
  v9 = a1;
  if ( a1 >= MmUserProbeAddress )
    v9 = MmUserProbeAddress;
  *(_OWORD *)v69 = *(_OWORD *)v9;
  v70 = *(_QWORD *)(v9 + 16);
  v72 = 0LL;
  v10 = v69[0];
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v71, v69[0], Current, &v72, 1);
  v11 = v72;
  if ( !v72 )
  {
    WdLogSingleEntry3(3LL, -1073741811LL, Current, v10);
    if ( v71 )
      DXGADAPTER::ReleaseReference(v71);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60);
    if ( !v62 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_91;
  }
  v64 = 0LL;
  v77 = 0LL;
  v12 = v69[1];
  PairingAdapters = DxgkpGetPairingAdapters(v72, v69[1], 0LL, 0LL, &v64, &v77, 0);
  LODWORD(v14) = PairingAdapters;
  v58 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    WdLogSingleEntry3(4LL, v11, v12, PairingAdapters);
    v49 = v71;
    if ( !v71 )
      goto LABEL_80;
    goto LABEL_79;
  }
  v15 = (volatile signed __int64 *)v64;
  if ( !v64 )
  {
    WdLogSingleEntry1(1LL, 5848LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 5848LL, 0LL, 0LL, 0LL, 0LL);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v82, (struct DXGADAPTER *const)v15, 0LL);
  v16 = _InterlockedExchangeAdd64(v15 + 3, 0xFFFFFFFFFFFFFFFFuLL);
  v17 = v64;
  if ( v16 == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v64 + 2), v64);
  if ( !(unsigned int)DxgIsRemoteSessionUsingWddmMonitors() )
  {
    Global = DXGGLOBAL::GetGlobal();
    v20 = DXGSESSIONMGR::AcquireConsoleSessionModeChangeLock(*((DXGSESSIONMGR **)Global + 118));
    v68 = v20;
    if ( v20 )
      goto LABEL_14;
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
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v82);
    if ( v71 )
      DXGADAPTER::ReleaseReference(v71);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60);
    if ( !v62 )
      return 3221225485LL;
    v47 = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
LABEL_91:
    McTemplateK0q_EtwWriteTransfer(v47, &EventProfilerExit, v48, v60);
    return 3221225485LL;
  }
  v20 = 0LL;
  v68 = 0LL;
  v52 = DxgkAcquireSessionModeChangeLock(0);
  v14 = v52;
  if ( v52 >= 0 )
  {
LABEL_14:
    v81 = 0;
    if ( v20 )
    {
      if ( (unsigned int)PsGetCurrentProcessSessionId(v19) != *(_DWORD *)v20 )
      {
        v8 = 1;
        v22 = (struct _KPROCESS *)*((_QWORD *)v20 + 2331);
        if ( (struct _KPROCESS *)PsGetCurrentProcess(v21) != v22 )
        {
          KeStackAttachProcess(v22, &ApcState);
          v81 = 1;
        }
      }
    }
    v67 = 0LL;
    v23 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v82, 0LL);
    DisplayModeList = v23;
    v58 = v23;
    if ( v23 < 0 )
    {
      v59 = 7;
      WdLogSingleEntry4(7LL, v23, Current, v69[0], v17);
      LODWORD(Current) = v69[1];
    }
    else
    {
      v25 = (ADAPTER_DISPLAY *)*((_QWORD *)v17 + 365);
      Current = (struct _KTHREAD **)v69[1];
      if ( v69[1] < *((_DWORD *)v25 + 24) && ADAPTER_DISPLAY::IsPartOfDesktop(v25, v69[1]) )
      {
        *(_QWORD *)&v76.hAdapter = *(_QWORD *)v69;
        *(&v76.ModeCount + 1) = HIDWORD(v70);
        v76.ModeCount = 0;
        v76.pModeList = 0LL;
        DisplayModeList = DxgkpGetDisplayModeList(
                            v17,
                            (struct COREADAPTERACCESS *)v82,
                            0,
                            &v76,
                            (const struct _D3DKMT_DISPLAYMODE **)&v67,
                            v57);
        v58 = DisplayModeList;
        v59 = 7;
        if ( DisplayModeList >= 0 )
        {
          ModeCount = v76.ModeCount;
          pModeList = v76.pModeList;
          v74 = v76.pModeList;
        }
      }
      else
      {
        DisplayModeList = -1071774972;
        v58 = -1071774972;
        v59 = 7;
        WdLogSingleEntry3(7LL, -1071774972LL, v17, Current);
      }
    }
    if ( v8 && v81 )
    {
      KeUnstackDetachProcess(&ApcState);
      v81 = 0;
    }
    if ( DisplayModeList >= 0 )
    {
      v26 = ModeCount;
      if ( *((_DWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(*((ADAPTER_DISPLAY **)v17 + 365), (unsigned int)Current) + 19) )
      {
        v27 = 1;
        v53 = 0;
        while ( v53 < ModeCount )
        {
          v54 = v53++;
          v55 = *((_DWORD *)&pModeList[v54].Flags + 1);
          v56 = v26 - 1;
          if ( (v55 & 0x10) == 0 )
            v56 = v26;
          v26 = v56;
        }
      }
      else
      {
        v27 = 0;
      }
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      v84 = 31;
      v85 = 119;
      v86 = 113;
      v28 = (v67 != 0LL) + v26;
      if ( *((_QWORD *)v17 + 366) )
      {
        v29 = 1;
        v59 = 1;
      }
      else
      {
        v29 = 7;
      }
      v30 = v28 * v29;
      v31 = *(_QWORD *)&v69[2];
      if ( *(_QWORD *)&v69[2] )
      {
        if ( (unsigned int)v70 < v30 )
        {
          DisplayModeList = -1073741789;
          v58 = -1073741789;
        }
        else
        {
          v63 = 0;
          v73 = *(_QWORD *)&v69[2];
          v32 = 0LL;
          while ( 1 )
          {
            v66 = v32;
            if ( (unsigned int)v32 >= v29 )
              break;
            for ( i = 0; ; ++i )
            {
              v65 = i;
              v35 = v31;
              if ( i >= ModeCount )
                break;
              v36 = i;
              if ( v27 )
              {
                v28 = *((unsigned int *)&pModeList[v36].Flags + 1);
                if ( (v28 & 0x10) != 0 )
                  continue;
              }
              v37 = (_DWORD *)v31;
              v79 = v31;
              v31 += 44LL;
              v73 = v31;
              v38 = si128.m128i_i32[v32];
              if ( v31 > MmUserProbeAddress || v31 <= (unsigned __int64)v37 )
                *(_BYTE *)MmUserProbeAddress = 0;
              *(_OWORD *)v35 = *(_OWORD *)&pModeList[v36].Width;
              *(_OWORD *)(v35 + 16) = *(_OWORD *)&pModeList[v36].RefreshRate.Numerator;
              *(_QWORD *)(v35 + 32) = *(_QWORD *)&pModeList[v36].DisplayFixedOutput;
              v28 = *((unsigned int *)&pModeList[v36].Flags + 1);
              *(_DWORD *)(v35 + 40) = v28;
              if ( pModeList[v36].RefreshRate.Numerator == -2 && pModeList[v36].RefreshRate.Denominator == -2 )
              {
                v37[4] = 64;
                v37[5] = 1;
                v37[3] = 64;
              }
              if ( v38 != 21 )
                v37[2] = v38;
            }
            if ( v67 )
            {
              v73 = v31 + 44;
              lambda_4ad224167d91228276911ab76f1e9490_::operator()(v28, v31, v67, si128.m128i_u32[v32]);
            }
            v32 = (unsigned int)(v32 + 1);
            v29 = v59;
          }
        }
      }
      v33 = (_DWORD *)(v78 + 16);
      if ( v78 + 16 >= MmUserProbeAddress )
        v33 = (_DWORD *)MmUserProbeAddress;
      *v33 = v30;
    }
    if ( v57[0] )
      operator delete(pModeList);
    v39 = v68;
    if ( v68 )
    {
      v40 = DXGGLOBAL::GetGlobal();
      DXGSESSIONMGR::ReleaseConsoleSessionModeChangeLock(*((DXGSESSIONMGR **)v40 + 118), v39);
    }
    else
    {
      DxgkReleaseSessionModeChangeLock();
    }
    if ( v81 )
    {
      KeUnstackDetachProcess(&ApcState);
      v81 = 0;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v82);
    if ( v71 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v71 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v71 + 2), v71);
      DisplayModeList = v58;
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60);
    if ( v62 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v41, &EventProfilerExit, v42, v60);
    }
    return (unsigned int)DisplayModeList;
  }
  WdLogSingleEntry1(2LL, v52);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to acquire current session mode change shared lock, returning 0x%I64x.",
    v14,
    0LL,
    0LL,
    0LL,
    0LL);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v82);
  v49 = v71;
  if ( v71 )
LABEL_79:
    DXGADAPTER::ReleaseReference(v49);
LABEL_80:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60);
  if ( v62 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v50, &EventProfilerExit, v51, v60);
  return (unsigned int)v14;
}
