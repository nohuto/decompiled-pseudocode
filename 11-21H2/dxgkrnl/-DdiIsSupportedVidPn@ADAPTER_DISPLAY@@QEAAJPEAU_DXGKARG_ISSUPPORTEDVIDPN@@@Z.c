/*
 * XREFs of ?DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z @ 0x1C01A7E34
 * Callers:
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C01A6D08 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C01A77A0 (-PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C01A7B04 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C01AA47C (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C01DF790 (-PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@.c)
 *     ?DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MULTISAMPLINGMETHOD@@PEA_K@Z @ 0x1C039B524 (-DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MUL.c)
 *     ?PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C039D9F8 (-PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_R.c)
 *     ?PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C039DE58 (-PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000B800 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B8C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000BB00 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C018B028 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiIsSupportedVidPn(ADAPTER_DISPLAY *this, struct _DXGKARG_ISSUPPORTEDVIDPN *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // r15d
  __int64 v7; // rcx
  __int64 v8; // r9
  D3DKMDT_HVIDPN hDesiredVidPn; // r8
  _QWORD *v10; // rdx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r8
  KIRQL CurrentIrql; // al
  __int64 v19; // r13
  struct DXGTHREAD *v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  struct DXGTHREAD *Current; // rax
  int v29; // r9d
  KIRQL v30; // al
  int v31; // [rsp+50h] [rbp-49h]
  struct DXGTHREAD *DxgThread; // [rsp+58h] [rbp-41h] BYREF
  int v33; // [rsp+60h] [rbp-39h] BYREF
  __int64 v34; // [rsp+68h] [rbp-31h]
  char v35; // [rsp+70h] [rbp-29h]
  char v36[8]; // [rsp+78h] [rbp-21h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-19h] BYREF

  _InterlockedAdd((volatile signed __int32 *)DXGGLOBAL_GetGlobal() + 22, 1u);
  v33 = -1;
  v6 = 0;
  v34 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v35 = 1;
    v33 = 5025;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v4, &EventProfilerEnter, v5, 5025);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v33, 5025);
  hDesiredVidPn = a2->hDesiredVidPn;
  if ( a2->hDesiredVidPn && *((_DWORD *)hDesiredVidPn + 16) == 1833172997 )
  {
    v10 = hDesiredVidPn + 30;
    if ( (_QWORD *)*v10 == v10 )
    {
      WdLogSingleEntry2(2LL, *(_QWORD *)(*((_QWORD *)this + 2) + 280LL), hDesiredVidPn);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Call to DmmIsNullVidPn with Null VidPn caught (hAdapter = 0x%I64x, hDesiredVidPn = 0x%I64x) ",
        *(_QWORD *)(*((_QWORD *)this + 2) + 280LL),
        (__int64)a2->hDesiredVidPn,
        0LL,
        0LL,
        0LL);
      a2->IsVidPnSupported = 1;
      LODWORD(v21) = 0;
    }
    else
    {
      CurrentProcess = PsGetCurrentProcess(v7, v10, hDesiredVidPn, v8);
      ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
      v13 = ProcessDxgProcess;
      if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0
        || (Current = DXGTHREAD::GetCurrent()) == 0LL
        || (v14 = *((_QWORD *)Current + 3)) == 0 )
      {
        v14 = v13;
      }
      v31 = 0;
      v15 = (v14 + 152) & -(__int64)(v14 != 0);
      if ( v15 && *(struct _KTHREAD **)(((v14 + 152) & -(__int64)(v14 != 0)) + 8) == KeGetCurrentThread() )
      {
        WdLogSingleEntry1(1LL, 1425LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
          1425LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( v14 )
      {
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((v14 + 152) & -(__int64)(v14 != 0), 0LL) )
        {
          if ( bTracingEnabled )
          {
            v29 = *(_DWORD *)(((v14 + 152) & -(__int64)(v14 != 0)) + 0x18);
            if ( v29 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0q_EtwWriteTransfer(v16, (const EVENT_DESCRIPTOR *)"g", v17, v29);
          }
          ExAcquirePushLockExclusiveEx((v14 + 152) & -(__int64)(v14 != 0), 0LL);
        }
        *(_QWORD *)(((v14 + 152) & -(__int64)(v14 != 0)) + 8) = KeGetCurrentThread();
        v31 = 2;
      }
      DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
      _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4484LL), 1u);
      CurrentIrql = KeGetCurrentIrql();
      v19 = CurrentIrql;
      v20 = 0LL;
      if ( CurrentIrql < 2u )
      {
        DxgThread = 0LL;
        if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &DxgThread) >= 0 )
        {
          v20 = DxgThread;
          if ( DxgThread || (DxgThread = DxgkThreadObjectCreateDxgThread(), (v20 = DxgThread) != 0LL) )
            v6 = *((_DWORD *)v20 + 12);
        }
      }
      DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
        (DXGVALIDATIONPROCESSATTACH *)v36,
        *((struct DXGADAPTER **)this + 2));
      v21 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_ISSUPPORTEDVIDPN *))(*((_QWORD *)this + 2) + 608LL))(
              *(_QWORD *)(*((_QWORD *)this + 2) + 280LL),
              a2);
      if ( v36[0] )
        KeUnstackDetachProcess(&ApcState);
      if ( (_BYTE)v19 != KeGetCurrentIrql() )
      {
        v30 = KeGetCurrentIrql();
        WdLogSingleEntry5(0LL, 275LL, 16LL, this, v19, v30);
      }
      if ( v20 )
      {
        v23 = *((int *)v20 + 12);
        if ( (_DWORD)v23 != v6 )
          WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v20 + 12), v6, 0LL);
      }
      _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4484LL));
      v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v23, v22);
      v24[3] = v21;
      v24[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 280LL);
      v24[5] = a2->hDesiredVidPn;
      v24[6] = a2->IsVidPnSupported;
      if ( (_DWORD)v21 != -1073741801 && (_DWORD)v21 )
      {
        WdLogSingleEntry1(2LL, v21);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
          v21,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
      if ( v31 == 2 )
      {
        *(_QWORD *)(v15 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v15, 0LL);
        KeLeaveCriticalRegion();
      }
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, a2->hDesiredVidPn);
    LODWORD(v21) = -1071774973;
    WdLogSingleEntry3(2LL, -1071774973LL, *(_QWORD *)(*((_QWORD *)this + 2) + 280LL), a2->hDesiredVidPn);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Call to DmmIsNullVidPn failed with status = 0x%I64x (hAdapter = 0x%I64x, hDesiredVidPn = 0x%I64x) ",
      -1071774973LL,
      *(_QWORD *)(*((_QWORD *)this + 2) + 280LL),
      (__int64)a2->hDesiredVidPn,
      0LL,
      0LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
  if ( v35 )
  {
    LOBYTE(v25) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v33);
  }
  return (unsigned int)v21;
}
