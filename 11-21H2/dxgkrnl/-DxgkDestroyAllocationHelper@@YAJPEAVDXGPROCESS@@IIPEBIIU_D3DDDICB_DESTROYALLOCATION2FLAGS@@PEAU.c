/*
 * XREFs of ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C019B070
 * Callers:
 *     DxgkDestroyAllocation2 @ 0x1C019AE00 (DxgkDestroyAllocation2.c)
 *     DxgkDestroyAllocation @ 0x1C01DFF70 (DxgkDestroyAllocation.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000BB70 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000E694 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016E850 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C016ED94 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017EB60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017ED90 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     _lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_ @ 0x1C0187240 (_lambda_a196522e28cbefec8f1ebe5a826d98cf_--_lambda_invoker_cdecl_.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C019B990 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     _lambda_e58e30cb45ac044955360754130b33ae_::_lambda_invoker_cdecl_ @ 0x1C02BECD0 (_lambda_e58e30cb45ac044955360754130b33ae_--_lambda_invoker_cdecl_.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C031F70C (-CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkDestroyAllocationHelper(
        struct DXGPROCESS *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7,
        char a8)
{
  unsigned int v10; // r13d
  __int64 v11; // rsi
  __int64 v12; // r9
  char *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // r9
  int v18; // edx
  __int64 v19; // rdi
  char *v20; // rcx
  __int64 v21; // rax
  struct _KEVENT **v22; // rsi
  __int64 v23; // rcx
  int v24; // r15d
  bool v25; // zf
  struct _KEVENT *v26; // rbx
  struct _KEVENT *v27; // rdx
  volatile signed __int64 *Blink; // rax
  struct DXGADAPTER *v29; // rcx
  struct _LIST_ENTRY *v30; // r8
  __int64 v31; // rcx
  __int64 v32; // r8
  struct _LIST_ENTRY *v33; // rbx
  struct _LIST_ENTRY *v34; // rax
  OUTPUTDUPL_MGR *v35; // rcx
  struct DXGGLOBAL *Global; // r15
  struct _KTHREAD **v37; // rbx
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // eax
  struct OUTPUTDUPL_MGR_INDIRECT *v41; // rsi
  struct _KTHREAD **v42; // rbx
  int v43; // eax
  int v44; // eax
  __int64 v45; // rsi
  __int64 CurrentProcessSessionId; // r12
  __int64 v47; // rbx
  __int64 v48; // rcx
  __int64 v49; // r8
  int v50; // eax
  __int64 v51; // rbx
  __int64 v52; // rsi
  int v53; // eax
  int v54; // eax
  __int64 v55; // rax
  OUTPUTDUPL_MGR *v56; // rcx
  struct DXGADAPTER *v57; // rcx
  struct DXGADAPTER *v58; // rcx
  unsigned int *v59; // r15
  unsigned int v60; // eax
  unsigned int v61; // esi
  int v62; // eax
  unsigned int v63; // r13d
  unsigned int v64; // esi
  __int64 v66; // rbx
  int v67; // r9d
  int v68; // r9d
  __int64 v69; // rdx
  unsigned __int64 v70; // rax
  __int64 v71; // r9
  unsigned __int64 v72; // rax
  void *v73; // rax
  int v74; // r9d
  struct _KEVENT *v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // r8
  int v78; // eax
  int v79; // eax
  unsigned int v80; // [rsp+68h] [rbp-A0h]
  struct _KTHREAD **v81; // [rsp+70h] [rbp-98h] BYREF
  int v82; // [rsp+78h] [rbp-90h]
  unsigned int v83; // [rsp+80h] [rbp-88h]
  int v84; // [rsp+84h] [rbp-84h]
  __int64 v85; // [rsp+88h] [rbp-80h] BYREF
  char v86; // [rsp+90h] [rbp-78h]
  unsigned int v87; // [rsp+98h] [rbp-70h]
  void *v88; // [rsp+A0h] [rbp-68h]
  unsigned int *v89; // [rsp+A8h] [rbp-60h] BYREF
  struct DXGALLOCATION **v90; // [rsp+B0h] [rbp-58h]
  unsigned int *v91; // [rsp+B8h] [rbp-50h]
  void *v92; // [rsp+C0h] [rbp-48h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v93; // [rsp+D0h] [rbp-38h]
  struct DXGPROCESS *v94; // [rsp+D8h] [rbp-30h]
  ADAPTER_RENDER **v95; // [rsp+E0h] [rbp-28h]
  _QWORD v96[5]; // [rsp+E8h] [rbp-20h] BYREF
  char v97[8]; // [rsp+110h] [rbp+8h] BYREF
  __int64 v98; // [rsp+118h] [rbp+10h]
  struct DXGADAPTER *v99; // [rsp+120h] [rbp+18h]
  char v100; // [rsp+128h] [rbp+20h]
  char *v101; // [rsp+130h] [rbp+28h]
  char v102[8]; // [rsp+150h] [rbp+48h] BYREF
  __int64 v103; // [rsp+158h] [rbp+50h]
  struct DXGADAPTER *v104; // [rsp+160h] [rbp+58h]
  char v105; // [rsp+168h] [rbp+60h]
  __int64 v106; // [rsp+170h] [rbp+68h]
  __int64 v107; // [rsp+190h] [rbp+88h]
  char v108; // [rsp+198h] [rbp+90h]
  _BYTE v109[256]; // [rsp+1A8h] [rbp+A0h] BYREF
  _BYTE v110[512]; // [rsp+2A8h] [rbp+1A0h] BYREF

  v10 = a5;
  v11 = a2;
  v94 = a1;
  v83 = a5;
  v87 = a3;
  v89 = a4;
  v93 = a7;
  memset(v109, 0, sizeof(v109));
  memset(v110, 0, sizeof(v110));
  v91 = (unsigned int *)v109;
  v90 = (struct DXGALLOCATION **)v110;
  v88 = 0LL;
  v92 = 0LL;
  if ( a3 && a5 )
  {
    v69 = v11;
    v64 = -1073741811;
    WdLogSingleEntry2(3LL, v69, -1073741811LL);
    goto LABEL_104;
  }
  v80 = a5;
  if ( a5 >= 0x41 )
  {
    v70 = 4LL * a5;
    if ( !is_mul_ok(a5, 4uLL) )
      v70 = -1LL;
    v88 = (void *)operator new[](v70, 0x4B677844u, 256LL, v12);
    v72 = 8LL * a5;
    if ( !is_mul_ok(a5, 8uLL) )
      v72 = -1LL;
    v73 = (void *)operator new[](v72, 0x4B677844u, 256LL, v71);
    v92 = v73;
    if ( !g_DxgkDestroyAllocationFailMemoryAlloc && v88 && v73 )
    {
      v90 = (struct DXGALLOCATION **)v73;
      v91 = (unsigned int *)v88;
    }
    else
    {
      WdLogSingleEntry1(4LL, 10257LL);
      v10 = 64;
      v83 = 64;
    }
  }
  v13 = (char *)a1 + 248;
  if ( a1 != (struct DXGPROCESS *)-248LL && *((struct _KTHREAD **)a1 + 32) == KeGetCurrentThread() )
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
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)a1 + 248, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v74 = *((_DWORD *)a1 + 68);
      if ( v74 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, (const EVENT_DESCRIPTOR *)"g", v15, v74);
    }
    ExAcquirePushLockSharedEx((char *)a1 + 248, 0LL);
  }
  v16 = ((unsigned int)v11 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v16 >= *((_DWORD *)a1 + 74) )
    goto LABEL_109;
  v17 = *((_QWORD *)a1 + 35);
  v18 = *(_DWORD *)(v17 + 16 * v16 + 8);
  if ( (((unsigned int)v11 >> 25) & 0x60) != (*(_BYTE *)(v17 + 16 * v16 + 8) & 0x60)
    || (v18 & 0x2000) != 0
    || (v18 & 0x1F) == 0 )
  {
    goto LABEL_109;
  }
  if ( (v18 & 0x1F) != 3 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_109:
    v20 = (char *)a1 + 248;
    goto LABEL_110;
  }
  v19 = *(_QWORD *)(v17 + 16LL * (unsigned int)v16);
  v20 = v13;
  if ( !v19 )
  {
LABEL_110:
    ExReleasePushLockSharedEx(v20, 0LL);
    KeLeaveCriticalRegion();
    v66 = v11;
    v64 = -1073741811;
    WdLogSingleEntry2(2LL, v66, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v66,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_104;
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v19 + 64));
  ExReleasePushLockSharedEx(v13, 0LL);
  KeLeaveCriticalRegion();
  v21 = *(_QWORD *)(v19 + 16);
  v22 = (struct _KEVENT **)(v19 + 16);
  v95 = (ADAPTER_RENDER **)(v19 + 16);
  v23 = *(_QWORD *)(v21 + 16);
  if ( *(int *)(v23 + 2424) >= 0x2000 || *(_BYTE *)(v23 + 2724) )
    v24 = *((_DWORD *)DXGGLOBAL_GetGlobal() + 347);
  else
    v24 = 0;
  v25 = *(_DWORD *)(v19 + 432) == 2;
  v26 = *v22;
  v84 = v24;
  if ( v25 )
  {
    if ( KeReadStateEvent(v26 + 5) )
      goto LABEL_17;
    v75 = v26 + 5;
  }
  else
  {
    if ( KeReadStateEvent(v26 + 4) )
      goto LABEL_17;
    v75 = v26 + 4;
  }
  KeWaitForSingleObject(v75, Executive, 0, 0, 0LL);
LABEL_17:
  KeEnterCriticalRegion();
  if ( v24 )
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v19 + 144, 0LL) )
    {
      KeLeaveCriticalRegion();
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State((DXGADAPTER *)(*v22)->Header.WaitListHead.Blink);
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v19 + 144));
      DXGADAPTER::EnableD3Requests((DXGADAPTER *)(*v22)->Header.WaitListHead.Blink);
      KeLeaveCriticalRegion();
    }
  }
  else if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v19 + 136), 0) )
  {
    DXGADAPTER::TryWakeUpFromD3State((DXGADAPTER *)(*v22)->Header.WaitListHead.Blink);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v76, (const EVENT_DESCRIPTOR *)"g", v77, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v19 + 136), 1u);
    DXGADAPTER::EnableD3Requests((DXGADAPTER *)(*v22)->Header.WaitListHead.Blink);
  }
  v27 = *v22;
  Blink = (volatile signed __int64 *)(*v22)->Header.WaitListHead.Blink;
  v99 = (struct DXGADAPTER *)Blink;
  v100 = 0;
  v101 = 0LL;
  if ( Blink )
  {
    _InterlockedIncrement64(Blink + 3);
    v27 = *v22;
    v98 = -1LL;
  }
  v29 = *(struct DXGADAPTER **)(v19 + 1848);
  if ( v29 )
  {
    v104 = *(struct DXGADAPTER **)(v19 + 1848);
    v105 = 0;
    v106 = 0LL;
LABEL_25:
    _InterlockedIncrement64((volatile signed __int64 *)v29 + 3);
    v27 = *v22;
    v30 = *(struct _LIST_ENTRY **)(v19 + 1848);
    v103 = -1LL;
    goto LABEL_26;
  }
  v30 = 0LL;
  v104 = (struct DXGADAPTER *)v27->Header.WaitListHead.Blink;
  v29 = v104;
  v105 = 0;
  v106 = 0LL;
  if ( v104 )
    goto LABEL_25;
LABEL_26:
  v107 = v19;
  if ( v30 == v27->Header.WaitListHead.Blink || !v30 )
  {
    v108 = 0;
  }
  else
  {
    v108 = 1;
    COREACCESS::AcquireShared((COREACCESS *)v102, 0LL);
    if ( *((_DWORD *)v104 + 50) != 1 )
      goto LABEL_156;
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v99 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v99 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v31, (const EVENT_DESCRIPTOR *)"g", v32, 72);
      KeWaitForSingleObject((char *)v99 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v99, 0LL);
  }
  v101 = 0LL;
  v100 = 1;
  if ( *(_DWORD *)(v107 + 576) == 1 )
  {
    v33 = *(struct _LIST_ENTRY **)(v19 + 1848);
    if ( !v33 )
    {
      v33 = (*v22)->Header.WaitListHead.Blink;
      if ( !v33 )
      {
        WdLogSingleEntry1(1LL, 11066LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pAdapter", 11066LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v34 = v33[174].Blink;
    if ( !v34
      || (v35 = (OUTPUTDUPL_MGR *)v34[7].Blink) == 0LL
      || (int)lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_(v35, (struct DXGDEVICE *)v19) >= 0 )
    {
      v96[0] = *(struct _LIST_ENTRY **)((char *)&v33[25].Flink + 4);
      v96[1] = lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_;
      v96[2] = v19;
      Global = DXGGLOBAL_GetGlobal();
      LOBYTE(v82) = 0;
      v81 = (struct _KTHREAD **)((char *)Global + 1584);
      if ( Global == (struct DXGGLOBAL *)-1584LL )
      {
        WdLogSingleEntry1(1LL, 573LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 573LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( v81[3] == KeGetCurrentThread() )
      {
        WdLogSingleEntry1(1LL, 580LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 580LL, 0LL, 0LL, 0LL, 0LL);
      }
      v37 = v81;
      KeEnterCriticalRegion();
      if ( v37[3] == KeGetCurrentThread() )
      {
        v78 = *((_DWORD *)v37 + 8);
        if ( v78 <= 0 )
        {
          WdLogSingleEntry1(1LL, 472LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 472LL, 0LL, 0LL, 0LL, 0LL);
          v78 = *((_DWORD *)v37 + 8);
        }
        v40 = v78 + 1;
      }
      else
      {
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v37 + 1, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v68 = *((_DWORD *)v37 + 9);
            if ( v68 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0q_EtwWriteTransfer(v38, (const EVENT_DESCRIPTOR *)"g", v39, v68);
          }
          _InterlockedIncrement64((volatile signed __int64 *)v37 + 2);
          ExAcquirePushLockExclusiveEx(v37 + 1, 0LL);
        }
        if ( v37[3] )
        {
          WdLogSingleEntry1(1LL, 496LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 496LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( *((_DWORD *)v37 + 8) )
        {
          WdLogSingleEntry1(1LL, 497LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 497LL, 0LL, 0LL, 0LL, 0LL);
        }
        v37[3] = KeGetCurrentThread();
        v40 = 1;
      }
      *((_DWORD *)v37 + 8) = v40;
      v41 = (struct OUTPUTDUPL_MGR_INDIRECT *)*((_QWORD *)Global + 204);
      LOBYTE(v82) = 1;
      while ( v41 != (struct DXGGLOBAL *)((char *)Global + 1632) && v41 )
      {
        if ( lambda_e58e30cb45ac044955360754130b33ae_::_lambda_invoker_cdecl_(v41, v96) < 0 )
        {
          if ( (_BYTE)v82 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v81);
          goto LABEL_57;
        }
        v41 = *(struct OUTPUTDUPL_MGR_INDIRECT **)v41;
      }
      if ( (_BYTE)v82 )
      {
        v42 = v81;
        LOBYTE(v82) = 0;
        if ( v81[3] != KeGetCurrentThread() )
          WdLogSingleEntry5(0LL, 275LL, 4LL, v81, 0LL, 0LL);
        v43 = *((_DWORD *)v42 + 8);
        if ( v43 <= 0 )
        {
          WdLogSingleEntry1(1LL, 516LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 516LL, 0LL, 0LL, 0LL, 0LL);
          v43 = *((_DWORD *)v42 + 8);
        }
        v44 = v43 - 1;
        *((_DWORD *)v42 + 8) = v44;
        if ( !v44 )
        {
          v42[3] = 0LL;
          ExReleasePushLockExclusiveEx(v42 + 1, 0LL);
        }
        KeLeaveCriticalRegion();
      }
    }
LABEL_57:
    v45 = *((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
    if ( v45 )
    {
      CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId();
      v85 = v45 + 88;
      v86 = 0;
      if ( v45 == -88 )
      {
        WdLogSingleEntry1(1LL, 573LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 573LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( *(struct _KTHREAD **)(v85 + 24) == KeGetCurrentThread() )
      {
        WdLogSingleEntry1(1LL, 580LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 580LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( v86 )
        WdLogSingleEntry5(0LL, 275LL, 4LL, &v85, 0LL, 0LL);
      v47 = v85;
      KeEnterCriticalRegion();
      if ( *(struct _KTHREAD **)(v47 + 24) == KeGetCurrentThread() )
      {
        v79 = *(_DWORD *)(v47 + 32);
        if ( v79 <= 0 )
        {
          WdLogSingleEntry1(1LL, 472LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 472LL, 0LL, 0LL, 0LL, 0LL);
          v79 = *(_DWORD *)(v47 + 32);
        }
        v50 = v79 + 1;
      }
      else
      {
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v47 + 8, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v67 = *(_DWORD *)(v47 + 36);
            if ( v67 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0q_EtwWriteTransfer(v48, (const EVENT_DESCRIPTOR *)"g", v49, v67);
          }
          _InterlockedIncrement64((volatile signed __int64 *)(v47 + 16));
          ExAcquirePushLockExclusiveEx(v47 + 8, 0LL);
        }
        if ( *(_QWORD *)(v47 + 24) )
        {
          WdLogSingleEntry1(1LL, 496LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 496LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( *(_DWORD *)(v47 + 32) )
        {
          WdLogSingleEntry1(1LL, 497LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 497LL, 0LL, 0LL, 0LL, 0LL);
        }
        *(_QWORD *)(v47 + 24) = KeGetCurrentThread();
        v50 = 1;
      }
      *(_DWORD *)(v47 + 32) = v50;
      v86 = 1;
      if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v45 + 80) )
      {
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v85);
      }
      else
      {
        _mm_lfence();
        v51 = v85;
        v52 = *(_QWORD *)(*(_QWORD *)(v45 + 48) + 8 * CurrentProcessSessionId);
        v86 = 0;
        if ( *(struct _KTHREAD **)(v85 + 24) != KeGetCurrentThread() )
          WdLogSingleEntry5(0LL, 275LL, 4LL, v85, 0LL, 0LL);
        v53 = *(_DWORD *)(v51 + 32);
        if ( v53 <= 0 )
        {
          WdLogSingleEntry1(1LL, 516LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 516LL, 0LL, 0LL, 0LL, 0LL);
          v53 = *(_DWORD *)(v51 + 32);
        }
        v54 = v53 - 1;
        *(_DWORD *)(v51 + 32) = v54;
        if ( !v54 )
        {
          *(_QWORD *)(v51 + 24) = 0LL;
          ExReleasePushLockExclusiveEx(v51 + 8, 0LL);
        }
        KeLeaveCriticalRegion();
        if ( v52 )
        {
          v55 = *(_QWORD *)(v52 + 8);
          if ( v55 )
          {
            v56 = *(OUTPUTDUPL_MGR **)(v55 + 120);
            if ( v56 )
              OUTPUTDUPL_MGR::CleanUpPendingList(v56, (struct DXGDEVICE *)v19);
          }
          else
          {
            WdLogSingleEntry1(2LL, 3904LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"OUTPUTDUPL_SESSION_MGR is NULL",
              3904LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          goto LABEL_82;
        }
      }
    }
    WdLogSingleEntry1(2LL, 3897LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"DXGSESSIONDATA is NULL", 3897LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_82;
  }
  COREACCESS::Release((COREACCESS *)v97);
  if ( v108 )
LABEL_156:
    COREACCESS::Release((COREACCESS *)v102);
LABEL_82:
  v57 = v104;
  if ( v104 )
  {
    if ( v105 )
    {
      COREACCESS::Release((COREACCESS *)v102);
      v57 = v104;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v57 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v57 + 2), v57);
  }
  v58 = v99;
  if ( v99 )
  {
    if ( v100 )
    {
      v100 = 0;
      v58 = v99;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v99 + 23) )
      {
        DXGADAPTER::ReleaseCoreResource(v99, v101);
        v58 = v99;
      }
      v101 = 0LL;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v58 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v58 + 2), v58);
  }
  v59 = v89;
  v60 = a5;
  while ( 1 )
  {
    v61 = v60 < v10 ? v60 : v10;
    v62 = DxgkDestroyAllocationInternal(
            v94,
            (struct DXGDEVICE *)v19,
            v91,
            v90,
            v87,
            (const unsigned int **)&v89,
            v61,
            a6,
            v59,
            v93,
            a8);
    v63 = v62;
    if ( v62 < 0 )
      break;
    v10 = v83;
    v59 += v61;
    v25 = v80 == v61;
    v60 = v80 - v61;
    v80 -= v61;
    if ( v25 )
    {
      v64 = 0;
      goto LABEL_100;
    }
  }
  WdLogSingleEntry1(3LL, v62);
  v64 = v63;
LABEL_100:
  if ( v84 )
    ExReleasePushLockSharedEx(v19 + 144, 0LL);
  else
    ExReleaseResourceLite(*(PERESOURCE *)(v19 + 136));
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*v95, (struct DXGDEVICE *)v19);
LABEL_104:
  if ( v92 )
    operator delete[](v92);
  if ( v88 )
    operator delete[](v88);
  return v64;
}
