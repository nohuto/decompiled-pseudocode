/*
 * XREFs of ACPIBuildProcessDelayedDependencyPhase1 @ 0x1C002AB10
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteCommon @ 0x1C00095D8 (ACPIBuildCompleteCommon.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0010020 (WPP_RECORDER_SF_Lqss.c)
 */

__int64 __fastcall ACPIBuildProcessDelayedDependencyPhase1(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  signed __int32 v4; // r14d
  signed __int32 v5; // ebp
  __int64 *v6; // rax
  void *v7; // rax
  __int64 v8; // rdx
  void *v9; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  v3 = *(_QWORD *)(a1 + 80);
  v4 = *(_DWORD *)(v3 + 28);
  if ( (*(_QWORD *)(v1 + 8) & 0x80000000080LL) != 0 )
  {
    *(_DWORD *)(v3 + 48) = -1073741810;
    v4 = 2;
  }
  KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
  v5 = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(v3 + 20) &= ~0x20u;
  _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 24), v4, 1);
  _InterlockedAnd64((volatile signed __int64 *)(v1 + 1000), 0xFFFFFFFFFFDFFFFFuLL);
  v6 = (__int64 *)qword_1C0081638;
  if ( *(__int64 **)qword_1C0081638 != &AcpiBuildQueueList )
    __fastfail(3u);
  AcpiBuildDpcFlags |= 2u;
  *(_QWORD *)v3 = &AcpiBuildQueueList;
  *(_QWORD *)(v3 + 8) = v6;
  *v6 = v3;
  qword_1C0081638 = v3;
  KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
  *(_DWORD *)(a1 + 32) = 0;
  v7 = &unk_1C006FB8B;
  v8 = *(_QWORD *)(v1 + 8);
  v9 = &unk_1C006FB8B;
  if ( (v8 & 0x200000000000LL) != 0 )
  {
    v7 = *(void **)(v1 + 608);
    if ( (v8 & 0x400000000000LL) != 0 )
      v9 = *(void **)(v1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x33u,
      (__int64)&WPP_bdd8eb048f7f3443c553fdc981a7d4a4_Traceguids,
      0,
      v1,
      (__int64)v7,
      (__int64)v9);
    v5 = *(_DWORD *)(a1 + 32);
  }
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), v5);
  return 0LL;
}
