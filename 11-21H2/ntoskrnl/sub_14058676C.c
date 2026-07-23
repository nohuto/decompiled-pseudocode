/*
 * XREFs of sub_14058676C @ 0x14058676C
 * Callers:
 *     sub_140591C4C @ 0x140591C4C (sub_140591C4C.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14058676C(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rsi
  volatile LONG *v4; // rdi
  __int64 v6; // rbx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r8
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  bool v12; // zf

  v3 = qword_140C52968;
  v4 = (volatile LONG *)(a1 + 22848);
  v6 = (a2 >> 18) & 0x3FFFFF;
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 22848));
  v8 = *(_QWORD *)(v3 + 8 * v6) & 0xFFFFFFFFFE3FFFFFuLL | 0x1400000;
  *(_QWORD *)(v3 + 8 * v6) = v8 ^ ((unsigned int)v8 ^ a3) & 0x3FFFFF;
  ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v12 = ((unsigned int)result & *(_DWORD *)(v11 + 20)) == 0;
        *(_DWORD *)(v11 + 20) &= result;
        if ( v12 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return result;
}
