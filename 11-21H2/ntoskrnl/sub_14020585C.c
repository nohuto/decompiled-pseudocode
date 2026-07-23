/*
 * XREFs of sub_14020585C @ 0x14020585C
 * Callers:
 *     sub_140672348 @ 0x140672348 (sub_140672348.c)
 * Callees:
 *     sub_1402058C0 @ 0x1402058C0 (sub_1402058C0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14020585C(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rbx
  KIRQL v5; // al
  unsigned __int64 v6; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  bool v10; // zf

  result = sub_1402058C0();
  v4 = result;
  if ( result )
  {
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)result);
    *(_QWORD *)(v4 + 16) = 0LL;
    v6 = v5;
    *(_QWORD *)(v4 + 8) = a2;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v4);
    result = (unsigned int)dword_140D06B08;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v9 = *((_QWORD *)CurrentPrcb + 4375);
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v10 = ((unsigned int)result & *(_DWORD *)(v9 + 20)) == 0;
          *(_DWORD *)(v9 + 20) &= result;
          if ( v10 )
            result = sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
  }
  return result;
}
