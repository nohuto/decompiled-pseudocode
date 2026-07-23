/*
 * XREFs of sub_140253510 @ 0x140253510
 * Callers:
 *     CcPrepareMdlWrite @ 0x140253190 (CcPrepareMdlWrite.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402844A0 @ 0x1402844A0 (sub_1402844A0.c)
 *     sub_140284848 @ 0x140284848 (sub_140284848.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_14033D760 @ 0x14033D760 (sub_14033D760.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_140253510(__int64 a1, int a2, __int64 a3, char a4)
{
  char v4; // r12
  __int64 v5; // r15
  __int64 v9; // rdi
  unsigned __int64 OldIrql; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  int v15; // eax
  bool v16; // zf
  unsigned __int64 v17; // rbx
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r10
  __int64 v20; // r9
  int v21; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v23; // [rsp+58h] [rbp-18h] BYREF
  int v24; // [rsp+B8h] [rbp+48h]

  v24 = a2;
  v4 = 0;
  LODWORD(v5) = 0;
  memset(&v23, 0, sizeof(v23));
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a3 )
  {
    v9 = *(_QWORD *)(a3 + 528);
    v5 = *(_QWORD *)(a3 + 592);
  }
  else
  {
    v9 = *((_QWORD *)qword_140D06C40 + 1);
    if ( byte_140C54C58 == 1 )
    {
      KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
      LODWORD(v5) = sub_140284848(a1, v9);
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
            v14 = *((_QWORD *)CurrentPrcb + 4375);
            v15 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
            *(_DWORD *)(v14 + 20) &= v15;
            if ( v16 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      v4 = 0;
      a2 = v24;
    }
  }
  if ( (*(_DWORD *)(a1 + 80) & 0x1000000) != 0 && !(unsigned __int8)sub_1402844A0(v9, v5, a1, a2, 0, 0, 0LL)
    || a4 && (int)sub_14033D760(KeGetCurrentThread()) <= 0 && (*(_DWORD *)(a1 + 80) & 0x8000) == 0 )
  {
    v4 = 1;
    if ( a4 )
    {
      if ( (*(_DWORD *)(a3 + 152) & 0x400) == 0 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 704), &v23);
        *(_DWORD *)(a3 + 152) |= 0x400u;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v23);
        v17 = v23.OldIrql;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v18 = KeGetCurrentIrql();
            if ( v18 <= 0xFu && v23.OldIrql <= 0xFu && v18 >= 2u )
            {
              v19 = KeGetCurrentPrcb();
              v20 = *((_QWORD *)v19 + 4375);
              v21 = ~(unsigned __int16)(-1LL << (v23.OldIrql + 1));
              v16 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
              *(_DWORD *)(v20 + 20) &= v21;
              if ( v16 )
                sub_140418E4C(v19);
            }
          }
        }
        __writecr8(v17);
      }
    }
  }
  return v4;
}
