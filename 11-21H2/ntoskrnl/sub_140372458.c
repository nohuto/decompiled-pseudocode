/*
 * XREFs of sub_140372458 @ 0x140372458
 * Callers:
 *     sub_140371C50 @ 0x140371C50 (sub_140371C50.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140372458(__int64 a1, unsigned int *a2)
{
  volatile LONG *v2; // rbp
  __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  bool v6; // zf
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9

  v2 = (volatile LONG *)(a1 + 2144);
  v4 = a1 + 48 * (*a2 + 45LL);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 2144));
  v6 = (*(_WORD *)(v4 + 42))-- == 1;
  if ( v6 )
  {
    *(_OWORD *)v4 = 0LL;
    *(_OWORD *)(v4 + 16) = 0LL;
    *(_OWORD *)(v4 + 32) = 0LL;
    *(_QWORD *)(v4 + 16) = 0LL;
    --*(_DWORD *)(a1 + 2152);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v5 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v6 = ((unsigned int)result & *(_DWORD *)(v9 + 20)) == 0;
        *(_DWORD *)(v9 + 20) &= result;
        if ( v6 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  return result;
}
