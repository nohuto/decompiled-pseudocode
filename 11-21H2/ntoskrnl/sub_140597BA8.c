/*
 * XREFs of sub_140597BA8 @ 0x140597BA8
 * Callers:
 *     sub_1406A377C @ 0x1406A377C (sub_1406A377C.c)
 *     sub_1406A3A68 @ 0x1406A3A68 (sub_1406A3A68.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140597BA8(_DWORD *a1)
{
  __int64 v1; // rbx
  KIRQL v3; // al
  unsigned __int64 v4; // rsi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v8; // r9
  bool v9; // zf

  v1 = *(_QWORD *)a1;
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)a1 + 72LL));
  a1[13] |= 0x40000000u;
  v4 = v3;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 72));
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v9 = ((unsigned int)result & *(_DWORD *)(v8 + 20)) == 0;
        *(_DWORD *)(v8 + 20) &= result;
        if ( v9 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return result;
}
