/*
 * XREFs of sub_1800EB668 @ 0x1800EB668
 * Callers:
 *     sub_1800EBE50 @ 0x1800EBE50 (sub_1800EBE50.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18001F640 @ 0x18001F640 (sub_18001F640.c)
 *     sub_18009B350 @ 0x18009B350 (sub_18009B350.c)
 *     sub_1800EC040 @ 0x1800EC040 (sub_1800EC040.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800EB668(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v6; // edi
  unsigned int v7; // eax
  _OWORD *v8; // r8
  unsigned int v9; // eax
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned int v12; // eax
  __int64 v13; // rax
  __int64 v14; // r8
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v17; // r8
  unsigned int v18; // eax
  __int64 v19; // rax
  __int64 v20; // r8
  unsigned __int64 v21; // r15
  const char *v22; // r8
  unsigned int v23; // eax
  int v24; // eax
  __int64 v25; // r8
  __int64 v26; // rax
  unsigned int v27; // eax
  int v28; // eax
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned int v33; // eax
  __int64 v34; // rax
  __int64 v35; // r8
  unsigned int v36; // eax
  __int64 v37; // rax
  __int64 v38; // r8
  __int128 v40; // [rsp+20h] [rbp-50h]
  __int128 v41; // [rsp+20h] [rbp-50h]
  __int128 v42; // [rsp+20h] [rbp-50h]
  __int128 v43; // [rsp+20h] [rbp-50h]
  __int128 v44; // [rsp+20h] [rbp-50h]
  __int128 v45; // [rsp+20h] [rbp-50h]
  __int128 v46; // [rsp+20h] [rbp-50h]
  __int128 v47; // [rsp+20h] [rbp-50h]
  __int128 v48; // [rsp+20h] [rbp-50h]
  __int128 v49; // [rsp+20h] [rbp-50h]
  __int128 v50; // [rsp+20h] [rbp-50h]
  __int128 Src; // [rsp+48h] [rbp-28h] BYREF
  __int128 v52; // [rsp+58h] [rbp-18h]

  *(_QWORD *)&v52 = 0LL;
  *((_QWORD *)&v52 + 1) = 15LL;
  LOBYTE(Src) = 0;
  v6 = 0;
  if ( (a2 & 1) != 0 )
  {
    v7 = sub_18009B350(a2, 32);
    *(_QWORD *)&v40 = "POSITION";
    DWORD2(v40) = 0;
    HIDWORD(v40) = sub_1800EC040(v7, (unsigned int)((a2 & 0x10000) != 0) + 3);
    v6 = 1;
    *v8 = v40;
    v8[1] = 0u;
    sub_18001F640((const void **)&Src, "Position ", (__int64)v8);
  }
  if ( (a2 & 2) != 0 )
  {
    v9 = sub_18009B350(a2, 35);
    *(_QWORD *)&v41 = "VERTEX_LAYOUT_SLOT_NORMAL";
    DWORD2(v41) = 0;
    HIDWORD(v41) = sub_1800EC040(v9, (unsigned int)((a2 & 0x20000) != 0) + 3);
    v10 = v6++;
    v10 *= 32LL;
    *(_OWORD *)(v10 + a3) = v41;
    *(_OWORD *)(v10 + a3 + 16) = 1uLL;
    sub_18001F640((const void **)&Src, "Normal ", v11);
  }
  if ( (a2 & 4) != 0 )
  {
    v12 = sub_18009B350(a2, 41);
    *(_QWORD *)&v42 = "VERTEX_LAYOUT_SLOT_TANGENT";
    DWORD2(v42) = 0;
    HIDWORD(v42) = sub_1800EC040(v12, (unsigned int)((a2 & 0x80000) != 0) + 3);
    v13 = v6++;
    v13 *= 32LL;
    *(_OWORD *)(v13 + a3) = v42;
    *(_OWORD *)(v13 + a3 + 16) = 2uLL;
    sub_18001F640((const void **)&Src, "Tangent ", v14);
  }
  if ( (a2 & 8) != 0 )
  {
    v15 = sub_18009B350(a2, 44);
    *(_QWORD *)&v43 = "VERTEX_LAYOUT_SLOT_BINORMAL";
    DWORD2(v43) = 0;
    HIDWORD(v43) = sub_1800EC040(v15, 3LL);
    v16 = v6++;
    v16 *= 32LL;
    *(_OWORD *)(v16 + a3) = v43;
    *(_OWORD *)(v16 + a3 + 16) = 3uLL;
    sub_18001F640((const void **)&Src, "Bitangent ", v17);
  }
  if ( (a2 & 0x10) != 0 )
  {
    v18 = sub_18009B350(a2, 38);
    *(_QWORD *)&v44 = "VERTEX_LAYOUT_SLOT_COLOR";
    DWORD2(v44) = 0;
    HIDWORD(v44) = sub_1800EC040(v18, (unsigned int)((a2 & 0x40000) != 0) + 3);
    v19 = v6++;
    v19 *= 32LL;
    *(_OWORD *)(v19 + a3) = v44;
    *(_OWORD *)(v19 + a3 + 16) = 4uLL;
    sub_18001F640((const void **)&Src, "Colour ", v20);
  }
  v21 = a2 & 0x100000;
  v22 = "VERTEX_LAYOUT_SLOT_TEXCOORD";
  if ( (a2 & 0x20) != 0 )
  {
    v23 = sub_18009B350(a2, 47);
    v24 = sub_1800EC040(v23, (unsigned int)v21 != 0LL ? 4 : 2);
    *(_QWORD *)&v45 = v25;
    DWORD2(v45) = 0;
    HIDWORD(v45) = v24;
    v26 = v6++;
    v26 *= 32LL;
    *(_OWORD *)(v26 + a3) = v45;
    *(_OWORD *)(v26 + a3 + 16) = 5uLL;
    sub_18001F640((const void **)&Src, "UV0 ", v25);
    v22 = "VERTEX_LAYOUT_SLOT_TEXCOORD";
  }
  if ( (a2 & 0x40) != 0 )
  {
    v27 = sub_18009B350(a2, 50);
    v28 = sub_1800EC040(v27, v21 != 0 ? 4 : 2);
    *(_QWORD *)&v46 = v29;
    DWORD2(v46) = 1;
    HIDWORD(v46) = v28;
    v30 = v6++;
    v30 *= 32LL;
    *(_OWORD *)(v30 + a3) = v46;
    *(_OWORD *)(v30 + a3 + 16) = 6uLL;
    sub_18001F640((const void **)&Src, "UV1 ", v29);
  }
  if ( (a2 & 0x80u) != 0LL )
  {
    *(_QWORD *)&v47 = "VERTEX_LAYOUT_SLOT_TEXCOORD";
    *((_QWORD *)&v47 + 1) = 0x1000000002LL;
    v31 = v6++;
    v31 *= 32LL;
    *(_OWORD *)(v31 + a3) = v47;
    *(_OWORD *)(v31 + a3 + 16) = 7uLL;
    sub_18001F640((const void **)&Src, "UV2 ", (__int64)v22);
  }
  if ( (a2 & 0x100) != 0 )
  {
    *(_QWORD *)&v48 = "VERTEX_LAYOUT_SLOT_TEXCOORD";
    *((_QWORD *)&v48 + 1) = 0x1000000003LL;
    v32 = v6++;
    v32 *= 32LL;
    *(_OWORD *)(v32 + a3) = v48;
    *(_OWORD *)(v32 + a3 + 16) = 8uLL;
    sub_18001F640((const void **)&Src, "UV3 ", (__int64)v22);
  }
  if ( (a2 & 0x200) != 0 )
  {
    v33 = sub_18009B350(a2, 53);
    *(_QWORD *)&v49 = "VERTEX_LAYOUT_SLOT_BLENDWEIGHT";
    DWORD2(v49) = 0;
    HIDWORD(v49) = sub_1800EC040(v33, 4LL);
    v34 = v6++;
    v34 *= 32LL;
    *(_OWORD *)(v34 + a3) = v49;
    *(_OWORD *)(v34 + a3 + 16) = 9uLL;
    sub_18001F640((const void **)&Src, "JointWeights ", v35);
  }
  if ( (a2 & 0x400) != 0 )
  {
    v36 = sub_18009B350(a2, 56);
    *(_QWORD *)&v50 = "VERTEX_LAYOUT_SLOT_BLENDINDICES";
    DWORD2(v50) = 0;
    HIDWORD(v50) = sub_1800EC040(v36, 4LL);
    v37 = v6++;
    v37 *= 32LL;
    *(_OWORD *)(v37 + a3) = v50;
    *(_OWORD *)(v37 + a3 + 16) = 0xAuLL;
    sub_18001F640((const void **)&Src, "JointIndices ", v38);
  }
  *(_DWORD *)a1 = v6;
  *(_OWORD *)(a1 + 8) = Src;
  *(_OWORD *)(a1 + 24) = v52;
  return a1;
}
