/*
 * XREFs of sub_14039D2A8 @ 0x14039D2A8
 * Callers:
 *     sub_14039CEC8 @ 0x14039CEC8 (sub_14039CEC8.c)
 *     sub_14039D010 @ 0x14039D010 (sub_14039D010.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_14039D2A8(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *result; // rax

  v2 = (_QWORD *)*a1;
  if ( *a1 )
  {
    if ( v2 == a1 )
    {
      a2[1] = a2;
      *a2 = a2;
    }
    else
    {
      result = (_QWORD *)a1[1];
      *a2 = v2;
      a2[1] = result;
      v2[1] = a2;
      *result = a2;
    }
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  return result;
}
