/*
 * XREFs of sub_18002CC60 @ 0x18002CC60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 */

_QWORD *__fastcall sub_18002CC60(__int64 a1)
{
  _QWORD *result; // rax
  __int64 v2[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v2 = 0LL;
  result = sub_180011020((_QWORD *)(a1 + 208), v2);
  if ( v2[1] )
    return (_QWORD *)sub_180010530(v2[1]);
  return result;
}
