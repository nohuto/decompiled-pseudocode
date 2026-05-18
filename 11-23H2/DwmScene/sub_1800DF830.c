/*
 * XREFs of sub_1800DF830 @ 0x1800DF830
 * Callers:
 *     sub_1800DFA18 @ 0x1800DFA18 (sub_1800DFA18.c)
 * Callees:
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18001EA34 @ 0x18001EA34 (sub_18001EA34.c)
 *     sub_180042B30 @ 0x180042B30 (sub_180042B30.c)
 *     sub_180062C58 @ 0x180062C58 (sub_180062C58.c)
 *     sub_18006E520 @ 0x18006E520 (sub_18006E520.c)
 *     sub_1800DE174 @ 0x1800DE174 (sub_1800DE174.c)
 *     sub_1800DF1F4 @ 0x1800DF1F4 (sub_1800DF1F4.c)
 *     sub_1800DF3E8 @ 0x1800DF3E8 (sub_1800DF3E8.c)
 *     sub_1800DF954 @ 0x1800DF954 (sub_1800DF954.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800DF830(_QWORD *a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rbp
  _QWORD *v8; // r15
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v11; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v12; // [rsp+38h] [rbp-20h]

  v6 = (__int64)a3;
  if ( (unsigned __int64)a3[3] >= 8 )
    v6 = *a3;
  v7 = sub_18001EA34(v6, a3[2]);
  sub_180062C58(a1, &v10, a3, v7);
  if ( *((_QWORD *)&v10 + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v10 + 1);
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    sub_1800DF1F4((__int64)a1);
    v11 = a1 + 1;
    v8 = (_QWORD *)sub_18001C190();
    v12 = v8;
    sub_180012440(v8 + 2, (__int64)a3);
    sub_1800DF954(v8 + 6);
    if ( sub_18006E520((__int64)a1) )
    {
      sub_1800DF3E8(a1);
      v10 = *(_OWORD *)sub_180062C58(a1, &v10, v8 + 2, v7);
    }
    v12 = 0LL;
    *(_QWORD *)a2 = sub_180042B30(a1, v7, v10, v8);
    *(_BYTE *)(a2 + 8) = 1;
    sub_1800DE174((__int64)&v11);
  }
  return a2;
}
