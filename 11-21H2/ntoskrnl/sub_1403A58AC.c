/*
 * XREFs of sub_1403A58AC @ 0x1403A58AC
 * Callers:
 *     ExInitializeFastResource @ 0x1403A5830 (ExInitializeFastResource.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1403A58AC(_QWORD *a1)
{
  unsigned __int64 v2; // rdi
  _QWORD *v3; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v6; // r9
  bool v7; // zf

  v2 = ExAcquireSpinLockExclusive(&dword_140D310C0);
  v3 = (_QWORD *)qword_140C11758;
  if ( *(__int64 **)qword_140C11758 != &qword_140C11750 )
    __fastfail(3u);
  *a1 = &qword_140C11750;
  a1[1] = v3;
  *v3 = a1;
  qword_140C11758 = (__int64)a1;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140D310C0);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v6 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v7 = ((unsigned int)result & *(_DWORD *)(v6 + 20)) == 0;
        *(_DWORD *)(v6 + 20) &= result;
        if ( v7 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return result;
}
