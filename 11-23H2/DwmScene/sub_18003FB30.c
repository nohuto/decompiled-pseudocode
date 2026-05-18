/*
 * XREFs of sub_18003FB30 @ 0x18003FB30
 * Callers:
 *     sub_18003FBE0 @ 0x18003FBE0 (sub_18003FBE0.c)
 *     sub_18003FC8C @ 0x18003FC8C (sub_18003FC8C.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 */

__int64 *__fastcall sub_18003FB30(__int64 *a1)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = sub_18001C190();
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  *a1 = v2;
  return a1;
}
