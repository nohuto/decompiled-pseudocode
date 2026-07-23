/*
 * XREFs of sub_1403B7304 @ 0x1403B7304
 * Callers:
 *     sub_14081D450 @ 0x14081D450 (sub_14081D450.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1403B7304(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // rcx
  _QWORD *result; // rax
  _DWORD *v5; // rdx

  *a2 = a1;
  v2 = (_QWORD *)(a1 + 16208);
  if ( !*v2 )
  {
    v2[1] = v2;
    *v2 = v2;
  }
  a2[11] = 0LL;
  a2[10] = a2 + 9;
  v3 = 16LL;
  a2[9] = a2 + 9;
  result = a2 + 12;
  v5 = a2 + 13;
  do
  {
    *result = 0LL;
    result += 2;
    *v5 = 0;
    v5 += 4;
    --v3;
  }
  while ( v3 );
  return result;
}
