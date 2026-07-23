/*
 * XREFs of sub_1403C47EC @ 0x1403C47EC
 * Callers:
 *     EmpProviderRegister @ 0x14082D070 (EmpProviderRegister.c)
 *     sub_140B0C004 @ 0x140B0C004 (sub_140B0C004.c)
 *     sub_140B0C230 @ 0x140B0C230 (sub_140B0C230.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1403C47EC(_QWORD *a1)
{
  _QWORD *i; // rdx
  _QWORD *v2; // r8
  __int64 v3; // r9

  for ( i = (_QWORD *)qword_140C48C38; ; i = (_QWORD *)*i )
  {
    v2 = 0LL;
    if ( !i )
      break;
    v2 = i - 5;
    v3 = *(i - 5) - *a1;
    if ( !v3 )
      v3 = v2[1] - a1[1];
    if ( !v3 )
      break;
  }
  return v2;
}
