/*
 * XREFs of sub_1402D8304 @ 0x1402D8304
 * Callers:
 *     sub_1402D8234 @ 0x1402D8234 (sub_1402D8234.c)
 *     sub_1402D8518 @ 0x1402D8518 (sub_1402D8518.c)
 *     sub_1402DB8D8 @ 0x1402DB8D8 (sub_1402DB8D8.c)
 *     sub_140A9B1BC @ 0x140A9B1BC (sub_140A9B1BC.c)
 *     sub_140A9B230 @ 0x140A9B230 (sub_140A9B230.c)
 * Callees:
 *     sub_1402D82D0 @ 0x1402D82D0 (sub_1402D82D0.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

void __fastcall sub_1402D8304(__int64 a1, __int64 a2)
{
  char v2; // al
  volatile LONG *v5; // rcx

  v2 = *(_BYTE *)(a2 + 9);
  if ( (v2 & 2) == 0 )
    goto LABEL_2;
  if ( *(_QWORD *)a2 != a1 )
  {
    sub_1402D82D0(*(_QWORD *)a2, a2);
    v2 = *(_BYTE *)(a2 + 9);
  }
  if ( (v2 & 2) == 0 )
  {
LABEL_2:
    v5 = (volatile LONG *)(a1 + 128);
    if ( (v2 & 4) != 0 )
      ExAcquireSpinLockExclusiveAtDpcLevel(v5);
    else
      ExAcquireSpinLockSharedAtDpcLevel(v5);
    *(_BYTE *)(a2 + 9) |= 2u;
    *(_QWORD *)a2 = a1;
  }
}
