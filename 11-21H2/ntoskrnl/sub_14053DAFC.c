/*
 * XREFs of sub_14053DAFC @ 0x14053DAFC
 * Callers:
 *     sub_14023EB0C @ 0x14023EB0C (sub_14023EB0C.c)
 *     sub_1403D0F2C @ 0x1403D0F2C (sub_1403D0F2C.c)
 *     sub_14053E098 @ 0x14053E098 (sub_14053E098.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140258140 @ 0x140258140 (sub_140258140.c)
 *     sub_140276728 @ 0x140276728 (sub_140276728.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ZwWaitForSingleObject @ 0x14041B7E0 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14053E3AC @ 0x14053E3AC (sub_14053E3AC.c)
 *     sub_14053E61C @ 0x14053E61C (sub_14053E61C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14053DAFC(char *P)
{
  __int64 *v2; // rdi
  void *v3; // rcx
  KIRQL v4; // al
  __int64 v5; // rdx
  unsigned __int64 v6; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  int v10; // eax
  bool v11; // zf
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r9
  __int64 v15; // r8
  int v16; // eax
  void *v17; // rcx
  __int64 **v18; // rsi
  __int64 *v19; // rax
  __int64 *v20; // rbp
  __int64 v21; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0LL;
  KeSetEvent((PRKEVENT)(P + 1240), 0, 0);
  sub_140276728((__int64)P);
  v3 = (void *)*((_QWORD *)P + 161);
  if ( v3 )
  {
    ZwWaitForSingleObject(v3, 0, 0LL);
    ZwClose(*((HANDLE *)P + 161));
    *((_QWORD *)P + 161) = 0LL;
  }
  if ( P[984] )
  {
    P[984] = 0;
    KeCancelTimer((PKTIMER)(P + 920));
  }
  if ( P[1229] )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&qword_140C49B20);
    v5 = *((_QWORD *)P + 1);
    v6 = v4;
    --word_140C49B28;
    *(_QWORD *)(v5 + 8) = 0LL;
    KeReleaseSpinLockFromDpcLevel(&qword_140C49B20);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v9 = *((_QWORD *)CurrentPrcb + 4375);
          v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
          *(_DWORD *)(v9 + 20) &= v10;
          if ( v11 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
  }
  if ( byte_140C54C58 == 1 && *((_QWORD *)P + 154) )
  {
    KeWaitForSingleObject(P + 56, Executive, 0, 0, 0LL);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)P + 88, &LockHandle);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v13 = KeGetCurrentIrql();
        if ( v13 <= 0xFu && LockHandle.OldIrql <= 0xFu && v13 >= 2u )
        {
          v14 = KeGetCurrentPrcb();
          v15 = *((_QWORD *)v14 + 4375);
          v16 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v11 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
          *(_DWORD *)(v15 + 20) &= v16;
          if ( v11 )
            sub_140418E4C((__int64)v14);
        }
      }
    }
    __writecr8(OldIrql);
  }
  v17 = (void *)*((_QWORD *)P + 134);
  if ( v17 )
  {
    ExFreePoolWithTag(v17, 0x70546343u);
    *((_QWORD *)P + 134) = 0LL;
  }
  sub_14053E3AC(P);
  if ( byte_140C54C58 != 1 )
    sub_140258140((__int64)sub_14053E810, (__int64)P, 0LL);
  v18 = (__int64 **)(P + 16);
  while ( 1 )
  {
    v19 = *v18;
    v20 = v2;
    if ( *v18 == (__int64 *)v18 )
      break;
    v21 = *v19;
    if ( (__int64 **)v19[1] != v18 || *(__int64 **)(v21 + 8) != v19 )
      __fastfail(3u);
    *v18 = (__int64 *)v21;
    v2 = v19 - 4;
    *(_QWORD *)(v21 + 8) = v18;
    sub_14053E61C(v19 - 4);
    if ( v20 )
      v2 = v20;
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0x754E6343u);
  DbgPrintEx(0x7Fu, 2u, "CcDeletePartition: Partition Deleted=%p, PartitionObject=%p \n", P, *((const void **)P + 1));
  ExFreePoolWithTag(P, 0x72506343u);
}
