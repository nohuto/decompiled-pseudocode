/*
 * XREFs of sub_14097E850 @ 0x14097E850
 * Callers:
 *     sub_14097E6E8 @ 0x14097E6E8 (sub_14097E6E8.c)
 * Callees:
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     sub_1403C2A18 @ 0x1403C2A18 (sub_1403C2A18.c)
 *     sub_1403C2A5C @ 0x1403C2A5C (sub_1403C2A5C.c)
 *     sub_14097E614 @ 0x14097E614 (sub_14097E614.c)
 */

void __fastcall sub_14097E850(unsigned __int64 a1, unsigned int a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rsi
  unsigned __int64 v6; // rax

  if ( a1 )
  {
    v3 = (_QWORD *)sub_140313C70(a1);
    v5 = sub_14097E614((unsigned __int64)v3, v4);
    sub_1402BB6D0((__int64)&qword_140C534C0, v3, a2);
    if ( v5 )
    {
      v6 = sub_1403C2A5C(v5);
      sub_1403C2A18((__int64)&StartContext, v6, 9);
    }
  }
}
