/*
 * XREFs of sub_140A91F88 @ 0x140A91F88
 * Callers:
 *     sub_140A91BA0 @ 0x140A91BA0 (sub_140A91BA0.c)
 *     sub_140A91C30 @ 0x140A91C30 (sub_140A91C30.c)
 *     sub_140A91DA0 @ 0x140A91DA0 (sub_140A91DA0.c)
 *     sub_140A91E10 @ 0x140A91E10 (sub_140A91E10.c)
 * Callees:
 *     sub_1402D81DC @ 0x1402D81DC (sub_1402D81DC.c)
 *     sub_1402D8518 @ 0x1402D8518 (sub_1402D8518.c)
 *     sub_14045F6C8 @ 0x14045F6C8 (sub_14045F6C8.c)
 */

PVOID sub_140A91F88()
{
  int v0; // edx
  unsigned __int64 v1; // r8
  PVOID v2; // rbx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  sub_14045F6C8((__int64)&v4, 1);
  v2 = sub_1402D8518(&qword_140D58A10, (__int64)&v4, v1, (unsigned int)(v0 + 31));
  sub_1402D81DC((__int64)&v4);
  return v2;
}
