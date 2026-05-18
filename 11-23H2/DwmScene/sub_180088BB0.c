/*
 * XREFs of sub_180088BB0 @ 0x180088BB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_1800295A0 @ 0x1800295A0 (sub_1800295A0.c)
 *     sub_180054CC0 @ 0x180054CC0 (sub_180054CC0.c)
 */

_QWORD *__fastcall sub_180088BB0(__int64 a1, int a2)
{
  _QWORD *result; // rax
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    v6 = a2;
    sub_180054CC0((__int64 *)(a1 + 120), (unsigned int *)&v6);
    return (_QWORD *)sub_1800295A0(a1, a2);
  }
  else
  {
    *(_OWORD *)v5 = 0LL;
    result = sub_180011020((_QWORD *)(a1 + 136), v5);
    if ( v5[1] )
      return (_QWORD *)sub_180010530(v5[1]);
  }
  return result;
}
