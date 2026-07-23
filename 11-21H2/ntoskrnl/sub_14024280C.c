/*
 * XREFs of sub_14024280C @ 0x14024280C
 * Callers:
 *     sub_140286210 @ 0x140286210 (sub_140286210.c)
 * Callees:
 *     sub_14026B32C @ 0x14026B32C (sub_14026B32C.c)
 *     sub_14026DAB0 @ 0x14026DAB0 (sub_14026DAB0.c)
 *     sub_14026DC5C @ 0x14026DC5C (sub_14026DC5C.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall sub_14024280C(__int16 *a1)
{
  _QWORD *v2; // rsi
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdi
  __int16 v5; // bx
  unsigned __int64 v6; // r14
  _QWORD *v7; // rcx
  unsigned int i; // edx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int16 **v12; // r10
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v17; // r9
  int v18; // eax
  bool v19; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-29h] BYREF
  __int128 v21; // [rsp+50h] [rbp-11h]
  __int128 v22; // [rsp+60h] [rbp-1h]
  unsigned __int64 v23; // [rsp+70h] [rbp+Fh]
  __int128 v24; // [rsp+78h] [rbp+17h]
  __int128 v25; // [rsp+88h] [rbp+27h]
  __int64 v26; // [rsp+98h] [rbp+37h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (unsigned __int64)qword_140C51888 <= 0x4000000 )
    return 0LL;
  v2 = (_QWORD *)sub_1402828F0(64LL, 320LL, 1666410829LL);
  if ( !v2 )
    return 0LL;
  v3 = sub_14026B32C(1LL);
  v4 = v3;
  if ( !v3 )
  {
LABEL_15:
    ExFreePoolWithTag(v2, 0);
    return 0LL;
  }
  if ( !(unsigned int)sub_14026DC5C(
                        (unsigned int)(v3 >> 9) & 0xFFFFFFF8,
                        ((unsigned int)(v3 >> 9) & 0xFFFFFFF8) + 4088,
                        0,
                        8,
                        0) )
  {
    sub_14026DAB0(v4, v4 + 0x200000, 8LL);
    goto LABEL_15;
  }
  v5 = *a1;
  v6 = v4;
  KeAcquireInStackQueuedSpinLock(&qword_140C51C30, &LockHandle);
  v7 = v2 + 4;
  for ( i = 0; i < 8; ++i )
  {
    v9 = *v7 & 0xFFFFFFFFFFFF003FuLL;
    *(v7 - 2) = v6;
    v10 = ((unsigned __int64)(v5 & 0x3FF) << 6) | v9;
    *v7 = v10;
    v11 = v10 & 0x3FFFFFFFFFFFFFFFLL;
    if ( i )
    {
      v26 = v11;
      v24 = 0LL;
      v25 = 0LL;
      *v7 = v11;
      v12 = (__int16 **)*((_QWORD *)a1 + 240);
      if ( *v12 != a1 + 956 )
        __fastfail(3u);
      *(v7 - 3) = v12;
      *(v7 - 4) = a1 + 956;
      *v12 = (__int16 *)(v7 - 4);
      *((_QWORD *)a1 + 240) = v7 - 4;
    }
    else
    {
      v23 = v11 | 0x8000000000000000uLL;
      v21 = 0LL;
      v22 = 0LL;
      *v7 = v11 | 0x8000000000000000uLL;
    }
    v7 += 5;
    v6 += 0x40000LL;
  }
  *((_QWORD *)a1 + 241) += 7LL;
  *(_QWORD *)(48 * ((*(_QWORD *)(((v4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFFLL)
            - 0x220000000000LL
            + 16) = v2;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v17 = *((_QWORD *)CurrentPrcb + 4375);
        v18 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v19 = (v18 & *(_DWORD *)(v17 + 20)) == 0;
        *(_DWORD *)(v17 + 20) &= v18;
        if ( v19 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return v2;
}
