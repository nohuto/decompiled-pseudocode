/*
 * XREFs of sub_1402A188C @ 0x1402A188C
 * Callers:
 *     sub_140711614 @ 0x140711614 (sub_140711614.c)
 *     sub_1407F575C @ 0x1407F575C (sub_1407F575C.c)
 *     sub_1407F584C @ 0x1407F584C (sub_1407F584C.c)
 * Callees:
 *     sub_1402829A8 @ 0x1402829A8 (sub_1402829A8.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1402A188C(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rbp
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v11; // r9
  int v12; // edx
  bool v13; // zf

  v2 = a1 + 1664;
  if ( (unsigned __int64)sub_1402829A8(a1 + 1664) <= 2 )
    return 3221226021LL;
  v5 = -1073741275;
  v6 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v2 + 174));
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 1160));
  v8 = sub_1402829A8(v2);
  if ( v8 > 2 )
  {
    v5 = 0;
    *a2 = *(_QWORD *)(*(_QWORD *)v8 + 24LL);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 1160));
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = *((_QWORD *)CurrentPrcb + 4375);
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
        *(_DWORD *)(v11 + 20) &= v12;
        if ( v13 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return v5;
}
