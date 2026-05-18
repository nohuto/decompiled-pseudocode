/*
 * XREFs of sub_180029E78 @ 0x180029E78
 * Callers:
 *     sub_18002A070 @ 0x18002A070 (sub_18002A070.c)
 *     sub_180060148 @ 0x180060148 (sub_180060148.c)
 *     sub_180060F7C @ 0x180060F7C (sub_180060F7C.c)
 * Callees:
 *     sub_18002A570 @ 0x18002A570 (sub_18002A570.c)
 */

__int64 __fastcall sub_180029E78(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 8) = 0;
  sub_18002A570(a2);
  result = a1;
  *(_BYTE *)(a1 + 8) = 1;
  return result;
}
