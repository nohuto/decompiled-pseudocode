/*
 * XREFs of KiRemoveEntryTimer @ 0x1402E40E0
 * Callers:
 *     KiRetireDpcList @ 0x1402A8980 (KiRetireDpcList.c)
 *     KiInsertTimerTable @ 0x1402B7800 (KiInsertTimerTable.c)
 *     KiSetTimerEx @ 0x1402E2D20 (KiSetTimerEx.c)
 *     ExpSetTimerObject @ 0x1402E33D0 (ExpSetTimerObject.c)
 *     KiExpireTimerTable @ 0x1403954A0 (KiExpireTimerTable.c)
 *     KiAdjustTimerDueTimes @ 0x1403AD6AC (KiAdjustTimerDueTimes.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiRemoveEntryTimer(__int64 a1, __int64 a2, unsigned int a3, volatile signed __int64 **a4)
{
  unsigned int v4; // r10d
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  __int64 result; // rax
  __int64 v13; // r14
  struct _KPRCB *CurrentPrcb; // r15
  _DWORD *SchedulerAssist; // rcx
  volatile signed __int32 *v16; // rbx
  __int64 v17; // rcx
  unsigned int v18; // edx
  volatile signed __int32 *v19; // rcx
  struct _KPRCB *v20; // rcx
  _DWORD *v21; // rdx
  struct _KPRCB *v22; // rcx
  _DWORD *v23; // rdx
  struct _KPRCB *v24; // r15
  _DWORD *v25; // rcx
  struct _KPRCB *v26; // r15
  _DWORD *v27; // rcx
  _DWORD *v28; // rcx
  _DWORD *v29; // rcx
  _DWORD *v30; // rcx
  _DWORD *v31; // rcx
  _DWORD *v32; // rcx
  int v33; // eax
  bool v34; // zf
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  _DWORD *v44; // rcx
  int v45; // eax
  _DWORD *v46; // rcx
  int v47; // eax
  volatile signed __int32 *v48; // [rsp+20h] [rbp-48h]
  int v49; // [rsp+70h] [rbp+8h] BYREF
  int v50; // [rsp+78h] [rbp+10h] BYREF
  int v51; // [rsp+80h] [rbp+18h] BYREF

  v4 = *(unsigned __int16 *)(a2 + 58);
  v6 = *(_QWORD *)(a2 + 32);
  v7 = a2 + 32;
  v8 = a3;
  v10 = a3;
  v11 = 32 * (((unsigned __int64)v4 << 8) + a3 + 16LL);
  result = *(_QWORD *)(v7 + 8);
  v13 = 32 * (((v4 ^ 1LL) << 8) + a3 + 16LL);
  if ( *(_QWORD *)(v6 + 8) != v7 || *(_QWORD *)result != v7 )
    __fastfail(3u);
  *(_QWORD *)result = v6;
  *(_QWORD *)(v6 + 8) = result;
  if ( result == v6 )
  {
    *(_DWORD *)(v11 + a1 + 28) = -1;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( !(_WORD)v4 )
    {
      v51 = 0;
      v16 = (volatile signed __int32 *)(a1 + 32 * (a3 + 272LL));
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v33 = SchedulerAssist[6];
          v34 = v33 == -1;
          result = (unsigned int)(v33 + 1);
          SchedulerAssist[6] = result;
          if ( v34 )
LABEL_36:
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64(v16, 0LL) )
      {
        v28 = CurrentPrcb->SchedulerAssist;
        if ( v28 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v35 = v28[6] - 1;
            v28[6] = v35;
            if ( !v35 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
        {
          KeYieldProcessorEx(&v51);
          result = *(_QWORD *)v16;
        }
        while ( *(_QWORD *)v16 );
        v29 = CurrentPrcb->SchedulerAssist;
        if ( v29 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v36 = v29[6];
            v34 = v36 == -1;
            result = (unsigned int)(v36 + 1);
            v29[6] = result;
            if ( v34 )
              goto LABEL_36;
          }
        }
      }
      goto LABEL_7;
    }
    v16 = (volatile signed __int32 *)(a1 + 32 * (a3 + 16LL));
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v37 = SchedulerAssist[6];
        v34 = v37 == -1;
        result = (unsigned int)(v37 + 1);
        SchedulerAssist[6] = result;
        if ( v34 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset64(v16, 0LL) )
    {
      v30 = CurrentPrcb->SchedulerAssist;
      if ( v30 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v38 = v30[6] - 1;
          v30[6] = v38;
          if ( !v38 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      _mm_pause();
    }
    else if ( v16 )
    {
LABEL_7:
      if ( *(_DWORD *)(v11 + a1 + 28) == -1 && *(_DWORD *)(v13 + a1 + 28) == -1 )
      {
        v17 = qword_140D07E98[2 * *(unsigned __int8 *)(a1 - 15152)];
        if ( KiSerializeTimerExpiration )
        {
          v18 = v8 & 0x3F;
          v19 = (volatile signed __int32 *)(v17 + 8LL * ((unsigned int)v8 >> 6));
        }
        else
        {
          v18 = *(unsigned __int8 *)(a1 - 15151);
          v19 = (volatile signed __int32 *)((v10 << 6) + v17);
        }
        result = v18;
        _interlockedbittestandreset64(v19, v18);
      }
      _InterlockedAnd64((volatile signed __int64 *)v16, 0LL);
      v20 = KeGetCurrentPrcb();
      v21 = v20->SchedulerAssist;
      if ( v21 && v20->NestingLevel <= 1u )
      {
        result = (unsigned int)(v21[6] - 1);
        v21[6] = result;
        if ( !(_DWORD)result )
          return KiRemoveSystemWorkPriorityKick(v20);
      }
      return result;
    }
    _InterlockedAnd64(*a4, 0LL);
    v22 = KeGetCurrentPrcb();
    v23 = v22->SchedulerAssist;
    if ( v23 )
    {
      if ( v22->NestingLevel <= 1u )
      {
        v39 = v23[6] - 1;
        v23[6] = v39;
        if ( !v39 )
          KiRemoveSystemWorkPriorityKick(v22);
      }
    }
    v24 = KeGetCurrentPrcb();
    v49 = 0;
    v25 = v24->SchedulerAssist;
    if ( v25 )
    {
      if ( v24->NestingLevel <= 1u )
      {
        v40 = v25[6];
        v25[6] = v40 + 1;
        if ( v40 == -1 )
LABEL_54:
          KiRemoveSystemWorkPriorityKick(v24);
      }
    }
    while ( _interlockedbittestandset64(v16, 0LL) )
    {
      v31 = v24->SchedulerAssist;
      if ( v31 )
      {
        if ( v24->NestingLevel <= 1u )
        {
          v41 = v31[6] - 1;
          v31[6] = v41;
          if ( !v41 )
            KiRemoveSystemWorkPriorityKick(v24);
        }
      }
      do
        KeYieldProcessorEx(&v49);
      while ( *(_QWORD *)v16 );
      v32 = v24->SchedulerAssist;
      if ( v32 )
      {
        if ( v24->NestingLevel <= 1u )
        {
          v42 = v32[6];
          v32[6] = v42 + 1;
          if ( v42 == -1 )
            goto LABEL_54;
        }
      }
    }
    v26 = KeGetCurrentPrcb();
    result = a1 + 32 * (v8 + 272);
    v50 = 0;
    v48 = (volatile signed __int32 *)result;
    v27 = v26->SchedulerAssist;
    if ( v27 )
    {
      if ( v26->NestingLevel <= 1u )
      {
        v43 = v27[6];
        v34 = v43 == -1;
        result = (unsigned int)(v43 + 1);
        v27[6] = result;
        if ( v34 )
LABEL_72:
          result = KiRemoveSystemWorkPriorityKick(v26);
      }
    }
    while ( _interlockedbittestandset64(v48, 0LL) )
    {
      v44 = v26->SchedulerAssist;
      if ( v44 )
      {
        if ( v26->NestingLevel <= 1u )
        {
          v45 = v44[6] - 1;
          v44[6] = v45;
          if ( !v45 )
            KiRemoveSystemWorkPriorityKick(v26);
        }
      }
      do
      {
        KeYieldProcessorEx(&v50);
        result = *(_QWORD *)v48;
      }
      while ( *(_QWORD *)v48 );
      v46 = v26->SchedulerAssist;
      if ( v46 )
      {
        if ( v26->NestingLevel <= 1u )
        {
          v47 = v46[6];
          v34 = v47 == -1;
          result = (unsigned int)(v47 + 1);
          v46[6] = result;
          if ( v34 )
            goto LABEL_72;
        }
      }
    }
    *a4 = (volatile signed __int64 *)v48;
    v16 = (volatile signed __int32 *)(a1 + 32 * (v8 + 16));
    goto LABEL_7;
  }
  return result;
}
