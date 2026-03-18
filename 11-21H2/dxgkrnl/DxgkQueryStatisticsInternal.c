/*
 * XREFs of DxgkQueryStatisticsInternal @ 0x1C02D3654
 * Callers:
 *     DxgkQueryStatistics @ 0x1C0222F00 (DxgkQueryStatistics.c)
 *     ?VmBusQueryStatistics@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0373040 (-VmBusQueryStatistics@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C001D8C0 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C0164280 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01798C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01A442C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C01DF770 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z @ 0x1C022242C (-GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z.c)
 *     ?GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z @ 0x1C02BB8DC (-GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z.c)
 *     ?GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z @ 0x1C02BBA64 (-GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z.c)
 *     ?GetGpuVersion@DXGADAPTER@@QEAAJPEAU_D3DKMT_GPUVERSION@@@Z @ 0x1C02BBAE4 (-GetGpuVersion@DXGADAPTER@@QEAAJPEAU_D3DKMT_GPUVERSION@@@Z.c)
 *     ?QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z @ 0x1C02CFE0C (-QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C0334C04 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?VmBusSendQueryStatistics@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGPROCESS@@@Z @ 0x1C037B934 (-VmBusSendQueryStatistics@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGP.c)
 */

__int64 __fastcall DxgkQueryStatisticsInternal(__int64 a1, char a2, __int64 a3)
{
  char v3; // r12
  ULONG64 v4; // r14
  _OWORD *v5; // rax
  int *v6; // rcx
  __int64 v7; // rdx
  _OWORD *v8; // rax
  int *v9; // rcx
  __int64 v10; // rdx
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v12; // r13
  struct DXGPROCESS *v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct DXGPROCESS *Process; // rax
  __int64 v19; // rsi
  DXGADAPTER *v20; // r14
  int Statistics; // eax
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rax
  int ProcessStatistics; // eax
  int AdapterPerfData; // eax
  int AdapterPerfDataCaps; // eax
  int NodePerfData; // eax
  int v29; // eax
  unsigned int v30; // edx
  _OWORD *v31; // rcx
  _OWORD *v32; // rax
  __int64 v33; // rdx
  _OWORD *v34; // rcx
  _OWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  DXGADAPTER *v41; // [rsp+58h] [rbp-410h] BYREF
  int v42; // [rsp+60h] [rbp-408h] BYREF
  __int64 v43; // [rsp+68h] [rbp-400h]
  char v44; // [rsp+70h] [rbp-3F8h]
  ULONG64 v45; // [rsp+78h] [rbp-3F0h]
  unsigned __int64 v46; // [rsp+80h] [rbp-3E8h] BYREF
  unsigned __int64 v47; // [rsp+88h] [rbp-3E0h] BYREF
  _BYTE v48[8]; // [rsp+90h] [rbp-3D8h] BYREF
  DXGADAPTER *v49; // [rsp+98h] [rbp-3D0h]
  char v50; // [rsp+A0h] [rbp-3C8h]
  int v51; // [rsp+B0h] [rbp-3B8h] BYREF
  struct _LUID v52; // [rsp+B4h] [rbp-3B4h]
  void *v53; // [rsp+C0h] [rbp-3A8h]
  _BYTE v54[776]; // [rsp+C8h] [rbp-3A0h] BYREF
  unsigned int v55; // [rsp+3D0h] [rbp-98h]
  _BYTE v56[80]; // [rsp+3E0h] [rbp-88h] BYREF

  v3 = a2;
  v4 = a1;
  v45 = a1;
  v42 = -1;
  v43 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v44 = 1;
    v42 = 2049;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2049);
  }
  else
  {
    v44 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v42, 2049);
  v46 = 0LL;
  if ( v3 )
  {
    v5 = (_OWORD *)v4;
    if ( v4 >= MmUserProbeAddress )
      v5 = (_OWORD *)MmUserProbeAddress;
    v6 = &v51;
    v7 = 6LL;
    do
    {
      *(_OWORD *)v6 = *v5;
      *((_OWORD *)v6 + 1) = v5[1];
      *((_OWORD *)v6 + 2) = v5[2];
      *((_OWORD *)v6 + 3) = v5[3];
      *((_OWORD *)v6 + 4) = v5[4];
      *((_OWORD *)v6 + 5) = v5[5];
      *((_OWORD *)v6 + 6) = v5[6];
      v6 += 32;
      *((_OWORD *)v6 - 1) = v5[7];
      v5 += 8;
      --v7;
    }
    while ( v7 );
    *(_OWORD *)v6 = *v5;
    *((_OWORD *)v6 + 1) = v5[1];
    *((_QWORD *)v6 + 4) = *((_QWORD *)v5 + 4);
  }
  else
  {
    v8 = (_OWORD *)v4;
    v9 = &v51;
    v10 = 6LL;
    do
    {
      *(_OWORD *)v9 = *v8;
      *((_OWORD *)v9 + 1) = v8[1];
      *((_OWORD *)v9 + 2) = v8[2];
      *((_OWORD *)v9 + 3) = v8[3];
      *((_OWORD *)v9 + 4) = v8[4];
      *((_OWORD *)v9 + 5) = v8[5];
      *((_OWORD *)v9 + 6) = v8[6];
      v9 += 32;
      *((_OWORD *)v9 - 1) = v8[7];
      v8 += 8;
      --v10;
    }
    while ( v10 );
    *(_OWORD *)v9 = *v8;
    *((_OWORD *)v9 + 1) = v8[1];
    *((_QWORD *)v9 + 4) = *((_QWORD *)v8 + 4);
  }
  memset(v54, 0, sizeof(v54));
  Global = DXGGLOBAL_GetGlobal();
  v12 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v52, &v46);
  if ( v12 )
  {
    v13 = 0LL;
    DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v56, v53, 1024);
    if ( v53 )
    {
      if ( (int)DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v56, 1) < 0 )
      {
        WdLogSingleEntry1(3LL, v53);
        goto LABEL_21;
      }
      Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v56);
    }
    else
    {
      Process = DXGPROCESS::GetCurrent(v15, v14, v16, v17);
    }
    v13 = Process;
LABEL_21:
    if ( !v13 )
    {
      WdLogSingleEntry1(3LL, 5878LL);
      LODWORD(v19) = -1073741811;
LABEL_63:
      DXGADAPTER::ReleaseReference(v12);
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v56);
      v3 = a2;
      goto LABEL_66;
    }
    v41 = 0LL;
    v47 = 0LL;
    LODWORD(v19) = DxgkpGetPairingAdapters(v12, 0, &v41, &v47, 0LL, 0LL, 0);
    if ( (int)v19 < 0 )
    {
      WdLogSingleEntry1(2LL, v12);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to get pairing adapters from adapter 0x%I64x",
        (__int64)v12,
        0LL,
        0LL,
        0LL,
        0LL);
      v20 = v41;
LABEL_60:
      if ( v20 )
        DXGADAPTER::ReleaseReference(v20);
      v4 = v45;
      goto LABEL_63;
    }
    v20 = v41;
    if ( !v41 )
    {
      LODWORD(v19) = -1073741637;
      WdLogSingleEntry2(2LL, v12, -1073741637LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Try to call query process statistics on a display only adapter 0x%I64x (Status = 0x%I64x)!",
        (__int64)v12,
        -1073741637LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_60;
    }
    if ( *((_BYTE *)v41 + 209) )
    {
      Statistics = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryStatistics(
                     (DXGADAPTER *)((char *)v41 + 4344),
                     (struct _D3DKMT_QUERYSTATISTICS *)&v51,
                     v13);
      v19 = Statistics;
      if ( Statistics < 0 )
      {
        WdLogSingleEntry2(2LL, v20, Statistics);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Host adapter failed the call. hAdapter (0x%I64x) specified, returning 0x%I64x",
          (__int64)v20,
          v19,
          0LL,
          0LL,
          0LL);
      }
      goto LABEL_60;
    }
    v49 = v41;
    v50 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v48);
    v23 = *((_DWORD *)v20 + 50);
    v20 = v41;
    if ( v23 != 1 )
    {
LABEL_58:
      if ( v50 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v48);
      goto LABEL_60;
    }
    v24 = *((_QWORD *)v41 + 350);
    if ( !*(_QWORD *)(v24 + 648) )
    {
      WdLogSingleEntry1(1LL, 5760LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pRenderAdapter->GetRenderCore()->GetVidMmExport()",
        5760LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v24 = *((_QWORD *)v20 + 350);
    }
    if ( !*(_QWORD *)(v24 + 624) )
    {
      WdLogSingleEntry1(1LL, 5761LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pRenderAdapter->GetRenderCore()->GetVidSchExport()",
        5761LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    switch ( v51 )
    {
      case 0:
        LODWORD(v19) = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 350)
                                                                                          + 648LL)
                                                                              + 8LL)
                                                                  + 304LL))(
                         *(_QWORD *)(*((_QWORD *)v20 + 350) + 656LL),
                         v54);
        if ( (int)v19 < 0 )
          goto LABEL_58;
        ProcessStatistics = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 350)
                                                                                               + 624LL)
                                                                                   + 8LL)
                                                                       + 688LL))(
                              *(_QWORD *)(*((_QWORD *)v20 + 350) + 632LL),
                              v54);
        goto LABEL_57;
      case 3:
        ProcessStatistics = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 350) + 648LL)
                                                                                           + 8LL)
                                                                               + 328LL))(
                              *(_QWORD *)(*((_QWORD *)v20 + 350) + 656LL),
                              v55,
                              v54);
        goto LABEL_57;
      case 5:
        v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 350) + 624LL)
                                                                             + 8LL)
                                                                 + 696LL))(
                *(_QWORD *)(*((_QWORD *)v20 + 350) + 632LL),
                v55,
                v54);
        v19 = v29;
        if ( v29 < 0 )
          goto LABEL_48;
        if ( *((int *)v20 + 673) < 2400 )
          goto LABEL_58;
        v30 = v55 % **((unsigned __int16 **)v20 + 335);
        *(_DWORD *)&v54[548] = v55 / **((unsigned __int16 **)v20 + 335);
        *(_DWORD *)&v54[544] = v30;
        NodePerfData = DXGADAPTER::GetNodePerfData(v20, (struct _D3DKMT_NODE_PERFDATA *)&v54[544]);
        break;
      case 7:
        ProcessStatistics = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 350) + 624LL)
                                                                                           + 8LL)
                                                                               + 704LL))(
                              *(_QWORD *)(*((_QWORD *)v20 + 350) + 632LL),
                              v55,
                              v54);
        goto LABEL_57;
      case 10:
        if ( *((int *)v20 + 673) < 2400 )
        {
          LODWORD(v19) = -1073741822;
          goto LABEL_58;
        }
        *(_DWORD *)v54 = v55;
        AdapterPerfData = DXGADAPTER::GetAdapterPerfData(v20, (struct _D3DKMT_ADAPTER_PERFDATA *)v54);
        v19 = AdapterPerfData;
        if ( AdapterPerfData < 0
          || (*(_DWORD *)&v54[64] = v55,
              AdapterPerfDataCaps = DXGADAPTER::GetAdapterPerfDataCaps(
                                      v20,
                                      (struct _D3DKMT_ADAPTER_PERFDATACAPS *)&v54[64]),
              v19 = AdapterPerfDataCaps,
              AdapterPerfDataCaps < 0) )
        {
LABEL_48:
          WdLogSingleEntry1(3LL, v19);
          goto LABEL_58;
        }
        *(_DWORD *)&v54[104] = v55;
        NodePerfData = DXGADAPTER::GetGpuVersion(v20, (struct _D3DKMT_GPUVERSION *)&v54[104]);
        break;
      default:
        ProcessStatistics = QueryProcessStatistics(
                              (struct _D3DKMT_QUERYSTATISTICS *)&v51,
                              v20,
                              (struct _KTHREAD **)v13,
                              v22);
LABEL_57:
        LODWORD(v19) = ProcessStatistics;
        goto LABEL_58;
    }
    v19 = NodePerfData;
    if ( NodePerfData >= 0 )
      goto LABEL_58;
    goto LABEL_48;
  }
  WdLogSingleEntry2(3LL, v52.LowPart, v52.HighPart);
  LODWORD(v19) = -1073741811;
LABEL_66:
  if ( (int)v19 >= 0 )
  {
    if ( v3 )
    {
      v31 = (_OWORD *)(v4 + 24);
      if ( v4 + 800 > MmUserProbeAddress || v4 + 800 <= (unsigned __int64)v31 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v32 = v54;
      v33 = 6LL;
      do
      {
        *v31 = *v32;
        v31[1] = v32[1];
        v31[2] = v32[2];
        v31[3] = v32[3];
        v31[4] = v32[4];
        v31[5] = v32[5];
        v31[6] = v32[6];
        v31 += 8;
        *(v31 - 1) = v32[7];
        v32 += 8;
        --v33;
      }
      while ( v33 );
      *(_QWORD *)v31 = *(_QWORD *)v32;
    }
    else
    {
      v34 = (_OWORD *)(v4 + 24);
      v35 = v54;
      v36 = 6LL;
      do
      {
        *v34 = *v35;
        v34[1] = v35[1];
        v34[2] = v35[2];
        v34[3] = v35[3];
        v34[4] = v35[4];
        v34[5] = v35[5];
        v34[6] = v35[6];
        v34 += 8;
        *(v34 - 1) = v35[7];
        v35 += 8;
        --v36;
      }
      while ( v36 );
      *(_QWORD *)v34 = *(_QWORD *)v35;
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
  if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v37, &EventProfilerExit, v38, v42);
  return (unsigned int)v19;
}
