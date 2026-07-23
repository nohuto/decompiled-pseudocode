/*
 * XREFs of sub_1405568E4 @ 0x1405568E4
 * Callers:
 *     IoStartTimer @ 0x140557DF0 (IoStartTimer.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetCoalescableTimer @ 0x1402E2C60 (KeSetCoalescableTimer.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14062DBE4 @ 0x14062DBE4 (sub_14062DBE4.c)
 */

__int64 __fastcall sub_1405568E4(__int64 a1)
{
  unsigned __int64 v2; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v5; // r9
  bool v6; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140D31140);
  if ( !*(_WORD *)(a1 + 2) )
  {
    if ( !dword_140C47150 )
      KeSetCoalescableTimer(&stru_140C47160, (LARGE_INTEGER)-10000000LL, 0x3E8u, 0x23u, &stru_140C471C0);
    ++dword_140C47150;
    *(_WORD *)(a1 + 2) = 1;
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140D31140);
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
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  if ( (DWORD2(xmmword_140D06900) & 0x800000) != 0 )
    return sub_14062DBE4(3933LL, *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 24));
  return result;
}
