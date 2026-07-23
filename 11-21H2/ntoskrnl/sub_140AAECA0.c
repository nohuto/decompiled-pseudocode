/*
 * XREFs of sub_140AAECA0 @ 0x140AAECA0
 * Callers:
 *     sub_140AAEBD8 @ 0x140AAEBD8 (sub_140AAEBD8.c)
 *     sub_140B56268 @ 0x140B56268 (sub_140B56268.c)
 * Callees:
 *     sub_1403A8CB4 @ 0x1403A8CB4 (sub_1403A8CB4.c)
 *     sub_140AAED14 @ 0x140AAED14 (sub_140AAED14.c)
 */

void __fastcall sub_140AAECA0(_QWORD *a1)
{
  _QWORD *v1; // r14
  _QWORD *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rbp
  __int64 *v6; // rsi
  __int64 v7; // rcx

  v1 = a1 + 13;
  v3 = (_QWORD *)a1[13];
  while ( v3 != v1 )
  {
    v5 = (__int64)v3;
    v3 = (_QWORD *)*v3;
    v6 = *(__int64 **)(v5 + 80);
    if ( v6 )
    {
      if ( *v6 )
        sub_1403A8CB4(*v6);
      v7 = v6[2];
      if ( v7 )
        sub_1403A8CB4(v7);
      sub_1403A8CB4((__int64)v6);
    }
    sub_1403A8CB4(v5);
  }
  v4 = a1[4];
  if ( v4 )
    sub_1403A8CB4(v4);
  if ( a1[3] )
    sub_140AAED14();
  sub_1403A8CB4((__int64)a1);
}
