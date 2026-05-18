/*
 * XREFs of sub_18002A8E4 @ 0x18002A8E4
 * Callers:
 *     sub_18002B0C4 @ 0x18002B0C4 (sub_18002B0C4.c)
 *     sub_18002B35C @ 0x18002B35C (sub_18002B35C.c)
 *     sub_18002B3C0 @ 0x18002B3C0 (sub_18002B3C0.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 */

__int64 sub_18002A8E4()
{
  __int64 result; // rax

  result = sub_18001090C(0x58uLL);
  *(_QWORD *)result = result;
  *(_QWORD *)(result + 8) = result;
  *(_QWORD *)(result + 16) = result;
  *(_WORD *)(result + 24) = 257;
  return result;
}
