/*
 * XREFs of sub_18004DACC @ 0x18004DACC
 * Callers:
 *     sub_18004F42C @ 0x18004F42C (sub_18004F42C.c)
 *     sub_18004F81C @ 0x18004F81C (sub_18004F81C.c)
 * Callees:
 *     sub_18004D864 @ 0x18004D864 (sub_18004D864.c)
 */

__int64 __fastcall sub_18004DACC(__int64 *a1, int a2, int a3, unsigned int a4, char a5, int a6, __int64 a7)
{
  return sub_18004D864(a1, a2, a3, a4, a6, a7, (__int64)&a5);
}
