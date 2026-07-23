/*
 * XREFs of sub_140522804 @ 0x140522804
 * Callers:
 *     sub_14050D760 @ 0x14050D760 (sub_14050D760.c)
 *     sub_140A64868 @ 0x140A64868 (sub_140A64868.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140522804(_QWORD *a1)
{
  unsigned __int64 v2; // rdi
  _QWORD *v3; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v6; // r9
  bool v7; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C4A260);
  v3 = (_QWORD *)qword_140C4A258;
  if ( *(__int64 **)qword_140C4A258 != &qword_140C4A250 )
    __fastfail(3u);
  *a1 = &qword_140C4A250;
  a1[1] = v3;
  *v3 = a1;
  qword_140C4A258 = (__int64)a1;
  KeReleaseSpinLockFromDpcLevel(&qword_140C4A260);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v6 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v7 = ((unsigned int)result & *(_DWORD *)(v6 + 20)) == 0;
        *(_DWORD *)(v6 + 20) &= result;
        if ( v7 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  a1[2] = 0LL;
  return result;
}
