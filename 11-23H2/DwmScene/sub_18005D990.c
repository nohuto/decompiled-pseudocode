/*
 * XREFs of sub_18005D990 @ 0x18005D990
 * Callers:
 *     sub_18005BA14 @ 0x18005BA14 (sub_18005BA14.c)
 *     sub_18005BB38 @ 0x18005BB38 (sub_18005BB38.c)
 *     sub_18005BC40 @ 0x18005BC40 (sub_18005BC40.c)
 *     sub_18005DC48 @ 0x18005DC48 (sub_18005DC48.c)
 * Callees:
 *     sub_180017E18 @ 0x180017E18 (sub_180017E18.c)
 *     sub_18005D514 @ 0x18005D514 (sub_18005D514.c)
 */

__int64 __fastcall sub_18005D990(__int64 a1)
{
  __int128 v1; // xmm1
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 *v24; // rax
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int64 v28; // r10
  __int128 *v29; // rax
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int64 v33; // r10
  __int128 *v34; // rax
  int v35; // r11d
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int64 v39; // r10
  int v40; // r11d
  __int64 v41; // rcx
  __int128 *v42; // rax
  int v43; // r11d
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int64 v47; // r10
  __int128 v49; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v50; // [rsp+30h] [rbp-D0h]
  __int128 v51; // [rsp+40h] [rbp-C0h]
  __int128 v52; // [rsp+50h] [rbp-B0h]
  __int128 v53; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v54; // [rsp+70h] [rbp-90h]
  __int128 v55; // [rsp+80h] [rbp-80h]
  __int128 v56; // [rsp+90h] [rbp-70h]
  _OWORD v57[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v58[4]; // [rsp+E0h] [rbp-20h] BYREF
  _OWORD v59[4]; // [rsp+120h] [rbp+20h] BYREF
  __int128 v60[4]; // [rsp+160h] [rbp+60h] BYREF
  __int128 v61[4]; // [rsp+1A0h] [rbp+A0h] BYREF

  v1 = *(_OWORD *)(a1 + 692);
  v53 = *(_OWORD *)(a1 + 676);
  v2 = *(_OWORD *)(a1 + 708);
  v54 = v1;
  v3 = *(_OWORD *)(a1 + 724);
  v55 = v2;
  v4 = *(_OWORD *)(a1 + 1252);
  v56 = v3;
  v5 = *(_OWORD *)(a1 + 1268);
  v57[0] = v4;
  v6 = *(_OWORD *)(a1 + 1284);
  v57[1] = v5;
  v7 = *(_OWORD *)(a1 + 1300);
  v57[2] = v6;
  v8 = *(_OWORD *)(a1 + 804);
  v57[3] = v7;
  v9 = *(_OWORD *)(a1 + 820);
  v59[0] = v8;
  v10 = *(_OWORD *)(a1 + 836);
  v59[1] = v9;
  v11 = *(_OWORD *)(a1 + 852);
  v59[2] = v10;
  v12 = *(_OWORD *)(a1 + 932);
  v59[3] = v11;
  v13 = *(_OWORD *)(a1 + 948);
  v49 = v12;
  v14 = *(_OWORD *)(a1 + 964);
  v50 = v13;
  v15 = *(_OWORD *)(a1 + 980);
  v51 = v14;
  v16 = *(_OWORD *)(a1 + 1124);
  v52 = v15;
  v17 = *(_OWORD *)(a1 + 1140);
  v58[0] = v16;
  v18 = *(_OWORD *)(a1 + 1156);
  v58[1] = v17;
  v19 = *(_OWORD *)(a1 + 1172);
  v58[2] = v18;
  v20 = *(_OWORD *)(a1 + 1444);
  v58[3] = v19;
  v21 = *(_OWORD *)(a1 + 1460);
  v61[0] = v20;
  v22 = *(_OWORD *)(a1 + 1476);
  v61[1] = v21;
  v23 = *(_OWORD *)(a1 + 1492);
  v61[2] = v22;
  v61[3] = v23;
  sub_180017E18((__int64)v60, v61, v58);
  v24 = sub_180017E18((__int64)v61, &v53, v57);
  v25 = v24[1];
  v53 = *v24;
  v26 = v24[2];
  v54 = v25;
  v27 = v24[3];
  v55 = v26;
  v56 = v27;
  sub_18005D514(v28, 0, 3, &v53);
  v29 = sub_180017E18((__int64)&v53, &v49, v57);
  v30 = v29[1];
  v49 = *v29;
  v31 = v29[2];
  v50 = v30;
  v32 = v29[3];
  v51 = v31;
  v52 = v32;
  sub_18005D514(v33, 1, 3, &v49);
  v34 = sub_180017E18((__int64)&v53, v58, v59);
  v36 = v34[1];
  v49 = *v34;
  v37 = v34[2];
  v50 = v36;
  v38 = v34[3];
  v51 = v37;
  v52 = v38;
  sub_18005D514(v39, v35 + 1, 0, &v49);
  v51 = v60[2];
  v52 = v60[3];
  v49 = v60[0];
  v50 = v60[1];
  sub_18005D514(v41, v40 + 2, v40, &v49);
  v42 = sub_180017E18((__int64)&v53, v60, v59);
  v44 = v42[1];
  v49 = *v42;
  v45 = v42[2];
  v50 = v44;
  v46 = v42[3];
  v51 = v45;
  v52 = v46;
  return sub_18005D514(v47, v43 + 2, 0, &v49);
}
