/*
 * XREFs of sub_1409ECCA0 @ 0x1409ECCA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409ECCA0(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *a3;
  if ( (unsigned int)v3 >= *(_DWORD *)(qword_140D05008 + 16) )
    return 3221225507LL;
  *(_QWORD *)(*((_QWORD *)a3 + 1) + 8 * v3) = a2;
  result = 0LL;
  ++*a3;
  return result;
}
