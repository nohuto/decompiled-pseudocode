/*
 * XREFs of sub_140601F88 @ 0x140601F88
 * Callers:
 *     sub_140A9D4F0 @ 0x140A9D4F0 (sub_140A9D4F0.c)
 *     sub_140A9D738 @ 0x140A9D738 (sub_140A9D738.c)
 *     sub_140A9D980 @ 0x140A9D980 (sub_140A9D980.c)
 *     sub_140A9DA38 @ 0x140A9DA38 (sub_140A9DA38.c)
 *     sub_140A9DB60 @ 0x140A9DB60 (sub_140A9DB60.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

void __fastcall sub_140601F88(__int64 a1, __int64 a2)
{
  char v2; // al
  volatile LONG *v5; // rcx

  v2 = *(_BYTE *)(a2 + 9);
  if ( (v2 & 2) == 0 )
  {
    v5 = (volatile LONG *)(a1 + 128);
    if ( (v2 & 4) != 0 )
      ExAcquireSpinLockExclusiveAtDpcLevel(v5);
    else
      ExAcquireSpinLockSharedAtDpcLevel(v5);
    *(_BYTE *)(a2 + 9) |= 2u;
    *(_QWORD *)a2 = a1;
  }
}
