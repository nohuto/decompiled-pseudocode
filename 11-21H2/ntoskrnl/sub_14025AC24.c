/*
 * XREFs of sub_14025AC24 @ 0x14025AC24
 * Callers:
 *     sub_1407092C0 @ 0x1407092C0 (sub_1407092C0.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14025AC24(__int64 a1, int a2)
{
  KIRQL v4; // al
  unsigned __int64 v5; // rsi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v8; // r9
  bool v9; // zf

  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  *(_DWORD *)(a1 + 56) |= 0x20000000u;
  v5 = v4;
  if ( a2 < 1 )
    *(_DWORD *)(a1 + 92) &= ~0x10000u;
  else
    *(_DWORD *)(a1 + 92) |= 0x10000u;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v5 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v9 = ((unsigned int)result & *(_DWORD *)(v8 + 20)) == 0;
        *(_DWORD *)(v8 + 20) &= result;
        if ( v9 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  return result;
}
