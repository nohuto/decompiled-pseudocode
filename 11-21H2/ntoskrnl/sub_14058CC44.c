/*
 * XREFs of sub_14058CC44 @ 0x14058CC44
 * Callers:
 *     sub_1405A89EC @ 0x1405A89EC (sub_1405A89EC.c)
 *     sub_1407BB560 @ 0x1407BB560 (sub_1407BB560.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14058CC44(int **a1, _DWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  int *v4; // r9
  int v5; // ecx

  *a2 = 0;
  result = 1LL;
  v4 = *a1;
  v5 = **a1;
  if ( (v5 == -2147483647 || (unsigned int)(v5 + 1073741819) <= 1) && (unsigned int)v4[6] > 1 )
  {
    *a2 = 1;
    *a3 = *((_QWORD *)v4 + 5);
  }
  return result;
}
