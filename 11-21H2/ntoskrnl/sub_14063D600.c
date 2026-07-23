/*
 * XREFs of sub_14063D600 @ 0x14063D600
 * Callers:
 *     sub_14063D2FC @ 0x14063D2FC (sub_14063D2FC.c)
 * Callees:
 *     sub_14021CD50 @ 0x14021CD50 (sub_14021CD50.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140641F38 @ 0x140641F38 (sub_140641F38.c)
 */

char sub_14063D600()
{
  __int64 CurrentThread; // rbx
  char v1; // di
  unsigned int v2; // ecx
  ULONG_PTR *v3; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v7; // r9
  int v8; // eax
  bool v9; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = (__int64)KeGetCurrentThread();
  KeAcquireInStackQueuedSpinLock(&stru_140D31980 + 12, &LockHandle);
  v1 = sub_140641F38(&stru_140D31980);
  if ( v1 )
  {
    v2 = (CurrentThread & 3) != 0 ? 0 : *(unsigned __int8 *)(CurrentThread + 1120);
    v3 = sub_14021CD50((__int64)&stru_140D31980, CurrentThread, (__int64)&LockHandle, 0, 0, v2);
    if ( v3 != &stru_140D31980 + 6 )
    {
      *((_OWORD *)&stru_140D31980 + 3) = *(_OWORD *)v3;
      *((_DWORD *)&stru_140D31980 + 14) = _mm_cvtsi128_si32(_mm_srli_si128(*((__m128i *)&stru_140D31980 + 3), 8)) & 7 | 8;
      *(_OWORD *)v3 = 0LL;
    }
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
        v7 = *((_QWORD *)CurrentPrcb + 4375);
        v8 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
        *(_DWORD *)(v7 + 20) &= v8;
        if ( v9 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return v1;
}
