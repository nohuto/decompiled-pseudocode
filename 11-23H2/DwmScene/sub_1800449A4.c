/*
 * XREFs of sub_1800449A4 @ 0x1800449A4
 * Callers:
 *     sub_18009AD20 @ 0x18009AD20 (sub_18009AD20.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180082CD8 @ 0x180082CD8 (sub_180082CD8.c)
 *     sub_180085130 @ 0x180085130 (sub_180085130.c)
 */

__int64 __fastcall sub_1800449A4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v7; // rax
  __int64 v8; // r10
  unsigned __int16 v9; // bp
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h]

  v7 = (_QWORD *)sub_180085130(*(_QWORD *)(a1 + 120), &v11);
  v9 = sub_180082CD8(*v7, v8);
  if ( v12 )
    sub_180010530(v12);
  return sub_180044A1C(a1, v9, a3, a4);
}
