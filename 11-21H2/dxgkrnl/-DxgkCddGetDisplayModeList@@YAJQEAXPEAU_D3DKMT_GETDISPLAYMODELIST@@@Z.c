/*
 * XREFs of ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C01D2560
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000F45C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01798C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C01A46EC (DxgkReleaseSessionModeChangeLock.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1C01D2768 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z @ 0x1C01D2BF4 (-DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddGetDisplayModeList(struct DXGADAPTER *a1, struct _D3DKMT_GETDISPLAYMODELIST *a2, __int64 a3)
{
  struct DXGADAPTER *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // edx
  int PairingAdapters; // eax
  int v11; // ebx
  struct DXGADAPTER *v12; // r14
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int DisplayModeList; // eax
  UINT v20; // ecx
  struct _D3DKMT_DISPLAYMODE *v21; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  D3DKMT_HANDLE v25; // ebx
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  D3DKMT_HANDLE hAdapter; // ebx
  __int64 CurrentProcess; // rax
  D3DKMT_DISPLAYMODE *pModeList; // rcx
  __int64 ModeCount; // rdx
  unsigned __int8 v37; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v38[7]; // [rsp+51h] [rbp-AFh] BYREF
  struct _D3DKMT_DISPLAYMODE *v39; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGADAPTER *v40; // [rsp+60h] [rbp-A0h] BYREF
  struct _D3DKMT_GETDISPLAYMODELIST Src; // [rsp+68h] [rbp-98h] BYREF
  int v42; // [rsp+80h] [rbp-80h] BYREF
  __int64 v43; // [rsp+88h] [rbp-78h]
  char v44; // [rsp+90h] [rbp-70h]
  unsigned __int64 v45; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v46[144]; // [rsp+A0h] [rbp-60h] BYREF

  v42 = -1;
  v4 = a1;
  v43 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v44 = 1;
    v42 = 3004;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 3004);
  }
  else
  {
    v44 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v42, 3004);
  v37 = 0;
  memset(&Src, 0, sizeof(Src));
  if ( v4 )
  {
    VidPnSourceId = a2->VidPnSourceId;
    v40 = 0LL;
    PairingAdapters = DxgkpGetPairingAdapters(v4, VidPnSourceId, 0LL, 0LL, &v40, &v45, 0);
    v11 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      WdLogSingleEntry3(4LL, v4, a2->VidPnSourceId, PairingAdapters);
      LODWORD(v4) = v11;
    }
    else
    {
      v12 = v40;
      if ( !v40 )
      {
        WdLogSingleEntry1(1LL, 1305LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 1305LL, 0LL, 0LL, 0LL, 0LL);
      }
      DxgkWaitForMonitorEventDoneInternal(v12);
      v38[0] = 0;
      v13 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v38, 0);
      v4 = (struct DXGADAPTER *)v13;
      if ( v13 < 0 )
      {
        WdLogSingleEntry1(2LL, v13);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to acquire session mode change shared lock (Status = 0x%I64x)",
          (__int64)v4,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      else
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v46, v12, 0LL);
        DXGADAPTER::ReleaseReference(v12);
        v14 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v46, 0LL);
        v4 = (struct DXGADAPTER *)v14;
        if ( v14 < 0 )
        {
          hAdapter = a2->hAdapter;
          CurrentProcess = PsGetCurrentProcess(v16, v15, v17, v18);
          WdLogSingleEntry4(4LL, v4, CurrentProcess, hAdapter, v12);
        }
        else
        {
          if ( !*((_QWORD *)v12 + 349) )
          {
            WdLogSingleEntry1(1LL, 1345LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
              1345LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          Src.VidPnSourceId = a2->VidPnSourceId;
          v39 = 0LL;
          DisplayModeList = DxgkpGetDisplayModeList(
                              v12,
                              (struct COREADAPTERACCESS *)v46,
                              0,
                              &Src,
                              (const struct _D3DKMT_DISPLAYMODE **)&v39,
                              &v37);
          LODWORD(v4) = DisplayModeList;
          if ( DisplayModeList < 0 )
          {
            WdLogSingleEntry2(7LL, a2->VidPnSourceId, DisplayModeList);
          }
          else
          {
            v20 = (v39 != 0LL) + Src.ModeCount;
            if ( a2->pModeList )
            {
              if ( a2->ModeCount < v20 )
              {
                WdLogSingleEntry2(3LL, a2->ModeCount, v20);
                LODWORD(v4) = -1073741789;
              }
              else
              {
                memmove(a2->pModeList, Src.pModeList, 44LL * Src.ModeCount);
                v21 = v39;
                if ( v39 )
                {
                  pModeList = a2->pModeList;
                  ModeCount = Src.ModeCount;
                  *(_OWORD *)&pModeList[ModeCount].Width = *(_OWORD *)&v39->Width;
                  *(_OWORD *)&pModeList[ModeCount].RefreshRate.Numerator = *(_OWORD *)&v21->RefreshRate.Numerator;
                  *(_QWORD *)&pModeList[ModeCount].DisplayFixedOutput = *(_QWORD *)&v21->DisplayFixedOutput;
                  *((_DWORD *)&pModeList[ModeCount].Flags + 1) = *((_DWORD *)&v21->Flags + 1);
                }
              }
            }
            else
            {
              a2->ModeCount = v20;
            }
            if ( v37 )
            {
              operator delete[](Src.pModeList);
              Src.pModeList = 0LL;
            }
          }
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v46);
      }
      if ( v38[0] )
        DxgkReleaseSessionModeChangeLock();
    }
  }
  else
  {
    v25 = a2->hAdapter;
    v26 = PsGetCurrentProcess(v6, v5, v7, v8);
    LODWORD(v4) = -1073741811;
    WdLogSingleEntry3(2LL, -1073741811LL, v26, v25);
    v27 = a2->hAdapter;
    v32 = PsGetCurrentProcess(v29, v28, v30, v31);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Status=0x%I64x EPROCESS=0x%I64x Invalid hAdapter (0x%I64x) specified",
      -1073741811LL,
      v32,
      v27,
      0LL,
      0LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
  if ( v44 )
  {
    LOBYTE(v22) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v42);
  }
  return (unsigned int)v4;
}
