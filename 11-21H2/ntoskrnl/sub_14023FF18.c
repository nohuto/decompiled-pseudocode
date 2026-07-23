/*
 * XREFs of sub_14023FF18 @ 0x14023FF18
 * Callers:
 *     sub_14023FF18 @ 0x14023FF18 (sub_14023FF18.c)
 *     sub_140277D10 @ 0x140277D10 (sub_140277D10.c)
 *     sub_1402C4BF0 @ 0x1402C4BF0 (sub_1402C4BF0.c)
 *     sub_14038DF70 @ 0x14038DF70 (sub_14038DF70.c)
 *     sub_14045CDD6 @ 0x14045CDD6 (sub_14045CDD6.c)
 *     sub_14058FE88 @ 0x14058FE88 (sub_14058FE88.c)
 *     sub_1407F8FE0 @ 0x1407F8FE0 (sub_1407F8FE0.c)
 *     sub_14081DDB0 @ 0x14081DDB0 (sub_14081DDB0.c)
 *     sub_1408525D8 @ 0x1408525D8 (sub_1408525D8.c)
 *     sub_140855E78 @ 0x140855E78 (sub_140855E78.c)
 *     sub_140968388 @ 0x140968388 (sub_140968388.c)
 *     sub_140969850 @ 0x140969850 (sub_140969850.c)
 *     sub_14096B768 @ 0x14096B768 (sub_14096B768.c)
 *     sub_14096F470 @ 0x14096F470 (sub_14096F470.c)
 *     sub_1409839C0 @ 0x1409839C0 (sub_1409839C0.c)
 * Callees:
 *     sub_14023FF18 @ 0x14023FF18 (sub_14023FF18.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14023FF18(__int64 a1, unsigned int a2)
{
  unsigned __int64 v4; // rsi
  _QWORD *v5; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  int v10; // eax
  bool v11; // zf

  v4 = ExAcquireSpinLockExclusive(&dword_140C55048);
  if ( (ULONG_PTR *)a1 != &StartContext )
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 200));
  if ( a2 )
  {
    v5 = *(_QWORD **)(a1 + 32);
  }
  else
  {
    v5 = qword_140D06950;
    if ( (ULONG_PTR *)a1 != &StartContext )
      v5 = *(_QWORD **)(a1 + 96);
  }
  if ( v5 )
  {
    ++*(v5 - 1);
    ++qword_140C54FA8;
  }
  if ( (ULONG_PTR *)a1 != &StartContext )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 200));
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C55048);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = *((_QWORD *)CurrentPrcb + 4375);
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
        *(_DWORD *)(v9 + 20) &= v10;
        if ( v11 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  if ( !v5 )
    return sub_14023FF18(&StartContext, a2);
  return (__int64)v5;
}
