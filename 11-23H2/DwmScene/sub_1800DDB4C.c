/*
 * XREFs of sub_1800DDB4C @ 0x1800DDB4C
 * Callers:
 *     sub_1800DE488 @ 0x1800DE488 (sub_1800DE488.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18001EA34 @ 0x18001EA34 (sub_18001EA34.c)
 *     sub_180042B30 @ 0x180042B30 (sub_180042B30.c)
 *     sub_180062C58 @ 0x180062C58 (sub_180062C58.c)
 *     sub_18006E520 @ 0x18006E520 (sub_18006E520.c)
 *     sub_1800DBFE8 @ 0x1800DBFE8 (sub_1800DBFE8.c)
 *     sub_1800DE174 @ 0x1800DE174 (sub_1800DE174.c)
 *     sub_1800DF1F4 @ 0x1800DF1F4 (sub_1800DF1F4.c)
 *     sub_1800DF3E8 @ 0x1800DF3E8 (sub_1800DF3E8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800DDB4C(_QWORD *a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rbp
  _QWORD *v8; // r14
  __int64 v9; // rdx
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v12; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v13; // [rsp+38h] [rbp-20h]
  __int64 *v14; // [rsp+60h] [rbp+8h] BYREF

  v6 = (__int64)a3;
  if ( (unsigned __int64)a3[3] >= 8 )
    v6 = *a3;
  v7 = sub_18001EA34(v6, a3[2]);
  sub_180062C58(a1, &v11, a3, v7);
  if ( *((_QWORD *)&v11 + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v11 + 1);
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    sub_1800DF1F4(a1);
    v12 = a1 + 1;
    v8 = (_QWORD *)sub_18001C190();
    v13 = v8;
    v14 = a3;
    sub_1800DBFE8(v8 + 2, v9, (__int64 *)&v14);
    if ( sub_18006E520((__int64)a1) )
    {
      sub_1800DF3E8(a1);
      v11 = *(_OWORD *)sub_180062C58(a1, &v11, v8 + 2, v7);
    }
    v13 = 0LL;
    *(_QWORD *)a2 = sub_180042B30(a1, v7, v11, v8);
    *(_BYTE *)(a2 + 8) = 1;
    sub_1800DE174(&v12);
  }
  return a2;
}
