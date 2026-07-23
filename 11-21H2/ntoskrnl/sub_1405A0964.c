/*
 * XREFs of sub_1405A0964 @ 0x1405A0964
 * Callers:
 *     sub_140267320 @ 0x140267320 (sub_140267320.c)
 *     sub_14059DA64 @ 0x14059DA64 (sub_14059DA64.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405A1CC0 @ 0x1405A1CC0 (sub_1405A1CC0.c)
 */

void __fastcall sub_1405A0964(_QWORD *a1)
{
  unsigned __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v5; // r9
  int v6; // eax
  bool v7; // zf

  if ( a1 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C56920);
    *a1 = qword_140C4F2A0;
    qword_140C4F2A0 = (__int64)a1;
    sub_1405A1CC0();
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C56920);
  }
  else
  {
    v2 = ExAcquireSpinLockExclusive(&dword_140C56920);
    sub_1405A1CC0();
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C56920);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v5 = *((_QWORD *)CurrentPrcb + 4375);
          v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v7 = (v6 & *(_DWORD *)(v5 + 20)) == 0;
          *(_DWORD *)(v5 + 20) &= v6;
          if ( v7 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v2);
  }
}
