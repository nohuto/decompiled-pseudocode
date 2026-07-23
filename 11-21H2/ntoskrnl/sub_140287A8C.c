/*
 * XREFs of sub_140287A8C @ 0x140287A8C
 * Callers:
 *     sub_14023F658 @ 0x14023F658 (sub_14023F658.c)
 *     sub_14028C230 @ 0x14028C230 (sub_14028C230.c)
 *     sub_140329730 @ 0x140329730 (sub_140329730.c)
 *     sub_14058A6D4 @ 0x14058A6D4 (sub_14058A6D4.c)
 *     sub_14058B0C8 @ 0x14058B0C8 (sub_14058B0C8.c)
 *     sub_140597ED0 @ 0x140597ED0 (sub_140597ED0.c)
 *     sub_14059854C @ 0x14059854C (sub_14059854C.c)
 *     sub_14059D028 @ 0x14059D028 (sub_14059D028.c)
 *     sub_1405A032C @ 0x1405A032C (sub_1405A032C.c)
 * Callees:
 *     sub_140287B04 @ 0x140287B04 (sub_140287B04.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140287A8C(__int64 a1, int a2)
{
  volatile LONG *v2; // rsi
  KIRQL v4; // bl
  __int64 v5; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  int v10; // eax
  bool v11; // zf

  v2 = (volatile LONG *)(a1 + 72);
  if ( a2 )
    v4 = 17;
  else
    v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  --*(_DWORD *)(a1 + 76);
  v5 = sub_140287B04(a1, 8LL);
  if ( v4 != 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v4 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v9 = *((_QWORD *)CurrentPrcb + 4375);
          v10 = ~(unsigned __int16)(-1LL << (v4 + 1));
          v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
          *(_DWORD *)(v9 + 20) &= v10;
          if ( v11 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v4);
  }
  return v5;
}
