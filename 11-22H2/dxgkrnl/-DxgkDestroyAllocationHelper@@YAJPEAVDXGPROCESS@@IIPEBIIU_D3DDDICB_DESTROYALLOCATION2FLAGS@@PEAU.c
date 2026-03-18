/*
 * XREFs of ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01B85E0
 * Callers:
 *     DxgkDestroyAllocation2 @ 0x1C01B8360 (DxgkDestroyAllocation2.c)
 *     DxgkDestroyAllocation @ 0x1C01E5D10 (DxgkDestroyAllocation.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007BB0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000A958 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000A9D0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C018A268 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0197978 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0198020 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     _lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_ @ 0x1C01A9020 (_lambda_a196522e28cbefec8f1ebe5a826d98cf_--_lambda_invoker_cdecl_.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01B8EF0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01CB6E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01CB910 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     _lambda_e58e30cb45ac044955360754130b33ae_::_lambda_invoker_cdecl_ @ 0x1C02BADE0 (_lambda_e58e30cb45ac044955360754130b33ae_--_lambda_invoker_cdecl_.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C031266C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C032A700 (-CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
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
  __int64 v11; // rdi
  __int64 v12; // r12
  char *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // eax
  __int64 v17; // r14
  int v18; // edx
  __int64 v19; // r14
  __int64 v20; // rax
  struct _KEVENT **v21; // rdi
  __int64 v22; // rcx
  struct _KEVENT *v23; // rbx
  struct _KEVENT *v24; // rcx
  volatile signed __int64 *Blink; // rax
  volatile signed __int64 *v26; // rax
  struct _LIST_ENTRY *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r8
  struct _LIST_ENTRY *v30; // rbx
  struct _LIST_ENTRY *v31; // rax
  OUTPUTDUPL_MGR *v32; // rcx
  struct DXGGLOBAL *Global; // rsi
  struct _KTHREAD **v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // r8
  struct OUTPUTDUPL_MGR_INDIRECT *i; // rdi
  int *v38; // rbx
  bool v39; // zf
  __int64 v40; // rcx
  __int64 v41; // rdi
  __int64 CurrentProcessSessionId; // r12
  __int64 v43; // rbx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rbx
  __int64 v47; // rdi
  __int64 v48; // rax
  OUTPUTDUPL_MGR *v49; // rcx
  struct DXGADAPTER *v50; // rcx
  struct DXGADAPTER *v51; // rcx
  unsigned int *v52; // rsi
  unsigned int v53; // eax
  __int64 v54; // rdi
  int v55; // eax
  unsigned int v56; // r13d
  volatile signed __int64 *v57; // rax
  ADAPTER_RENDER **v58; // rcx
  int v60; // r9d
  int v61; // r9d
  __int64 v62; // rdx
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rax
  void *v65; // rax
  int v66; // r9d
  __int64 v67; // rbx
  unsigned int v68; // edi
  struct _KEVENT *v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // r8
  unsigned int v72; // [rsp+68h] [rbp-A0h]
  int v73; // [rsp+6Ch] [rbp-9Ch]
  __int64 v74; // [rsp+70h] [rbp-98h]
  struct _KTHREAD **v75; // [rsp+78h] [rbp-90h] BYREF
  char v76; // [rsp+80h] [rbp-88h]
  unsigned int v77; // [rsp+88h] [rbp-80h]
  volatile signed __int64 *v78; // [rsp+90h] [rbp-78h]
  __int64 v79; // [rsp+98h] [rbp-70h] BYREF
  char v80; // [rsp+A0h] [rbp-68h]
  unsigned int v81; // [rsp+A8h] [rbp-60h]
  void *v82; // [rsp+B0h] [rbp-58h]
  unsigned int *v83; // [rsp+B8h] [rbp-50h] BYREF
  struct DXGALLOCATION **v84; // [rsp+C0h] [rbp-48h]
  unsigned int *v85; // [rsp+C8h] [rbp-40h]
  ADAPTER_RENDER **v86; // [rsp+D0h] [rbp-38h]
  void *v87; // [rsp+D8h] [rbp-30h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v88; // [rsp+E8h] [rbp-20h]
  struct DXGPROCESS *v89; // [rsp+F0h] [rbp-18h]
  _QWORD v90[5]; // [rsp+F8h] [rbp-10h] BYREF
  char v91[8]; // [rsp+120h] [rbp+18h] BYREF
  __int64 v92; // [rsp+128h] [rbp+20h]
  struct DXGADAPTER *v93; // [rsp+130h] [rbp+28h]
  char v94; // [rsp+138h] [rbp+30h]
  char *v95; // [rsp+140h] [rbp+38h]
  char v96[8]; // [rsp+160h] [rbp+58h] BYREF
  __int64 v97; // [rsp+168h] [rbp+60h]
  struct DXGADAPTER *v98; // [rsp+170h] [rbp+68h]
  char v99; // [rsp+178h] [rbp+70h]
  __int64 v100; // [rsp+180h] [rbp+78h]
  __int64 v101; // [rsp+1A0h] [rbp+98h]
  char v102; // [rsp+1A8h] [rbp+A0h]
  _BYTE v103[256]; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE v104[512]; // [rsp+2B8h] [rbp+1B0h] BYREF

  v10 = a5;
  v11 = a2;
  v89 = a1;
  v77 = a5;
  v81 = a3;
  v83 = a4;
  v88 = a7;
  memset(v103, 0, sizeof(v103));
  memset(v104, 0, sizeof(v104));
  v12 = 0LL;
  v85 = (unsigned int *)v103;
  v84 = (struct DXGALLOCATION **)v104;
  v82 = 0LL;
  v87 = 0LL;
  if ( a3 && a5 )
  {
    v62 = v11;
    v68 = -1073741811;
    WdLogSingleEntry2(3LL, v62, -1073741811LL);
    goto LABEL_107;
  }
  v72 = a5;
  if ( a5 >= 0x41 )
  {
    v63 = 4LL * a5;
    if ( !is_mul_ok(a5, 4uLL) )
      v63 = -1LL;
    v82 = (void *)operator new[](v63, 0x4B677844u, 256LL);
    v64 = 8LL * a5;
    if ( !is_mul_ok(a5, 8uLL) )
      v64 = -1LL;
    v65 = (void *)operator new[](v64, 0x4B677844u, 256LL);
    v87 = v65;
    if ( !g_DxgkDestroyAllocationFailMemoryAlloc && v82 && v65 )
    {
      v84 = (struct DXGALLOCATION **)v65;
      v85 = (unsigned int *)v82;
    }
    else
    {
      WdLogSingleEntry1(4LL, 10316LL);
      v10 = 64;
      v77 = 64;
    }
  }
  v13 = (char *)a1 + 248;
  if ( a1 != (struct DXGPROCESS *)-248LL && *((struct _KTHREAD **)a1 + 32) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1453LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1453LL,
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
      v66 = *((_DWORD *)a1 + 68);
      if ( v66 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, &EventBlockThread, v15, v66);
    }
    ExAcquirePushLockSharedEx((char *)a1 + 248, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)a1 + 66);
  v16 = ((unsigned int)v11 >> 6) & 0xFFFFFF;
  if ( v16 >= *((_DWORD *)a1 + 74) )
    goto LABEL_25;
  v17 = *((_QWORD *)a1 + 35) + 16LL * v16;
  if ( (((unsigned int)v11 >> 25) & 0x60) != (*(_BYTE *)(v17 + 8) & 0x60) )
    goto LABEL_25;
  if ( (*(_DWORD *)(v17 + 8) & 0x2000) != 0 )
    goto LABEL_25;
  v18 = *(_DWORD *)(v17 + 8) & 0x1F;
  if ( !v18 )
    goto LABEL_25;
  if ( v18 != 3 )
  {
    WdLogSingleEntry1(2LL, 316LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 316LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_25;
  }
  v19 = *(_QWORD *)v17;
  v74 = v19;
  v12 = v19;
  if ( !v19 )
  {
LABEL_25:
    _InterlockedDecrement((volatile signed __int32 *)a1 + 66);
    v78 = (volatile signed __int64 *)(v12 + 64);
    ExReleasePushLockSharedEx(v13, 0LL);
    KeLeaveCriticalRegion();
    v67 = v11;
    v68 = -1073741811;
    WdLogSingleEntry2(2LL, v67, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v67,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_107;
  }
  v78 = (volatile signed __int64 *)(v19 + 64);
  _InterlockedIncrement64((volatile signed __int64 *)(v19 + 64));
  _InterlockedDecrement((volatile signed __int32 *)a1 + 66);
  ExReleasePushLockSharedEx(v13, 0LL);
  KeLeaveCriticalRegion();
  v20 = *(_QWORD *)(v19 + 16);
  v21 = (struct _KEVENT **)(v19 + 16);
  v86 = (ADAPTER_RENDER **)(v19 + 16);
  v22 = *(_QWORD *)(v20 + 16);
  if ( *(int *)(v22 + 2552) >= 0x2000 || *(_BYTE *)(v22 + 2852) )
    v73 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 340);
  else
    v73 = 0;
  v23 = *v21;
  if ( *(_DWORD *)(v19 + 464) == 2 )
  {
    if ( KeReadStateEvent(v23 + 5) )
      goto LABEL_17;
    v69 = v23 + 5;
  }
  else
  {
    if ( KeReadStateEvent(v23 + 4) )
      goto LABEL_17;
    v69 = v23 + 4;
  }
  KeWaitForSingleObject(v69, Executive, 0, 0, 0LL);
LABEL_17:
  KeEnterCriticalRegion();
  if ( v73 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v19 + 144, 0LL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v19 + 160));
    }
    else
    {
      KeLeaveCriticalRegion();
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State((DXGADAPTER *)(*v21)->Header.WaitListHead.Blink);
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v19 + 144));
      DXGADAPTER::EnableD3Requests((DXGADAPTER *)(*v21)->Header.WaitListHead.Blink);
      KeLeaveCriticalRegion();
      v74 = v19;
      v78 = (volatile signed __int64 *)(v19 + 64);
    }
  }
  else if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v19 + 136), 0) )
  {
    DXGADAPTER::TryWakeUpFromD3State((DXGADAPTER *)(*v21)->Header.WaitListHead.Blink);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v70, &EventBlockThread, v71, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v19 + 136), 1u);
    DXGADAPTER::EnableD3Requests((DXGADAPTER *)(*v21)->Header.WaitListHead.Blink);
  }
  v24 = *v21;
  Blink = (volatile signed __int64 *)(*v21)->Header.WaitListHead.Blink;
  v93 = (struct DXGADAPTER *)Blink;
  v94 = 0;
  v95 = 0LL;
  if ( Blink )
  {
    _InterlockedIncrement64(Blink + 3);
    v24 = *v21;
    v92 = -1LL;
  }
  v26 = *(volatile signed __int64 **)(v19 + 1880);
  if ( v26 )
  {
    v98 = *(struct DXGADAPTER **)(v19 + 1880);
    v99 = 0;
    v100 = 0LL;
LABEL_27:
    _InterlockedIncrement64(v26 + 3);
    v97 = -1LL;
    goto LABEL_28;
  }
  v26 = (volatile signed __int64 *)v24->Header.WaitListHead.Blink;
  v98 = (struct DXGADAPTER *)v26;
  v99 = 0;
  v100 = 0LL;
  if ( v26 )
    goto LABEL_27;
LABEL_28:
  v101 = v19;
  v27 = *(struct _LIST_ENTRY **)(v19 + 1880);
  if ( v27 == (*v21)->Header.WaitListHead.Blink || !v27 )
  {
    v102 = 0;
    goto LABEL_30;
  }
  v102 = 1;
  COREACCESS::AcquireShared((COREACCESS *)v96, 0LL);
  if ( *((_DWORD *)v98 + 50) == 1 )
  {
    v74 = v19;
    v78 = (volatile signed __int64 *)(v19 + 64);
LABEL_30:
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v93 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v93 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v28, &EventBlockThread, v29, 72);
        KeWaitForSingleObject((char *)v93 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v93, 0LL);
    }
    v95 = 0LL;
    v94 = 1;
    if ( *(_DWORD *)(v101 + 608) == 1 )
    {
      v30 = *(struct _LIST_ENTRY **)(v19 + 1880);
      if ( !v30 )
      {
        v30 = (*v21)->Header.WaitListHead.Blink;
        if ( !v30 )
        {
          WdLogSingleEntry1(1LL, 11147LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pAdapter", 11147LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
      v31 = v30[182].Blink;
      if ( !v31
        || (v32 = (OUTPUTDUPL_MGR *)v31[7].Blink) == 0LL
        || (int)lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_(v32, (struct DXGDEVICE *)v19) >= 0 )
      {
        v90[0] = *(struct _LIST_ENTRY **)((char *)&v30[25].Flink + 4);
        v90[1] = lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_;
        v90[2] = v19;
        Global = DXGGLOBAL::GetGlobal();
        v76 = 0;
        v75 = (struct _KTHREAD **)((char *)Global + 1552);
        if ( Global == (struct DXGGLOBAL *)-1552LL )
        {
          WdLogSingleEntry1(1LL, 592LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 592LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( v75[3] == KeGetCurrentThread() )
        {
          WdLogSingleEntry1(1LL, 599LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 599LL, 0LL, 0LL, 0LL, 0LL);
        }
        v34 = v75;
        KeEnterCriticalRegion();
        if ( v34[3] == KeGetCurrentThread() )
        {
          if ( *((int *)v34 + 8) <= 0 )
          {
            WdLogSingleEntry1(1LL, 491LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 491LL, 0LL, 0LL, 0LL, 0LL);
          }
          ++*((_DWORD *)v34 + 8);
        }
        else
        {
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v34 + 1, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v61 = *((_DWORD *)v34 + 9);
              if ( v61 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                McTemplateK0q_EtwWriteTransfer(v35, &EventBlockThread, v36, v61);
            }
            _InterlockedIncrement64((volatile signed __int64 *)v34 + 2);
            ExAcquirePushLockExclusiveEx(v34 + 1, 0LL);
          }
          if ( v34[3] )
          {
            WdLogSingleEntry1(1LL, 515LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 515LL, 0LL, 0LL, 0LL, 0LL);
          }
          if ( *((_DWORD *)v34 + 8) )
          {
            WdLogSingleEntry1(1LL, 516LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 516LL, 0LL, 0LL, 0LL, 0LL);
          }
          v34[3] = KeGetCurrentThread();
          *((_DWORD *)v34 + 8) = 1;
        }
        v76 = 1;
        for ( i = (struct OUTPUTDUPL_MGR_INDIRECT *)*((_QWORD *)Global + 200);
              i != (struct DXGGLOBAL *)((char *)Global + 1600) && i;
              i = *(struct OUTPUTDUPL_MGR_INDIRECT **)i )
        {
          if ( lambda_e58e30cb45ac044955360754130b33ae_::_lambda_invoker_cdecl_(i, v90) < 0 )
          {
            if ( v76 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v75);
            goto LABEL_59;
          }
        }
        if ( v76 )
        {
          v38 = (int *)v75;
          v76 = 0;
          if ( v75[3] != KeGetCurrentThread() )
            WdLogSingleEntry5(0LL, 275LL, 4LL, v75, 0LL, 0LL);
          if ( v38[8] <= 0 )
          {
            WdLogSingleEntry1(1LL, 535LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 535LL, 0LL, 0LL, 0LL, 0LL);
          }
          v39 = v38[8]-- == 1;
          if ( v39 )
          {
            *((_QWORD *)v38 + 3) = 0LL;
            ExReleasePushLockExclusiveEx(v38 + 2, 0LL);
          }
          KeLeaveCriticalRegion();
        }
      }
LABEL_59:
      v41 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
      if ( !v41 )
        goto LABEL_176;
      CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(v40);
      v79 = v41 + 88;
      v80 = 0;
      if ( v41 == -88 )
      {
        WdLogSingleEntry1(1LL, 592LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 592LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( *(struct _KTHREAD **)(v79 + 24) == KeGetCurrentThread() )
      {
        WdLogSingleEntry1(1LL, 599LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 599LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( v80 )
        WdLogSingleEntry5(0LL, 275LL, 4LL, &v79, 0LL, 0LL);
      v43 = v79;
      KeEnterCriticalRegion();
      if ( *(struct _KTHREAD **)(v43 + 24) == KeGetCurrentThread() )
      {
        if ( *(int *)(v43 + 32) <= 0 )
        {
          WdLogSingleEntry1(1LL, 491LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 491LL, 0LL, 0LL, 0LL, 0LL);
        }
        ++*(_DWORD *)(v43 + 32);
      }
      else
      {
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v43 + 8, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v60 = *(_DWORD *)(v43 + 36);
            if ( v60 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0q_EtwWriteTransfer(v44, &EventBlockThread, v45, v60);
          }
          _InterlockedIncrement64((volatile signed __int64 *)(v43 + 16));
          ExAcquirePushLockExclusiveEx(v43 + 8, 0LL);
        }
        if ( *(_QWORD *)(v43 + 24) )
        {
          WdLogSingleEntry1(1LL, 515LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 515LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( *(_DWORD *)(v43 + 32) )
        {
          WdLogSingleEntry1(1LL, 516LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 516LL, 0LL, 0LL, 0LL, 0LL);
        }
        *(_QWORD *)(v43 + 24) = KeGetCurrentThread();
        *(_DWORD *)(v43 + 32) = 1;
      }
      v80 = 1;
      if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v41 + 80) )
      {
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v79);
        v47 = 0LL;
      }
      else
      {
        _mm_lfence();
        v46 = v79;
        v47 = *(_QWORD *)(*(_QWORD *)(v41 + 48) + 8 * CurrentProcessSessionId);
        v80 = 0;
        if ( *(struct _KTHREAD **)(v79 + 24) != KeGetCurrentThread() )
          WdLogSingleEntry5(0LL, 275LL, 4LL, v79, 0LL, 0LL);
        if ( *(int *)(v46 + 32) <= 0 )
        {
          WdLogSingleEntry1(1LL, 535LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 535LL, 0LL, 0LL, 0LL, 0LL);
        }
        v39 = (*(_DWORD *)(v46 + 32))-- == 1;
        if ( v39 )
        {
          *(_QWORD *)(v46 + 24) = 0LL;
          ExReleasePushLockExclusiveEx(v46 + 8, 0LL);
        }
        KeLeaveCriticalRegion();
      }
      if ( v47 )
      {
        v48 = *(_QWORD *)(v47 + 8);
        if ( v48 )
        {
          v49 = *(OUTPUTDUPL_MGR **)(v48 + 120);
          if ( v49 )
            OUTPUTDUPL_MGR::CleanUpPendingList(v49, (struct DXGDEVICE *)v19);
        }
        else
        {
          WdLogSingleEntry1(2LL, 3909LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"OUTPUTDUPL_SESSION_MGR is NULL",
            3909LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else
      {
LABEL_176:
        WdLogSingleEntry1(2LL, 3902LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"DXGSESSIONDATA is NULL", 3902LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    else
    {
      COREACCESS::Release((COREACCESS *)v91);
      if ( v102 )
        COREACCESS::Release((COREACCESS *)v96);
    }
    goto LABEL_85;
  }
  COREACCESS::Release((COREACCESS *)v96);
  v74 = v19;
  v78 = (volatile signed __int64 *)(v19 + 64);
LABEL_85:
  v50 = v98;
  if ( v98 )
  {
    if ( v99 )
    {
      COREACCESS::Release((COREACCESS *)v96);
      v50 = v98;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v50 + 2), v50);
  }
  v51 = v93;
  if ( v93 )
  {
    if ( v94 )
    {
      v94 = 0;
      v51 = v93;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v93 + 23) )
      {
        DXGADAPTER::ReleaseCoreResource(v93, v95);
        v51 = v93;
      }
      v95 = 0LL;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v51 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v51 + 2), v51);
  }
  v52 = v83;
  v53 = a5;
  while ( 1 )
  {
    v54 = v10;
    if ( v53 < v10 )
      v54 = v53;
    v55 = DxgkDestroyAllocationInternal(
            v89,
            (struct DXGDEVICE *)v19,
            v85,
            v84,
            v81,
            (const unsigned int **)&v83,
            v54,
            a6,
            v52,
            v88,
            a8);
    v56 = v55;
    if ( v55 < 0 )
      break;
    v52 += v54;
    v10 = v77;
    v39 = v72 == (_DWORD)v54;
    v53 = v72 - v54;
    v72 -= v54;
    if ( v39 )
    {
      v68 = 0;
      goto LABEL_103;
    }
  }
  WdLogSingleEntry1(3LL, v55);
  v68 = v56;
LABEL_103:
  if ( v73 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v19 + 160));
    ExReleasePushLockSharedEx(v19 + 144, 0LL);
    KeLeaveCriticalRegion();
    v57 = v78;
  }
  else
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v19 + 136));
    KeLeaveCriticalRegion();
    v57 = (volatile signed __int64 *)(v74 + 64);
  }
  v58 = v86;
  if ( _InterlockedExchangeAdd64(v57, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*v58, (struct DXGDEVICE *)v19);
LABEL_107:
  if ( v87 )
    operator delete(v87);
  if ( v82 )
    operator delete(v82);
  return v68;
}
