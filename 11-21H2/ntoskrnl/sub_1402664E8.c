/*
 * XREFs of sub_1402664E8 @ 0x1402664E8
 * Callers:
 *     sub_140268CA8 @ 0x140268CA8 (sub_140268CA8.c)
 *     sub_1403773D8 @ 0x1403773D8 (sub_1403773D8.c)
 *     sub_14038A914 @ 0x14038A914 (sub_14038A914.c)
 *     sub_1403CFD20 @ 0x1403CFD20 (sub_1403CFD20.c)
 * Callees:
 *     sub_140258C54 @ 0x140258C54 (sub_140258C54.c)
 *     sub_140266B40 @ 0x140266B40 (sub_140266B40.c)
 *     sub_140266B8C @ 0x140266B8C (sub_140266B8C.c)
 *     sub_140266C0C @ 0x140266C0C (sub_140266C0C.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_14035F4C8 @ 0x14035F4C8 (sub_14035F4C8.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_1402664E8(__int64 a1)
{
  unsigned __int64 v2; // rbx
  unsigned int v3; // r14d
  int v4; // ebp
  int v5; // edi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned int v8; // ebx
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  int v13; // eax
  bool v14; // zf
  signed __int32 v15[8]; // [rsp+0h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 15680), &LockHandle);
  v2 = *(_QWORD *)(a1 + 16896);
  v3 = sub_140266C0C(a1) == 0;
  if ( v2 < 0xA0 )
  {
    v8 = 0;
    v4 = 1;
    v5 = 18;
  }
  else
  {
    v4 = 0;
    if ( v2 < 0x420 )
    {
      v8 = 1;
      v5 = 18;
    }
    else
    {
      v5 = 8;
      v6 = sub_140266B40(a1, 6LL);
      if ( v6 < 3LL * *(_QWORD *)(*(_QWORD *)(a1 + 16600) + 2392LL) )
      {
        v8 = 2;
      }
      else
      {
        v7 = *(_QWORD *)(a1 + 17504);
        if ( v7 >= v6 + 0x2000 )
          v8 = (v7 < v6 + 0x2000 + v6) + 2;
        else
          v8 = 4;
      }
    }
  }
  if ( (unsigned int)sub_140266B8C(*(_QWORD *)(a1 + 1208)) != v5 )
    KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 1208));
  if ( v4 )
    KeSetEvent((PRKEVENT)(a1 + 1216), 0, 0);
  if ( (unsigned __int8)byte_140D321A8 != v8 || !v8 || (unsigned __int8)byte_140D321A9 != v3 )
  {
    byte_140D321A8 = v8;
    byte_140D321A9 = v3 != 0;
    _InterlockedOr(v15, 0);
    sub_14035F4C8(&unk_140D31A00, v8, v3);
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
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( !v8 )
    sub_140258C54(&stru_140D31F80, 0);
}
