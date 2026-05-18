/*
 * XREFs of sub_18005E068 @ 0x18005E068
 * Callers:
 *     sub_18005DC48 @ 0x18005DC48 (sub_18005DC48.c)
 * Callees:
 *     sub_180017E18 @ 0x180017E18 (sub_180017E18.c)
 *     sub_18005D514 @ 0x18005D514 (sub_18005D514.c)
 */

__int64 __fastcall sub_18005E068(__int64 a1)
{
  __int128 v1; // xmm1
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 *v8; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 v12; // r10
  __int128 v14; // [rsp+20h] [rbp-69h] BYREF
  __int128 v15; // [rsp+30h] [rbp-59h]
  __int128 v16; // [rsp+40h] [rbp-49h]
  __int128 v17; // [rsp+50h] [rbp-39h]
  _OWORD v18[4]; // [rsp+60h] [rbp-29h] BYREF
  char v19[64]; // [rsp+A0h] [rbp+17h] BYREF

  v1 = *(_OWORD *)(a1 + 628);
  v14 = *(_OWORD *)(a1 + 612);
  v2 = *(_OWORD *)(a1 + 644);
  v15 = v1;
  v3 = *(_OWORD *)(a1 + 660);
  v16 = v2;
  v4 = *(_OWORD *)(a1 + 932);
  v17 = v3;
  v5 = *(_OWORD *)(a1 + 948);
  v18[0] = v4;
  v6 = *(_OWORD *)(a1 + 964);
  v18[1] = v5;
  v7 = *(_OWORD *)(a1 + 980);
  v18[2] = v6;
  v18[3] = v7;
  v8 = sub_180017E18((__int64)v19, &v14, v18);
  v9 = v8[1];
  v14 = *v8;
  v10 = v8[2];
  v15 = v9;
  v11 = v8[3];
  v16 = v10;
  v17 = v11;
  return sub_18005D514(v12, 0, 2, &v14);
}
