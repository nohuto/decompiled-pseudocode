/*
 * XREFs of sub_180099A20 @ 0x180099A20
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

char __fastcall sub_180099A20(_QWORD *a1, __int64 *a2, __int64 *a3, __int64 *a4, __int64 *a5, __int64 *a6)
{
  __int64 v6; // r10
  __int64 v9; // r11
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v25; // [rsp+20h] [rbp-10h] BYREF
  __int64 v26; // [rsp+28h] [rbp-8h]

  v6 = *a2;
  *a2 = 0LL;
  v9 = a2[1];
  a2[1] = 0LL;
  v25 = a1[12];
  v12 = a1[13];
  a1[13] = v9;
  a1[12] = v6;
  v26 = v12;
  sub_180010910((__int64)&v25);
  v13 = *a3;
  *a3 = 0LL;
  v14 = a3[1];
  a3[1] = 0LL;
  v25 = a1[14];
  v15 = a1[15];
  a1[14] = v13;
  v26 = v15;
  a1[15] = v14;
  sub_180010910((__int64)&v25);
  v16 = *a4;
  *a4 = 0LL;
  v17 = a4[1];
  a4[1] = 0LL;
  v25 = a1[16];
  v18 = a1[17];
  a1[16] = v16;
  v26 = v18;
  a1[17] = v17;
  sub_180010910((__int64)&v25);
  v19 = *a5;
  *a5 = 0LL;
  v20 = a5[1];
  a5[1] = 0LL;
  v25 = a1[18];
  v21 = a1[19];
  a1[18] = v19;
  v26 = v21;
  a1[19] = v20;
  sub_180010910((__int64)&v25);
  v22 = *a6;
  *a6 = 0LL;
  v23 = a6[1];
  a6[1] = 0LL;
  v25 = a1[20];
  v26 = a1[21];
  a1[20] = v22;
  a1[21] = v23;
  sub_180010910((__int64)&v25);
  sub_180010910((__int64)a2);
  sub_180010910((__int64)a3);
  sub_180010910((__int64)a4);
  sub_180010910((__int64)a5);
  sub_180010910((__int64)a6);
  return 1;
}
