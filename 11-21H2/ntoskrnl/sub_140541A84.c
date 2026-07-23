/*
 * XREFs of sub_140541A84 @ 0x140541A84
 * Callers:
 *     sub_14021F198 @ 0x14021F198 (sub_14021F198.c)
 *     sub_1403750E4 @ 0x1403750E4 (sub_1403750E4.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_140541A84(_QWORD *a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  _QWORD *result; // rax
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx

  result = (_QWORD *)*a1;
  if ( !*a1 )
    return 0LL;
  v4 = *a2;
  while ( 1 )
  {
    v5 = result[6];
    if ( v5 >= v4 )
    {
      v6 = result[1];
      if ( v6 || result[2] )
        break;
    }
    if ( v5 == *a3 && result[1] == v4 )
      return result;
    result = (_QWORD *)*result;
    if ( !result )
      return 0LL;
  }
  if ( v6 > *a3 )
    return 0LL;
  return result;
}
