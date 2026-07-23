/*
 * XREFs of sub_1409E3690 @ 0x1409E3690
 * Callers:
 *     sub_1409E3DA0 @ 0x1409E3DA0 (sub_1409E3DA0.c)
 * Callees:
 *     sub_1402AB170 @ 0x1402AB170 (sub_1402AB170.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1409E3690(
        unsigned int a1,
        unsigned __int8 a2,
        __int128 *a3,
        int a4,
        int a5,
        __int64 *a6,
        __int64 a7)
{
  __int128 v7; // xmm0
  unsigned int v9; // r9d
  __int64 v10; // rcx
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // [rsp+30h] [rbp-21h] BYREF
  __int128 v15; // [rsp+38h] [rbp-19h]
  int v16; // [rsp+48h] [rbp-9h]
  int v17; // [rsp+4Ch] [rbp-5h]
  __int64 v18; // [rsp+50h] [rbp-1h]
  __int64 *v19; // [rsp+58h] [rbp+7h] BYREF
  int v20; // [rsp+60h] [rbp+Fh]
  int v21; // [rsp+64h] [rbp+13h]
  __int64 v22; // [rsp+68h] [rbp+17h]
  int v23; // [rsp+70h] [rbp+1Fh]
  int v24; // [rsp+74h] [rbp+23h]

  v7 = *a3;
  v18 = 0LL;
  v21 = 0;
  v16 = a4;
  v9 = 1;
  v15 = v7;
  v20 = 32;
  v10 = *a6;
  v17 = a5;
  v14 = v10;
  v19 = &v14;
  v11 = *(_WORD *)a7 & 0xFFFE;
  if ( v11 )
  {
    v12 = *(_QWORD *)(a7 + 8);
    v9 = 2;
    v24 = 0;
    v22 = v12;
    v23 = v11;
  }
  v13 = 2LL * v9;
  *(&v21 + 2 * v13) = 0;
  (&v19)[v13] = &qword_14000EF90;
  *(&v20 + 2 * v13) = 2;
  sub_1402AB170((__int64)&v19, qword_140D05008, a1, v9 + 1, a2 | 0x900, 0x501902u);
}
