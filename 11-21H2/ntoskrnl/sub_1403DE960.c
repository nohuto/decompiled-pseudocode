/*
 * XREFs of sub_1403DE960 @ 0x1403DE960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall sub_1403DE960(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, char a5)
{
  char result; // al

  if ( !a4 || *a4 && a5 == 1 )
    return 0;
  *a4 = 1LL;
  result = 1;
  *a3 = a1;
  return result;
}
