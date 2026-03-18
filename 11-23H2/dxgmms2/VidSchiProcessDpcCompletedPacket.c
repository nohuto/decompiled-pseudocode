/*
 * XREFs of VidSchiProcessDpcCompletedPacket @ 0x1C0008770
 * Callers:
 *     VidSchiProcessDpcDmaPacket @ 0x1C000E630 (VidSchiProcessDpcDmaPacket.c)
 * Callees:
 *     VidSchiMarkDeviceAsError @ 0x1C00017E4 (VidSchiMarkDeviceAsError.c)
 *     ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0001CF4 (-VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiDecrementContextReference @ 0x1C0001F40 (VidSchiDecrementContextReference.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0005FB8 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C00073A0 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchUnwaitFlipQueue @ 0x1C0007760 (VidSchUnwaitFlipQueue.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C00091C0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C0009EC0 (VidSchiCheckPendingDeviceCommand.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C000A370 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C000A3C0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000AA30 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextStatus @ 0x1C000BE10 (VidSchiUpdateContextStatus.c)
 *     VidSchiCompleteRewindPacket @ 0x1C00143C8 (VidSchiCompleteRewindPacket.c)
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0017494 (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     VidSchiCheckYieldExitCondition @ 0x1C0018E0C (VidSchiCheckYieldExitCondition.c)
 *     VidSchiStartNodeYield @ 0x1C0018EE8 (VidSchiStartNodeYield.c)
 *     VidSchiMonitorRefreshPeriodFromNode @ 0x1C0018FA4 (VidSchiMonitorRefreshPeriodFromNode.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A870 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001AC00 (memset.c)
 *     ?RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z @ 0x1C001BCFE (-RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z.c)
 *     McTemplateK0ppxx_EtwWriteTransfer @ 0x1C002F624 (McTemplateK0ppxx_EtwWriteTransfer.c)
 *     ?VidSchiAllowToDebugPageFault@@YAXPEAU_VIDSCH_DMA_PACKET@@@Z @ 0x1C0035024 (-VidSchiAllowToDebugPageFault@@YAXPEAU_VIDSCH_DMA_PACKET@@@Z.c)
 *     ?VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C00359C4 (-VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiProcessHistoryBuffer@@YAXPEAU_VIDSCH_DMA_PACKET@@PEAU_VIDSCH_HISTORY_BUFFER_DATA@@@Z @ 0x1C0035F34 (-VidSchiProcessHistoryBuffer@@YAXPEAU_VIDSCH_DMA_PACKET@@PEAU_VIDSCH_HISTORY_BUFFER_DATA@@@Z.c)
 *     ?VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C003647C (-VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z.c)
 *     McTemplateK0pqxq_EtwWriteTransfer @ 0x1C0039294 (McTemplateK0pqxq_EtwWriteTransfer.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiProcessDpcCompletedPacket(struct _VIDSCH_DMA_PACKET *a1)
{
  signed __int64 v1; // rsi
  __int64 v3; // rdi
  int v4; // eax
  __int64 v5; // r15
  int v6; // r14d
  LARGE_INTEGER *v7; // r13
  LARGE_INTEGER PerformanceCounter; // r14
  bool v9; // zf
  __int64 v10; // r14
  __int64 v11; // rcx
  union _LARGE_INTEGER v12; // r9
  __int64 v13; // r12
  unsigned __int64 *v14; // r14
  unsigned __int64 v15; // r8
  __int64 v16; // rcx
  int v17; // eax
  struct _VIDSCH_CONTEXT *v18; // rcx
  __int64 v19; // rax
  LARGE_INTEGER *v20; // r14
  _QWORD *QuadPart; // r9
  __int64 v22; // rcx
  __int64 v23; // r13
  unsigned __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 v29; // rdx
  char v30; // r13
  __int64 v31; // r14
  int v32; // r10d
  int v33; // r14d
  struct _KEVENT **v34; // r12
  KSPIN_LOCK *v35; // r14
  struct _KEVENT *v36; // r12
  struct _KEVENT *v37; // r12
  struct _KEVENT *v38; // rcx
  struct _KEVENT *v39; // rdi
  KIRQL v40; // si
  struct _KEVENT *v41; // r14
  struct _VIDSCH_QUEUE_PACKET *v42; // rax
  unsigned int v43; // edi
  __int64 v44; // rax
  __int64 v45; // rcx
  LARGE_INTEGER *v46; // rax
  __int64 v47; // r13
  __int64 i; // r12
  __int64 v49; // r13
  __int64 v50; // rax
  unsigned __int8 v51; // r8
  __int64 v52; // r12
  __int64 v53; // r13
  LARGE_INTEGER v54; // r8
  unsigned __int128 v55; // rax
  unsigned __int64 v56; // r14
  int v57; // edx
  unsigned __int64 *v58; // rax
  __int64 v59; // rcx
  int v60; // eax
  int v61; // ecx
  __int16 v62; // r11
  unsigned __int128 v63; // rax
  unsigned __int64 v64; // rdx
  unsigned __int128 v65; // rtt
  unsigned __int64 v66; // r10
  int v67; // eax
  int v68; // r8d
  __int64 v69; // r9
  unsigned int refreshed; // eax
  __int64 v71; // rcx
  LARGE_INTEGER v72; // r9
  struct VIDMM_ALLOC *v73; // rcx
  __int64 v74; // rcx
  unsigned int j; // r12d
  struct _VIDSCH_HISTORY_BUFFER_DATA *v76; // rdx
  __int64 v77; // rax
  LARGE_INTEGER *v78; // rax
  int v79; // eax
  _BYTE *v80; // r8
  __int64 v81; // rdx
  _BYTE *v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // r11
  char v85; // al
  _BYTE *v86; // rax
  _BYTE *v87; // r9
  __int64 v88; // rdx
  _BYTE *v89; // rcx
  __int64 v90; // rdx
  __int64 v91; // r11
  char v92; // al
  _BYTE *v93; // rax
  struct _KEVENT *v94; // r14
  int Flink; // ecx
  struct _KEVENT *v96; // r14
  int v97; // ecx
  struct _KEVENT *v98; // r14
  int v99; // ecx
  int v100; // ecx
  __int64 v101; // [rsp+50h] [rbp-B0h]
  union _LARGE_INTEGER v102; // [rsp+58h] [rbp-A8h]
  __int64 v103; // [rsp+58h] [rbp-A8h]
  LARGE_INTEGER v104; // [rsp+60h] [rbp-A0h]
  union _LARGE_INTEGER v105; // [rsp+68h] [rbp-98h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp-90h] BYREF
  LARGE_INTEGER *v107; // [rsp+78h] [rbp-88h]
  _QWORD v108[2]; // [rsp+80h] [rbp-80h] BYREF
  char v109; // [rsp+90h] [rbp-70h]
  __int64 v110; // [rsp+98h] [rbp-68h]
  __int64 v111; // [rsp+A0h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A8h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v113; // [rsp+C0h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE v114; // [rsp+D8h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE v115; // [rsp+F0h] [rbp-10h] BYREF
  struct _KLOCK_QUEUE_HANDLE v116; // [rsp+108h] [rbp+8h] BYREF
  __int128 v117; // [rsp+120h] [rbp+20h]
  __int64 v118; // [rsp+130h] [rbp+30h]
  char v119; // [rsp+190h] [rbp+90h] BYREF
  char v120; // [rsp+198h] [rbp+98h]
  int v121; // [rsp+1A0h] [rbp+A0h]
  int v122; // [rsp+1A8h] [rbp+A8h]

  v1 = *((_QWORD *)a1 + 6);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v120 = 0;
  v3 = *(_QWORD *)(v1 + 96);
  v101 = *(_QWORD *)(v1 + 104);
  v4 = *((_DWORD *)a1 + 18);
  LOBYTE(v121) = 0;
  v5 = *(_QWORD *)(v3 + 24);
  if ( v4 == 18 )
  {
    v122 = 9;
    v6 = 15;
    VidSchiAllowToDebugPageFault(a1);
  }
  else
  {
    v122 = 0;
    v6 = 13;
  }
  *((_QWORD *)a1 + 10) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)a1 + 18) = v6;
  if ( *((_QWORD *)a1 + 7) )
  {
    *(_QWORD *)(*((_QWORD *)a1 + 7) + 56LL) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(*((_QWORD *)a1 + 7) + 52LL) = v6;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 1728), &LockHandle);
  v109 = 0;
  v108[1] = v108;
  PerformanceFrequency.QuadPart = 0LL;
  v108[0] = v108;
  v104 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v107 = (LARGE_INTEGER *)(*(_QWORD *)(v3 + 184) + 112LL * *(unsigned int *)(v3 + 196));
  v7 = v107;
  PerformanceCounter = v104;
  memset(v107, 0, 0x70uLL);
  *(_DWORD *)(v3 + 196) = (*(_DWORD *)(v3 + 196) + 1) & (*(_DWORD *)(v3 + 192) - 1);
  if ( !v104.QuadPart )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v9 = bTracingEnabled == 0;
  v7[1] = PerformanceCounter;
  v7->LowPart = 4;
  if ( !v9
    && (byte_1C0076984 & 2) != 0
    && *(_BYTE *)(((__int64 (*)(void))DxgCoreInterface[3])() + 305288)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(v3 + 2944), 1, 0) )
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v3 + 2912), NormalWorkQueue);
  }
  v10 = *(unsigned int *)(v3 + 1560);
  v11 = v3 + 8 * v10;
  if ( v1 != _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 1568), 0LL, v1) )
  {
    WdLogSingleEntry2(1LL, v5, v101);
    ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, __int64, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Context running queue is inconsistant",
      v5,
      v101,
      0LL,
      0LL,
      0LL);
  }
  *(_QWORD *)(v3 + 224) = v1;
  *(_DWORD *)(v3 + 1560) = ((_BYTE)v10 + 1) & 0xF;
  if ( (*((_DWORD *)a1 + 23) & 0x200) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 812));
  _InterlockedDecrement((volatile signed __int32 *)(v5 + 728));
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 2888));
  v12 = PerformanceFrequency;
  v102 = PerformanceFrequency;
  v13 = gulPriorityToYieldPriorityBand[*(unsigned int *)(v1 + 404)];
  if ( (_DWORD)v13 )
  {
    v14 = (unsigned __int64 *)(v3 + 1968 + 8 * v13);
    do
    {
      if ( *(v14 - 8) )
      {
        v15 = v104.QuadPart + *v14 - *(v14 - 4);
        *(v14 - 4) = 0LL;
        *v14 = v15;
        if ( (byte_1C0076981 & 1) != 0 )
        {
          v62 = *(_WORD *)(v3 + 4);
          v63 = v15 * (unsigned __int128)0x989680uLL;
          v110 = *((_QWORD *)&v63 + 1);
          if ( is_mul_ok(v15, 0x989680uLL) )
          {
            v65 = v63;
            v64 = v63 % (unsigned __int64)v12.QuadPart;
            v66 = v65 / (unsigned __int64)v12.QuadPart;
          }
          else
          {
            v64 = v15 % v12.QuadPart;
            v11 = 10000000 * (v15 / v12.QuadPart);
            v66 = v11 + 10000000 * (v15 % v12.QuadPart) / v12.QuadPart;
          }
          McTemplateK0pqxq_EtwWriteTransfer(v11, v64, v15, *(_QWORD *)(*(_QWORD *)(v3 + 24) + 16LL), v13, v66, v62);
          v12 = v102;
        }
      }
      --v14;
      LODWORD(v13) = v13 - 1;
    }
    while ( (_DWORD)v13 );
    v7 = v107;
  }
  v16 = *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v3 + 1560) + 1568);
  if ( v16 )
  {
    v44 = *(unsigned int *)(v16 + 404);
    v45 = gulPriorityToYieldPriorityBand[v44];
    if ( gulPriorityToYieldPriorityBand[v44] )
    {
      v46 = (LARGE_INTEGER *)(v3 + 1936 + 8 * v45);
      do
      {
        if ( v46[-4].QuadPart )
          *v46 = v104;
        --v46;
        --v45;
      }
      while ( v45 );
    }
  }
  if ( *(int *)(v3 + 2872) > 0 )
    RtlSetBitEx(v5 + 488, *(unsigned __int16 *)(v3 + 4));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 788), 0xFFFFFFFF) == 1 )
  {
    *(_DWORD *)(v1 + 184) &= ~2u;
    if ( (*(_DWORD *)(v1 + 184) & 8) != 0 )
    {
      *(_DWORD *)(v1 + 184) &= ~8u;
      v60 = VidSchiCompleteRewindPacket(v1, 1LL);
      v61 = (unsigned __int8)v121;
      if ( v60 )
        v61 = 1;
      v121 = v61;
    }
    if ( v101 == *(_QWORD *)(v5 + 240) )
    {
      VidSchiUpdateContextStatus(v1, 0LL, 12077LL);
    }
    else
    {
      v118 = 0LL;
      v17 = *(_DWORD *)(v1 + 184);
      v117 = 0LL;
      if ( (v17 & 2) == 0 )
      {
        v18 = *(struct _VIDSCH_CONTEXT **)(v1 + 496);
        if ( v18 )
          VidSchiDecrementContextReference(v18, 1);
        *(_QWORD *)(v1 + 496) = 0LL;
      }
    }
    --*(_DWORD *)(v3 + 4LL * *(unsigned int *)(v1 + 404) + 1776);
    v19 = *(unsigned int *)(v1 + 404);
    if ( !*(_DWORD *)(v3 + 4 * v19 + 1776) )
      *(_DWORD *)(v3 + 1772) &= ~(1 << v19);
    if ( *(_QWORD *)(v1 + 504) )
    {
      v52 = *(_QWORD *)(v1 + 104);
      v53 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL);
      v103 = *(_QWORD *)(v52 + 40);
      v105.QuadPart = 0LL;
      v54 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(&v105) - *(_QWORD *)(v1 + 504));
      v55 = (unsigned __int64)v54.QuadPart * (unsigned __int128)0x989680uLL;
      v111 = *((_QWORD *)&v55 + 1);
      if ( is_mul_ok(v54.QuadPart, 0x989680uLL) )
        v56 = v55 / (unsigned __int64)v105.QuadPart;
      else
        v56 = 10000000 * (v54.QuadPart / (unsigned __int64)v105.QuadPart)
            + 10000000 * (v54.QuadPart % (unsigned __int64)v105.QuadPart) / v105.QuadPart;
      v57 = 8;
      v58 = (unsigned __int64 *)(v53 + 2856);
      v59 = 8LL;
      while ( v56 <= *v58 )
      {
        --v57;
        --v58;
        if ( --v59 < 0 )
          goto LABEL_103;
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v103 + 8LL * v57 + 2680));
LABEL_103:
      if ( v56 >= *(_QWORD *)(v53 + 2784) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v103 + 2672));
        if ( v56 >= *(_QWORD *)(v53 + 2768) && !*(_BYTE *)(*(_QWORD *)(v52 + 40) + 2632LL) )
        {
          v67 = *(_DWORD *)(v52 + 48);
          if ( (v67 & 8) == 0
            && (v67 & 1) == 0
            && !*(_DWORD *)(v53 + 3012)
            && !*(_BYTE *)(v52 + 204)
            && !_InterlockedCompareExchange((volatile signed __int32 *)(v52 + 200), 0, 0)
            && (*(_DWORD *)(v53 + 2536) & 0x200) != 0 )
          {
            KeSetTimer((PKTIMER)(v1 + 512), (LARGE_INTEGER)-*(_QWORD *)(v53 + 2776), (PKDPC)(v1 + 576));
            VidSchiUpdateContextStatus(v1, 7LL, 28534LL);
            if ( bTracingEnabled )
            {
              v69 = *(_QWORD *)(v1 + 56);
              if ( !v69 || (*(_DWORD *)(v1 + 112) & 0x40) != 0 )
                LODWORD(v69) = v1;
              if ( (byte_1C0076981 & 1) != 0 )
                McTemplateK0ppxx_EtwWriteTransfer(
                  *(_QWORD *)(v53 + 2776),
                  (unsigned int)&EventDelayContextScheduling,
                  v68,
                  v69,
                  *(_QWORD *)(v103 + 2640),
                  v56,
                  *(_QWORD *)(v53 + 2776));
            }
          }
        }
      }
      v7 = v107;
      *(_QWORD *)(v1 + 504) = 0LL;
    }
  }
  if ( *(_BYTE *)(v3 + 2024) )
  {
    if ( *(_QWORD *)(v3 + 2000) )
    {
      v119 = 0;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))VidSchiCheckYieldExitCondition)(
        v3,
        (LARGE_INTEGER)v104.QuadPart,
        &v119);
      if ( !v119 )
        goto LABEL_33;
    }
    else
    {
      if ( ((-1 << (*(_BYTE *)(v5 + 200) + 1)) & *(_DWORD *)(v3 + 1772)) != 0 )
        goto LABEL_33;
      refreshed = VidSchiMonitorRefreshPeriodFromNode(v3);
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
        v3,
        (LARGE_INTEGER)v104.QuadPart,
        (union _LARGE_INTEGER)PerformanceFrequency.QuadPart,
        refreshed);
    }
    LOBYTE(v121) = 1;
  }
LABEL_33:
  v7[2] = *(LARGE_INTEGER *)((char *)a1 + 104);
  if ( (*(_DWORD *)(*(_QWORD *)(v5 + 16) + 436LL) & 0x200) != 0
    && *(_DWORD *)(v3 + 480)
    && *((_QWORD *)a1 + 13) != *(_QWORD *)(v3 + 472) )
  {
    *(_DWORD *)(v3 + 480) = 0;
  }
  _m_prefetchw((const void *)(v3 + 96));
  while ( _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v3 + 96),
            *((_QWORD *)a1 + 13),
            *(_QWORD *)(v3 + 96)) != *((_QWORD *)a1 + 13) )
    ;
  v20 = (LARGE_INTEGER *)*((_QWORD *)a1 + 7);
  if ( v20 )
  {
    v7[3] = v20[14];
    QuadPart = (_QWORD *)v20[11].QuadPart;
    v22 = QuadPart[13];
    v23 = *(_QWORD *)(QuadPart[12] + 24LL);
    v24 = QuadPart[20];
    if ( v24 && v20[14].QuadPart <= v24 )
    {
      if ( !*(_BYTE *)(v22 + 204)
        && !_InterlockedCompareExchange((volatile signed __int32 *)(v22 + 200), 0, 0)
        && (*(_BYTE *)(v23 + 3036) & 1) == 0 )
      {
        v71 = QuadPart[20];
        v72 = v20[14];
        g_DxgMmsBugcheckExportIndex = 1;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry5)(
          0LL,
          281LL,
          1792LL,
          (LARGE_INTEGER)v72.QuadPart,
          v71,
          0LL);
        __debugbreak();
      }
      ((void (__fastcall *)(_QWORD, _QWORD))WdLogSingleEntry1)(4LL, (LARGE_INTEGER)v20[14].QuadPart);
    }
    else
    {
      if ( *(_BYTE *)(v22 + 204)
        || _InterlockedCompareExchange((volatile signed __int32 *)(v22 + 200), 0, 0)
        || (*(_BYTE *)(v23 + 3036) & 1) != 0 )
      {
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))WdLogSingleEntry2)(4LL, v20, (LARGE_INTEGER)v20[14].QuadPart);
      }
      else
      {
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry3)(
          4LL,
          v20,
          (LARGE_INTEGER)v20[14].QuadPart,
          QuadPart[20]);
      }
      *(LARGE_INTEGER *)(v20[11].QuadPart + 160) = v20[14];
      if ( *(_DWORD *)(*(_QWORD *)(v20[11].QuadPart + 104) + 1576LL) )
        VidSchUnwaitFlipQueue((struct HwQueueStagingList *)v108, v23);
    }
    *((_DWORD *)a1 + 23) |= 0x80u;
    v120 = 1;
  }
  v25 = *((_QWORD *)a1 + 8);
  if ( (*((_DWORD *)a1 + 23) & 2) != 0 )
  {
    v47 = *(_QWORD *)(v25 + 104);
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = v25;
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v25 + 144); i = (unsigned int)(i + 1) )
    {
      v73 = *(struct VIDMM_ALLOC **)(v47 + 8 * i);
      if ( v73 )
        VIDMM_GLOBAL::RemoveDMAReferences(v73, 1);
    }
    v49 = *(_QWORD *)(v25 + 64);
    if ( v49 )
    {
      if ( *(int *)(v49 + 156) < 1 )
      {
        v74 = *(int *)(v49 + 156);
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 41LL, v49, v74, 0LL);
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(v49 + 156), 0xFFFFFFFF);
    }
    ++*(_DWORD *)(v25 + 20);
  }
  if ( (*((_DWORD *)a1 + 23) & 1) != 0 )
  {
    v50 = *((_QWORD *)a1 + 7);
    v51 = v50 && *(_DWORD *)(v50 + 48) == 8;
    VIDMM_DMA_POOL::ReleaseBuffer(*(VIDMM_DMA_POOL **)(v25 + 136), (struct _VIDMM_DMA_BUFFER *)v25, v51);
  }
  v26 = *((_QWORD *)a1 + 7);
  if ( v26 )
  {
    v27 = *(_QWORD *)(v26 + 264);
    if ( v27 )
    {
      for ( j = 0; j < *(_DWORD *)(v26 + 624); ++j )
      {
        v76 = (struct _VIDSCH_HISTORY_BUFFER_DATA *)(v27 + 16LL * j);
        if ( *(_QWORD *)v76 )
        {
          VidSchiProcessHistoryBuffer(a1, v76);
          v27 = *(_QWORD *)(v26 + 264);
        }
      }
      VidSchiFreeHistoryBufferStorage((struct _VIDSCH_QUEUE_PACKET *)v26);
    }
  }
  v28 = v101;
  VidSchiUnwaitMonitoredFences((__int64)v108, *(_QWORD *)(v101 + 32), 0LL);
  VidSchiCheckPendingDeviceCommand(v101);
  v30 = v121;
  if ( _bittest64(*(const signed __int64 **)(v5 + 448), *(unsigned __int16 *)(v3 + 4)) )
    v30 = 1;
  if ( bTracingEnabled )
  {
    v31 = *((_QWORD *)a1 + 6);
    if ( *(_DWORD *)(v31 + 984) >= 0x80u )
      VidSchiFlushGpuWorkEntries(*((struct _VIDSCH_CONTEXT **)a1 + 6), v29, 1);
    if ( *(_QWORD *)(v31 + 992)
      || (v77 = operator new[](1024LL, 0x61616956u, 64LL), (*(_QWORD *)(v31 + 992) = v77) != 0LL) )
    {
      *(_QWORD *)(*(_QWORD *)(v31 + 992) + 8LL * (unsigned int)(*(_DWORD *)(v31 + 984))++) = KeQueryPerformanceCounter(0LL).QuadPart | 0x8000000000000000uLL;
      v28 = v101;
    }
    else
    {
      WdLogSingleEntry0(1LL);
      ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to allocate GpuWorkRecords for long haul logging",
        458LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v28 = v101;
    }
  }
  v32 = v122;
  if ( v122 )
  {
    v78 = v107;
    LOBYTE(v107[4].LowPart) = 1;
    *(_OWORD *)&v78[5].LowPart = *(_OWORD *)(v28 + 208);
    *(_OWORD *)&v78[7].LowPart = *(_OWORD *)(v28 + 224);
    v79 = *(_DWORD *)(v28 + 224);
    if ( (v79 & 4) != 0 )
    {
      if ( !*(_DWORD *)(v3 + 2032) )
      {
        v80 = (_BYTE *)(v5 + 3037);
        v81 = *(_QWORD *)(*(_QWORD *)(v28 + 40) + 2648LL);
        if ( !v81 )
          goto LABEL_167;
        v82 = (_BYTE *)(v5 + 3037);
        v83 = v81 - (_QWORD)v80;
        v84 = 15LL;
        do
        {
          if ( v84 == -2147483631 )
            break;
          v85 = v82[v83];
          if ( !v85 )
            break;
          *v82++ = v85;
          --v84;
        }
        while ( v84 );
        v86 = v82 - 1;
        if ( v84 )
          v86 = v82;
        *v86 = 0;
        if ( !v84 )
LABEL_167:
          *v80 = 0;
        *(_DWORD *)(v3 + 2032) = 1;
      }
    }
    else if ( (v79 & 8) != 0 && !*(_DWORD *)(v3 + 2028) )
    {
      v87 = (_BYTE *)(v3 + 2036);
      v88 = *(_QWORD *)(*(_QWORD *)(v28 + 40) + 2648LL);
      if ( !v88 )
        goto LABEL_179;
      v89 = (_BYTE *)(v3 + 2036);
      v90 = v88 - (_QWORD)v87;
      v91 = 15LL;
      do
      {
        if ( v91 == -2147483631 )
          break;
        v92 = v89[v90];
        if ( !v92 )
          break;
        *v89++ = v92;
        --v91;
      }
      while ( v91 );
      v93 = v89 - 1;
      if ( v91 )
        v93 = v89;
      *v93 = 0;
      if ( !v91 )
LABEL_179:
        *v87 = 0;
      *(_DWORD *)(v3 + 2028) = 1;
    }
    VidSchiMarkDeviceAsError((struct HwQueueStagingList *)v108, v28, v32, 0LL);
    v33 = 13;
  }
  else
  {
    v33 = 9;
  }
  HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v108);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  VidSchiProfilePerformanceTick(v33, v5, v3, 0, 0LL, 0LL, (__int64)a1, 0LL);
  v34 = (struct _KEVENT **)(v1 + 376);
  memset(&v113, 0, sizeof(v113));
  v35 = (KSPIN_LOCK *)(v5 + 1744);
  LOBYTE(v121) = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 1744), &v113);
  if ( *v34 != (struct _KEVENT *)v34 )
  {
    v94 = *v34;
    while ( 1 )
    {
      if ( LODWORD(v94->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v94[1].Header.Lock + 4LL * LODWORD(v94[1].Header.WaitListHead.Blink) + 1444) >= *(_DWORD *)(*(_QWORD *)&v94[1].Header.Lock + 244LL) )
          goto LABEL_190;
      }
      else if ( ((__int64)v94[1].Header.WaitListHead.Flink & 0x10) != 0 )
      {
        Flink = (int)v94[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v94[5].Header.WaitListHead.Blink) = Flink;
        if ( Flink )
          goto LABEL_190;
      }
      ++v94[5].Header.LockNV;
      KeSetEvent(v94 + 4, 0, 0);
LABEL_190:
      v94 = *(struct _KEVENT **)&v94->Header.Lock;
      if ( v94 == (struct _KEVENT *)v34 )
      {
        v35 = (KSPIN_LOCK *)(v5 + 1744);
        break;
      }
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v113);
  KeLowerIrql(v121);
  v36 = (struct _KEVENT *)(v3 + 408);
  memset(&v114, 0, sizeof(v114));
  LOBYTE(v121) = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v35, &v114);
  if ( *(struct _KEVENT **)&v36->Header.Lock == v36 )
    goto LABEL_61;
  v96 = *(struct _KEVENT **)&v36->Header.Lock;
  do
  {
    if ( LODWORD(v96->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&v96[1].Header.Lock + 4LL * LODWORD(v96[1].Header.WaitListHead.Blink) + 1444) < *(_DWORD *)(*(_QWORD *)&v96[1].Header.Lock + 244LL) )
        goto LABEL_199;
    }
    else if ( ((__int64)v96[1].Header.WaitListHead.Flink & 0x10) == 0
           || (v97 = (int)v96[1].Header.WaitListHead.Blink->Flink, (HIDWORD(v96[5].Header.WaitListHead.Blink) = v97) == 0) )
    {
LABEL_199:
      ++v96[5].Header.LockNV;
      KeSetEvent(v96 + 4, 0, 0);
    }
    v96 = *(struct _KEVENT **)&v96->Header.Lock;
  }
  while ( v96 != v36 );
  v35 = (KSPIN_LOCK *)(v5 + 1744);
LABEL_61:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v114);
  KeLowerIrql(v121);
  v37 = (struct _KEVENT *)(v5 + 1640);
  memset(&v115, 0, sizeof(v115));
  LOBYTE(v121) = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v35, &v115);
  if ( *(struct _KEVENT **)&v37->Header.Lock == v37 )
    goto LABEL_62;
  v98 = *(struct _KEVENT **)&v37->Header.Lock;
  while ( 2 )
  {
    if ( LODWORD(v98->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&v98[1].Header.Lock + 4LL * LODWORD(v98[1].Header.WaitListHead.Blink) + 1444) < *(_DWORD *)(*(_QWORD *)&v98[1].Header.Lock + 244LL) )
        goto LABEL_209;
    }
    else if ( ((__int64)v98[1].Header.WaitListHead.Flink & 0x10) == 0
           || (v99 = (int)v98[1].Header.WaitListHead.Blink->Flink, (HIDWORD(v98[5].Header.WaitListHead.Blink) = v99) == 0) )
    {
LABEL_209:
      ++v98[5].Header.LockNV;
      KeSetEvent(v98 + 4, 0, 0);
    }
    v98 = *(struct _KEVENT **)&v98->Header.Lock;
    if ( v98 != v37 )
      continue;
    break;
  }
  v35 = (KSPIN_LOCK *)(v5 + 1744);
LABEL_62:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v115);
  KeLowerIrql(v121);
  *(_QWORD *)(v1 + 352) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v1 + 320), 0, 0);
  *(_QWORD *)(v3 + 272) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v3 + 240), 0, 0);
  *(_QWORD *)(v5 + 1448) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v5 + 1416), 0, 0);
  if ( v30 )
  {
    *(_QWORD *)(v5 + 1224) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v5 + 1192), 0, 0);
  }
  v38 = (struct _KEVENT *)*((_QWORD *)a1 + 25);
  if ( v38 )
    KeSetEvent(v38, 0, 0);
  v39 = (struct _KEVENT *)(v5 + 1688);
  memset(&v116, 0, sizeof(v116));
  v40 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v35, &v116);
  v41 = *(struct _KEVENT **)(v5 + 1688);
  if ( *(struct _KEVENT **)&v39->Header.Lock != v39 )
  {
    do
    {
      if ( LODWORD(v41->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v41[1].Header.Lock + 4LL * LODWORD(v41[1].Header.WaitListHead.Blink) + 1444) >= *(_DWORD *)(*(_QWORD *)&v41[1].Header.Lock + 244LL) )
          goto LABEL_219;
      }
      else if ( ((__int64)v41[1].Header.WaitListHead.Flink & 0x10) != 0 )
      {
        v100 = (int)v41[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v41[5].Header.WaitListHead.Blink) = v100;
        if ( v100 )
          goto LABEL_219;
      }
      ++v41[5].Header.LockNV;
      KeSetEvent(v41 + 4, 0, 0);
LABEL_219:
      v41 = *(struct _KEVENT **)&v41->Header.Lock;
    }
    while ( v41 != v39 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v116);
  KeLowerIrql(v40);
  v42 = (struct _VIDSCH_QUEUE_PACKET *)*((_QWORD *)a1 + 7);
  v43 = -1;
  if ( v42 )
    v43 = *((_DWORD *)v42 + 40);
  if ( v120 )
  {
    do
      v42 = VidSchiProcessCompletedQueuePacketInternal(v42);
    while ( v42 );
  }
  *((_QWORD *)a1 + 10) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)a1 + 18) = 16;
  if ( v43 != -1 && (*((_DWORD *)a1 + 23) & 0x10) != 0 )
    VidSchiQueueDeferredVisibilityWorkItem(
      *(struct _VIDSCH_PRESENT_INFO **)(v5 + 8LL * v43 + 3200),
      (struct _VIDSCH_GLOBAL *)v5);
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v108);
}
