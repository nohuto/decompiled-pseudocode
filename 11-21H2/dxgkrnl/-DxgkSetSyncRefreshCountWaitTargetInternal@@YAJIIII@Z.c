/*
 * XREFs of ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C0178000
 * Callers:
 *     DxgkSetSyncRefreshCountWaitTarget @ 0x1C0177F10 (DxgkSetSyncRefreshCountWaitTarget.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C0002580 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z @ 0x1C000A990 (-SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000BB70 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000E694 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000F7D4 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z @ 0x1C002B5A4 (--0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z.c)
 *     ??1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C002B654 (--1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1C0046430 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     ?NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z @ 0x1C004A1A8 (-NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z.c)
 *     ?SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z @ 0x1C006CF0C (-SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01798C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017EB60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017ED90 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C01C5974 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C02BF51C (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z @ 0x1C02C2B20 (-SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkSetSyncRefreshCountWaitTargetInternal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  unsigned int v5; // r15d
  __int64 v6; // rsi
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rbx
  __int64 v10; // r13
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // ebx
  __int64 v15; // r9
  int v16; // edx
  struct DXGADAPTER *v17; // r12
  __int64 v18; // rcx
  __int64 v19; // rdi
  int PairingAdapters; // eax
  __int64 v21; // r15
  volatile signed __int64 *v22; // rdi
  volatile signed __int64 *v23; // rsi
  signed __int64 v24; // rcx
  struct DXGADAPTER *v25; // rdi
  struct DXGADAPTER *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  DXGADAPTER *v29; // rdi
  __int64 *v30; // rdx
  struct DXGADAPTER *v31; // r15
  ADAPTER_DISPLAY **v32; // r12
  ADAPTER_DISPLAY *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  _DWORD *v37; // r15
  unsigned int v38; // ecx
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r13
  __int64 v45; // rcx
  ADAPTER_DISPLAY *v46; // rsi
  int v47; // r12d
  __int64 v48; // r15
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // r8
  __int64 v52; // rdi
  __int64 v53; // rcx
  __int64 v54; // rax
  unsigned int v55; // edi
  DXGGLOBAL **v56; // rcx
  DXGGLOBAL **v57; // rcx
  unsigned int v59; // ecx
  int v60; // r15d
  struct DXGTHREAD *v61; // rax
  int v62; // r9d
  __int64 v63; // r15
  __int64 v64; // r9
  int v65; // edx
  struct DXGADAPTER *v66; // r8
  DXGADAPTER *v67; // rdi
  __int64 v68; // rax
  __int64 v69; // r8
  __int64 v70; // rax
  struct DXGTHREAD *Current; // rax
  unsigned int v72; // eax
  unsigned int v73; // edx
  ADAPTER_DISPLAY *v74; // r10
  int v75; // eax
  unsigned __int8 v76; // [rsp+50h] [rbp-B0h] BYREF
  char v77; // [rsp+51h] [rbp-AFh]
  char v78; // [rsp+52h] [rbp-AEh]
  char v79; // [rsp+53h] [rbp-ADh]
  unsigned int v80; // [rsp+54h] [rbp-ACh]
  char *v81; // [rsp+58h] [rbp-A8h]
  unsigned int v82; // [rsp+60h] [rbp-A0h]
  DXGADAPTER *v83; // [rsp+68h] [rbp-98h] BYREF
  struct DXGADAPTER *v84; // [rsp+70h] [rbp-90h] BYREF
  struct DXGADAPTER *v85; // [rsp+78h] [rbp-88h]
  struct DXGDEVICE *v86; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v87[2]; // [rsp+88h] [rbp-78h]
  int v88; // [rsp+90h] [rbp-70h] BYREF
  int v89; // [rsp+94h] [rbp-6Ch] BYREF
  struct DXGDEVICE *v90; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v91; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v92; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v93[64]; // [rsp+B0h] [rbp-50h] BYREF
  char v94; // [rsp+F0h] [rbp-10h] BYREF
  char v95; // [rsp+F1h] [rbp-Fh]
  char v96[8]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v97; // [rsp+100h] [rbp+0h]
  struct DXGADAPTER *v98; // [rsp+108h] [rbp+8h]
  char v99; // [rsp+110h] [rbp+10h]
  __int64 v100; // [rsp+118h] [rbp+18h]
  char v101[8]; // [rsp+138h] [rbp+38h] BYREF
  __int64 v102; // [rsp+140h] [rbp+40h]
  struct DXGADAPTER *v103; // [rsp+148h] [rbp+48h]
  char v104; // [rsp+150h] [rbp+50h]
  char *v105; // [rsp+158h] [rbp+58h]

  v4 = 0;
  v82 = a4;
  v86 = 0LL;
  v5 = a3;
  v80 = a3;
  v87[0] = a2;
  v6 = (unsigned int)a1;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v9 = ProcessDxgProcess;
  if ( (!ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) != 0)
    && (v61 = DXGTHREAD::GetCurrent()) != 0LL
    && (v10 = *((_QWORD *)v61 + 3)) != 0
    || (v10 = v9) != 0 )
  {
    if ( (*(_DWORD *)(v10 + 424) & 4) != 0 )
    {
      v88 = 0;
      v89 = 0;
      v11 = (*(__int64 (__fastcall **)(int *, _QWORD, int *))(*(_QWORD *)(v10 + 88) + 224LL))(&v88, 0LL, &v89);
      if ( !v88 || v11 && !v89 )
        return 3221225659LL;
      if ( v10 != -248 && *(struct _KTHREAD **)(v10 + 256) == KeGetCurrentThread() )
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
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v10 + 248, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v62 = *(_DWORD *)(v10 + 272);
          if ( v62 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v12, (const EVENT_DESCRIPTOR *)"g", v13, v62);
        }
        ExAcquirePushLockSharedEx(v10 + 248, 0LL);
      }
      v14 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
      if ( (*(_DWORD *)(v10 + 424) & 0x100) == 0 )
      {
        if ( v14 < *(_DWORD *)(v10 + 296) )
        {
          v15 = *(_QWORD *)(v10 + 280);
          v16 = *(_DWORD *)(v15 + 16LL * v14 + 8);
          if ( (((unsigned int)v6 >> 25) & 0x60) == (*(_BYTE *)(v15 + 16LL * v14 + 8) & 0x60)
            && (v16 & 0x2000) == 0
            && (v16 & 0x1F) != 0 )
          {
            if ( (v16 & 0x1F) == 1 )
            {
              v17 = *(struct DXGADAPTER **)(v15 + 16LL * v14);
              v85 = v17;
              goto LABEL_20;
            }
            WdLogSingleEntry1(2LL, 267LL);
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
        v85 = 0LL;
        v17 = 0LL;
LABEL_20:
        v18 = v10 + 248;
        if ( !v17 )
        {
          ExReleasePushLockSharedEx(v18, 0LL);
          KeLeaveCriticalRegion();
          LODWORD(v21) = -1073741811;
          WdLogSingleEntry2(3LL, v6, -1073741811LL);
          return (unsigned int)v21;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v17 + 3);
        ExReleasePushLockSharedEx(v18, 0LL);
        KeLeaveCriticalRegion();
        v19 = v87[0];
        if ( v87[0] )
        {
          DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v90, v87[0], (struct _KTHREAD **)v10, &v86);
          if ( !v86 )
          {
            WdLogSingleEntry2(3LL, v17, v19);
            if ( v90 && _InterlockedExchangeAdd64((volatile signed __int64 *)v90 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v90 + 2), v90);
            LODWORD(v21) = -1073741811;
            goto LABEL_99;
          }
          _InterlockedIncrement64((volatile signed __int64 *)v86 + 8);
          if ( v90 && _InterlockedExchangeAdd64((volatile signed __int64 *)v90 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v90 + 2), v90);
        }
        v83 = 0LL;
        v84 = 0LL;
        PairingAdapters = DxgkpGetPairingAdapters(v17, v5, &v83, &v91, &v84, &v92, 0);
        v21 = PairingAdapters;
        if ( PairingAdapters < 0 )
        {
          WdLogSingleEntry3(2LL, v17, v80, PairingAdapters);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x (Status 0x%I64x)!",
            (__int64)v17,
            v80,
            v21,
            0LL,
            0LL);
LABEL_98:
          if ( v86 && _InterlockedExchangeAdd64((volatile signed __int64 *)v86 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v86 + 2), v86);
LABEL_99:
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v17 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v17 + 2), v17);
          return (unsigned int)v21;
        }
        v22 = (volatile signed __int64 *)v83;
        v23 = (volatile signed __int64 *)v84;
        if ( !v83 || !v84 )
        {
          WdLogSingleEntry1(1LL, 6678LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"(pRenderAdapter != NULL) && (pDisplayAdapter != NULL)",
            6678LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( v86
          && (v22 != *(volatile signed __int64 **)(*((_QWORD *)v86 + 2) + 16LL)
           || v23 != *((volatile signed __int64 **)v86 + 231)) )
        {
          WdLogSingleEntry2(3LL, v17, v87[0]);
          LODWORD(v21) = -1073741811;
          goto LABEL_98;
        }
        v95 = 0;
        v98 = (struct DXGADAPTER *)v22;
        v99 = 0;
        v100 = 0LL;
        if ( v22 )
        {
          _InterlockedIncrement64(v22 + 3);
          v22 = (volatile signed __int64 *)v83;
          v23 = (volatile signed __int64 *)v84;
          v97 = -1LL;
        }
        if ( !v23 )
          v23 = v22;
        v103 = (struct DXGADAPTER *)v23;
        v104 = 0;
        v105 = 0LL;
        if ( v23 )
        {
          _InterlockedIncrement64(v23 + 3);
          v22 = (volatile signed __int64 *)v83;
          v102 = -1LL;
        }
        if ( _InterlockedExchangeAdd64(v22 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v83 + 2), v83);
        v24 = _InterlockedExchangeAdd64((volatile signed __int64 *)v84 + 3, 0xFFFFFFFFFFFFFFFFuLL);
        v25 = v84;
        if ( v24 == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v84 + 2), v84);
        if ( *((_DWORD *)v25 + 40) != 1 )
        {
LABEL_37:
          if ( v104 )
            WdLogSingleEntry5(0LL, 275LL, 4LL, v101, 0LL, 0LL);
          v26 = v103;
          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v103 + 23) )
          {
            if ( !KeReadStateEvent((PRKEVENT)v103 + 2) )
            {
              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                McTemplateK0q_EtwWriteTransfer(v27, (const EVENT_DESCRIPTOR *)"g", v28, 72);
              KeWaitForSingleObject((char *)v103 + 48, Executive, 0, 0, 0LL);
            }
            DXGADAPTER::AcquireCoreResourceShared(v103, 0LL);
            v26 = v103;
          }
          v105 = 0LL;
          v104 = 1;
          if ( *((_DWORD *)v26 + 50) != 1 )
            goto LABEL_160;
          if ( v98 != v103 )
          {
            COREACCESS::AcquireShared((COREACCESS *)v96, 0LL);
            if ( *((_DWORD *)v98 + 50) != 1 )
            {
              COREACCESS::Release((COREACCESS *)v96);
LABEL_160:
              COREACCESS::Release((COREACCESS *)v101);
LABEL_161:
              v60 = -1073741130;
              goto LABEL_108;
            }
          }
          v29 = v83;
          v95 = 1;
          v30 = (__int64 *)((char *)v83 + 2800);
          v81 = (char *)v83 + 2800;
          if ( !*((_QWORD *)v83 + 350) )
          {
            WdLogSingleEntry1(1LL, 6732LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pRenderAdapter->IsRenderAdapter()",
              6732LL,
              0LL,
              0LL,
              0LL,
              0LL);
            v30 = (__int64 *)v81;
          }
          v31 = v84;
          v32 = (ADAPTER_DISPLAY **)((char *)v84 + 2792);
          if ( !*((_QWORD *)v84 + 349) )
          {
            WdLogSingleEntry1(1LL, 6733LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
              6733LL,
              0LL,
              0LL,
              0LL,
              0LL);
            v30 = (__int64 *)v81;
          }
          if ( v87[0] )
          {
            if ( *((_DWORD *)v86 + 144) != 1 )
              goto LABEL_161;
            v29 = v83;
            v31 = v84;
          }
          v33 = *v32;
          v77 = 0;
          v76 = 0;
          v78 = 0;
          v79 = 0;
          if ( !v33 )
          {
            WdLogSingleEntry1(1LL, 10119LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDisplayAdapter()", 10119LL, 0LL, 0LL, 0LL, 0LL);
            v33 = *v32;
            if ( !*v32 )
              goto LABEL_107;
            v30 = (__int64 *)v81;
          }
          v34 = v80;
          if ( v80 >= *((_DWORD *)v33 + 24) )
          {
            WdLogSingleEntry1(1LL, 6126LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"VidPnSourceId < m_NumVidPnSources",
              6126LL,
              0LL,
              0LL,
              0LL,
              0LL);
            v34 = v80;
            v30 = (__int64 *)v81;
          }
          v35 = 4000 * v34;
          v36 = *((_QWORD *)v33 + 16);
          *(_QWORD *)v87 = v35;
          if ( *(_BYTE *)(v36 + v35 + 760) )
          {
            if ( !*((_QWORD *)v31 + 350) )
            {
              LODWORD(v44) = v80;
              v72 = DXGADAPTER::NumberOfVSyncWaiter(v29, v80);
              ADAPTER_DISPLAY::SetSyncRefreshCountWaitTarget(v74, v73, v82, v72, &v76);
              ADAPTER_DISPLAY::ControlVSyncAdapter(*v32, v44);
              goto LABEL_76;
            }
            if ( v31 != v29 )
            {
              WdLogSingleEntry1(1LL, 6755LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pDisplayAdapter == pRenderAdapter",
                6755LL,
                0LL,
                0LL,
                0LL,
                0LL);
              v30 = (__int64 *)v81;
            }
            v37 = (_DWORD *)((char *)v29 + 2664);
            v38 = v80;
            if ( (*((_DWORD *)v29 + 666) & 0x10) != 0 )
            {
              if ( v80 >= 0x10 )
                goto LABEL_59;
            }
            else
            {
              v38 = 0;
            }
            _InterlockedIncrement((volatile signed __int32 *)v29 + v38 + 706);
            v29 = v83;
LABEL_59:
            v39 = *v30;
            v77 = 1;
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v39 + 624) + 8LL) + 544LL))(
                   *(_QWORD *)(v39 + 632),
                   v80) )
            {
LABEL_60:
              v42 = *(_QWORD *)(v10 + 64);
              v43 = *(_QWORD *)(*(_QWORD *)v81 + 624LL);
              if ( v42 )
              {
                v42 = *(_QWORD *)(v42 + 8LL * (unsigned int)(*(_DWORD *)v43 - 1) + 16);
                if ( v42 )
                  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v43 + 8) + 1064LL))(*(_QWORD *)(*(_QWORD *)v81 + 632LL));
              }
              v44 = v80;
              v45 = v80;
              v46 = *v32;
              if ( (*v37 & 0x10) != 0 )
              {
                if ( v80 >= 0x10 )
                {
                  LOBYTE(v47) = 0;
                  goto LABEL_66;
                }
              }
              else
              {
                v45 = 0LL;
              }
              v47 = *((_DWORD *)v29 + (unsigned int)v45 + 706);
LABEL_66:
              v48 = *((_QWORD *)v46 + 16) + *(_QWORD *)v87;
              v49 = PsGetCurrentProcess(v45, v42, v43, v41);
              v50 = PsGetProcessDxgProcess(v49);
              v52 = v50;
              if ( v50 && (v53 = *(_DWORD *)(v50 + 424) >> 7, (*(_DWORD *)(v50 + 424) & 0x80) == 0)
                || (Current = DXGTHREAD::GetCurrent()) == 0LL
                || (v54 = *((_QWORD *)Current + 3)) == 0 )
              {
                v54 = v52;
              }
              v76 = 1;
              if ( *(_QWORD *)(v48 + 928) && (*(_DWORD *)(v54 + 424) & 4) != 0 )
              {
                v55 = v82;
                if ( *((_QWORD *)v46 + 56) )
                {
                  *(_DWORD *)(v48 + 936) = v82;
                  BLTQUEUE::SetDWMTargetVsync((BLTQUEUE *)(*(_QWORD *)(*((_QWORD *)v46 + 56) + 8LL) + 2920 * v44), v55);
                }
                else
                {
                  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                    McTemplateK0qqqqq_EtwWriteTransfer(
                      v53,
                      &EventDWMVsyncCountWait,
                      v51,
                      v82,
                      *(_DWORD *)(v48 + 940),
                      *(_BYTE *)(v48 + 944),
                      v47,
                      4);
                  ADAPTER_DISPLAY::SetSyncRefreshCountWaitTargetNonPaged(v46, v80, v82, &v76);
                }
              }
LABEL_76:
              if ( v98 != v103 )
                COREACCESS::Release((COREACCESS *)v96);
              if ( !v104 )
                WdLogSingleEntry5(0LL, 275LL, 4LL, v101, 0LL, 0LL);
              v104 = 0;
              if ( KeGetCurrentThread() != *((struct _KTHREAD **)v103 + 23) )
                DXGADAPTER::ReleaseCoreResource(v103, v105);
              v105 = 0LL;
              v95 = 0;
              if ( v76 && v77 )
              {
                v59 = v44;
                if ( (*((_DWORD *)v83 + 666) & 0x10) != 0 )
                {
                  if ( (unsigned int)v44 >= 0x10 )
                    goto LABEL_83;
                }
                else
                {
                  v59 = 0;
                }
                if ( _InterlockedDecrement((volatile signed __int32 *)v83 + v59 + 706) < 0 )
                  WdLogSingleEntry5(0LL, 275LL, 37LL, v83, *((unsigned int *)v83 + v59 + 706), 0LL);
              }
LABEL_83:
              if ( v78 )
              {
                v60 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)&v94, 0LL);
                if ( v60 < 0 )
                  goto LABEL_108;
                v75 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v81 + 624LL)
                                                                                             + 8LL)
                                                                                 + 552LL))(
                        *(_QWORD *)(*(_QWORD *)v81 + 632LL),
                        1LL,
                        0LL,
                        (unsigned int)v44);
              }
              else
              {
                if ( !v79 )
                  goto LABEL_85;
                v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)&v94, 0LL);
                if ( v4 < 0 || *((_DWORD *)v86 + 144) != 1 )
                  goto LABEL_85;
                v75 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v81 + 624LL)
                                                                                            + 8LL)
                                                                                + 560LL))(
                        *((_QWORD *)v86 + 96),
                        0LL,
                        0LL,
                        (unsigned int)v44);
              }
              v4 = v75;
              goto LABEL_85;
            }
            v68 = *(_QWORD *)v81;
            if ( v86 )
            {
              v69 = *(_QWORD *)(v68 + 624);
              v70 = *(_QWORD *)(v69 + 8);
              LOBYTE(v69) = 1;
              if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(v70 + 560))(
                     *((_QWORD *)v86 + 96),
                     0LL,
                     v69,
                     v80) >= 0 )
              {
                v79 = 1;
                goto LABEL_60;
              }
            }
            else
            {
              LOBYTE(v40) = 1;
              if ( (*(int (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v68 + 624) + 8LL)
                                                                           + 552LL))(
                     *(_QWORD *)(v68 + 632),
                     1LL,
                     v40,
                     v80) >= 0 )
              {
                v78 = 1;
                goto LABEL_60;
              }
            }
            DXGADAPTER::DecrementVSyncWaiter(v29, v80);
          }
LABEL_107:
          v60 = -1071775738;
LABEL_108:
          v4 = v60;
LABEL_85:
          LODWORD(v21) = v4;
          if ( v95 )
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v94);
          if ( v103 )
          {
            if ( v104 )
              COREACCESS::Release((COREACCESS *)v101);
            v56 = (DXGGLOBAL **)v103;
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v103 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              DXGGLOBAL::DestroyAdapter(v56[2], (struct DXGADAPTER *)v56);
          }
          if ( v98 )
          {
            if ( v99 )
              COREACCESS::Release((COREACCESS *)v96);
            v57 = (DXGGLOBAL **)v98;
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v98 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              DXGGLOBAL::DestroyAdapter(v57[2], (struct DXGADAPTER *)v57);
          }
          v17 = v85;
          goto LABEL_98;
        }
        v66 = v25;
        v67 = v83;
        DXGPAIREDADAPTERSTOPRESETLOCKSHARED::DXGPAIREDADAPTERSTOPRESETLOCKSHARED(
          (DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v93,
          v83,
          v66);
        if ( *((_DWORD *)v67 + 50) == 1 && *((_DWORD *)v84 + 50) == 1 )
        {
          if ( v80 < *(_DWORD *)(*((_QWORD *)v84 + 349) + 96LL) )
          {
            if ( DXGADAPTER::IsVSyncAvailable(v84, v80) )
            {
              DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v93);
              goto LABEL_37;
            }
            v60 = -1071775738;
          }
          else
          {
            v60 = -1073741811;
            WdLogSingleEntry2(3LL, v80, -1073741811LL);
          }
        }
        else
        {
          v60 = -1073741130;
        }
        DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v93);
        goto LABEL_108;
      }
      v63 = *(_QWORD *)(v10 + 608);
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v63 + 248));
      if ( v14 < *(_DWORD *)(v63 + 296) )
      {
        v64 = *(_QWORD *)(v63 + 280);
        v65 = *(_DWORD *)(v64 + 16LL * v14 + 8);
        if ( (((unsigned int)v6 >> 25) & 0x60) == (*(_BYTE *)(v64 + 16LL * v14 + 8) & 0x60)
          && (v65 & 0x2000) == 0
          && (v65 & 0x1F) != 0 )
        {
          if ( (v65 & 0x1F) == 1 )
          {
            v17 = *(struct DXGADAPTER **)(v64 + 16LL * v14);
            goto LABEL_130;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
      v17 = 0LL;
LABEL_130:
      v85 = v17;
      ExReleasePushLockSharedEx(v63 + 248, 0LL);
      KeLeaveCriticalRegion();
      v5 = v80;
      goto LABEL_20;
    }
    WdLogSingleEntry1(3LL, -1073741790LL);
    return 3221225506LL;
  }
  else
  {
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
    return 3221225485LL;
  }
}
