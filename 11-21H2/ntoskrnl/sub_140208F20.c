/*
 * XREFs of sub_140208F20 @ 0x140208F20
 * Callers:
 *     sub_14024FA14 @ 0x14024FA14 (sub_14024FA14.c)
 *     sub_140363850 @ 0x140363850 (sub_140363850.c)
 *     sub_140681870 @ 0x140681870 (sub_140681870.c)
 * Callees:
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140209000 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140366864 @ 0x140366864 (sub_140366864.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140208F20(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-40h] BYREF
  int v15; // [rsp+38h] [rbp-28h] BYREF
  __int128 v16; // [rsp+3Ch] [rbp-24h]
  int v17; // [rsp+4Ch] [rbp-14h]
  unsigned __int64 QpcTimeStamp; // [rsp+50h] [rbp-10h] BYREF

  v15 = 1;
  v17 = 0;
  v16 = 0LL;
  LODWORD(v16) = _mm_cvtsi128_si32((__m128i)0LL) | 0x200;
  memset(&LockHandle, 0, sizeof(LockHandle));
  QpcTimeStamp = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 40), &LockHandle);
  sub_140366864(a1, &v15, 3LL);
  v6 = *(_OWORD *)(a1 + 104);
  *a2 = *(_OWORD *)(a1 + 88);
  v7 = *(_OWORD *)(a1 + 128);
  a2[1] = v6;
  v8 = *(_OWORD *)(a1 + 144);
  *a3 = v7;
  a3[1] = v8;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)dword_140D06B08;
  OldIrql = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v13 = ((unsigned int)result & *(_DWORD *)(v12 + 20)) == 0;
        *(_DWORD *)(v12 + 20) &= result;
        if ( v13 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
