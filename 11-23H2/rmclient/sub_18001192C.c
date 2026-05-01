/*
 * XREFs of sub_18001192C @ 0x18001192C
 * Callers:
 *     sub_18000F6B0 @ 0x18000F6B0 (sub_18000F6B0.c)
 *     sub_180010B38 @ 0x180010B38 (sub_180010B38.c)
 *     sub_180010D2C @ 0x180010D2C (sub_180010D2C.c)
 *     sub_180015674 @ 0x180015674 (sub_180015674.c)
 * Callees:
 *     sub_1800118FC @ 0x1800118FC (sub_1800118FC.c)
 */

char __fastcall sub_18001192C(__int64 a1, const void *a2, unsigned __int64 a3)
{
  char result; // al

  result = sub_1800118FC((_QWORD *)a1, a3);
  if ( result )
  {
    memcpy_s(
      *(void *const *)(a1 + 8),
      (*(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 8)) & -(__int64)(*(_QWORD *)(a1 + 8) < *(_QWORD *)(a1 + 16)),
      a2,
      a3);
    *(_QWORD *)(a1 + 8) += a3;
    return 1;
  }
  return result;
}
