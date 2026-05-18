/*
 * XREFs of sub_180066258 @ 0x180066258
 * Callers:
 *     sub_180065FB8 @ 0x180065FB8 (sub_180065FB8.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_18001C880 @ 0x18001C880 (sub_18001C880.c)
 *     sub_1800414A0 @ 0x1800414A0 (sub_1800414A0.c)
 *     sub_18004871C @ 0x18004871C (sub_18004871C.c)
 *     sub_180063EA8 @ 0x180063EA8 (sub_180063EA8.c)
 *     sub_180065944 @ 0x180065944 (sub_180065944.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_180066258(__int64 a1)
{
  __int128 v2; // xmm8
  __int128 v3; // xmm9
  __int128 v4; // xmm10
  __int128 v5; // xmm11
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int128 v8; // xmm3
  __m128 v9; // xmm0
  _QWORD v11[3]; // [rsp+20h] [rbp-91h] BYREF
  __int128 v12; // [rsp+38h] [rbp-79h]
  __int128 v13; // [rsp+48h] [rbp-69h]
  __int128 v14; // [rsp+58h] [rbp-59h]
  __int128 v15; // [rsp+68h] [rbp-49h] BYREF
  __m128 v16[9]; // [rsp+78h] [rbp-39h] BYREF

  if ( (*(_BYTE *)(a1 + 544) & 1) == 0 || sub_180063EA8(a1, 1) )
    return 0;
  sub_18004871C(a1, &v15);
  if ( sub_1800122C0(&v15) )
  {
    sub_1800414A0((__m128 *)v15, &v11[1]);
    v2 = *(_OWORD *)&v11[1];
    v3 = v12;
    v4 = v13;
    v5 = v14;
    v6 = v12;
    v7 = v13;
    v8 = v14;
    v9 = sub_18001C880(v16, *(double *)&v12, *(double *)&v13, *(double *)&v14);
    *(_OWORD *)&v11[1] = v2;
    v12 = v3;
    v13 = v4;
    v14 = v5;
    sub_180065944(a1, 1, 0, &v11[1]);
    *(__m128 *)&v11[1] = v9;
    v12 = v6;
    v13 = v7;
    v14 = v8;
  }
  else
  {
    *(_OWORD *)&v11[1] = xmmword_1801289D0;
    v12 = xmmword_1801289E0;
    v13 = xmmword_1801289F0;
    v14 = xmmword_180128A00;
    sub_180065944(a1, 1, 0, &v11[1]);
    *(_OWORD *)&v11[1] = xmmword_1801289D0;
    v12 = xmmword_1801289E0;
    v13 = xmmword_1801289F0;
    v14 = xmmword_180128A00;
  }
  sub_180065944(a1, 0, 1, &v11[1]);
  *(_DWORD *)(a1 + 544) &= ~1u;
  sub_180010910((__int64)&v15);
  return 1;
}
