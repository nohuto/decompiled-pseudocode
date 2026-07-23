/*
 * XREFs of sub_14035800C @ 0x14035800C
 * Callers:
 *     sub_1402519B0 @ 0x1402519B0 (sub_1402519B0.c)
 *     sub_140355830 @ 0x140355830 (sub_140355830.c)
 *     sub_140357EE0 @ 0x140357EE0 (sub_140357EE0.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x1402E2C60 (KeSetCoalescableTimer.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14035800C(char a1)
{
  unsigned __int64 v2; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v5; // r9
  bool v6; // zf

  v2 = ExAcquireSpinLockExclusive(&dword_140C23C40);
  if ( a1 )
    byte_140C23BB4 = 0;
  if ( !byte_140C23BB4 && dword_140C23BB0 > 0 )
  {
    byte_140C23BB4 = 1;
    KeSetCoalescableTimer(
      &Timer,
      (LARGE_INTEGER)(-10000LL * (unsigned int)dword_140C0C640),
      0,
      (unsigned int)dword_140C0C640 >> 1,
      &stru_140C23BC0);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C23C40);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v5 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v6 = ((unsigned int)result & *(_DWORD *)(v5 + 20)) == 0;
        *(_DWORD *)(v5 + 20) &= result;
        if ( v6 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return result;
}
