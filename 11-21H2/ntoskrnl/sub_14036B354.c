/*
 * XREFs of sub_14036B354 @ 0x14036B354
 * Callers:
 *     sub_1407BE3C0 @ 0x1407BE3C0 (sub_1407BE3C0.c)
 *     sub_1407F0478 @ 0x1407F0478 (sub_1407F0478.c)
 * Callees:
 *     sub_140286D4C @ 0x140286D4C (sub_140286D4C.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14036B354(__int64 a1, ULONG_PTR a2, ULONG_PTR a3)
{
  volatile LONG *v3; // rbp
  unsigned __int64 v7; // rdi
  __int64 v8; // rax
  unsigned int v9; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v13; // eax
  __int64 v14; // r8
  bool v15; // zf
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r9
  int v18; // eax
  __int64 v19; // r8

  v3 = (volatile LONG *)(a1 + 72);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v8 = *(_QWORD *)(a1 + 40);
  if ( v8 == -1 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
    v9 = 0;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v14 = *((_QWORD *)CurrentPrcb + 4375);
          v15 = (v13 & *(_DWORD *)(v14 + 20)) == 0;
          *(_DWORD *)(v14 + 20) &= v13;
          if ( v15 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
  }
  else
  {
    if ( a2 )
    {
      sub_140286D4C(a2);
      sub_140286D4C(a3);
      v8 = *(_QWORD *)(a1 + 40);
    }
    *(_QWORD *)(a1 + 40) = v8 + 1;
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v16 = KeGetCurrentIrql();
        if ( v16 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v16 >= 2u )
        {
          v17 = KeGetCurrentPrcb();
          v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v19 = *((_QWORD *)v17 + 4375);
          v15 = (v18 & *(_DWORD *)(v19 + 20)) == 0;
          *(_DWORD *)(v19 + 20) &= v18;
          if ( v15 )
            sub_140418E4C(v17);
        }
      }
    }
    v9 = 1;
  }
  __writecr8(v7);
  return v9;
}
