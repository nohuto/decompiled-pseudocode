/*
 * XREFs of sub_18003212C @ 0x18003212C
 * Callers:
 *     sub_1800372DC @ 0x1800372DC (sub_1800372DC.c)
 *     sub_180037578 @ 0x180037578 (sub_180037578.c)
 *     unknown_libname_8 @ 0x180058978 (unknown_libname_8.c)
 *     sub_1800C5D20 @ 0x1800C5D20 (sub_1800C5D20.c)
 *     sub_1800DC718 @ 0x1800DC718 (sub_1800DC718.c)
 *     sub_1800DD5A8 @ 0x1800DD5A8 (sub_1800DD5A8.c)
 *     sub_1800DE3C4 @ 0x1800DE3C4 (sub_1800DE3C4.c)
 * Callees:
 *     sub_18001E768 @ 0x18001E768 (sub_18001E768.c)
 */

char *__fastcall sub_18003212C(char *a1, char *a2)
{
  unsigned __int64 v3; // r8

  if ( a1 != a2 )
  {
    v3 = *((_QWORD *)a2 + 2);
    if ( *((_QWORD *)a2 + 3) >= 8uLL )
      a2 = *(char **)a2;
    sub_18001E768(a1, a2, v3);
  }
  return a1;
}
