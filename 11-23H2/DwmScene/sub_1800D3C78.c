/*
 * XREFs of sub_1800D3C78 @ 0x1800D3C78
 * Callers:
 *     sub_1800D43D0 @ 0x1800D43D0 (sub_1800D43D0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001DE60 @ 0x18001DE60 (sub_18001DE60.c)
 *     sub_18008C3A0 @ 0x18008C3A0 (sub_18008C3A0.c)
 *     sub_1800D4554 @ 0x1800D4554 (sub_1800D4554.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D3C78(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v6; // edi
  unsigned int v7; // eax
  _OWORD *v8; // r8
  unsigned int v9; // eax
  __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rax
  unsigned int v13; // eax
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rax
  unsigned __int64 v17; // r15
  unsigned int v18; // eax
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // rax
  unsigned int v22; // eax
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int v28; // eax
  __int64 v29; // rax
  unsigned int v30; // eax
  __int64 v31; // rax
  __int128 v33; // [rsp+20h] [rbp-60h]
  __int128 v34; // [rsp+20h] [rbp-60h]
  __int128 v35; // [rsp+20h] [rbp-60h]
  __int128 v36; // [rsp+20h] [rbp-60h]
  __int128 v37; // [rsp+20h] [rbp-60h]
  __int128 v38; // [rsp+20h] [rbp-60h]
  __int128 v39; // [rsp+20h] [rbp-60h]
  __int128 v40; // [rsp+20h] [rbp-60h]
  __int128 v41; // [rsp+20h] [rbp-60h]
  __int128 v42; // [rsp+20h] [rbp-60h]
  __int128 v43; // [rsp+20h] [rbp-60h]
  __int128 Src; // [rsp+50h] [rbp-30h] BYREF
  __m128i si128; // [rsp+60h] [rbp-20h]

  *(_QWORD *)&Src = 0LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18019B7B0);
  v6 = 0;
  if ( (a2 & 1) != 0 )
  {
    v7 = sub_18008C3A0(a2, 32);
    *(_QWORD *)&v33 = "POSITION";
    DWORD2(v33) = 0;
    HIDWORD(v33) = sub_1800D4554(v7, (unsigned int)((a2 & 0x10000) != 0) + 3);
    v6 = 1;
    *v8 = v33;
    v8[1] = 0u;
    sub_18001DE60((void **)&Src, "Position ", 9uLL);
  }
  if ( (a2 & 2) != 0 )
  {
    v9 = sub_18008C3A0(a2, 35);
    *(_QWORD *)&v34 = "VERTEX_LAYOUT_SLOT_NORMAL";
    DWORD2(v34) = 0;
    HIDWORD(v34) = sub_1800D4554(v9, (unsigned int)((a2 & 0x20000) != 0) + 3);
    v10 = v6++;
    v10 *= 32LL;
    *(_OWORD *)(v10 + a3) = v34;
    *(_OWORD *)(v10 + a3 + 16) = 1uLL;
    sub_18001DE60((void **)&Src, "Normal ", 7uLL);
  }
  if ( (a2 & 4) != 0 )
  {
    v11 = sub_18008C3A0(a2, 41);
    *(_QWORD *)&v35 = "VERTEX_LAYOUT_SLOT_TANGENT";
    DWORD2(v35) = 0;
    HIDWORD(v35) = sub_1800D4554(v11, (unsigned int)((a2 & 0x80000) != 0) + 3);
    v12 = v6++;
    v12 *= 32LL;
    *(_OWORD *)(v12 + a3) = v35;
    *(_OWORD *)(v12 + a3 + 16) = 2uLL;
    sub_18001DE60((void **)&Src, "Tangent ", 8uLL);
  }
  if ( (a2 & 8) != 0 )
  {
    v13 = sub_18008C3A0(a2, 44);
    *(_QWORD *)&v36 = "VERTEX_LAYOUT_SLOT_BINORMAL";
    DWORD2(v36) = 0;
    HIDWORD(v36) = sub_1800D4554(v13, 3LL);
    v14 = v6++;
    v14 *= 32LL;
    *(_OWORD *)(v14 + a3) = v36;
    *(_OWORD *)(v14 + a3 + 16) = 3uLL;
    sub_18001DE60((void **)&Src, "Bitangent ", 0xAuLL);
  }
  if ( (a2 & 0x10) != 0 )
  {
    v15 = sub_18008C3A0(a2, 38);
    *(_QWORD *)&v37 = "VERTEX_LAYOUT_SLOT_COLOR";
    DWORD2(v37) = 0;
    HIDWORD(v37) = sub_1800D4554(v15, (unsigned int)((a2 & 0x40000) != 0) + 3);
    v16 = v6++;
    v16 *= 32LL;
    *(_OWORD *)(v16 + a3) = v37;
    *(_OWORD *)(v16 + a3 + 16) = 4uLL;
    sub_18001DE60((void **)&Src, "Colour ", 7uLL);
  }
  v17 = a2 & 0x100000;
  if ( (a2 & 0x20) != 0 )
  {
    v18 = sub_18008C3A0(a2, 47);
    v19 = sub_1800D4554(v18, (unsigned int)v17 != 0LL ? 4 : 2);
    *(_QWORD *)&v38 = v20;
    DWORD2(v38) = 0;
    HIDWORD(v38) = v19;
    v21 = v6++;
    v21 *= 32LL;
    *(_OWORD *)(v21 + a3) = v38;
    *(_OWORD *)(v21 + a3 + 16) = 5uLL;
    sub_18001DE60((void **)&Src, "UV0 ", 4uLL);
  }
  if ( (a2 & 0x40) != 0 )
  {
    v22 = sub_18008C3A0(a2, 50);
    v23 = sub_1800D4554(v22, v17 != 0 ? 4 : 2);
    *(_QWORD *)&v39 = v24;
    DWORD2(v39) = 1;
    HIDWORD(v39) = v23;
    v25 = v6++;
    v25 *= 32LL;
    *(_OWORD *)(v25 + a3) = v39;
    *(_OWORD *)(v25 + a3 + 16) = 6uLL;
    sub_18001DE60((void **)&Src, "UV1 ", 4uLL);
  }
  if ( (a2 & 0x80u) != 0LL )
  {
    *(_QWORD *)&v40 = "VERTEX_LAYOUT_SLOT_TEXCOORD";
    *((_QWORD *)&v40 + 1) = 0x1000000002LL;
    v26 = v6++;
    v26 *= 32LL;
    *(_OWORD *)(v26 + a3) = v40;
    *(_OWORD *)(v26 + a3 + 16) = 7uLL;
    sub_18001DE60((void **)&Src, "UV2 ", 4uLL);
  }
  if ( (a2 & 0x100) != 0 )
  {
    *(_QWORD *)&v41 = "VERTEX_LAYOUT_SLOT_TEXCOORD";
    *((_QWORD *)&v41 + 1) = 0x1000000003LL;
    v27 = v6++;
    v27 *= 32LL;
    *(_OWORD *)(v27 + a3) = v41;
    *(_OWORD *)(v27 + a3 + 16) = 8uLL;
    sub_18001DE60((void **)&Src, "UV3 ", 4uLL);
  }
  if ( (a2 & 0x200) != 0 )
  {
    v28 = sub_18008C3A0(a2, 53);
    *(_QWORD *)&v42 = "VERTEX_LAYOUT_SLOT_BLENDWEIGHT";
    DWORD2(v42) = 0;
    HIDWORD(v42) = sub_1800D4554(v28, 4LL);
    v29 = v6++;
    v29 *= 32LL;
    *(_OWORD *)(v29 + a3) = v42;
    *(_OWORD *)(v29 + a3 + 16) = 9uLL;
    sub_18001DE60((void **)&Src, "JointWeights ", 0xDuLL);
  }
  if ( (a2 & 0x400) != 0 )
  {
    v30 = sub_18008C3A0(a2, 56);
    *(_QWORD *)&v43 = "VERTEX_LAYOUT_SLOT_BLENDINDICES";
    DWORD2(v43) = 0;
    HIDWORD(v43) = sub_1800D4554(v30, 4LL);
    v31 = v6++;
    v31 *= 32LL;
    *(_OWORD *)(v31 + a3) = v43;
    *(_OWORD *)(v31 + a3 + 16) = 0xAuLL;
    sub_18001DE60((void **)&Src, "JointIndices ", 0xDuLL);
  }
  *(_DWORD *)a1 = v6;
  *(_OWORD *)(a1 + 8) = Src;
  *(__m128i *)(a1 + 24) = si128;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18019B7B0);
  LOBYTE(Src) = 0;
  sub_180011B24((__int64)&Src);
  return a1;
}
