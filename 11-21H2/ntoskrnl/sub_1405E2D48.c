/*
 * XREFs of sub_1405E2D48 @ 0x1405E2D48
 * Callers:
 *     sub_1409B3450 @ 0x1409B3450 (sub_1409B3450.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1405E2D48(__int64 a1)
{
  KIRQL v2; // al
  __int64 **v3; // rdx
  __int64 *v4; // rbx
  unsigned __int64 v5; // rdi
  __int64 *v6; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  bool v10; // zf

  v2 = ExAcquireSpinLockExclusive(&dword_140C1BD54);
  v3 = *(__int64 ***)(a1 + 48);
  v4 = (__int64 *)(a1 + 40);
  v5 = v2;
  v6 = (__int64 *)*v4;
  if ( *(__int64 **)(*v4 + 8) != v4 || *v3 != v4 )
    __fastfail(3u);
  *v3 = v6;
  v6[1] = (__int64)v3;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C1BD54);
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
        v10 = ((unsigned int)result & *(_DWORD *)(v9 + 20)) == 0;
        *(_DWORD *)(v9 + 20) &= result;
        if ( v10 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  return result;
}
