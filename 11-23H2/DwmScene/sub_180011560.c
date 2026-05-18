/*
 * XREFs of sub_180011560 @ 0x180011560
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011CA0 @ 0x180011CA0 (sub_180011CA0.c)
 *     sub_180026580 @ 0x180026580 (sub_180026580.c)
 *     sub_1800393DC @ 0x1800393DC (sub_1800393DC.c)
 *     sub_1800C9FBC @ 0x1800C9FBC (sub_1800C9FBC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180011560(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h]
  _QWORD v6[3]; // [rsp+30h] [rbp-18h] BYREF

  sub_180011CA0(v6);
  sub_1800C9FBC(a1, &v4);
  if ( v4 )
  {
    v2 = (_QWORD *)sub_180026580();
    sub_1800393DC(*v2);
  }
  if ( v5 )
    sub_180010530(v5);
  sub_180011CA0(&v4);
  return sub_18002CA94(a1, v6[0], v4, v4 - v6[0]);
}
