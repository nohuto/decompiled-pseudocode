/*
 * XREFs of sub_14053C3E4 @ 0x14053C3E4
 * Callers:
 *     sub_140363C8C @ 0x140363C8C (sub_140363C8C.c)
 *     sub_140389160 @ 0x140389160 (sub_140389160.c)
 *     sub_14053E098 @ 0x14053E098 (sub_14053E098.c)
 *     sub_1406E14E0 @ 0x1406E14E0 (sub_1406E14E0.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall sub_14053C3E4(__int64 a1)
{
  _QWORD **v1; // r13
  char v2; // r12
  _QWORD *v3; // rdi
  struct _KEVENT *v4; // rbx
  signed __int64 Flink; // rax
  unsigned __int64 i; // rcx
  signed __int64 v7; // rtt
  char v8; // si
  unsigned __int64 OldIrql; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  int v13; // eax
  bool v14; // zf
  __int64 v15; // rcx
  unsigned __int64 v16; // rbx
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  __int64 v19; // r8
  int v20; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-30h] BYREF
  __int128 v23; // [rsp+38h] [rbp-18h]
  __int64 v24; // [rsp+48h] [rbp-8h]

  v1 = (_QWORD **)(a1 + 32);
  v24 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0;
  v23 = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 704), &LockHandle);
  v3 = *v1;
  while ( v3 != v1 )
  {
    v4 = (struct _KEVENT *)(v3 - 72);
    if ( v3 == (_QWORD *)576 )
    {
LABEL_10:
      v8 = 1;
    }
    else
    {
      _m_prefetchw(&v4->Header.WaitListHead);
      Flink = (signed __int64)v4->Header.WaitListHead.Flink;
      for ( i = Flink + 1; i > 1; i = Flink + 1 )
      {
        v7 = Flink;
        Flink = _InterlockedCompareExchange64((volatile signed __int64 *)&v4->Header.WaitListHead, i, Flink);
        if ( v7 == Flink )
          goto LABEL_10;
      }
      if ( i != 1 )
        __fastfail(0xEu);
      v8 = 0;
    }
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
          v12 = *((_QWORD *)CurrentPrcb + 4375);
          v13 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
          *(_DWORD *)(v12 + 20) &= v13;
          if ( v14 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( v8 )
    {
      v2 = sub_14042A5E0(a1, v3 - 72);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 704), &LockHandle);
      if ( v3 != (_QWORD *)576 )
      {
        v15 = _InterlockedDecrement64((volatile signed __int64 *)&v4->Header.WaitListHead);
        if ( v15 <= 0 )
        {
          if ( v15 )
            __fastfail(0xEu);
          KeSetEvent(v4 + 50, 0, 0);
        }
      }
      v3 = (_QWORD *)*v3;
      if ( !v2 )
        break;
    }
    else
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 704), &LockHandle);
      v3 = (_QWORD *)*v3;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v16 = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v17 = KeGetCurrentIrql();
      if ( v17 <= 0xFu && LockHandle.OldIrql <= 0xFu && v17 >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v19 = *((_QWORD *)v18 + 4375);
        v20 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v14 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
        *(_DWORD *)(v19 + 20) &= v20;
        if ( v14 )
          sub_140418E4C((__int64)v18);
      }
    }
  }
  __writecr8(v16);
  return v2;
}
