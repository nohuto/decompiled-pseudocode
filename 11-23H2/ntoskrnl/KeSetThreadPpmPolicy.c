/*
 * XREFs of KeSetThreadPpmPolicy @ 0x140359F1C
 * Callers:
 *     PspSetThreadPpmPolicy @ 0x1407CD4F0 (PspSetThreadPpmPolicy.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140246840 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiComputeHeteroThreadQos @ 0x1402B1080 (KiComputeHeteroThreadQos.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140307B50 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetThreadQosLevelUnsafe @ 0x140462A58 (KiSetThreadQosLevelUnsafe.c)
 */

__int64 __fastcall KeSetThreadPpmPolicy(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // r15
  int v5; // edi
  signed __int32 v6; // ett
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v9; // rax
  char v10; // r12
  _QWORD *v11; // rdi
  volatile signed __int32 *v12; // rsi
  char v13; // al
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // r14
  __int64 v17; // rax
  int v18; // ecx
  _BYTE *v19; // rax
  unsigned int v20; // ecx
  _QWORD *v21; // rdx
  __int64 v22; // r8
  int v23; // ecx
  _BYTE *v24; // rax
  unsigned int v25; // ecx
  _QWORD *v26; // rdx
  __int64 v27; // r8
  unsigned __int8 v28; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v30; // r8
  int v31; // eax
  bool v32; // zf
  _QWORD *v33; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v34; // [rsp+28h] [rbp-10h] BYREF
  int v35; // [rsp+80h] [rbp+48h] BYREF
  int v36; // [rsp+88h] [rbp+50h] BYREF
  __int64 v37; // [rsp+98h] [rbp+60h] BYREF

  v37 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v9) = 4;
    if ( CurrentIrql != 2 )
      v9 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v9;
  }
  v36 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v36);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v5 = a2 << 8;
  do
    v6 = *(_DWORD *)(a1 + 956);
  while ( v6 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 956), v5 | v6 & 0xFFFFF8FF, v6) );
  if ( (unsigned int)KiComputeHeteroThreadQos(a1, 0LL) == (unsigned __int8)*(_DWORD *)(a1 + 512) )
    goto LABEL_7;
  while ( 1 )
  {
    while ( 1 )
    {
      v10 = *(_BYTE *)(a1 + 388);
      v11 = 0LL;
      v12 = 0LL;
      if ( v10 == 1 )
        break;
      switch ( *(_BYTE *)(a1 + 388) )
      {
        case 2:
LABEL_24:
          v14 = *(unsigned int *)(a1 + 536);
          if ( (int)v14 >= 0 )
          {
            v11 = (_QWORD *)KiProcessorBlock[v14];
            KiAcquirePrcbLocksForIsolationUnit((__int64)v11, 0, &v37);
            if ( a1 == v11[1] )
              goto LABEL_42;
            goto LABEL_16;
          }
          break;
        case 3:
          v15 = *(unsigned int *)(a1 + 536);
          if ( (int)v15 >= 0 )
          {
            v11 = (_QWORD *)KiProcessorBlock[v15];
            KiAcquirePrcbLocksForIsolationUnit((__int64)v11, 0, &v37);
            if ( a1 == v11[2] )
              goto LABEL_42;
            if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v15 )
              __fastfail(0x1Eu);
LABEL_16:
            KiReleasePrcbLocksForIsolationUnit(&v37);
          }
          break;
        case 5:
          v13 = *(_BYTE *)(a1 + 112) & 7;
          if ( v13 == 1 || (unsigned __int8)(v13 - 3) <= 3u )
            goto LABEL_42;
          v10 = 2;
          goto LABEL_24;
        default:
          goto LABEL_42;
      }
    }
    v16 = *(unsigned int *)(a1 + 536);
    if ( (int)v16 >= 0 )
      break;
    v17 = (unsigned int)v16;
    LODWORD(v17) = v16 & 0x7FFFFFFF;
    v35 = 0;
    v12 = *(volatile signed __int32 **)(KiProcessorBlock[v17] + 34888);
    while ( _interlockedbittestandset64(v12, 0LL) )
    {
      do
        KeYieldProcessorEx(&v35);
      while ( *(_QWORD *)v12 );
    }
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v16 )
      goto LABEL_42;
    _InterlockedAnd64((volatile signed __int64 *)v12, 0LL);
  }
  v11 = (_QWORD *)KiProcessorBlock[v16];
  KiAcquirePrcbLocksForIsolationUnit((__int64)v11, 0, &v37);
  if ( *(_BYTE *)(a1 + 388) != 1 || *(_DWORD *)(a1 + 536) != (_DWORD)v16 )
    goto LABEL_16;
LABEL_42:
  KiSetThreadQosLevelUnsafe(a1);
  if ( v10 == 2 )
  {
    if ( v11[2] )
      goto LABEL_62;
    v23 = *(_DWORD *)(a1 + 120) >> 1;
    v34 = v11;
    if ( (v23 & 1) != 0 )
    {
      v24 = (_BYTE *)v11[4363];
      v25 = (unsigned __int8)*v24;
      v26 = v24 + 8;
      if ( !*v24 )
        goto LABEL_62;
    }
    else
    {
      v26 = &v34;
      v25 = 1;
    }
    v27 = v25;
    do
    {
      if ( KeHeteroSystem )
        *(_BYTE *)(*(_QWORD *)(*v26 + 56LL) + 64LL) ^= (*(_BYTE *)(a1 + 512) ^ *(_BYTE *)(*(_QWORD *)(*v26 + 56LL) + 64LL)) & 7;
      ++v26;
      --v27;
    }
    while ( v27 );
  }
  else
  {
    if ( v10 != 3 )
      goto LABEL_62;
    v18 = *(_DWORD *)(a1 + 120) >> 1;
    v33 = v11;
    if ( (v18 & 1) != 0 )
    {
      v19 = (_BYTE *)v11[4363];
      v20 = (unsigned __int8)*v19;
      v21 = v19 + 8;
      if ( !*v19 )
        goto LABEL_62;
    }
    else
    {
      v21 = &v33;
      v20 = 1;
    }
    v22 = v20;
    do
    {
      if ( KeHeteroSystem )
        *(_BYTE *)(*(_QWORD *)(*v21 + 56LL) + 64LL) ^= (*(_BYTE *)(a1 + 512) ^ *(_BYTE *)(*(_QWORD *)(*v21 + 56LL) + 64LL)) & 7;
      ++v21;
      --v22;
    }
    while ( v22 );
  }
LABEL_62:
  if ( v11 )
    KiReleasePrcbLocksForIsolationUnit(&v37);
  if ( v12 )
    _InterlockedAnd64((volatile signed __int64 *)v12, 0LL);
LABEL_7:
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( (_DWORD)KiIrqlFlags )
  {
    v28 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v28 <= 0xFu && CurrentIrql <= 0xFu && v28 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v30 = CurrentPrcb->SchedulerAssist;
      v31 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v32 = (v31 & v30[5]) == 0;
      v30[5] &= v31;
      if ( v32 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
