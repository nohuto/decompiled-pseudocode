/*
 * XREFs of sub_18004D50C @ 0x18004D50C
 * Callers:
 *     sub_18004E6AC @ 0x18004E6AC (sub_18004E6AC.c)
 *     sub_18005EA14 @ 0x18005EA14 (sub_18005EA14.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 */

__int64 sub_18004D50C()
{
  __int64 result; // rax

  result = sub_18001090C(0x40uLL);
  *(_QWORD *)result = result;
  *(_QWORD *)(result + 8) = result;
  *(_QWORD *)(result + 16) = result;
  *(_WORD *)(result + 24) = 257;
  return result;
}
