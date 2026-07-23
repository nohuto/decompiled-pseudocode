/*
 * XREFs of KeSetProcessPpmPolicy @ 0x140356AB0
 * Callers:
 *     PspSetProcessPpmPolicy @ 0x1407C8C40 (PspSetProcessPpmPolicy.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140246750 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiComputeHeteroThreadQos @ 0x1402B0DC0 (KiComputeHeteroThreadQos.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140307790 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiSetThreadQosLevelUnsafe @ 0x140461FF8 (KiSetThreadQosLevelUnsafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeSetProcessPpmPolicy(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // r12
  int v5; // edi
  signed __int32 v6; // ett
  _QWORD *v7; // rax
  __int64 v8; // rbx
  _QWORD *v9; // rax
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v12; // rax
  char v13; // r15
  _QWORD *v14; // rdi
  volatile signed __int32 *v15; // r14
  char v16; // al
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rsi
  __int64 v20; // rax
  int v21; // ecx
  _BYTE *v22; // rax
  unsigned int v23; // ecx
  _QWORD *v24; // rdx
  __int64 v25; // r8
  int v26; // ecx
  _BYTE *v27; // rax
  unsigned int v28; // ecx
  _QWORD *v29; // rdx
  __int64 v30; // r8
  unsigned __int8 v31; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v33; // r8
  int v34; // eax
  bool v35; // zf
  _QWORD *v36; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v37; // [rsp+28h] [rbp-20h] BYREF
  _QWORD *v38; // [rsp+30h] [rbp-18h]
  PEX_SPIN_LOCK SpinLock; // [rsp+38h] [rbp-10h]
  int v40; // [rsp+90h] [rbp+48h] BYREF
  int v41; // [rsp+98h] [rbp+50h] BYREF
  _QWORD *v42; // [rsp+A0h] [rbp+58h]
  __int64 v43; // [rsp+A8h] [rbp+60h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v12) = 4;
    if ( CurrentIrql != 2 )
      v12 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v12;
  }
  SpinLock = (PEX_SPIN_LOCK)(a1 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  v5 = a2 << 7;
  do
    v6 = *(_DWORD *)(a1 + 632);
  while ( v6 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 632), v5 | v6 & 0xFFFFF87F, v6) );
  v43 = 0LL;
  v7 = *(_QWORD **)(a1 + 48);
  v38 = (_QWORD *)(a1 + 48);
  v42 = v7;
  if ( v7 == (_QWORD *)(a1 + 48) )
    goto LABEL_9;
  do
  {
    v41 = 0;
    v8 = (__int64)(v7 - 95);
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v41);
      while ( *(_QWORD *)(v8 + 64) );
    }
    if ( (unsigned int)KiComputeHeteroThreadQos(v8, 0LL) == (unsigned __int8)*(_DWORD *)(v8 + 512) )
      goto LABEL_8;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v13 = *(_BYTE *)(v8 + 388);
          v14 = 0LL;
          v15 = 0LL;
          if ( v13 == 1 )
            break;
          switch ( *(_BYTE *)(v8 + 388) )
          {
            case 2:
LABEL_26:
              v17 = *(unsigned int *)(v8 + 536);
              if ( (int)v17 >= 0 )
              {
                v14 = (_QWORD *)KiProcessorBlock[v17];
                KiAcquirePrcbLocksForIsolationUnit((__int64)v14, 0, &v43);
                if ( v8 == v14[1] )
                  goto LABEL_45;
                goto LABEL_18;
              }
              break;
            case 3:
              v18 = *(unsigned int *)(v8 + 536);
              if ( (int)v18 >= 0 )
              {
                v14 = (_QWORD *)KiProcessorBlock[v18];
                KiAcquirePrcbLocksForIsolationUnit((__int64)v14, 0, &v43);
                if ( v8 == v14[2] )
                  goto LABEL_45;
                if ( *(_BYTE *)(v8 + 388) == 3 && *(_DWORD *)(v8 + 536) == (_DWORD)v18 )
                  __fastfail(0x1Eu);
                goto LABEL_18;
              }
              break;
            case 5:
              v16 = *(_BYTE *)(v8 + 112) & 7;
              if ( v16 == 1 || (unsigned __int8)(v16 - 3) <= 3u )
                goto LABEL_45;
              v13 = 2;
              goto LABEL_26;
            default:
              goto LABEL_45;
          }
        }
        v19 = *(unsigned int *)(v8 + 536);
        if ( (int)v19 < 0 )
          break;
        v14 = (_QWORD *)KiProcessorBlock[v19];
        KiAcquirePrcbLocksForIsolationUnit((__int64)v14, 0, &v43);
        if ( *(_BYTE *)(v8 + 388) == 1 && *(_DWORD *)(v8 + 536) == (_DWORD)v19 )
          goto LABEL_45;
LABEL_18:
        KiReleasePrcbLocksForIsolationUnit(&v43);
      }
      v20 = (unsigned int)v19;
      LODWORD(v20) = v19 & 0x7FFFFFFF;
      v40 = 0;
      v15 = *(volatile signed __int32 **)(KiProcessorBlock[v20] + 34888);
      while ( _interlockedbittestandset64(v15, 0LL) )
      {
        do
          KeYieldProcessorEx(&v40);
        while ( *(_QWORD *)v15 );
      }
      if ( *(_BYTE *)(v8 + 388) == 1 && *(_DWORD *)(v8 + 536) == (_DWORD)v19 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)v15, 0LL);
    }
    v14 = 0LL;
LABEL_45:
    KiSetThreadQosLevelUnsafe(v8);
    if ( v13 == 2 )
    {
      if ( v14[2] )
        goto LABEL_65;
      v26 = *(_DWORD *)(v8 + 120) >> 1;
      v37 = v14;
      if ( (v26 & 1) != 0 )
      {
        v27 = (_BYTE *)v14[4363];
        v28 = (unsigned __int8)*v27;
        v29 = v27 + 8;
        if ( !*v27 )
          goto LABEL_65;
      }
      else
      {
        v29 = &v37;
        v28 = 1;
      }
      v30 = v28;
      do
      {
        if ( KeHeteroSystem )
          *(_BYTE *)(*(_QWORD *)(*v29 + 56LL) + 64LL) ^= (*(_BYTE *)(v8 + 512) ^ *(_BYTE *)(*(_QWORD *)(*v29 + 56LL)
                                                                                          + 64LL)) & 7;
        ++v29;
        --v30;
      }
      while ( v30 );
    }
    else
    {
      if ( v13 != 3 )
        goto LABEL_65;
      v21 = *(_DWORD *)(v8 + 120) >> 1;
      v36 = v14;
      if ( (v21 & 1) != 0 )
      {
        v22 = (_BYTE *)v14[4363];
        v23 = (unsigned __int8)*v22;
        v24 = v22 + 8;
        if ( !*v22 )
          goto LABEL_65;
      }
      else
      {
        v24 = &v36;
        v23 = 1;
      }
      v25 = v23;
      do
      {
        if ( KeHeteroSystem )
          *(_BYTE *)(*(_QWORD *)(*v24 + 56LL) + 64LL) ^= (*(_BYTE *)(v8 + 512) ^ *(_BYTE *)(*(_QWORD *)(*v24 + 56LL)
                                                                                          + 64LL)) & 7;
        ++v24;
        --v25;
      }
      while ( v25 );
    }
LABEL_65:
    if ( v14 )
      KiReleasePrcbLocksForIsolationUnit(&v43);
    if ( v15 )
      _InterlockedAnd64((volatile signed __int64 *)v15, 0LL);
LABEL_8:
    v9 = v42;
    *(_QWORD *)(v8 + 64) = 0LL;
    v7 = (_QWORD *)*v9;
    v42 = v7;
  }
  while ( v7 != v38 );
LABEL_9:
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  if ( (_DWORD)KiIrqlFlags )
  {
    v31 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v31 <= 0xFu && CurrentIrql <= 0xFu && v31 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v33 = CurrentPrcb->SchedulerAssist;
      v34 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v35 = (v34 & v33[5]) == 0;
      v33[5] &= v34;
      if ( v35 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
