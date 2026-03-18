/*
 * XREFs of VidSchiProcessDpcPreemptedPacket @ 0x1C000F070
 * Callers:
 *     VidSchiProcessDpcDmaPacket @ 0x1C0005700 (VidSchiProcessDpcDmaPacket.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C000A180 (VidSchiProfilePerformanceTick.c)
 *     VidSchiCompleteRewindPacket @ 0x1C000E658 (VidSchiCompleteRewindPacket.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C0010BF0 (VidSchiSignalRegisteredEvent.c)
 *     ?VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z @ 0x1C0011148 (-VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z.c)
 *     ?VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z @ 0x1C00111C4 (-VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z.c)
 *     VidSchiFinishMeasuringPreemptionTime @ 0x1C0011254 (VidSchiFinishMeasuringPreemptionTime.c)
 *     VidSchiDecrementContextReference @ 0x1C0013610 (VidSchiDecrementContextReference.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001DC40 (memset.c)
 */

LONG __fastcall VidSchiProcessDpcPreemptedPacket(__int64 a1)
{
  signed __int64 v1; // rbx
  __int64 v3; // rdi
  __int64 v4; // rbp
  LARGE_INTEGER *v5; // r13
  LARGE_INTEGER v6; // rax
  unsigned __int64 QuadPart; // r12
  __int64 v8; // r15
  __int64 v9; // r15
  __int64 v10; // r13
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 *v16; // rax
  int v17; // eax
  int v18; // ecx
  int v19; // r15d
  struct _VIDSCH_CONTEXT *v20; // rcx
  __int64 v21; // rax
  struct _KEVENT *v22; // rcx
  LONG result; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-88h] BYREF
  __int128 v25; // [rsp+68h] [rbp-70h]
  __int64 v26; // [rsp+78h] [rbp-60h]
  __int128 v27; // [rsp+80h] [rbp-58h]
  __int64 v28; // [rsp+90h] [rbp-48h]
  LARGE_INTEGER *v29; // [rsp+E8h] [rbp+10h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+F0h] [rbp+18h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = *(_QWORD *)(v1 + 96);
  v4 = *(_QWORD *)(v3 + 24);
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 14;
  if ( *(_QWORD *)(a1 + 56) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 56LL) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 52LL) = 14;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 1728), &LockHandle);
  v5 = (LARGE_INTEGER *)(*(_QWORD *)(v3 + 184) + 112LL * *(unsigned int *)(v3 + 196));
  v29 = v5;
  memset(v5, 0, 0x70uLL);
  *(_DWORD *)(v3 + 196) = (*(_DWORD *)(v3 + 196) + 1) & (*(_DWORD *)(v3 + 192) - 1);
  v5->LowPart = 5;
  PerformanceFrequency.QuadPart = 0LL;
  v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v5[1] = v6;
  QuadPart = v6.QuadPart;
  v8 = *(unsigned int *)(v3 + 1560);
  if ( v1 != _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 8 * v8 + 1568), 0LL, v1) )
  {
    WdLogSingleEntry2(1LL, v4, v1);
    DxgCoreInterface[85](0LL, 0x40000LL, 0xFFFFFFFFLL, L"Context running queue is inconsistant", v4, v1, 0LL, 0LL, 0LL);
  }
  *(_QWORD *)(v3 + 224) = v1;
  *(_DWORD *)(v3 + 1560) = ((_BYTE)v8 + 1) & 0xF;
  v9 = *(_QWORD *)(a1 + 56);
  if ( v9 )
  {
    *(_QWORD *)(*(_QWORD *)(v9 + 88) + 168LL) = *(_QWORD *)(v9 + 112);
    v5[3] = *(LARGE_INTEGER *)(v9 + 112);
    _InterlockedAdd((volatile signed __int32 *)(v9 + 128), 1u);
    v10 = *(_QWORD *)(v9 + 88);
    v11 = *(_QWORD *)(*(_QWORD *)(v10 + 96) + 24LL);
    v26 = 0LL;
    v25 = 0LL;
    if ( (*(_DWORD *)(v10 + 184) & 4) == 0 )
    {
      WdLogSingleEntry3(4LL, v11, v10, *(unsigned int *)(v9 + 112));
      v12 = *(_DWORD *)(v10 + 184) | 4;
      *(_QWORD *)(v10 + 656) = v9;
      *(_DWORD *)(v10 + 184) = v12;
    }
    v5 = v29;
  }
  if ( (*(_DWORD *)(a1 + 92) & 0x200) != 0 )
    _InterlockedAdd((volatile signed __int32 *)(v4 + 812), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v4 + 728), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v3 + 2896), 0xFFFFFFFF);
  VidSchiStopExecutionTimeAtThisPriority(
    (struct _VIDSCH_NODE *)v3,
    *(_DWORD *)(v1 + 404),
    QuadPart,
    PerformanceFrequency.QuadPart);
  v13 = *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v3 + 1560) + 1568);
  if ( v13 )
  {
    v14 = *(unsigned int *)(v13 + 404);
    v15 = gulPriorityToYieldPriorityBand[v14];
    if ( gulPriorityToYieldPriorityBand[v14] )
    {
      v16 = (unsigned __int64 *)(v3 + 1936 + 8 * v15);
      do
      {
        if ( *(v16 - 4) )
          *v16 = QuadPart;
        --v16;
        --v15;
      }
      while ( v15 );
    }
  }
  if ( *(int *)(v3 + 2880) > 0 )
    RtlSetBitEx(v4 + 488, *(unsigned __int16 *)(v3 + 4));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 788), 0xFFFFFFFF) == 1 )
  {
    *(_DWORD *)(v1 + 184) &= ~8u;
    if ( (*(_DWORD *)(v1 + 184) & 0x20) != 0 )
      *(_DWORD *)(v1 + 184) &= ~0x20u;
    if ( (*(_DWORD *)(v1 + 184) & 0x10) != 0 )
      *(_DWORD *)(v1 + 184) &= ~0x10u;
    if ( (*(_DWORD *)(v1 + 184) & 0x40) != 0 )
      *(_DWORD *)(v1 + 184) &= ~0x40u;
    *(_DWORD *)(v1 + 184) &= ~2u;
    v17 = VidSchiCompleteRewindPacket(v1, 1);
    v18 = *(_DWORD *)(v1 + 184);
    v19 = v17;
    v28 = 0LL;
    v27 = 0LL;
    if ( (v18 & 2) == 0 )
    {
      v20 = *(struct _VIDSCH_CONTEXT **)(v1 + 496);
      if ( v20 )
        VidSchiDecrementContextReference(v20);
      *(_QWORD *)(v1 + 496) = 0LL;
    }
    --*(_DWORD *)(v3 + 4LL * *(unsigned int *)(v1 + 404) + 1776);
    v21 = *(unsigned int *)(v1 + 404);
    if ( !*(_DWORD *)(v3 + 4 * v21 + 1776) )
      *(_DWORD *)(v3 + 1772) &= ~(1 << v21);
    VidSchiFinishMeasuringPreemptionTime(v1);
  }
  else
  {
    v19 = 0;
  }
  v5[2] = *(LARGE_INTEGER *)(a1 + 104);
  _m_prefetchw((const void *)(v3 + 96));
  while ( _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v3 + 96),
            *(_QWORD *)(a1 + 104),
            *(_QWORD *)(v3 + 96)) != *(_QWORD *)(a1 + 104) )
    ;
  if ( bTracingEnabled )
    VidSchiAddGpuWorkEntry(*(struct _VIDSCH_CONTEXT **)(a1 + 48), 0);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  VidSchiProfilePerformanceTick(11LL, v4, v3, 0LL, 0LL, 0LL, a1, 0LL);
  v22 = *(struct _KEVENT **)(a1 + 200);
  if ( v22 )
    KeSetEvent(v22, 0, 0);
  VidSchiSignalRegisteredEvent(v4, v1 + 376);
  VidSchiSignalRegisteredEvent(v4, v3 + 408);
  VidSchiSignalRegisteredEvent(v4, v4 + 1640);
  *(_QWORD *)(v1 + 352) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v1 + 320), 0, 0);
  *(_QWORD *)(v3 + 272) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v3 + 240), 0, 0);
  *(_QWORD *)(v4 + 1448) = MEMORY[0xFFFFF78000000320];
  result = KeSetEvent((PRKEVENT)(v4 + 1416), 0, 0);
  if ( v19 )
  {
    *(_QWORD *)(v4 + 1224) = MEMORY[0xFFFFF78000000320];
    return KeSetEvent((PRKEVENT)(v4 + 1192), 0, 0);
  }
  return result;
}
