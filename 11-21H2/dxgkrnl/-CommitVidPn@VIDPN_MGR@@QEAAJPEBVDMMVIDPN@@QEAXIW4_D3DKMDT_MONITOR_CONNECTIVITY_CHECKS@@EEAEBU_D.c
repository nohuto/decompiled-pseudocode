/*
 * XREFs of ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C0399E6C
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C03A3518 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C0068854 (-CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z.c)
 *     MonitorGetNumConnectedMonitor @ 0x1C01D47C8 (MonitorGetNumConnectedMonitor.c)
 *     MonitorIsUsingSimulatedMonitor @ 0x1C01D4830 (MonitorIsUsingSimulatedMonitor.c)
 *     ?DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z @ 0x1C02C657C (-DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z.c)
 *     ?DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z @ 0x1C039C580 (-DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CommitVidPn(
        VIDPN_MGR *this,
        unsigned __int64 a2,
        void *const a3,
        unsigned int a4,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a5,
        char a6,
        int a7,
        const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *a8,
        unsigned __int8 *a9)
{
  __int64 v9; // r12
  const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *v13; // r13
  char v14; // r14
  char v15; // di
  __int64 v16; // rcx
  __int64 v17; // r8
  ADAPTER_DISPLAY *v18; // rcx
  int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // r8
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 v26; // r8
  ADAPTER_DISPLAY *v27; // rcx
  int v28; // eax
  __int64 v29; // r9
  int v31; // eax
  unsigned int v32; // ebx
  _DXGKARG_COMMITVIDPN v33; // [rsp+30h] [rbp-20h] BYREF

  v9 = a4;
  if ( a2 == -96LL )
    WdLogSingleEntry0(1LL);
  *(_QWORD *)&v33.Flags = 0LL;
  v13 = a8;
  v33.hPrimaryAllocation = a3;
  v14 = a7;
  v33.AffectedVidPnSourceId = v9;
  v15 = *((_BYTE *)a8 + 4) & 8;
  LOBYTE(a7) = 0;
  v33.hFunctionalVidPn = (D3DKMDT_HVIDPN)(a2 & -(__int64)(a2 != -88LL));
  *(_QWORD *)&v33.Flags = a6 & 1 | (2 * (v14 & 1u));
  v16 = *((_QWORD *)this + 1);
  if ( !v16 )
  {
    WdLogSingleEntry0(1LL);
    v16 = *((_QWORD *)this + 1);
  }
  if ( (int)MonitorIsUsingSimulatedMonitor(*(DXGADAPTER **)(v16 + 16), &a7) < 0 )
    WdLogSingleEntry0(1LL);
  if ( (_BYTE)a7 || v14 )
    v33.MonitorConnectivityChecks = D3DKMDT_MCC_IGNORE;
  else
    v33.MonitorConnectivityChecks = a5;
  if ( !v15 )
  {
    v18 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 1);
    if ( !v18 )
    {
      WdLogSingleEntry0(1LL);
      v18 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 1);
    }
    v19 = ADAPTER_DISPLAY::DdiCommitVidPn(v18, &v33, v17);
    v20 = v19;
    if ( v19 == -1071774920 || v19 == -1071774976 )
    {
      v23 = *((_QWORD *)this + 1);
      if ( !v23 )
      {
        WdLogSingleEntry0(1LL);
        v23 = *((_QWORD *)this + 1);
      }
      WdLogSingleEntry3(7LL, a2, v9, *(_QWORD *)(v23 + 16));
      if ( v33.MonitorConnectivityChecks == D3DKMDT_MCC_ENFORCE && a9 )
        *a9 = 1;
      a7 = 0;
      v24 = *((_QWORD *)this + 1);
      if ( !v24 )
      {
        WdLogSingleEntry0(1LL);
        v24 = *((_QWORD *)this + 1);
      }
      if ( (int)MonitorGetNumConnectedMonitor(*(_QWORD *)(v24 + 16), &a7) < 0 )
        WdLogSingleEntry0(1LL);
      if ( a7 != 1 || v33.MonitorConnectivityChecks != D3DKMDT_MCC_ENFORCE || a6 )
        goto LABEL_20;
      v25 = *((_QWORD *)this + 1);
      if ( !v25 )
      {
        WdLogSingleEntry0(1LL);
        v25 = *((_QWORD *)this + 1);
      }
      WdLogSingleEntry3(7LL, a2, v9, *(_QWORD *)(v25 + 16));
      v27 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 1);
      v33.MonitorConnectivityChecks = D3DKMDT_MCC_IGNORE;
      if ( !v27 )
      {
        WdLogSingleEntry0(1LL);
        v27 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 1);
      }
      v28 = ADAPTER_DISPLAY::DdiCommitVidPn(v27, &v33, v26);
      v20 = v28;
      if ( v28 < 0 )
      {
        v29 = *((_QWORD *)this + 1);
        if ( !v29 )
        {
          WdLogSingleEntry0(1LL);
          v29 = *((_QWORD *)this + 1);
        }
        WdLogSingleEntry4(7LL, a2, v9, *(_QWORD *)(v29 + 16), v20);
        v22 = 2LL;
        goto LABEL_41;
      }
      DmmLogCommitVidPnFailedPacket(&v33, (unsigned int)v28, 3LL);
    }
    else if ( v19 < 0 )
    {
      v21 = *((_QWORD *)this + 1);
      if ( !v21 )
      {
        WdLogSingleEntry0(1LL);
        v21 = *((_QWORD *)this + 1);
      }
      WdLogSingleEntry3(2LL, a2, *(_QWORD *)(v21 + 16), v20);
LABEL_20:
      v22 = 4LL;
LABEL_41:
      DmmLogCommitVidPnFailedPacket(&v33, (unsigned int)v20, v22);
      return (unsigned int)v20;
    }
  }
  v31 = VIDPN_MGR::CacheVidPnToBeComitted(this, (const struct DMMVIDPN *)a2, v9, v13);
  v32 = v31;
  if ( v31 >= 0 )
    return 0LL;
  WdLogSingleEntry4(2LL, a2, v9, (int)(*(_DWORD *)v13 << 28) >> 28, v31);
  return v32;
}
