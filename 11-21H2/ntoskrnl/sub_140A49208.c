/*
 * XREFs of sub_140A49208 @ 0x140A49208
 * Callers:
 *     sub_140A49130 @ 0x140A49130 (sub_140A49130.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_140A49208(__int64 a1, _QWORD **a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // r8
  _QWORD *v4; // r8

  while ( 1 )
  {
    result = *a2;
    if ( *a2 == a2 )
      break;
    if ( (_QWORD **)result[1] != a2
      || (v3 = (_QWORD *)*result, *(_QWORD **)(*result + 8LL) != result)
      || (*a2 = v3, v3[1] = a2, v4 = *(_QWORD **)(a1 + 8), *v4 != a1) )
    {
      __fastfail(3u);
    }
    *result = a1;
    result[1] = v4;
    *v4 = result;
    *(_QWORD *)(a1 + 8) = result;
  }
  return result;
}
