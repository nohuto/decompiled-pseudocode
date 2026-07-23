/*
 * XREFs of sub_14053E098 @ 0x14053E098
 * Callers:
 *     sub_1405BDFF8 @ 0x1405BDFF8 (sub_1405BDFF8.c)
 *     sub_1405BE340 @ 0x1405BE340 (sub_1405BE340.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_140389160 @ 0x140389160 (sub_140389160.c)
 *     sub_1403895EC @ 0x1403895EC (sub_1403895EC.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14053A100 @ 0x14053A100 (sub_14053A100.c)
 *     sub_14053C3E4 @ 0x14053C3E4 (sub_14053C3E4.c)
 *     sub_14053DAFC @ 0x14053DAFC (sub_14053DAFC.c)
 *     sub_14053DDB8 @ 0x14053DDB8 (sub_14053DDB8.c)
 */

void __fastcall sub_14053E098(_QWORD *a1, int a2)
{
  __int64 v2; // rbx
  unsigned __int64 v4; // r14
  unsigned __int8 v5; // cl
  struct _KPRCB *v6; // r10
  __int64 v7; // r9
  int v8; // eax
  bool v9; // zf
  unsigned __int64 v10; // r14
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r9
  __int64 v13; // r8
  int v14; // eax
  unsigned __int64 v15; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v18; // r9
  int v19; // eax
  unsigned __int64 OldIrql; // r14
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r9
  __int64 v23; // r8
  int v24; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF

  v2 = a1[1];
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v2 )
  {
    if ( a2 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 704), &LockHandle);
      v15 = KeAcquireSpinLockRaiseToDpc(&qword_140C49B20);
      *(_BYTE *)(v2 + 1230) = 2;
      KeReleaseSpinLockFromDpcLevel(&qword_140C49B20);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v15 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v18 = *((_QWORD *)CurrentPrcb + 4375);
            v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
            v9 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
            *(_DWORD *)(v18 + 20) &= v19;
            if ( v9 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v15);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v21 = KeGetCurrentIrql();
          if ( v21 <= 0xFu && LockHandle.OldIrql <= 0xFu && v21 >= 2u )
          {
            v22 = KeGetCurrentPrcb();
            v23 = *((_QWORD *)v22 + 4375);
            v24 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v9 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
            *(_DWORD *)(v23 + 20) &= v24;
            if ( v9 )
              sub_140418E4C((__int64)v22);
          }
        }
      }
      __writecr8(OldIrql);
      if ( byte_140C54C58 == 1 )
        sub_14053C3E4(v2);
      else
        sub_14053A100(v2, 0LL);
      DbgPrintEx(
        0x7Fu,
        2u,
        "CcExitPartition: Partition Exited=%p, PartitionObject=%p now deleting Partition \n",
        (const void *)v2,
        a1);
      sub_14053DAFC((char *)v2);
    }
    else
    {
      sub_140389160(v2, 2);
      if ( byte_140C54C58 == 1 )
        sub_14053C3E4(v2);
      else
        sub_1403895EC(v2, 0LL);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 704), &LockHandle);
      v4 = KeAcquireSpinLockRaiseToDpc(&qword_140C49B20);
      *(_BYTE *)(v2 + 1230) = 1;
      KeReleaseSpinLockFromDpcLevel(&qword_140C49B20);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v5 = KeGetCurrentIrql();
          if ( v5 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v5 >= 2u )
          {
            v6 = KeGetCurrentPrcb();
            v7 = *((_QWORD *)v6 + 4375);
            v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
            v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
            *(_DWORD *)(v7 + 20) &= v8;
            if ( v9 )
              sub_140418E4C((__int64)v6);
          }
        }
      }
      __writecr8(v4);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v10 = LockHandle.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v11 = KeGetCurrentIrql();
          if ( v11 <= 0xFu && LockHandle.OldIrql <= 0xFu && v11 >= 2u )
          {
            v12 = KeGetCurrentPrcb();
            v13 = *((_QWORD *)v12 + 4375);
            v14 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v9 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
            *(_DWORD *)(v13 + 20) &= v14;
            if ( v9 )
              sub_140418E4C((__int64)v12);
          }
        }
      }
      __writecr8(v10);
      while ( *(_QWORD *)(v2 + 592) != v2 + 592
           || *(_QWORD *)(v2 + 624) != v2 + 648
           || *(_QWORD *)(v2 + 632) != v2 + 648 )
      {
        sub_14053DDB8((_QWORD **)(v2 + 624), v2);
        sub_14053DDB8((_QWORD **)(v2 + 592), v2);
      }
    }
  }
}
