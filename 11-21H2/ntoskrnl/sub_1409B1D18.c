/*
 * XREFs of sub_1409B1D18 @ 0x1409B1D18
 * Callers:
 *     sub_1409B1E4C @ 0x1409B1E4C (sub_1409B1E4C.c)
 *     sub_1409B1F54 @ 0x1409B1F54 (sub_1409B1F54.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall sub_1409B1D18(__int64 **a1)
{
  __int64 *result; // rax

  result = (__int64 *)qword_140C1BE60;
  if ( a1 )
    result = *a1;
  if ( result == &qword_140C1BE60 )
    return 0LL;
  return result;
}
