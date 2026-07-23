/*
 * XREFs of sub_1403982A0 @ 0x1403982A0
 * Callers:
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14025383C @ 0x14025383C (sub_14025383C.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 sub_1403982A0()
{
  unsigned __int8 CurrentIrql; // di
  __int64 v1; // r15
  __int64 *v2; // rsi
  __int64 *v3; // rbp
  __int64 v4; // rax
  __int64 result; // rax
  char v6; // bl
  __int64 v7; // r9
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  int v11; // eax
  bool v12; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v7 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v7 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v1 = MEMORY[0xFFFFF78000000008];
  v2 = (__int64 *)qword_140C11730;
  while ( v2 != &qword_140C11730 )
  {
    v3 = v2 - 33;
    v2 = (__int64 *)*v2;
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v3 + 8);
    if ( v3[32] )
    {
      v4 = v3[35];
      if ( !v4 || (*(_DWORD *)(v4 + 632) & 8) == 0 )
        sub_14025383C((PKTIMER)v3, v1);
    }
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v3 + 8);
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v8 = KeGetCurrentIrql();
      if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = *((_QWORD *)CurrentPrcb + 4375);
        v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
        *(_DWORD *)(v10 + 20) &= v11;
        if ( v12 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C11720, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
    return ExfTryToWakePushLock(&qword_140C11720);
  return result;
}
