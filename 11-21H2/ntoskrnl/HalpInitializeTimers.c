/*
 * XREFs of HalpInitializeTimers @ 0x1403BBAC8
 * Callers:
 *     HalpTimerInitSystem @ 0x1403BB0A0 (HalpTimerInitSystem.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x140303720 (HalpTimerGetInternalData.c)
 *     HalpFindTimer @ 0x1403ACEFC (HalpFindTimer.c)
 *     HalpTimerCreateReferencePage @ 0x1403BBC5C (HalpTimerCreateReferencePage.c)
 *     HalpTimerSelectRoles @ 0x1403BC388 (HalpTimerSelectRoles.c)
 *     HalpTimerRegisterBuiltinPluginsCommon @ 0x1403BCA0C (HalpTimerRegisterBuiltinPluginsCommon.c)
 *     HalpTimerBuildKnownResourceIdString @ 0x1403BE3D0 (HalpTimerBuildKnownResourceIdString.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HalpTimerCalculateMaximumAllowableDrift @ 0x14050C520 (HalpTimerCalculateMaximumAllowableDrift.c)
 */

__int64 __fastcall HalpInitializeTimers(__int64 a1)
{
  __int64 v2; // rbx
  __int64 InternalData; // rax
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // r9d
  ULONG_PTR *Timer; // rax
  ULONG_PTR v9; // r8
  int v10; // ecx
  int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int ReferencePage; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  _BYTE v23[136]; // [rsp+30h] [rbp-98h] BYREF
  int v24; // [rsp+B8h] [rbp-10h]
  int v25; // [rsp+BCh] [rbp-Ch]

  memset(v23, 0, sizeof(v23));
  HalpTimerLoaderBlock = a1;
  v2 = HalpStallCounter;
  HalpOriginalStallTimer = HalpStallCounter;
  InternalData = HalpTimerGetInternalData(HalpStallCounter);
  v4 = (*(__int64 (__fastcall **)(__int64))(v2 + 104))(InternalData);
  v7 = v4;
  if ( v4 < 0 )
  {
    *(_DWORD *)(v2 + 256) = v4;
    HalpTimerLastProblem = 15;
    *(_DWORD *)(v2 + 252) = 15;
    *(_QWORD *)(v2 + 264) = "minkernel\\hals\\lib\\timers\\common\\timer.c";
    *(_DWORD *)(v2 + 272) = 1552;
    goto LABEL_11;
  }
  v7 = HalpTimerRegisterBuiltinPluginsCommon(1LL, v5, v6, (unsigned int)v4);
  if ( v7 < 0 )
  {
    HalpTimerLastProblem = 14;
    goto LABEL_11;
  }
  Timer = HalpFindTimer(5, 0, 0, 0, 1);
  if ( Timer )
  {
    v9 = Timer[36];
    v10 = *((_DWORD *)Timer + 57);
    v11 = *((_DWORD *)Timer + 71);
    v24 = v10;
    v12 = *(unsigned __int16 *)(v9 + 24);
    v13 = *(_QWORD *)(v9 + 32);
    v25 = v11;
    HalpTimerBuildKnownResourceIdString(v23, v12 >> 1, v13);
  }
  v14 = HalpTimerSelectRoles();
  v7 = v14;
  if ( v14 < 0
    || (ReferencePage = HalpTimerCreateReferencePage(v16, v15, v17, (unsigned int)v14),
        v7 = ReferencePage,
        ReferencePage < 0) )
  {
LABEL_11:
    KeBugCheckEx(0x5Cu, 0x110uLL, 0x5250631uLL, HalpTimerLastProblem, v7);
  }
  HalpOriginalPerformanceCounter = HalpPerformanceCounter;
  qword_140C4E458 = (__int64)HalpTimerDpcRoutine;
  qword_140C4E3B0 = (__int64)&qword_140C4E3A8;
  qword_140C4E3A8 = (__int64)&qword_140C4E3A8;
  off_140C01CF8[0] = HalpTimerReportIdleStateUsage;
  HalpTimerPeriodicTimer = 8LL;
  off_140C01CF0[0] = (__int64 (__fastcall *)())HalpTimerQueryWakeTime;
  HalpTimerDpc = 275;
  qword_140C4E460 = 0LL;
  qword_140C4E478 = 0LL;
  qword_140C4E450 = 0LL;
  qword_140C4E3B8 = 0LL;
  dword_140C4E3DC = 0;
  word_140C4E3D8 = 0;
  if ( HalpAlwaysOnCounter )
    HalpTimerMaximumAllowableDrift = HalpTimerCalculateMaximumAllowableDrift(v20, v19, v21, (unsigned int)ReferencePage);
  return (unsigned int)v7;
}
