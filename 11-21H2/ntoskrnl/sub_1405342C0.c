/*
 * XREFs of sub_1405342C0 @ 0x1405342C0
 * Callers:
 *     sub_140533E60 @ 0x140533E60 (sub_140533E60.c)
 *     sub_140534894 @ 0x140534894 (sub_140534894.c)
 *     sub_140534970 @ 0x140534970 (sub_140534970.c)
 *     sub_140534A70 @ 0x140534A70 (sub_140534A70.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1405342C0(__int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 **v7; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  bool v11; // zf

  _BitScanForward64(&v3, a1[7]);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 104));
  v6 = *(_QWORD *)(a2 + 96) + 16LL * (unsigned int)(v3 - 12);
  v7 = *(__int64 ***)(v6 + 8);
  if ( *v7 != (__int64 *)v6 )
    __fastfail(3u);
  *a1 = v6;
  a1[1] = (__int64)v7;
  *v7 = a1;
  *(_QWORD *)(v6 + 8) = a1;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a2 + 104));
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v5 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v11 = ((unsigned int)result & *(_DWORD *)(v10 + 20)) == 0;
        *(_DWORD *)(v10 + 20) &= result;
        if ( v11 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  return result;
}
