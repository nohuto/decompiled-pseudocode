/*
 * XREFs of sub_14020DAE8 @ 0x14020DAE8
 * Callers:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_140228C50 @ 0x140228C50 (sub_140228C50.c)
 *     sub_140274C80 @ 0x140274C80 (sub_140274C80.c)
 *     sub_140318330 @ 0x140318330 (sub_140318330.c)
 *     sub_14031A5C0 @ 0x14031A5C0 (sub_14031A5C0.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 * Callees:
 *     <none>
 */

char *__fastcall sub_14020DAE8(__int64 a1, __int64 a2, int *a3)
{
  unsigned __int64 v3; // r9
  int v4; // edx
  unsigned __int64 v5; // r9
  char *v6; // rax
  char *result; // rax

  v3 = 2 * (unsigned int)((a2 + 0x90482413000LL) >> 3);
  v4 = (2 * (unsigned __int8)((a2 + 0x90482413000LL) >> 3)) & 0x1F;
  v5 = v3 >> 5;
  v6 = (char *)&unk_140C51B24;
  if ( (*(_BYTE *)(a1 + 184) & 7u) < 2 )
    v6 = (char *)(a1 + 432);
  result = &v6[4 * v5];
  *a3 = v4;
  return result;
}
