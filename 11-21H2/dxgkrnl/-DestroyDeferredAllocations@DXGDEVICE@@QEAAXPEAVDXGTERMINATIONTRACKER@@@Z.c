/*
 * XREFs of ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C018BD40
 * Callers:
 *     ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x1C018BA90 (-DxgkpDeferredDestructionWork@@YAXPEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000B800 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B8C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000BB00 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer @ 0x1C002BC60 (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C018B028 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z @ 0x1C018B750 (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z.c)
 *     ??1DXGALLOCATION@@QEAA@XZ @ 0x1C018C464 (--1DXGALLOCATION@@QEAA@XZ.c)
 *     ??1DXGADAPTERALLOCATION@@QEAA@XZ @ 0x1C018D79C (--1DXGADAPTERALLOCATION@@QEAA@XZ.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C019EFEC (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?TraceCloseParavirtualizedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C02D747C (-TraceCloseParavirtualizedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::DestroyDeferredAllocations(DXGDEVICE *this, struct DXGALLOCATION **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  struct DXGALLOCATION *v7; // rax
  void **v8; // rsi
  struct DXGALLOCATION *v9; // rbx
  int i; // r12d
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // r8
  struct DXGTHREAD *v26; // rsi
  __int64 v27; // r13
  __int64 v28; // rdx
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  struct DXGALLOCATION *v33; // rcx
  void *v34; // rdx
  char v35; // si
  const HANDLE *v36; // r13
  struct DXGALLOCATION *v37; // rbx
  int v38; // eax
  struct DXGALLOCATION *v39; // r12
  __int64 v40; // r15
  void *v41; // rcx
  void *v42; // r15
  __int64 v43; // rcx
  __int64 v44; // r8
  bool v45; // sf
  int v46; // eax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rcx
  unsigned int v50; // r8d
  __int64 j; // rax
  volatile signed __int32 *v52; // rcx
  struct DXGALLOCATION *v53; // rax
  int v55; // r9d
  int v56; // r9d
  struct DXGTHREAD *Current; // rax
  KIRQL v58; // al
  int v59; // [rsp+48h] [rbp-140h]
  int v60; // [rsp+50h] [rbp-138h]
  int v61; // [rsp+58h] [rbp-130h]
  int v62; // [rsp+68h] [rbp-120h]
  int v63; // [rsp+70h] [rbp-118h]
  int v64; // [rsp+78h] [rbp-110h]
  int v65; // [rsp+80h] [rbp-108h]
  int v66; // [rsp+90h] [rbp-F8h]
  int v67; // [rsp+E8h] [rbp-A0h]
  int v68; // [rsp+F0h] [rbp-98h]
  KIRQL CurrentIrql; // [rsp+108h] [rbp-80h]
  int v70; // [rsp+10Ch] [rbp-7Ch]
  void **v71; // [rsp+110h] [rbp-78h]
  __int64 v72; // [rsp+118h] [rbp-70h]
  void *v73; // [rsp+118h] [rbp-70h]
  __int128 v74; // [rsp+120h] [rbp-68h] BYREF
  struct DXGTHREAD *DxgThread; // [rsp+130h] [rbp-58h] BYREF
  int v76; // [rsp+138h] [rbp-50h] BYREF
  __int64 v77; // [rsp+140h] [rbp-48h]
  char v78; // [rsp+148h] [rbp-40h]
  _DXGKARG_DESTROYALLOCATION v79; // [rsp+150h] [rbp-38h] BYREF
  _BYTE v80[16]; // [rsp+170h] [rbp-18h] BYREF
  char v81[8]; // [rsp+180h] [rbp-8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+188h] [rbp+0h] BYREF
  _BYTE v83[128]; // [rsp+1B8h] [rbp+30h] BYREF

  memset(v83, 0, sizeof(v83));
  v7 = *a2;
  if ( !*a2 || (v8 = (void **)*((_QWORD *)v7 + 8), (v71 = v8) == 0LL) )
  {
    v8 = (void **)v83;
    v71 = (void **)v83;
  }
  v74 = 0LL;
  if ( v7 )
  {
    v47 = WdLogNewEntry5_WdTrace(v5, v4);
    *(_QWORD *)(v47 + 24) = *a2;
    v4 = *((_QWORD *)*a2 + 1);
    v5 = *(_QWORD *)(v4 + 40);
    *(_QWORD *)(v47 + 32) = v5;
  }
  v9 = a2[1];
  for ( i = 0; v9; v9 = (struct DXGALLOCATION *)*((_QWORD *)v9 + 8) )
  {
    v11 = WdLogNewEntry5_WdTrace(v5, v4);
    *(_QWORD *)(v11 + 24) = v9;
    *(_QWORD *)(v11 + 32) = *(_QWORD *)(*((_QWORD *)v9 + 1) + 40LL);
    v12 = *((_QWORD *)v9 + 3);
    if ( v12 )
    {
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL)
                                                                          + 8LL)
                                                              + 168LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
        v12,
        0LL,
        *((unsigned int *)a2 + 12));
      *((_QWORD *)v9 + 3) = 0LL;
    }
    else
    {
      DXGDEVICE::TraceCloseParavirtualizedAllocation(this, v9);
    }
    v5 = *((_QWORD *)v9 + 4);
    if ( v5 )
    {
      v8[(unsigned int)v74] = (void *)v5;
      LODWORD(v74) = v74 + 1;
      *((_QWORD *)v9 + 4) = 0LL;
    }
  }
  if ( (_DWORD)v74 )
  {
    v13 = *((_QWORD *)this + 73);
    v14 = *((_QWORD *)this + 2);
    v72 = v13;
    *((_QWORD *)&v74 + 1) = v8;
    v76 = -1;
    v77 = 0LL;
    if ( (qword_1C012F870 & 2) != 0 )
    {
      v78 = 1;
      v76 = 5029;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v5, &EventProfilerEnter, v6, 5029);
    }
    else
    {
      v78 = 0;
    }
    DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v76, 5029);
    CurrentProcess = PsGetCurrentProcess(v16, v15, v17, v18);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
    v21 = ProcessDxgProcess;
    if ( (!ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) != 0)
      && (Current = DXGTHREAD::GetCurrent()) != 0LL
      && (v22 = *((_QWORD *)Current + 3)) != 0
      || (v22 = v21) != 0 )
    {
      v23 = v22 + 152;
      if ( v22 != -152 && *(struct _KTHREAD **)(v22 + 160) == KeGetCurrentThread() )
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
      if ( v22 )
      {
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v22 + 152, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v55 = *(_DWORD *)(v22 + 176);
            if ( v55 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0q_EtwWriteTransfer(v24, (const EVENT_DESCRIPTOR *)"g", v25, v55);
          }
          ExAcquirePushLockExclusiveEx(v22 + 152, 0LL);
        }
        i = 2;
        *(_QWORD *)(v22 + 160) = KeGetCurrentThread();
      }
    }
    else
    {
      v23 = 0LL;
    }
    DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v14 + 16), 1);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 16) + 4484LL));
    v26 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql < 2u
      && (DxgThread = 0LL, (int)PsTlsGetValue(g_DxgkThreadTlsId, &DxgThread) >= 0)
      && ((v26 = DxgThread) != 0LL || (DxgThread = DxgkThreadObjectCreateDxgThread(), (v26 = DxgThread) != 0LL)) )
    {
      v70 = *((_DWORD *)v26 + 12);
    }
    else
    {
      v70 = 0;
    }
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v81,
      *(struct DXGADAPTER **)(v14 + 16));
    v27 = (*(int (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(v14 + 16) + 720LL))(v13, &v74);
    if ( v81[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( CurrentIrql != KeGetCurrentIrql() )
    {
      v58 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, v14, CurrentIrql, v58);
    }
    if ( v26 )
    {
      v29 = *((int *)v26 + 12);
      if ( (_DWORD)v29 != v70 )
        WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v26 + 12), v70, 0LL);
    }
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 16) + 4484LL));
    v30 = (_QWORD *)WdLogNewEntry5_WdTrace(v29, v28);
    v30[3] = v27;
    v30[4] = v72;
    v30[5] = (unsigned int)v74;
    v30[6] = **((_QWORD **)&v74 + 1);
    if ( (_DWORD)v27 )
    {
      WdLogSingleEntry1(2LL, v27);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
        v27,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v14 + 16));
    if ( i == 2 )
    {
      *(_QWORD *)(v23 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v23, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v76);
    if ( v78 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v76);
  }
  v33 = *a2;
  v34 = 0LL;
  v73 = 0LL;
  v35 = 1;
  if ( !*a2 )
    goto LABEL_40;
  if ( (*((_DWORD *)v33 + 1) & 1) == 0 )
  {
    v34 = (void *)*((_QWORD *)v33 + 7);
    v73 = v34;
LABEL_40:
    v36 = v71;
    goto LABEL_41;
  }
  v48 = *((_QWORD *)v33 + 7);
  if ( v48 )
  {
    v49 = *(_QWORD *)(v48 + 152);
    if ( v49 )
    {
      if ( *(DXGDEVICE **)(v49 + 80) == this && (*(_DWORD *)(v49 + 72))-- == 1 )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX(
          (DXGAUTOMUTEX *)v80,
          (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)*a2 + 7) + 152LL) + 8LL),
          0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v80);
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)*a2 + 7) + 152LL) + 80LL) = 0LL;
        if ( v80[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v80);
      }
    }
    v50 = 0;
    for ( j = *((_QWORD *)*a2 + 3); j; ++v50 )
      j = *(_QWORD *)(j + 64);
    v52 = (volatile signed __int32 *)*((_QWORD *)*a2 + 7);
    v36 = v71;
    if ( _InterlockedExchangeAdd(v52 + 17, 0xFFFFFFFF) == 1 )
      DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v52, v71, v50);
    v34 = 0LL;
    *((_QWORD *)*a2 + 7) = 0LL;
  }
  else
  {
    v36 = v71;
  }
  v35 = 0;
LABEL_41:
  v37 = a2[1];
  memset(&v79, 0, sizeof(v79));
  if ( !v37 )
    goto LABEL_58;
  do
  {
    v38 = *((_DWORD *)v37 + 18);
    v39 = (struct DXGALLOCATION *)*((_QWORD *)v37 + 8);
    if ( (v38 & 0x800) != 0 )
    {
      WdLogSingleEntry1(1LL, 1955LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pCurrentAlloc->m_Pinned == FALSE",
        1955LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v38 = *((_DWORD *)v37 + 18);
    }
    if ( (v38 & 0x7FE) != 0 )
    {
      WdLogSingleEntry1(1LL, 1956LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pCurrentAlloc->m_DirectFlipIndex == 0",
        1956LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v40 = *((_QWORD *)v37 + 6);
    if ( v40 )
    {
      if ( v35 )
      {
        if ( (*((_BYTE *)this + 1869) & 1) != 0 )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
            McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer(
              *(_QWORD *)(*((_QWORD *)this + 5) + 64LL),
              &EventDestroyAdapterAllocation,
              *(_QWORD *)(v40 + 112),
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 64LL) + 80LL),
              (char)this,
              *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
              0,
              *(_QWORD *)(v40 + 112),
              v59,
              v60,
              v61,
              0,
              v62,
              v63,
              v64,
              v65,
              v40,
              v66,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              v67,
              v68,
              (*(_DWORD *)(v40 + 4) >> 21) & 0x3F,
              0);
        }
        else if ( *(_QWORD *)(v40 + 8) )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL) + 8LL) + 136LL))(
            *((_QWORD *)this + 95),
            0LL);
          *(_QWORD *)(v40 + 8) = 0LL;
        }
        v41 = *(void **)(*((_QWORD *)v37 + 6) + 16LL);
        if ( v41 )
        {
          v36[v79.NumAllocations++] = v41;
          *(_QWORD *)(*((_QWORD *)v37 + 6) + 16LL) = 0LL;
        }
        goto LABEL_53;
      }
    }
    else if ( v35 )
    {
      goto LABEL_53;
    }
    v53 = *a2;
    if ( !*a2 )
    {
      WdLogSingleEntry1(1LL, 1978LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pTracker->m_pResource", 1978LL, 0LL, 0LL, 0LL, 0LL);
      v53 = *a2;
    }
    if ( (*((_DWORD *)v53 + 1) & 1) == 0 )
    {
      WdLogSingleEntry1(1LL, 1979LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pTracker->m_pResource->m_SharedResource",
        1979LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
LABEL_53:
    if ( !*a2 || (*((_DWORD *)*a2 + 1) & 1) == 0 )
    {
      v42 = (void *)*((_QWORD *)v37 + 6);
      if ( v42 )
      {
        DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION(*((DXGADAPTERALLOCATION **)v37 + 6));
        operator delete(v42);
      }
    }
    DXGALLOCATION::~DXGALLOCATION(v37);
    ExFreePoolWithTag(v37, 0);
    v37 = v39;
  }
  while ( v39 );
  v34 = v73;
LABEL_58:
  if ( v35 )
  {
    v79.Flags.Value = *a2 != 0LL;
    v79.hResource = v34;
    if ( v79.NumAllocations )
    {
      v79.pAllocationList = v36;
      goto LABEL_61;
    }
    v79.pAllocationList = 0LL;
    if ( v34 )
LABEL_61:
      ADAPTER_RENDER::DdiDestroyAllocation(*((ADAPTER_RENDER **)this + 2), &v79, 0LL);
  }
  if ( this != (DXGDEVICE *)-176LL && *((struct _KTHREAD **)this + 23) == KeGetCurrentThread() )
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
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 176, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v56 = *((_DWORD *)this + 50);
      if ( v56 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v43, (const EVENT_DESCRIPTOR *)"g", v44, v56);
    }
    ExAcquirePushLockExclusiveEx((char *)this + 176, 0LL);
  }
  *((_QWORD *)this + 23) = KeGetCurrentThread();
  v45 = --*((_DWORD *)this + 468) < 0;
  v46 = *((_DWORD *)this + 468);
  if ( v45 )
  {
    WdLogSingleEntry1(1LL, 1250LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_OutstandingDeferredDestroys >= 0",
      1250LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v46 = *((_DWORD *)this + 468);
  }
  if ( !v46 )
    KeSetEvent(*((PRKEVENT *)this + 235), 0, 0);
  *((_QWORD *)this + 23) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 176, 0LL);
  KeLeaveCriticalRegion();
}
