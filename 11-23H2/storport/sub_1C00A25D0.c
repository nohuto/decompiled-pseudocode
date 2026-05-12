/*
 * XREFs of sub_1C00A25D0 @ 0x1C00A25D0
 * Callers:
 *     sub_1C0020598 @ 0x1C0020598 (sub_1C0020598.c)
 *     sub_1C00207F8 @ 0x1C00207F8 (sub_1C00207F8.c)
 *     sub_1C002095C @ 0x1C002095C (sub_1C002095C.c)
 *     sub_1C00212CC @ 0x1C00212CC (sub_1C00212CC.c)
 *     sub_1C00A1C44 @ 0x1C00A1C44 (sub_1C00A1C44.c)
 *     sub_1C00A360C @ 0x1C00A360C (sub_1C00A360C.c)
 * Callees:
 *     <none>
 */

char **__fastcall sub_1C00A25D0(unsigned int a1)
{
  __int64 v1; // rax

  v1 = 21LL;
  if ( a1 < 0x16 )
    v1 = a1;
  return &off_1C0082070[4 * v1];
}
