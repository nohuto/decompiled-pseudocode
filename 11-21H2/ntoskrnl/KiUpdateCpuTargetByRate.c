/*
 * XREFs of KiUpdateCpuTargetByRate @ 0x140207CCC
 * Callers:
 *     KeSetSchedulingGroupCpuRates @ 0x1402077B0 (KeSetSchedulingGroupCpuRates.c)
 *     KeInsertSchedulingGroup @ 0x140208434 (KeInsertSchedulingGroup.c)
 *     KiUpdateChildrenCpuTarget @ 0x14057A9BC (KiUpdateChildrenCpuTarget.c)
 * Callees:
 *     KiCheckForEffectivePriorityChange @ 0x140208284 (KiCheckForEffectivePriorityChange.c)
 *     KiResetScb @ 0x140208368 (KiResetScb.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdateChildrenCpuTarget @ 0x14057A9BC (KiUpdateChildrenCpuTarget.c)
 */

char __fastcall KiUpdateCpuTargetByRate(unsigned __int16 *a1, char a2)
{
  char v2; // bl
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r13
  unsigned __int128 v7; // rax
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r14
  __int64 v10; // r15
  char v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rbp
  struct _KPRCB *v14; // rbx
  _DWORD *v15; // rcx
  struct _KPRCB *v16; // rcx
  _QWORD *v17; // rcx
  unsigned __int64 v18; // rax
  _DWORD *v19; // rcx
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v21; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 v23; // r8
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // r8
  int v26; // eax
  _DWORD *v27; // rcx
  int v28; // eax
  int v29; // eax
  int v30; // eax
  unsigned int v32; // [rsp+20h] [rbp-58h]
  bool v33; // [rsp+80h] [rbp+8h]
  int v35; // [rsp+90h] [rbp+18h] BYREF
  int v36; // [rsp+98h] [rbp+20h] BYREF

  v2 = a2;
  if ( *((_QWORD *)a1 + 12) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v35 = 0;
    v21 = KiProcessorBlock[0];
    while ( 1 )
    {
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v26 = SchedulerAssist[6];
          SchedulerAssist[6] = v26 + 1;
          if ( v26 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v21 + 48), 0LL) )
        break;
      v27 = CurrentPrcb->SchedulerAssist;
      if ( v27 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v28 = v27[6] - 1;
          v27[6] = v28;
          if ( !v28 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v35);
      while ( *(_QWORD *)(v21 + 48) );
    }
    v23 = *((_QWORD *)a1 + 67);
    v7 = *(_QWORD *)(v23 + 16) * (unsigned __int64)a1[1] * (unsigned __int128)0x346DC5D63886594BuLL;
    v8 = (unsigned __int64)*a1 * *(_QWORD *)(v23 + 8) / 0x2710;
    v9 = *(_QWORD *)(v23 + 16) * (unsigned __int64)a1[1] / 0x2710;
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 48), 0LL);
    v24 = KeGetCurrentPrcb();
    v25 = v24->SchedulerAssist;
    if ( v25 )
    {
      if ( v24->NestingLevel <= 1u )
      {
        LODWORD(v7) = v25[6] - 1;
        v25[6] = v7;
        if ( !(_DWORD)v7 )
          LOBYTE(v7) = KiRemoveSystemWorkPriorityKick(v24);
      }
    }
    v2 = a2;
  }
  else
  {
    v4 = (KiCyclesPerGeneration * (unsigned __int64)*a1 * (unsigned __int128)0x346DC5D63886594BuLL) >> 64;
    v5 = KiCyclesPerGeneration * a1[1];
    v6 = v4;
    v7 = v5 * (unsigned __int128)0x346DC5D63886594BuLL;
    v8 = v6 >> 11;
    v9 = v5 / 0x2710;
  }
  v32 = KeNumberProcessors_0;
  v10 = 0LL;
  v33 = v9 == KiCyclesPerGeneration;
  if ( KeMaximumProcessors )
  {
    v11 = 16 * (v9 == KiCyclesPerGeneration);
    do
    {
      v12 = KiProcessorBlock[v10];
      v13 = (__int64)&a1[212 * (unsigned int)v10 + 64];
      if ( v12 )
      {
        v14 = KeGetCurrentPrcb();
        v36 = 0;
        while ( 1 )
        {
          v15 = v14->SchedulerAssist;
          if ( v15 )
          {
            if ( v14->NestingLevel <= 1u )
            {
              v29 = v15[6];
              v15[6] = v29 + 1;
              if ( v29 == -1 )
                KiRemoveSystemWorkPriorityKick(v14);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v12 + 48), 0LL) )
            break;
          v19 = v14->SchedulerAssist;
          if ( v19 )
          {
            if ( v14->NestingLevel <= 1u )
            {
              v30 = v19[6] - 1;
              v19[6] = v30;
              if ( !v30 )
                KiRemoveSystemWorkPriorityKick(v14);
            }
          }
          do
            KeYieldProcessorEx(&v36);
          while ( *(_QWORD *)(v12 + 48) );
        }
        if ( !v33 && *(_BYTE *)(v12 + 33) )
        {
          v18 = v9 * v32;
          *((_QWORD *)a1 + 5) = v18;
          *((_QWORD *)a1 + 6) = v18;
        }
      }
      v2 = a2;
      LOBYTE(v7) = v11 | *(_BYTE *)(v13 + 112) & 0xEF;
      *(_QWORD *)(v13 + 8) = v8;
      *(_QWORD *)(v13 + 16) = v9;
      *(_BYTE *)(v13 + 112) = v7;
      if ( v12 )
      {
        if ( a2 )
        {
          *(_QWORD *)(v13 + 32) = 0LL;
          *(_QWORD *)(v13 + 48) = 0LL;
          LODWORD(v7) = *((_DWORD *)a1 + 1);
          if ( (v7 & 2) != 0 )
          {
            KiResetScb(v13, v12);
            LOBYTE(v7) = KiCheckForEffectivePriorityChange(v12, v13);
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 48), 0LL);
        v16 = KeGetCurrentPrcb();
        *((_QWORD *)&v7 + 1) = v16->SchedulerAssist;
        if ( *((_QWORD *)&v7 + 1) )
        {
          if ( v16->NestingLevel <= 1u )
          {
            LODWORD(v7) = *(_DWORD *)(*((_QWORD *)&v7 + 1) + 24LL) - 1;
            *(_DWORD *)(*((_QWORD *)&v7 + 1) + 24LL) = v7;
            if ( !(_DWORD)v7 )
              LOBYTE(v7) = KiRemoveSystemWorkPriorityKick(v16);
          }
        }
      }
      v10 = (unsigned int)(v10 + 1);
    }
    while ( (unsigned int)v10 < KeMaximumProcessors );
  }
  if ( v2 )
  {
    *(LARGE_INTEGER *)&v7 = KeQueryPerformanceCounter(0LL);
    *((_QWORD *)a1 + 3) = v7;
  }
  v17 = a1 + 40;
  if ( (_QWORD *)*v17 != v17 )
  {
    BYTE8(v7) = v2;
    LOBYTE(v7) = KiUpdateChildrenCpuTarget(v17, *((_QWORD *)&v7 + 1));
  }
  return v7;
}
