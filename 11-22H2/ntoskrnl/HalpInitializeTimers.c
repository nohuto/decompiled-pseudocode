/*
 * XREFs of HalpInitializeTimers @ 0x1403A39D4
 * Callers:
 *     HalpTimerInitSystem @ 0x14037B080 (HalpTimerInitSystem.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x1402C4540 (HalpTimerGetInternalData.c)
 *     HalpTimerBuildKnownResourceIdString @ 0x140379414 (HalpTimerBuildKnownResourceIdString.c)
 *     HalpTimerSelectRoles @ 0x14037A8FC (HalpTimerSelectRoles.c)
 *     HalpFindTimer @ 0x14037B658 (HalpFindTimer.c)
 *     HalpTimerCalculateMaximumAllowableDrift @ 0x1403A3B70 (HalpTimerCalculateMaximumAllowableDrift.c)
 *     HalpTimerRegisterBuiltinPluginsCommon @ 0x1403A3BB8 (HalpTimerRegisterBuiltinPluginsCommon.c)
 *     HalpTimerCreateReferencePage @ 0x1403A3D48 (HalpTimerCreateReferencePage.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     memset @ 0x140435400 (memset.c)
 */

__int64 __fastcall HalpInitializeTimers(__int64 a1)
{
  __int64 v2; // rbx
  __int64 InternalData; // rax
  int v4; // r9d
  ULONG_PTR *Timer; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  ULONG_PTR v8; // r8
  int v9; // ecx
  int v10; // eax
  unsigned int v11; // edx
  wchar_t *v12; // r8
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int ReferencePage; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  _BYTE v22[136]; // [rsp+30h] [rbp-98h] BYREF
  int v23; // [rsp+B8h] [rbp-10h]
  int v24; // [rsp+BCh] [rbp-Ch]

  memset(v22, 0, sizeof(v22));
  HalpTimerLoaderBlock = a1;
  v2 = HalpStallCounter;
  HalpOriginalStallTimer = HalpStallCounter;
  InternalData = HalpTimerGetInternalData(HalpStallCounter);
  v4 = (*(__int64 (__fastcall **)(__int64))(v2 + 104))(InternalData);
  if ( v4 < 0 )
  {
    *(_DWORD *)(v2 + 256) = v4;
    HalpTimerLastProblem = 15;
    *(_DWORD *)(v2 + 252) = 15;
    *(_QWORD *)(v2 + 264) = "minkernel\\hals\\lib\\timers\\common\\timer.c";
    *(_DWORD *)(v2 + 272) = 1556;
    goto LABEL_12;
  }
  v4 = HalpTimerRegisterBuiltinPluginsCommon(1LL);
  if ( v4 < 0 )
  {
    HalpTimerLastProblem = 14;
    goto LABEL_12;
  }
  Timer = HalpFindTimer(5, 0, 0, 0, 1);
  if ( Timer )
  {
    v8 = Timer[36];
    v9 = *((_DWORD *)Timer + 57);
    v10 = *((_DWORD *)Timer + 71);
    v23 = v9;
    v11 = *(unsigned __int16 *)(v8 + 24);
    v12 = *(wchar_t **)(v8 + 32);
    v24 = v10;
    HalpTimerBuildKnownResourceIdString((__int64)v22, v11 >> 1, v12);
  }
  v13 = HalpTimerSelectRoles(v7, v6);
  v4 = v13;
  if ( v13 < 0
    || (ReferencePage = HalpTimerCreateReferencePage(v15, v14, v16, (unsigned int)v13),
        v4 = ReferencePage,
        ReferencePage < 0) )
  {
LABEL_12:
    KeBugCheckEx(0x5Cu, 0x110uLL, 0x5250631uLL, HalpTimerLastProblem, v4);
  }
  HalpOriginalPerformanceCounter = HalpPerformanceCounter;
  qword_140C645F8 = (__int64)HalpTimerDpcRoutine;
  qword_140C64550 = (__int64)&qword_140C64548;
  qword_140C64548 = (__int64)&qword_140C64548;
  off_140C01AB8[0] = HalpTimerReportIdleStateUsage;
  HalpTimerPeriodicTimer = 8LL;
  off_140C01AB0[0] = HalpTimerQueryWakeTime;
  HalpTimerDpc = 275;
  qword_140C64600 = 0LL;
  qword_140C64618 = 0LL;
  qword_140C645F0 = 0LL;
  qword_140C64558 = 0LL;
  dword_140C6457C = 0;
  word_140C64578 = 0;
  if ( HalpAlwaysOnCounter )
    HalpTimerMaximumAllowableDrift = HalpTimerCalculateMaximumAllowableDrift(v19, v18, v20, (unsigned int)ReferencePage);
  return (unsigned int)v4;
}
