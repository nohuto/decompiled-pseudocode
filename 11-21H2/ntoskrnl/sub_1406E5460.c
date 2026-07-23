/*
 * XREFs of sub_1406E5460 @ 0x1406E5460
 * Callers:
 *     sub_1406E5154 @ 0x1406E5154 (sub_1406E5154.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1406E5460(__int64 a1, unsigned int a2, _QWORD *a3, _DWORD *a4, _DWORD *a5)
{
  __int64 v5; // r10
  __int64 v7; // rcx
  char result; // al

  v5 = 0LL;
  if ( !a2 )
    return 0;
  while ( 1 )
  {
    v7 = *a3 - *(_QWORD *)(a1 + 24 * v5);
    if ( *a3 == *(_QWORD *)(a1 + 24 * v5) )
      v7 = a3[1] - *(_QWORD *)(a1 + 24 * v5 + 8);
    if ( !v7 )
      break;
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= a2 )
      return 0;
  }
  *a4 = v5;
  result = 1;
  *a5 = *(_DWORD *)(a1 + 24 * v5 + 16);
  return result;
}
