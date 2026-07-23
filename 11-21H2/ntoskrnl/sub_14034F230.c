/*
 * XREFs of sub_14034F230 @ 0x14034F230
 * Callers:
 *     sub_1402B4EC0 @ 0x1402B4EC0 (sub_1402B4EC0.c)
 *     sub_1403591D8 @ 0x1403591D8 (sub_1403591D8.c)
 *     sub_14039C4BC @ 0x14039C4BC (sub_14039C4BC.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x14034E6B0 (RtlRbInsertNodeEx.c)
 *     sub_14035A7F8 @ 0x14035A7F8 (sub_14035A7F8.c)
 *     sub_14035BAD8 @ 0x14035BAD8 (sub_14035BAD8.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140461CD0 @ 0x140461CD0 (sub_140461CD0.c)
 *     sub_14063D8B0 @ 0x14063D8B0 (sub_14063D8B0.c)
 */

_RTL_RB_TREE *__fastcall sub_14034F230(__int64 a1, int a2, struct _KLOCK_QUEUE_HANDLE *a3)
{
  unsigned __int64 v3; // rbx
  bool v4; // zf
  struct _KLOCK_QUEUE_HANDLE *v5; // r15
  int v9; // ebp
  unsigned __int64 v10; // rcx
  volatile LONG *v11; // rdi
  _RTL_RB_TREE *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 Root; // rax
  unsigned __int64 v17; // rcx
  unsigned int v18; // ecx
  unsigned __int64 v19; // rcx
  volatile LONG i; // ecx
  unsigned __int64 v21; // rdx
  BOOLEAN v22; // al
  unsigned __int64 v23; // rax
  unsigned int v24; // eax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  _RTL_RB_TREE *v27; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v29; // rdx
  int v30; // eax
  volatile __int64 *v31; // rdx
  char v32; // al
  _RTL_RB_TREE *v33; // r10
  PRTL_BALANCED_NODE Min; // rcx
  char v35; // dl
  unsigned __int64 v36; // rax
  BOOLEAN v37; // r8
  int v38; // ecx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  char v41; // dl
  PRTL_BALANCED_NODE v42; // rax
  int v43; // ecx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  volatile __int64 *v47; // rdx
  __int128 v48; // [rsp+20h] [rbp-78h] BYREF
  _RTL_RB_TREE v49; // [rsp+30h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v52; // [rsp+A0h] [rbp+8h] BYREF
  struct _KLOCK_QUEUE_HANDLE *v53; // [rsp+B0h] [rbp+18h]

  v53 = a3;
  v3 = 0LL;
  v4 = (*(_BYTE *)(a1 + 19) & 1) == 0;
  v5 = a3;
  v48 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !v4 )
  {
    a3->LockQueue.Next = 0LL;
    a3->LockQueue.Lock = (volatile PKSPIN_LOCK)(a1 + 80);
    sub_1403119F0((__int64)a3, (volatile __int64 *)(a1 + 80));
    if ( (*(_BYTE *)(a1 + 19) & 1) != 0 )
      return (_RTL_RB_TREE *)a1;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(v5);
  }
  v49 = *(_RTL_RB_TREE *)a1;
  if ( (__int64)v49.Root >= 0 && !a2 )
    return 0LL;
  v9 = 0;
  *(_QWORD *)&v48 = (__int64)v49.Root & 0x7FFFFFFFFFFFFFFCLL;
  DWORD2(v48) = v49.Min;
  v10 = ((((unsigned __int64)v49.Root & 0x7FFFFFFFFFFFFFFCLL) >> 4) & 0x3FF) << 6;
  v11 = (volatile LONG *)((char *)&unk_140CE5A00 + v10 + 16);
  v12 = (_RTL_RB_TREE *)((char *)&unk_140CE5A00 + v10);
  while ( 1 )
  {
    if ( v9 )
      ExAcquireSpinLockExclusiveAtDpcLevel(v11);
    else
      ExAcquireSpinLockSharedAtDpcLevel(v11);
    Root = (unsigned __int64)v12->Root;
    if ( ((__int64)v12->Min & 1) != 0 )
    {
      if ( !Root )
      {
        Root = 0LL;
        goto LABEL_29;
      }
      Root ^= (unsigned __int64)v12;
    }
    v14 = (__int64)v12->Min & 1;
    if ( Root )
    {
      do
      {
        v17 = *(_QWORD *)(Root - 24) & 0x7FFFFFFFFFFFFFFCLL;
        if ( v17 < (unsigned __int64)v48 )
          goto LABEL_22;
        if ( v17 > (unsigned __int64)v48 )
          goto LABEL_20;
        v18 = *(_DWORD *)(Root - 16);
        if ( v18 == LODWORD(v49.Min) )
          break;
        if ( v18 < LODWORD(v49.Min) )
LABEL_22:
          v19 = *(_QWORD *)(Root + 8);
        else
LABEL_20:
          v19 = *(_QWORD *)Root;
        if ( (_DWORD)v14 && v19 )
          Root ^= v19;
        else
          Root = v19;
      }
      while ( Root );
      v5 = v53;
    }
LABEL_29:
    if ( !a2 )
    {
      if ( Root )
      {
        v27 = (_RTL_RB_TREE *)(Root - 24);
        v5->LockQueue.Next = 0LL;
        v47 = (volatile __int64 *)(Root - 24 + 80);
        v5->LockQueue.Lock = (volatile PKSPIN_LOCK)v47;
        sub_1403119F0((__int64)v5, v47);
        if ( v9 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v11);
        else
          ExReleaseSpinLockSharedFromDpcLevel(v11);
        if ( (_RTL_RB_TREE *)a1 == v27 )
          return v27;
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = (volatile PKSPIN_LOCK)(a1 + 80);
        sub_1403119F0((__int64)&LockHandle, (volatile __int64 *)(a1 + 80));
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        if ( (unsigned int)sub_14035BAD8(a1, &v48) )
          return v27;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(v5);
      }
      else if ( v9 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(v11);
      }
      else
      {
        ExReleaseSpinLockSharedFromDpcLevel(v11);
      }
      return 0LL;
    }
    if ( Root )
    {
      v27 = (_RTL_RB_TREE *)(Root - 24);
      v5->LockQueue.Next = 0LL;
      v31 = (volatile __int64 *)(Root - 24 + 80);
      v5->LockQueue.Lock = (volatile PKSPIN_LOCK)v31;
      sub_1403119F0((__int64)v5, v31);
      if ( v9 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v11);
      else
        ExReleaseSpinLockSharedFromDpcLevel(v11);
      if ( *(__int64 *)a1 < 0 )
        return v27;
      if ( !*(_BYTE *)(a1 + 17) )
      {
        v32 = sub_14035A7F8(a1);
        v33 = v27 + 3;
        *(_BYTE *)(a1 + 48) = v32;
        Min = v27[3].Min;
        v35 = v32;
        v36 = (unsigned __int64)v27[3].Root;
        if ( ((unsigned __int8)Min & 1) == 0 )
          goto LABEL_77;
        if ( v36 )
        {
          v36 ^= (unsigned __int64)v33;
LABEL_77:
          v37 = 0;
          v38 = (unsigned __int8)Min & 1;
          v3 = v36;
          if ( v36 )
          {
            while ( 1 )
            {
              while ( *(char *)(v3 + 24) > v35 )
              {
                v39 = *(_QWORD *)v3;
                if ( v38 )
                {
                  if ( !v39 )
                    goto LABEL_109;
                  v39 ^= v3;
                }
                if ( !v39 )
                  goto LABEL_109;
                v3 = v39;
              }
              v40 = *(_QWORD *)(v3 + 8);
              if ( v38 )
              {
                if ( !v40 )
                  goto LABEL_108;
                v40 ^= v3;
              }
              if ( !v40 )
                goto LABEL_108;
              v3 = v40;
            }
          }
          goto LABEL_109;
        }
LABEL_94:
        v37 = 0;
        goto LABEL_109;
      }
      v33 = v27 + 4;
      v41 = *(_BYTE *)(a1 - 96LL * *(unsigned __int8 *)(a1 + 16) - 1501);
      if ( v41 > 30 )
        v41 = 30;
      *(_BYTE *)(a1 + 48) = v41;
      v42 = v27[4].Min;
      if ( ((unsigned __int8)v42 & 1) != 0 )
      {
        if ( !v33->Root )
          goto LABEL_94;
        v3 = (unsigned __int64)v33->Root ^ (unsigned __int64)v33;
      }
      else
      {
        v3 = (unsigned __int64)v33->Root;
      }
      v37 = 0;
      v43 = (unsigned __int8)v42 & 1;
      if ( v3 )
      {
        while ( 1 )
        {
          while ( *(char *)(v3 + 24) < v41 )
          {
            v44 = *(_QWORD *)v3;
            if ( v43 )
            {
              if ( !v44 )
                goto LABEL_109;
              v44 ^= v3;
            }
            if ( !v44 )
              goto LABEL_109;
            v3 = v44;
          }
          v45 = *(_QWORD *)(v3 + 8);
          if ( v43 )
          {
            if ( !v45 )
              break;
            v45 ^= v3;
          }
          if ( !v45 )
            break;
          v3 = v45;
        }
LABEL_108:
        v37 = 1;
      }
LABEL_109:
      RtlRbInsertNodeEx(v33, (PRTL_BALANCED_NODE)v3, v37, (PRTL_BALANCED_NODE)(a1 + 24));
      *(_BYTE *)(a1 + 7) |= 0x80u;
      goto LABEL_110;
    }
    if ( v9 )
      goto LABEL_40;
    v9 = 1;
    v52 = 0;
    if ( (BYTE6(xmmword_140D06900) & 0x21) == 0 )
      break;
    if ( (unsigned int)sub_140461CD0(v11, retaddr) )
      goto LABEL_40;
LABEL_34:
    ExReleaseSpinLockSharedFromDpcLevel(v11);
  }
  if ( _interlockedbittestandset(v11, 0x1Fu) )
    goto LABEL_34;
  for ( i = *v11; (*v11 & 0xBFFFFFFF) != 0x80000001; i = *v11 )
  {
    if ( (i & 0x40000000) == 0 )
      _InterlockedOr(v11, 0x40000000u);
    sub_1402F32E0(&v52, v13, v14, v15);
  }
LABEL_40:
  v21 = (unsigned __int64)v12->Root;
  if ( ((__int64)v12->Min & 1) != 0 )
  {
    if ( v21 )
    {
      v21 ^= (unsigned __int64)v12;
      goto LABEL_43;
    }
    v21 = 0LL;
LABEL_54:
    v22 = 0;
  }
  else
  {
LABEL_43:
    v22 = 0;
    if ( v21 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v23 = *(_QWORD *)(v21 - 24) & 0x7FFFFFFFFFFFFFFCLL;
          if ( v23 < (unsigned __int64)v48 )
            break;
          if ( v23 <= (unsigned __int64)v48 )
          {
            v24 = *(_DWORD *)(v21 - 16);
            if ( v24 == LODWORD(v49.Min) || v24 < LODWORD(v49.Min) )
              break;
          }
          v25 = *(_QWORD *)v21;
          if ( ((__int64)v12->Min & 1) != 0 )
          {
            if ( !v25 )
              goto LABEL_54;
            v25 ^= v21;
          }
          if ( !v25 )
            goto LABEL_54;
          v21 = v25;
        }
        v26 = *(_QWORD *)(v21 + 8);
        if ( ((__int64)v12->Min & 1) != 0 )
        {
          if ( !v26 )
            break;
          v26 ^= v21;
        }
        if ( !v26 )
          break;
        v21 = v26;
      }
      v22 = 1;
    }
  }
  RtlRbInsertNodeEx(v12, (PRTL_BALANCED_NODE)v21, v22, (PRTL_BALANCED_NODE)(a1 + 24));
  v5->LockQueue.Next = 0LL;
  v5->LockQueue.Lock = (volatile PKSPIN_LOCK)(a1 + 80);
  v27 = (_RTL_RB_TREE *)a1;
  sub_1403119F0((__int64)v5, (volatile __int64 *)(a1 + 80));
  if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
    sub_14063D8B0(v11, retaddr);
  else
    *v11 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v29 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v29 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v30 = *(_DWORD *)(v29 + 24) - 1;
      *(_DWORD *)(v29 + 24) = v30;
      if ( !v30 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  *(_BYTE *)(a1 + 7) |= 0x80u;
  *(_BYTE *)(a1 + 19) |= 1u;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_BYTE *)(a1 + 92) = 0;
  *(_DWORD *)(a1 + 92) &= 0xFFFF80FF;
LABEL_110:
  v46 = a1 - 96LL * *(unsigned __int8 *)(a1 + 16);
  if ( *(_BYTE *)(a1 + 17) )
    ++*(_BYTE *)(v46 - 903);
  else
    _InterlockedExchangeAdd8((volatile signed __int8 *)(v46 - 825), 1u);
  return v27;
}
