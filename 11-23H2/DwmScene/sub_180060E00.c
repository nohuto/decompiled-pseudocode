/*
 * XREFs of sub_180060E00 @ 0x180060E00
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 */

_QWORD *__fastcall sub_180060E00(__int64 a1)
{
  _QWORD *result; // rax
  __int64 v2[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v2 = 0LL;
  result = sub_180011020((_QWORD *)(a1 + 56), v2);
  if ( v2[1] )
    return (_QWORD *)sub_180010530(v2[1]);
  return result;
}
