/*
 * XREFs of sub_1406EB810 @ 0x1406EB810
 * Callers:
 *     sub_1403CC5E8 @ 0x1403CC5E8 (sub_1403CC5E8.c)
 *     sub_1403CCB34 @ 0x1403CCB34 (sub_1403CCB34.c)
 *     sub_14064B46C @ 0x14064B46C (sub_14064B46C.c)
 * Callees:
 *     <none>
 */

const char *__fastcall sub_1406EB810(__int64 a1)
{
  const char *result; // rax

  *(_DWORD *)(a1 + 12) = 0;
  result = "-";
  *(_QWORD *)a1 = "-";
  *(_DWORD *)(a1 + 8) = 4;
  return result;
}
