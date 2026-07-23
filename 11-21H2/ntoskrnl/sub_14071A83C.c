/*
 * XREFs of sub_14071A83C @ 0x14071A83C
 * Callers:
 *     sub_14071A7F0 @ 0x14071A7F0 (sub_14071A7F0.c)
 *     sub_14071C288 @ 0x14071C288 (sub_14071C288.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_14071A83C(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // r8

  result = *(_QWORD **)(a1 + 48);
  if ( result )
  {
    v3 = *(_QWORD **)(a2 + 8);
    if ( *v3 != a2 )
      __fastfail(3u);
    *result = a2;
    result[1] = v3;
    *v3 = result;
    *(_QWORD *)(a2 + 8) = result;
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  return result;
}
