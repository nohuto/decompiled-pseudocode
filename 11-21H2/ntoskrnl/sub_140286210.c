/*
 * XREFs of sub_140286210 @ 0x140286210
 * Callers:
 *     sub_140285D90 @ 0x140285D90 (sub_140285D90.c)
 *     sub_14084D698 @ 0x14084D698 (sub_14084D698.c)
 * Callees:
 *     sub_1402426F4 @ 0x1402426F4 (sub_1402426F4.c)
 *     sub_14024280C @ 0x14024280C (sub_14024280C.c)
 *     sub_140243FB0 @ 0x140243FB0 (sub_140243FB0.c)
 *     sub_14024DA80 @ 0x14024DA80 (sub_14024DA80.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402864A0 @ 0x1402864A0 (sub_1402864A0.c)
 *     sub_140286630 @ 0x140286630 (sub_140286630.c)
 *     sub_140287B4C @ 0x140287B4C (sub_140287B4C.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     sub_1403C3BF8 @ 0x1403C3BF8 (sub_1403C3BF8.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14053B3F8 @ 0x14053B3F8 (sub_14053B3F8.c)
 *     sub_14059219C @ 0x14059219C (sub_14059219C.c)
 */

__int64 __fastcall sub_140286210(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r14
  int v4; // r15d
  KIRQL CurrentIrql; // r10
  __int64 v6; // r12
  __int64 v7; // r8
  __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  __int64 v13; // r9
  unsigned __int64 v14; // rbx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v18; // r9
  int v19; // eax
  bool v20; // zf
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  __int64 v23; // r9
  int v24; // eax
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r9
  __int64 v27; // r8
  int v28; // eax
  __int64 v29; // rcx
  signed __int32 v30[8]; // [rsp+0h] [rbp-70h] BYREF
  _QWORD *v31[2]; // [rsp+20h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-40h] BYREF
  __int128 v33; // [rsp+48h] [rbp-28h]
  __int128 v34; // [rsp+58h] [rbp-18h]
  unsigned __int64 v35; // [rsp+68h] [rbp-8h]
  __int64 v36; // [rsp+A0h] [rbp+30h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v1 = a1 + 1912;
  v2 = 0LL;
  v31[1] = v31;
  LockHandle.LockQueue.Lock = &qword_140C51C30;
  v31[0] = v31;
  v4 = 0;
  LockHandle.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v6 = LOBYTE(LockHandle.LockQueue.Next) - 1LL;
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v13 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v13 + 20) |= ((_DWORD)v6 << (CurrentIrql + 1)) & 4;
  }
  LockHandle.OldIrql = CurrentIrql;
  sub_1403119F0(&LockHandle);
  if ( !*(_BYTE *)(a1 + 16732) )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v16 = KeGetCurrentIrql();
        if ( v16 <= 0xFu && LockHandle.OldIrql <= 0xFu && v16 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v18 = *((_QWORD *)CurrentPrcb + 4375);
          v19 = ~(unsigned __int16)(v6 << (LockHandle.OldIrql + 1));
          v20 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
          *(_DWORD *)(v18 + 20) &= v19;
          if ( v20 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( !(unsigned int)sub_1403C3BF8(a1) )
      return 0LL;
    KeAcquireInStackQueuedSpinLock(&qword_140C51C30, &LockHandle);
  }
  _InterlockedOr(v30, 0);
  sub_140286630(a1, (unsigned int)dword_140D31080, 0LL);
  if ( *(_QWORD *)(v1 + 16) != v7 )
  {
    v8 = *(__int64 **)v1;
    v9 = **(_QWORD **)v1;
    if ( *(_QWORD *)(*(_QWORD *)v1 + 8LL) != v1 || *(__int64 **)(v9 + 8) != v8 )
      __fastfail(3u);
    *(_QWORD *)v1 = v9;
    *(_QWORD *)(v9 + 8) = v1;
    v35 = v8[4] & 0x3FFFFFFFFFFFFFFFLL | 0x8000000000000000uLL;
    v33 = 0LL;
    v34 = 0LL;
    v8[4] = v35;
    --*(_QWORD *)(v1 + 16);
LABEL_7:
    sub_140287B4C(a1, v31);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v11 = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v25 = KeGetCurrentIrql();
        if ( v25 <= 0xFu && LockHandle.OldIrql <= 0xFu && v25 >= 2u )
        {
          v26 = KeGetCurrentPrcb();
          v27 = *((_QWORD *)v26 + 4375);
          v28 = ~(unsigned __int16)(v6 << (LockHandle.OldIrql + 1));
          v20 = (v28 & *(_DWORD *)(v27 + 20)) == 0;
          v10 = (unsigned int)v28 & *(_DWORD *)(v27 + 20);
          *(_DWORD *)(v27 + 20) = v10;
          if ( v20 )
            sub_140418E4C(v26);
        }
      }
    }
    __writecr8(v11);
    if ( !v8 )
      goto LABEL_10;
    goto LABEL_9;
  }
  v8 = sub_140243FB0(a1);
  if ( v8 )
    goto LABEL_7;
  v8 = sub_14024DA80(a1, 0x400uLL);
  if ( v8 )
    goto LABEL_7;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v14 = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v21 = KeGetCurrentIrql();
      if ( v21 <= 0xFu && LockHandle.OldIrql <= 0xFu && v21 >= 2u )
      {
        v22 = KeGetCurrentPrcb();
        v23 = *((_QWORD *)v22 + 4375);
        v24 = ~(unsigned __int16)(v6 << (LockHandle.OldIrql + 1));
        v20 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
        *(_DWORD *)(v23 + 20) &= v24;
        if ( v20 )
          sub_140418E4C(v22);
      }
    }
  }
  __writecr8(v14);
  v8 = sub_14024280C((__int16 *)a1);
  if ( !v8 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140C51C30, &LockHandle);
    v4 = 1;
    v8 = sub_14024DA80(a1, 1uLL);
    goto LABEL_7;
  }
LABEL_9:
  v2 = v8[2];
LABEL_10:
  if ( v4 )
  {
    v29 = *(_QWORD *)(a1 + 176);
    v36 = 0LL;
    if ( (unsigned int)sub_14053B3F8(v29, v10, 0LL, &v36) )
    {
      if ( v2 )
        sub_1402864A0(0LL, v2);
      v2 = v36;
      sub_14059219C(v36);
    }
  }
  if ( v31[0] != v31 )
    sub_1402426F4(a1, v31);
  return v2;
}
