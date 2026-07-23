/*
 * XREFs of sub_1403C4824 @ 0x1403C4824
 * Callers:
 *     EmpProviderRegister @ 0x14082D070 (EmpProviderRegister.c)
 *     EmProviderRegisterEntry @ 0x14092CCA0 (EmProviderRegisterEntry.c)
 *     sub_140B0BE8C @ 0x140B0BE8C (sub_140B0BE8C.c)
 *     sub_140B0C004 @ 0x140B0C004 (sub_140B0C004.c)
 *     sub_140B0C87C @ 0x140B0C87C (sub_140B0C87C.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1403C4824(_QWORD *a1)
{
  _QWORD *i; // rdx
  _QWORD *v2; // r8
  __int64 v3; // r9

  for ( i = (_QWORD *)qword_140C48C60; ; i = (_QWORD *)*i )
  {
    v2 = 0LL;
    if ( !i )
      break;
    v2 = i - 3;
    v3 = *(i - 3) - *a1;
    if ( !v3 )
      v3 = v2[1] - a1[1];
    if ( !v3 )
      break;
  }
  return v2;
}
