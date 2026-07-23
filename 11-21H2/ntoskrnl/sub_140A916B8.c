/*
 * XREFs of sub_140A916B8 @ 0x140A916B8
 * Callers:
 *     sub_140AA6CA0 @ 0x140AA6CA0 (sub_140AA6CA0.c)
 * Callees:
 *     sub_1402D81DC @ 0x1402D81DC (sub_1402D81DC.c)
 *     sub_1402D8518 @ 0x1402D8518 (sub_1402D8518.c)
 *     sub_14045F6C8 @ 0x14045F6C8 (sub_14045F6C8.c)
 */

char sub_140A916B8()
{
  bool v1; // bl
  unsigned __int64 v2; // r8
  _BYTE *v3; // rax
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  if ( (dword_140C29FC0 & 0x10) == 0 )
    return 1;
  v1 = 1;
  sub_14045F6C8((__int64)&v4, 1);
  v3 = sub_1402D8518(qword_140D58A38, (__int64)&v4, v2, 0LL);
  if ( v3 )
    v1 = (v3[16] & 2) != 0;
  sub_1402D81DC((__int64)&v4);
  return v1;
}
