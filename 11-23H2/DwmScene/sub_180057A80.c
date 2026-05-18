/*
 * XREFs of sub_180057A80 @ 0x180057A80
 * Callers:
 *     sub_1800574F0 @ 0x1800574F0 (sub_1800574F0.c)
 *     sub_180057C24 @ 0x180057C24 (sub_180057C24.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_18001265C @ 0x18001265C (sub_18001265C.c)
 */

_QWORD *__fastcall sub_180057A80(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  v2 = *(_QWORD **)(a1 + 40);
  if ( v2 == *(_QWORD **)(a1 + 48) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_180011C50(*v2 + 56LL, &v5);
    sub_18001265C(v5, a2);
    if ( v6 )
      sub_180010530(v6);
  }
  return a2;
}
