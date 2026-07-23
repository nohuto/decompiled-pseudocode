/*
 * XREFs of sub_14054D1E8 @ 0x14054D1E8
 * Callers:
 *     sub_14054A25C @ 0x14054A25C (sub_14054A25C.c)
 *     sub_14054A4B0 @ 0x14054A4B0 (sub_14054A4B0.c)
 *     sub_14054AE18 @ 0x14054AE18 (sub_14054AE18.c)
 *     sub_14054D214 @ 0x14054D214 (sub_14054D214.c)
 *     sub_14054D4B8 @ 0x14054D4B8 (sub_14054D4B8.c)
 * Callees:
 *     <none>
 */

char *__fastcall sub_14054D1E8(int a1)
{
  char *result; // rax

  result = (char *)&unk_140C48820;
  if ( !a1 )
    result = (char *)&unk_140C48800;
  *((_QWORD *)result + 1) = 0LL;
  *(_WORD *)result = 0;
  *(_WORD *)(result + 3) = 0;
  result[2] = 0;
  return result;
}
