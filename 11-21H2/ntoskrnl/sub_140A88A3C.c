/*
 * XREFs of sub_140A88A3C @ 0x140A88A3C
 * Callers:
 *     sub_1405FE460 @ 0x1405FE460 (sub_1405FE460.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140A88A3C(__int64 *a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v6; // r9
  bool v7; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140D577C0);
  v3 = qword_140D577B0;
  if ( *(__int64 **)(qword_140D577B0 + 8) != &qword_140D577B0 )
    __fastfail(3u);
  a1[1] = (__int64)&qword_140D577B0;
  *a1 = v3;
  *(_QWORD *)(v3 + 8) = a1;
  qword_140D577B0 = (__int64)a1;
  KeReleaseSpinLockFromDpcLevel(&qword_140D577C0);
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
  return result;
}
