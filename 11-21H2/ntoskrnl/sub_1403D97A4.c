/*
 * XREFs of sub_1403D97A4 @ 0x1403D97A4
 * Callers:
 *     sub_14085BD34 @ 0x14085BD34 (sub_14085BD34.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1403D97A4(__int64 a1)
{
  unsigned __int64 v2; // rdi
  _QWORD *v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v7; // r9
  bool v8; // zf

  v2 = ExAcquireSpinLockExclusive(&dword_140C1BD54);
  v3 = off_140C04338[0];
  v4 = a1 + 40;
  if ( *(_UNKNOWN ***)off_140C04338[0] != &off_140C04330 )
    __fastfail(3u);
  *(_QWORD *)v4 = &off_140C04330;
  *(_QWORD *)(v4 + 8) = v3;
  *v3 = v4;
  off_140C04338[0] = (_UNKNOWN **)v4;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C1BD54);
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
