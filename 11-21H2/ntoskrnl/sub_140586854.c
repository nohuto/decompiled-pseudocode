/*
 * XREFs of sub_140586854 @ 0x140586854
 * Callers:
 *     sub_1409811F0 @ 0x1409811F0 (sub_1409811F0.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405891A4 @ 0x1405891A4 (sub_1405891A4.c)
 */

__int64 __fastcall sub_140586854(__int64 a1, unsigned int a2)
{
  __int64 v2; // r14
  volatile LONG *v5; // rbp
  __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v13; // r8
  int v14; // eax
  bool v15; // zf

  v2 = *(_QWORD *)(a1 + 15984);
  if ( !v2 )
    return 0LL;
  v5 = (volatile LONG *)(*(_QWORD *)(a1 + 16) + 24512LL * a2 + 22848);
  v6 = a2 + 2 * dword_140C507C0[0] * (unsigned __int16)word_140D05000;
  v7 = ExAcquireSpinLockExclusive(v5);
  v10 = *(_DWORD *)(v2 + 8 * v6) & 0x3FFFFF;
  if ( v10 )
    sub_1405891A4(a1, v10, v8, v9);
  ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v13 = *((_QWORD *)CurrentPrcb + 4375);
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
        *(_DWORD *)(v13 + 20) &= v14;
        if ( v15 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return v10;
}
