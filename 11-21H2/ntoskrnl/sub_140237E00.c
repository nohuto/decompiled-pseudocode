/*
 * XREFs of sub_140237E00 @ 0x140237E00
 * Callers:
 *     sub_140237ABC @ 0x140237ABC (sub_140237ABC.c)
 *     sub_1405F94CC @ 0x1405F94CC (sub_1405F94CC.c)
 * Callees:
 *     sub_140237F80 @ 0x140237F80 (sub_140237F80.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140237E00(__int64 a1, __int64 a2, int a3)
{
  sub_140237F80();
  if ( *(_DWORD *)(a2 + 24) != -1 && *(_QWORD *)a2 && !a3 )
    ExFreePoolWithTag(*(PVOID *)a2, 0);
}
