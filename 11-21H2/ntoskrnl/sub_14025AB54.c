/*
 * XREFs of sub_14025AB54 @ 0x14025AB54
 * Callers:
 *     sub_1407D6CE0 @ 0x1407D6CE0 (sub_1407D6CE0.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14025AB54(__int64 a1)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rax
  __int64 *v4; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v7; // r9
  bool v8; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C15B28);
  v3 = qword_140C15B40;
  v4 = (__int64 *)(a1 + 2080);
  if ( *(__int64 **)(qword_140C15B40 + 8) != &qword_140C15B40 )
    __fastfail(3u);
  v4[1] = (__int64)&qword_140C15B40;
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  qword_140C15B40 = (__int64)v4;
  KeReleaseSpinLockFromDpcLevel(&qword_140C15B28);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v7 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v8 = ((unsigned int)result & *(_DWORD *)(v7 + 20)) == 0;
        *(_DWORD *)(v7 + 20) &= result;
        if ( v8 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return result;
}
