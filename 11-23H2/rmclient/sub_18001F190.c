/*
 * XREFs of sub_18001F190 @ 0x18001F190
 * Callers:
 *     sub_180008D5C @ 0x180008D5C (sub_180008D5C.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18001F190(_QWORD **a1)
{
  _QWORD *result; // rax
  _QWORD *v2; // rdx

  result = *a1;
  if ( *a1 == a1 || (_QWORD **)result[1] != a1 || (v2 = (_QWORD *)*result, *(_QWORD **)(*result + 8LL) != result) )
    __fastfail(3u);
  *a1 = v2;
  v2[1] = a1;
  *(_OWORD *)result = 0LL;
  return result;
}
