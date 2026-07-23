/*
 * XREFs of sub_14053B55C @ 0x14053B55C
 * Callers:
 *     sub_14053B3F8 @ 0x14053B3F8 (sub_14053B3F8.c)
 * Callees:
 *     sub_140247800 @ 0x140247800 (sub_140247800.c)
 *     sub_140247840 @ 0x140247840 (sub_140247840.c)
 *     sub_140282064 @ 0x140282064 (sub_140282064.c)
 *     sub_140282AF4 @ 0x140282AF4 (sub_140282AF4.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402856A8 @ 0x1402856A8 (sub_1402856A8.c)
 *     sub_140285740 @ 0x140285740 (sub_140285740.c)
 *     sub_140285868 @ 0x140285868 (sub_140285868.c)
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14053B018 @ 0x14053B018 (sub_14053B018.c)
 *     sub_14053B0B8 @ 0x14053B0B8 (sub_14053B0B8.c)
 *     sub_14053B160 @ 0x14053B160 (sub_14053B160.c)
 *     sub_14053B200 @ 0x14053B200 (sub_14053B200.c)
 *     RtlRandom @ 0x1406E2E20 (RtlRandom.c)
 *     sub_1406FAEA0 @ 0x1406FAEA0 (sub_1406FAEA0.c)
 */

__int64 __fastcall sub_14053B55C(__int64 a1, unsigned int a2, char a3, _QWORD *a4)
{
  unsigned int v4; // r12d
  _DWORD *v5; // rdi
  int v6; // r13d
  __int64 v7; // r14
  unsigned int v8; // r15d
  bool v9; // si
  __int64 v10; // rbx
  unsigned int v11; // ebx
  KIRQL v12; // si
  unsigned int v13; // ebx
  ULONG v14; // eax
  __int64 v15; // rsi
  bool v16; // al
  __int64 v17; // r9
  KIRQL v18; // r15
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r14
  __int64 v23; // rbx
  unsigned int v24; // r12d
  int v25; // r12d
  __int64 v26; // r13
  int v27; // r15d
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // r9
  unsigned int v31; // ecx
  KIRQL v32; // al
  KIRQL v33; // bl
  __int64 v34; // rdx
  __int64 v35; // r8
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v39; // r9
  int v40; // eax
  bool v41; // zf
  __int64 v42; // rdx
  __int64 v43; // r8
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // r10
  __int64 v46; // r9
  int v47; // eax
  __int64 v48; // r14
  int v49; // esi
  __int64 *v50; // rbx
  __int64 v51; // rdx
  bool v53; // [rsp+28h] [rbp-49h]
  unsigned int v54; // [rsp+2Ch] [rbp-45h]
  int v55; // [rsp+30h] [rbp-41h]
  unsigned int v56; // [rsp+34h] [rbp-3Dh]
  int v57; // [rsp+38h] [rbp-39h]
  int v58; // [rsp+3Ch] [rbp-35h]
  int v59; // [rsp+40h] [rbp-31h]
  __int64 v60; // [rsp+48h] [rbp-29h]
  unsigned int v61; // [rsp+50h] [rbp-21h]
  struct _KLOCK_QUEUE_HANDLE v62; // [rsp+58h] [rbp-19h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-1h] BYREF
  unsigned int v65; // [rsp+E0h] [rbp+6Fh]
  int v66; // [rsp+E8h] [rbp+77h]

  v65 = a2;
  v55 = -1;
  v56 = 0;
  v61 = 0;
  v59 = 0;
  v58 = 0;
  v4 = 0;
  v57 = 0;
  v5 = 0LL;
  v60 = 0LL;
  v6 = 0;
  v54 = 0;
  v7 = 0LL;
  v8 = 0;
  memset(&v62, 0, sizeof(v62));
  if ( a4 )
  {
    *a4 = 0LL;
    v58 = 1;
  }
  v66 = a3 & 1;
  v9 = !(a3 & 1);
  v53 = v9;
  do
  {
    while ( v4 < a2 && v8 <= dword_140C548D4 )
    {
      if ( v5 )
      {
        LODWORD(v10) = v55;
LABEL_19:
        if ( v9 )
        {
          v13 = 0;
          do
          {
            v14 = RtlRandom(&Seed);
            v15 = (__int64)&v5[8 * (v14 % (v5[2] + 1)) + 4 + 2 * (v14 % (v5[2] + 1))];
            if ( sub_14053B018(v15, 0LL) )
            {
              if ( v15 )
                goto LABEL_32;
            }
            else
            {
              ++v13;
            }
          }
          while ( v13 <= 0x10 );
          ++dword_140D01810;
          v9 = 0;
          v53 = 0;
          goto LABEL_72;
        }
        if ( (_DWORD)v10 == -1 )
        {
          LODWORD(v10) = v5[2] + 1;
          v55 = v10;
        }
        if ( !(_DWORD)v10 )
          goto LABEL_72;
        do
        {
          v10 = (unsigned int)(v10 - 1);
          v16 = sub_14053B018((__int64)&v5[8 * v10 + 4 + 2 * (unsigned int)v10], v7);
        }
        while ( !v16 && (_DWORD)v10 );
        v55 = v10;
        v15 = v17 & -(__int64)v16;
        if ( !v15 )
        {
          v9 = v53;
LABEL_72:
          sub_14053B0B8((__int64)v5, 0);
          v5 = 0LL;
          goto LABEL_73;
        }
LABEL_32:
        v18 = KeAcquireQueuedSpinLock(4uLL);
        if ( sub_14053B018(v15, v7) )
        {
          v19 = *(_QWORD *)(v15 + 8);
          *(_QWORD *)&LockHandle.OldIrql = 0LL;
          v20 = *(_QWORD *)(v19 + 528);
          LockHandle.LockQueue.Next = 0LL;
          LockHandle.LockQueue.Lock = (volatile PKSPIN_LOCK)(v20 + 704);
          sub_1403119F0((__int64)&LockHandle, (volatile __int64 *)(v20 + 704));
          v21 = *(_QWORD *)(v15 + 8);
          if ( *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(v21 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28) + 8LL) != v21 )
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            goto LABEL_70;
          }
          ++*(_DWORD *)(v21 + 4);
          ++*(_DWORD *)(v21 + 536);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v22 = *(_QWORD *)(v15 + 8);
          v23 = *(_QWORD *)(v15 + 16);
          v24 = *(_DWORD *)(v22 + 152);
          KeReleaseQueuedSpinLock(4uLL, v18);
          v25 = (v24 >> 9) & 1;
          sub_140247840(v25, (struct _FAST_MUTEX *)v22);
          v26 = *(_QWORD *)(v22 + 528);
          if ( a1 == v26 )
          {
            v27 = 0;
            if ( v23 >= 0 )
            {
              v28 = *(_QWORD *)(v22 + 32);
              if ( v23 < v28 )
              {
                v29 = v28 <= 0x2000000
                    ? *(_QWORD *)(*(_QWORD *)(v22 + 88) + 8 * ((unsigned __int64)(unsigned int)v23 >> 18))
                    : sub_140282064(v22, v23);
                if ( v29 && !*(_WORD *)(v29 + 16) )
                {
                  sub_140285740(v22, v23, 0LL, 0LL);
                  if ( *(_DWORD *)(v26 + 1184) >= (unsigned int)dword_140C49AC8 )
                  {
                    if ( !v58 )
                    {
                      v31 = v57 & 0xFFFFFFFD;
                      v57 &= ~2u;
                      if ( !v60 && v66 )
                        v60 = *(_QWORD *)v29;
                      goto LABEL_45;
                    }
                  }
                  else
                  {
                    v27 = 1;
                  }
                  v31 = v57 | 2;
                  v60 = 0LL;
                  v57 |= 2u;
LABEL_45:
                  sub_1406FAEA0(v29, v22, v31, v30);
                  sub_140247800(v25, (struct _FAST_MUTEX *)v22);
                  v4 = v56;
                  if ( !v27 )
                  {
                    v4 = v56 + 1;
                    v61 = 1;
                    ++v56;
                    if ( v58 )
                    {
                      v58 = 0;
                      *a4 = *(_QWORD *)v29;
                      *(_QWORD *)v29 = 0LL;
                    }
                  }
                  v32 = KeAcquireQueuedSpinLock(4uLL);
                  *(_QWORD *)(v29 + 8) = 0LL;
                  v33 = v32;
                  sub_1402856A8(v26, (_QWORD *)v29, v27);
                  KeReleaseQueuedSpinLock(4uLL, v33);
                  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v26 + 704), &v62);
                  sub_140282AF4(v22, v34, v35);
                  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v62);
                  OldIrql = v62.OldIrql;
                  if ( dword_140D06B08 )
                  {
                    if ( (dword_140D06B08 & 1) != 0 )
                    {
                      CurrentIrql = KeGetCurrentIrql();
                      if ( CurrentIrql <= 0xFu && v62.OldIrql <= 0xFu && CurrentIrql >= 2u )
                      {
                        CurrentPrcb = KeGetCurrentPrcb();
                        v39 = *((_QWORD *)CurrentPrcb + 4375);
                        v40 = ~(unsigned __int16)(-1LL << (v62.OldIrql + 1));
                        v41 = (v40 & *(_DWORD *)(v39 + 20)) == 0;
                        *(_DWORD *)(v39 + 20) &= v40;
                        if ( v41 )
                          sub_140418E4C((__int64)CurrentPrcb);
                      }
                    }
                  }
                  goto LABEL_68;
                }
              }
            }
          }
          sub_140247800(v25, (struct _FAST_MUTEX *)v22);
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v26 + 704), &v62);
          sub_140282AF4(v22, v42, v43);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v62);
          OldIrql = v62.OldIrql;
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v44 = KeGetCurrentIrql();
              if ( v44 <= 0xFu && v62.OldIrql <= 0xFu && v44 >= 2u )
              {
                v45 = KeGetCurrentPrcb();
                v46 = *((_QWORD *)v45 + 4375);
                v47 = ~(unsigned __int16)(-1LL << (v62.OldIrql + 1));
                v41 = (v47 & *(_DWORD *)(v46 + 20)) == 0;
                *(_DWORD *)(v46 + 20) &= v47;
                if ( v41 )
                  sub_140418E4C((__int64)v45);
              }
            }
          }
          v4 = v56;
LABEL_68:
          v9 = v53;
          v7 = v60;
          __writecr8(OldIrql);
          v8 = v54;
          a2 = v65;
          v6 = v59;
        }
        else
        {
LABEL_70:
          v60 = 0LL;
          v7 = 0LL;
          KeReleaseQueuedSpinLock(4uLL, v18);
          a2 = v65;
          v9 = v53;
          v8 = v54;
        }
      }
      else
      {
        LODWORD(v10) = -1;
        v55 = -1;
        if ( v9 )
        {
          v5 = sub_14053B160();
LABEL_15:
          if ( v5[1] == 1 )
            goto LABEL_72;
          goto LABEL_19;
        }
        v11 = v8;
        v12 = KeAcquireQueuedSpinLock(4uLL);
        while ( 1 )
        {
          v5 = sub_140285868(v11);
          if ( v5 )
            break;
          if ( ++v11 >= 0x500 )
          {
            v5 = 0LL;
            goto LABEL_13;
          }
        }
        sub_14053B200((__int64)v5);
LABEL_13:
        KeReleaseQueuedSpinLock(4uLL, v12);
        v9 = v53;
        v54 = ++v8;
        if ( v5 )
        {
          LODWORD(v10) = -1;
          goto LABEL_15;
        }
LABEL_73:
        a2 = v65;
      }
    }
    if ( v5 )
    {
      sub_14053B0B8((__int64)v5, 0);
      a2 = v65;
      v5 = 0LL;
    }
    if ( v6 || v4 >= a2 )
      break;
    v6 = 1;
    v48 = (a2 - v4) << 18;
    v49 = 0;
    v59 = 1;
    ExAcquireFastMutex(&stru_140C49B60);
    v50 = (__int64 *)qword_140C49BA0;
    if ( (__int64 *)qword_140C49BA0 != &qword_140C49BA0 )
    {
      do
      {
        KeReleaseGuardedMutex(&stru_140C49B60);
        v49 |= sub_14042A5E0(v48, v51);
        ExAcquireFastMutex(&stru_140C49B60);
        v50 = (__int64 *)*v50;
      }
      while ( v50 != &qword_140C49BA0 );
      v8 = v54;
    }
    KeReleaseGuardedMutex(&stru_140C49B60);
    v7 = v60;
    a2 = v65;
    v41 = v49 == 0;
    v9 = v53;
  }
  while ( !v41 );
  _InterlockedIncrement(&dword_140D01814);
  return v61;
}
