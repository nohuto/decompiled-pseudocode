/*
 * XREFs of sub_180040120 @ 0x180040120
 * Callers:
 *     sub_1800E66FB @ 0x1800E66FB (sub_1800E66FB.c)
 *     sub_1800E6809 @ 0x1800E6809 (sub_1800E6809.c)
 *     sub_1800E6851 @ 0x1800E6851 (sub_1800E6851.c)
 *     sub_1800E6887 @ 0x1800E6887 (sub_1800E6887.c)
 *     sub_1800E6899 @ 0x1800E6899 (sub_1800E6899.c)
 *     sub_1800E68BD @ 0x1800E68BD (sub_1800E68BD.c)
 *     sub_1800E68CF @ 0x1800E68CF (sub_1800E68CF.c)
 * Callees:
 *     sub_18002E108 @ 0x18002E108 (sub_18002E108.c)
 *     sub_18002E114 @ 0x18002E114 (sub_18002E114.c)
 */

_DWORD *sub_180040120()
{
  __int64 v0; // r8
  _DWORD *result; // rax
  int v2; // edx
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  sub_18002E114(&v3);
  result = (_DWORD *)sub_18002E108(v0);
  *result = v2;
  return result;
}
