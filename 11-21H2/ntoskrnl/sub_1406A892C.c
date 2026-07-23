/*
 * XREFs of sub_1406A892C @ 0x1406A892C
 * Callers:
 *     sub_1406A7BF4 @ 0x1406A7BF4 (sub_1406A7BF4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406A892C(unsigned int *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r8

  result = a1[3];
  if ( a1[1] >= (unsigned int)result )
  {
    v3 = *a1;
    a1[5] = v3;
    result = a2 + v3;
    *((_QWORD *)a1 + 3) = a2 + v3;
  }
  return result;
}
