/*
 * XREFs of sub_14085D010 @ 0x14085D010
 * Callers:
 *     sub_1407EDFC0 @ 0x1407EDFC0 (sub_1407EDFC0.c)
 *     sub_1408194D8 @ 0x1408194D8 (sub_1408194D8.c)
 * Callees:
 *     sub_1407EEBA8 @ 0x1407EEBA8 (sub_1407EEBA8.c)
 */

__int64 __fastcall sub_14085D010(unsigned __int8 a1)
{
  __int64 result; // rax
  int v2; // ebx
  unsigned int v3; // [rsp+38h] [rbp+10h] BYREF

  result = 0LL;
  v3 = 0;
  v2 = ~a1;
  do
  {
    *(&qword_140C229A0 + 6 * result + 75) &= v2;
    sub_1407EEBA8(&v3, (__int64)(&qword_140C229A0 + 6 * result + 74));
    result = v3 + 1;
    v3 = result;
  }
  while ( (unsigned int)result < 4 );
  return result;
}
