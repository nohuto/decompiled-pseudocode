/*
 * XREFs of sub_140395198 @ 0x140395198
 * Callers:
 *     sub_1408025E8 @ 0x1408025E8 (sub_1408025E8.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 sub_140395198()
{
  unsigned __int64 v0; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v3; // r9
  bool v4; // zf

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140C23068);
  byte_140C547FC = 0;
  KeReleaseSpinLockFromDpcLevel(&qword_140C23068);
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
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v0);
  return result;
}
