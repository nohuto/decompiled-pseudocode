/*
 * XREFs of sub_1405D05C0 @ 0x1405D05C0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1402D6004 @ 0x1402D6004 (sub_1402D6004.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 sub_1405D05C0()
{
  unsigned __int64 v0; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v3; // r9
  bool v4; // zf

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140C22160);
  if ( byte_140C221F8 )
  {
    sub_1402D6004(0xAu);
    dword_140C2216C = -1;
    byte_140C221F8 = 0;
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C22160);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v0 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v3 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v0 + 1));
        v4 = ((unsigned int)result & *(_DWORD *)(v3 + 20)) == 0;
        *(_DWORD *)(v3 + 20) &= result;
        if ( v4 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v0);
  return result;
}
