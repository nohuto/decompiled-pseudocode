/*
 * XREFs of sub_18009B310 @ 0x18009B310
 * Callers:
 *     sub_1800952D4 @ 0x1800952D4 (sub_1800952D4.c)
 * Callees:
 *     sub_18002B024 @ 0x18002B024 (sub_18002B024.c)
 */

__int64 __fastcall sub_18009B310(__int64 a1, unsigned int a2)
{
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  sub_18002B024((_QWORD *)(a1 + 144), &v5);
  return sub_18002B780(a1, a2);
}
