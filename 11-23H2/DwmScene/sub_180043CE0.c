/*
 * XREFs of sub_180043CE0 @ 0x180043CE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180043980 @ 0x180043980 (sub_180043980.c)
 *     sub_1800444F4 @ 0x1800444F4 (sub_1800444F4.c)
 *     sub_1800DF794 @ 0x1800DF794 (sub_1800DF794.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180043CE0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // r11
  __int64 v6; // rsi
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r10
  __int64 v10; // rcx
  __int64 v12; // [rsp+28h] [rbp-40h] BYREF
  __int64 v13; // [rsp+30h] [rbp-38h]
  __int64 v14; // [rsp+38h] [rbp-30h] BYREF
  __int64 v15; // [rsp+40h] [rbp-28h]
  _QWORD v16[3]; // [rsp+48h] [rbp-20h] BYREF

  sub_180043980(&v12, a3);
  if ( v12 )
    v6 = *(_QWORD *)(v12 + 152);
  else
    v6 = *(_QWORD *)(v5 + 32);
  if ( *(_WORD *)(v5 + 24) != 511 )
  {
    sub_180011C50(v5 + 8, &v14);
    if ( v14 )
    {
      v7 = sub_18001246C(v16, &v12);
      sub_1800444F4(v9, v7, v8, v6);
    }
    if ( v15 )
      sub_180010530(v15);
  }
  sub_1800DF794(a2);
  if ( v13 )
    sub_180010530(v13);
  v10 = a3[1];
  if ( v10 )
    sub_180010530(v10);
  return a2;
}
