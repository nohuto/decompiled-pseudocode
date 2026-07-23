/*
 * XREFs of KiAbEntryGetLockedHeadEntry @ 0x14024C730
 * Callers:
 *     KiSwapThread @ 0x14023F3D0 (KiSwapThread.c)
 *     KiDispatchInterrupt @ 0x140249510 (KiDispatchInterrupt.c)
 *     KiAbProcessThreadLocks @ 0x1402BC320 (KiAbProcessThreadLocks.c)
 *     KiAbForceProcessLockEntry @ 0x1403CC428 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     RtlRbInsertNodeEx @ 0x14024CCA0 (RtlRbInsertNodeEx.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14025ABF0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14029CAB0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7AE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x1403190CC (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiAbCompareSnappedEntryState @ 0x14035F95C (KiAbCompareSnappedEntryState.c)
 *     ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x14046AFE8 (ExpTryConvertSharedSpinLockExclusiveInstrumented.c)
 */

_RTL_RB_TREE *__fastcall KiAbEntryGetLockedHeadEntry(__int64 a1, int a2, struct _KLOCK_QUEUE_HANDLE *a3)
{
  bool v3; // zf
  unsigned __int64 v7; // rcx
  volatile LONG *v8; // r14
  _RTL_RB_TREE *v9; // rsi
  __int64 v10; // r8
  int v11; // r15d
  unsigned __int64 Root; // rax
  unsigned __int64 v13; // rcx
  unsigned int v14; // ecx
  unsigned __int64 v15; // rcx
  volatile LONG i; // ecx
  unsigned __int64 v17; // rdx
  BOOLEAN v18; // al
  unsigned __int64 v19; // rax
  unsigned int v20; // eax
  unsigned __int64 v21; // rax
  _RTL_RB_TREE *v22; // rdi
  _BYTE *v23; // rsi
  __int64 v24; // rbx
  char v26; // cl
  _RTL_RB_TREE *v27; // r10
  _RTL_BALANCED_NODE *Min; // r8
  unsigned __int64 v29; // rdx
  BOOLEAN v30; // al
  int v31; // r8d
  _RTL_BALANCED_NODE *v32; // rax
  char v33; // al
  char v34; // cl
  _RTL_BALANCED_NODE *v35; // rax
  unsigned __int64 v36; // r9
  int v37; // r8d
  _RTL_BALANCED_NODE *v38; // rax
  unsigned __int64 v39; // [rsp+20h] [rbp-68h] BYREF
  int v40; // [rsp+28h] [rbp-60h]
  int v41; // [rsp+2Ch] [rbp-5Ch]
  _RTL_RB_TREE v42; // [rsp+30h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  int v45; // [rsp+90h] [rbp+8h] BYREF

  v41 = 0;
  v3 = (*(_BYTE *)(a1 + 19) & 1) == 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !v3 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 80), a3);
    if ( (*(_BYTE *)(a1 + 19) & 1) != 0 )
      return (_RTL_RB_TREE *)a1;
    KxReleaseQueuedSpinLock(a3);
  }
  v42 = *(_RTL_RB_TREE *)a1;
  if ( (__int64)v42.Root >= 0 && !a2 )
    return 0LL;
  v39 = (__int64)v42.Root & 0x7FFFFFFFFFFFFFFCLL;
  v40 = *(_DWORD *)&v42.0;
  v7 = ((((unsigned __int64)v42.Root & 0x7FFFFFFFFFFFFFFCLL) >> 4) & 0x3FF) << 6;
  v8 = (volatile LONG *)((char *)&KiAbTreeArray + v7 + 16);
  v9 = (_RTL_RB_TREE *)((char *)&KiAbTreeArray + v7);
  ExAcquireSpinLockSharedAtDpcLevel(v8);
  v11 = 0;
  while ( 1 )
  {
    Root = (unsigned __int64)v9->Root;
    if ( ((__int64)v9->Min & 1) != 0 )
    {
      if ( !Root )
        goto LABEL_16;
      Root ^= (unsigned __int64)v9;
    }
    v10 = (__int64)v9->Min & 1;
    while ( Root )
    {
      v13 = *(_QWORD *)(Root - 24) & 0x7FFFFFFFFFFFFFFCLL;
      if ( v13 < v39 )
        goto LABEL_33;
      if ( v13 > v39 )
        goto LABEL_13;
      v14 = *(_DWORD *)(Root - 16);
      if ( v14 == *(_DWORD *)&v42.0 )
        break;
      if ( v14 < *(_DWORD *)&v42.0 )
      {
LABEL_33:
        v15 = *(_QWORD *)(Root + 8);
        if ( (_DWORD)v10 && v15 )
        {
LABEL_37:
          Root ^= v15;
          continue;
        }
      }
      else
      {
LABEL_13:
        v15 = *(_QWORD *)Root;
        if ( (_DWORD)v10 && v15 )
          goto LABEL_37;
      }
      Root = v15;
    }
LABEL_16:
    if ( !a2 )
    {
      if ( Root )
      {
        v22 = (_RTL_RB_TREE *)(Root - 24);
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(Root - 24 + 80), a3);
        if ( v11 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v8);
        else
          ExReleaseSpinLockSharedFromDpcLevel(v8);
        if ( (_RTL_RB_TREE *)a1 == v22 )
          return v22;
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 80), &LockHandle);
        KxReleaseQueuedSpinLock(&LockHandle);
        if ( (unsigned int)KiAbCompareSnappedEntryState(a1, &v39) )
          return v22;
        KxReleaseQueuedSpinLock(a3);
      }
      else if ( v11 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(v8);
      }
      else
      {
        ExReleaseSpinLockSharedFromDpcLevel(v8);
      }
      return 0LL;
    }
    if ( Root )
    {
      v22 = (_RTL_RB_TREE *)(Root - 24);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(Root - 24 + 80), a3);
      if ( v11 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v8);
      else
        ExReleaseSpinLockSharedFromDpcLevel(v8);
      if ( *(__int64 *)a1 < 0 )
        return v22;
      v23 = (_BYTE *)(a1 + 17);
      if ( *(_BYTE *)(a1 + 17) != *(__int64 *)a1 < 0 )
      {
        v26 = *(_BYTE *)(a1 - 96LL * *(unsigned __int8 *)(a1 + 16) - 1501);
        if ( v26 > 30 )
          v26 = 30;
        v27 = v22 + 4;
        *(_BYTE *)(a1 + 48) = v26;
        Min = v22[4].Min;
        v29 = (unsigned __int64)v22[4].Root;
        if ( ((unsigned __int8)Min & 1) == 0 )
          goto LABEL_58;
        if ( v29 )
        {
          v29 ^= (unsigned __int64)v27;
LABEL_58:
          v30 = 0;
          v31 = (unsigned __int8)Min & 1;
          if ( v29 )
          {
            while ( 1 )
            {
              if ( *(char *)(v29 + 24) < v26 )
              {
                v32 = *(_RTL_BALANCED_NODE **)v29;
                if ( v31 )
                {
                  if ( !v32 )
                    goto LABEL_71;
                  v32 = (_RTL_BALANCED_NODE *)(v29 ^ (unsigned __int64)v32);
                }
                if ( !v32 )
                  goto LABEL_71;
              }
              else
              {
                v32 = *(_RTL_BALANCED_NODE **)(v29 + 8);
                if ( v31 )
                {
                  if ( !v32 )
                    goto LABEL_64;
                  v32 = (_RTL_BALANCED_NODE *)(v29 ^ (unsigned __int64)v32);
                }
                if ( !v32 )
                  goto LABEL_64;
              }
              v29 = (unsigned __int64)v32;
            }
          }
LABEL_72:
          RtlRbInsertNodeEx(v27, (PRTL_BALANCED_NODE)v29, v30, (PRTL_BALANCED_NODE)(a1 + 24));
          *(_BYTE *)(a1 + 7) |= 0x80u;
          goto LABEL_45;
        }
LABEL_71:
        v30 = 0;
        goto LABEL_72;
      }
      v33 = KiAbOwnerComputeCpuPriorityKey(a1);
      v27 = v22 + 3;
      *(_BYTE *)(a1 + 48) = v33;
      v34 = v33;
      v35 = v22[3].Min;
      if ( ((unsigned __int8)v35 & 1) != 0 )
      {
        v29 = (unsigned __int64)v27->Root;
        if ( !v27->Root )
          goto LABEL_71;
        v36 = v29 ^ (unsigned __int64)v27;
      }
      else
      {
        v36 = (unsigned __int64)v27->Root;
      }
      v29 = v36;
      v37 = (unsigned __int8)v35 & 1;
      v30 = 0;
      if ( v36 )
      {
        while ( 1 )
        {
          if ( *(char *)(v29 + 24) > v34 )
          {
            v38 = *(_RTL_BALANCED_NODE **)v29;
            if ( v37 )
            {
              if ( !v38 )
                goto LABEL_71;
              v38 = (_RTL_BALANCED_NODE *)(v29 ^ (unsigned __int64)v38);
            }
            if ( !v38 )
              goto LABEL_71;
          }
          else
          {
            v38 = *(_RTL_BALANCED_NODE **)(v29 + 8);
            if ( v37 )
            {
              if ( !v38 )
                goto LABEL_64;
              v38 = (_RTL_BALANCED_NODE *)(v29 ^ (unsigned __int64)v38);
            }
            if ( !v38 )
            {
LABEL_64:
              v30 = 1;
              goto LABEL_72;
            }
          }
          v29 = (unsigned __int64)v38;
        }
      }
      goto LABEL_72;
    }
    if ( v11 )
      goto LABEL_22;
    v11 = 1;
    v45 = 0;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 )
      break;
    if ( (unsigned int)ExpTryConvertSharedSpinLockExclusiveInstrumented(v8, retaddr, v10) )
      goto LABEL_22;
LABEL_108:
    ExReleaseSpinLockSharedFromDpcLevel(v8);
    ExAcquireSpinLockExclusiveAtDpcLevel(v8);
  }
  if ( _interlockedbittestandset(v8, 0x1Fu) )
    goto LABEL_108;
  for ( i = *v8; (*v8 & 0xBFFFFFFF) != 0x80000001; i = *v8 )
  {
    if ( (i & 0x40000000) == 0 )
      _InterlockedOr(v8, 0x40000000u);
    KeYieldProcessorEx(&v45);
  }
LABEL_22:
  v17 = (unsigned __int64)v9->Root;
  if ( ((__int64)v9->Min & 1) == 0 )
  {
LABEL_23:
    v18 = 0;
    if ( !v17 )
      goto LABEL_44;
    while ( 1 )
    {
      v19 = *(_QWORD *)(v17 - 24) & 0x7FFFFFFFFFFFFFFCLL;
      if ( v19 < v39
        || v19 <= v39 && ((v20 = *(_DWORD *)(v17 - 16), v20 == *(_DWORD *)&v42.0) || v20 < *(_DWORD *)&v42.0) )
      {
        v21 = *(_QWORD *)(v17 + 8);
        if ( ((__int64)v9->Min & 1) != 0 )
        {
          if ( !v21 )
            goto LABEL_42;
          v21 ^= v17;
        }
        if ( !v21 )
        {
LABEL_42:
          v18 = 1;
          goto LABEL_44;
        }
      }
      else
      {
        v21 = *(_QWORD *)v17;
        if ( ((__int64)v9->Min & 1) != 0 )
        {
          if ( !v21 )
            goto LABEL_43;
          v21 ^= v17;
        }
        if ( !v21 )
          goto LABEL_43;
      }
      v17 = v21;
    }
  }
  if ( v17 )
  {
    v17 ^= (unsigned __int64)v9;
    goto LABEL_23;
  }
LABEL_43:
  v18 = 0;
LABEL_44:
  RtlRbInsertNodeEx(v9, (PRTL_BALANCED_NODE)v17, v18, (PRTL_BALANCED_NODE)(a1 + 24));
  v22 = (_RTL_RB_TREE *)a1;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 80), a3);
  ExReleaseSpinLockExclusiveFromDpcLevel(v8);
  v23 = (_BYTE *)(a1 + 17);
  *(_BYTE *)(a1 + 7) |= 0x80u;
  *(_BYTE *)(a1 + 19) |= 1u;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_BYTE *)(a1 + 92) = 0;
  *(_DWORD *)(a1 + 92) &= 0xFFFF80FF;
LABEL_45:
  v24 = a1 - 96LL * *(unsigned __int8 *)(a1 + 16);
  if ( *v23 )
    ++*(_BYTE *)(v24 - 903);
  else
    _InterlockedExchangeAdd8((volatile signed __int8 *)(v24 - 825), 1u);
  return v22;
}
