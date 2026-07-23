/*
 * XREFs of sub_1403CFC88 @ 0x1403CFC88
 * Callers:
 *     sub_14084C1C8 @ 0x14084C1C8 (sub_14084C1C8.c)
 * Callees:
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1403CFC88(PEX_SPIN_LOCK SpinLock)
{
  unsigned __int64 v2; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v5; // r9
  bool v6; // zf

  v2 = ExAcquireSpinLockExclusive(SpinLock);
  if ( *((_DWORD *)SpinLock + 1) )
    sub_1402E2D20((unsigned __int64)(SpinLock + 14), -600000000LL, 0, 0, (__int64)(SpinLock + 30));
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v5 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v6 = ((unsigned int)result & *(_DWORD *)(v5 + 20)) == 0;
        *(_DWORD *)(v5 + 20) &= result;
        if ( v6 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return result;
}
