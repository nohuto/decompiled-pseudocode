/*
 * XREFs of SHA256Transform @ 0x18000CA54
 * Callers:
 *     SHA256Update @ 0x18000C970 (SHA256Update.c)
 * Callees:
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 */

__int64 __fastcall SHA256Transform(_DWORD *a1, __int64 a2)
{
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  __int64 v5; // r8
  unsigned __int64 v6; // rax
  int v7; // edi
  int v8; // r15d
  __int64 v9; // r13
  int v10; // r14d
  int v11; // r12d
  int v12; // ebx
  int v13; // esi
  int v14; // r9d
  int v15; // r11d
  int v16; // r8d
  int v17; // r14d
  __int64 v18; // r13
  int v19; // edx
  int v20; // r8d
  __int64 v21; // r13
  int v22; // r8d
  int v23; // r15d
  int v24; // esi
  int v25; // r8d
  __int64 v26; // r13
  int v27; // r8d
  int v28; // r11d
  int v29; // ebx
  int v30; // r8d
  __int64 v31; // r13
  int v32; // r8d
  int v33; // edi
  int v34; // r12d
  int v35; // r8d
  __int64 v36; // r13
  int v37; // r8d
  __int64 v38; // r13
  int v39; // r8d
  int v40; // r8d
  __int64 v41; // r13
  int v42; // r8d
  int v43; // r8d
  __int64 result; // rax
  int v45; // r10d
  _DWORD *v46; // r11
  __int64 v47; // r9
  __int64 v48; // rbx
  __int64 v49; // rsi
  __int64 v50; // rax
  int v51; // edx
  int v52; // r8d
  int v53; // r10d
  __int64 v54; // r14
  int v55; // edx
  __int64 v56; // r15
  int v57; // edx
  __int64 v58; // r12
  int v59; // r8d
  unsigned int v60; // edx
  int v61; // edx
  __int64 v62; // rsi
  int v63; // edx
  __int64 v64; // r10
  int v65; // edx
  __int64 v66; // r11
  __int64 v67; // r9
  int v68; // edx
  unsigned int v69; // ecx
  int v70; // r8d
  unsigned int v71; // ecx
  int v72; // edx
  int v73; // [rsp+0h] [rbp-80h]
  int v74; // [rsp+0h] [rbp-80h]
  int v75; // [rsp+4h] [rbp-7Ch]
  int v76; // [rsp+4h] [rbp-7Ch]
  int v77; // [rsp+8h] [rbp-78h]
  int v78; // [rsp+8h] [rbp-78h]
  int v79; // [rsp+Ch] [rbp-74h]
  int v80; // [rsp+Ch] [rbp-74h]
  int v81; // [rsp+10h] [rbp-70h]
  int v82; // [rsp+10h] [rbp-70h]
  int v83; // [rsp+14h] [rbp-6Ch]
  int v84; // [rsp+14h] [rbp-6Ch]
  int v85; // [rsp+18h] [rbp-68h]
  unsigned int v86; // [rsp+20h] [rbp-60h]
  _DWORD v88[4]; // [rsp+30h] [rbp-50h]
  _BYTE v89[48]; // [rsp+40h] [rbp-40h] BYREF

  v3 = a2 - (_QWORD)v89;
  v4 = v89;
  v5 = 2LL;
  do
  {
    *(v4 - 2) = __ROR8__(_byteswap_uint64(*(_QWORD *)((char *)v4 + v3)), 32);
    *(v4 - 1) = __ROR8__(_byteswap_uint64(*(_QWORD *)((char *)v4 + v3 + 8)), 32);
    *v4 = __ROR8__(_byteswap_uint64(*(_QWORD *)((char *)v4 + v3 + 16)), 32);
    v6 = *(_QWORD *)((char *)v4 + v3 + 24);
    v4 += 4;
    *(v4 - 3) = __ROR8__(_byteswap_uint64(v6), 32);
    --v5;
  }
  while ( v5 );
  v7 = *a1;
  v8 = a1[2];
  v9 = 0LL;
  v10 = a1[3];
  v11 = a1[4];
  v12 = a1[5];
  v13 = a1[6];
  v14 = a1[7];
  v15 = a1[1];
  do
  {
    v16 = v14
        + v88[v9]
        + SHA256Magic[v9]
        + (v11 & v12 ^ v13 & ~v11)
        + (__ROR4__(v11, 6) ^ __ROR4__(v11, 11) ^ __ROR4__(v11, 25));
    v17 = v16 + v10;
    v18 = (unsigned int)(v9 + 1);
    v19 = v16 + (__ROR4__(v7, 13) ^ __ROR4__(v7, 22) ^ __ROR4__(v7, 2)) + (v7 & v15 ^ v8 & (v7 ^ v15));
    v20 = v88[v18]
        + SHA256Magic[v18]
        + (v17 & v11 ^ v12 & ~v17)
        + (__ROR4__(v17, 6) ^ __ROR4__(v17, 11) ^ __ROR4__(v17, 25));
    v21 = (unsigned int)(v18 + 1);
    v22 = v13 + v20;
    v23 = v22 + v8;
    v24 = v22 + (__ROR4__(v19, 13) ^ __ROR4__(v19, 22) ^ __ROR4__(v19, 2)) + (v7 & v15 ^ v19 & (v7 ^ v15));
    v25 = v88[v21]
        + SHA256Magic[v21]
        + (v23 & v17 ^ v11 & ~v23)
        + (__ROR4__(v23, 6) ^ __ROR4__(v23, 11) ^ __ROR4__(v23, 25));
    v26 = (unsigned int)(v21 + 1);
    v27 = v12 + v25;
    v28 = v27 + v15;
    v29 = v27 + (__ROR4__(v24, 2) ^ __ROR4__(v24, 13) ^ __ROR4__(v24, 22)) + (v7 & v24 ^ v19 & (v7 ^ v24));
    v30 = v88[v26]
        + SHA256Magic[v26]
        + (v28 & v23 ^ v17 & ~v28)
        + (__ROR4__(v28, 6) ^ __ROR4__(v28, 11) ^ __ROR4__(v28, 25));
    v31 = (unsigned int)(v26 + 1);
    v32 = v11 + v30;
    v33 = v32 + v7;
    v34 = v32 + (__ROR4__(v29, 2) ^ __ROR4__(v29, 13) ^ __ROR4__(v29, 22)) + (v29 & v24 ^ v19 & (v29 ^ v24));
    v35 = v17
        + v88[v31]
        + SHA256Magic[v31]
        + (v33 & v28 ^ v23 & ~v33)
        + (__ROR4__(v33, 6) ^ __ROR4__(v33, 11) ^ __ROR4__(v33, 25));
    v14 = v35 + v19;
    v36 = (unsigned int)(v31 + 1);
    v73 = v14;
    v10 = v35 + (__ROR4__(v34, 2) ^ __ROR4__(v34, 13) ^ __ROR4__(v34, 22)) + (v34 & v29 ^ v24 & (v34 ^ v29));
    v37 = v88[v36]
        + SHA256Magic[v36]
        + (v33 & v14 ^ v28 & ~v14)
        + (__ROR4__(v14, 6) ^ __ROR4__(v14, 11) ^ __ROR4__(v35 + v19, 25));
    v38 = (unsigned int)(v36 + 1);
    v39 = v23 + v37;
    v13 = v39 + v24;
    v8 = v39 + (__ROR4__(v10, 2) ^ __ROR4__(v10, 13) ^ __ROR4__(v10, 22)) + (v10 & v34 ^ v29 & (v10 ^ v34));
    v40 = v28
        + v88[v38]
        + SHA256Magic[v38]
        + (v13 & v14 ^ v33 & ~v13)
        + (__ROR4__(v13, 6) ^ __ROR4__(v13, 11) ^ __ROR4__(v13, 25));
    v12 = v40 + v29;
    v41 = (unsigned int)(v38 + 1);
    v15 = v40 + (__ROR4__(v8, 2) ^ __ROR4__(v8, 13) ^ __ROR4__(v8, 22)) + (v8 & v10 ^ v34 & (v8 ^ v10));
    v42 = v88[v41]
        + SHA256Magic[v41]
        + (v12 & v13 ^ v14 & ~v12)
        + (__ROR4__(v12, 6) ^ __ROR4__(v12, 11) ^ __ROR4__(v12, 25));
    v9 = (unsigned int)(v41 + 1);
    v43 = v33 + v42;
    v11 = v43 + v34;
    result = v43 + (__ROR4__(v15, 2) ^ (unsigned int)(__ROR4__(v15, 13) ^ __ROR4__(v15, 22)));
    v7 = result + (v15 & v8 ^ v10 & (v15 ^ v8));
  }
  while ( (unsigned int)v9 < 0x10 );
  v75 = v15;
  v45 = v15;
  v46 = a1;
  v86 = v9;
  v77 = v13;
  v83 = v7;
  v79 = v12;
  v81 = v11;
  if ( (unsigned int)v9 < 0x40 )
  {
    do
    {
      v47 = (unsigned int)v9;
      v48 = (unsigned int)(v9 + 1);
      v49 = ((_BYTE)v9 + 1) & 0xF;
      v50 = ((_BYTE)v9 - 2) & 0xF;
      v9 &= 0xFu;
      v51 = v88[v9]
          + v88[((_BYTE)v86 - 7) & 0xF]
          + ((v88[v49] >> 3) ^ __ROR4__(v88[v49], 7) ^ __ROR4__(v88[v49], 18))
          + ((v88[v50] >> 10) ^ __ROR4__(v88[v50], 17) ^ __ROR4__(v88[v50], 19));
      v88[v9] = v51;
      v52 = v73
          + v51
          + SHA256Magic[v47]
          + (v11 & v79 ^ v77 & ~v11)
          + (__ROR4__(v11, 6) ^ __ROR4__(v11, 11) ^ __ROR4__(v11, 25));
      v85 = v52 + v10;
      LODWORD(v47) = v7 ^ v45;
      v53 = v7 & v45;
      v54 = ((_BYTE)v86 + 2) & 0xF;
      v74 = v52 + (__ROR4__(v7, 13) ^ __ROR4__(v7, 22) ^ __ROR4__(v7, 2)) + (v53 ^ v8 & v47);
      v88[v49] += v88[((_BYTE)v86 - 6) & 0xF]
                + ((v88[v54] >> 3) ^ __ROR4__(v88[v54], 7) ^ __ROR4__(v88[v54], 18))
                + ((v88[((_BYTE)v86 - 1) & 0xF] >> 10) ^ __ROR4__(v88[((_BYTE)v86 - 1) & 0xF], 17) ^ __ROR4__(v88[((_BYTE)v86 - 1) & 0xF], 19));
      v55 = v77
          + v88[v49]
          + SHA256Magic[v48]
          + (v85 & v81 ^ v79 & ~v85)
          + (__ROR4__(v85, 6) ^ __ROR4__(v85, 11) ^ __ROR4__(v85, 25));
      LODWORD(v48) = v55 + v8;
      v56 = ((_BYTE)v86 + 3) & 0xF;
      v78 = v55 + (__ROR4__(v74, 13) ^ __ROR4__(v74, 22) ^ __ROR4__(v74, 2)) + (v53 ^ v74 & v47);
      v88[v54] += v88[((_BYTE)v86 - 5) & 0xF]
                + ((v88[v56] >> 3) ^ __ROR4__(v88[v56], 7) ^ __ROR4__(v88[v56], 18))
                + ((v88[v9] >> 10) ^ __ROR4__(v88[v9], 17) ^ __ROR4__(v88[v9], 19));
      v57 = v79
          + v88[v54]
          + SHA256Magic[v86 + 2]
          + (v48 & v85 ^ v81 & ~(_DWORD)v48)
          + (__ROR4__(v48, 6) ^ __ROR4__(v48, 11) ^ __ROR4__(v48, 25));
      v76 = v57 + v75;
      v58 = ((_BYTE)v86 + 4) & 0xF;
      v59 = v57 + (__ROR4__(v78, 2) ^ __ROR4__(v78, 13) ^ __ROR4__(v78, 22)) + (v83 & v78 ^ v74 & (v83 ^ v78));
      v60 = v88[v58];
      v80 = v59;
      v88[v56] += v88[((_BYTE)v86 - 4) & 0xF]
                + ((v60 >> 3) ^ __ROR4__(v60, 7) ^ __ROR4__(v60, 18))
                + ((v88[v49] >> 10) ^ __ROR4__(v88[v49], 17) ^ __ROR4__(v88[v49], 19));
      v61 = v81
          + v88[v56]
          + SHA256Magic[v86 + 3]
          + (v76 & v48 ^ v85 & ~v76)
          + (__ROR4__(v76, 6) ^ __ROR4__(v76, 11) ^ __ROR4__(v76, 25));
      v84 = v61 + v83;
      v82 = v61 + (__ROR4__(v59, 2) ^ __ROR4__(v59, 13) ^ __ROR4__(v59, 22)) + (v80 & v78 ^ v74 & (v80 ^ v78));
      v62 = ((_BYTE)v86 + 5) & 0xF;
      v88[v58] += v88[((_BYTE)v86 - 3) & 0xF]
                + ((v88[v62] >> 3) ^ __ROR4__(v88[v62], 7) ^ __ROR4__(v88[v62], 18))
                + ((v88[v54] >> 10) ^ __ROR4__(v88[v54], 17) ^ __ROR4__(v88[v54], 19));
      v63 = v85
          + v88[v58]
          + SHA256Magic[v86 + 4]
          + (v84 & v76 ^ v48 & ~v84)
          + (__ROR4__(v84, 6) ^ __ROR4__(v84, 11) ^ __ROR4__(v84, 25));
      v73 = v63 + v74;
      v10 = v63 + (__ROR4__(v82, 2) ^ __ROR4__(v82, 13) ^ __ROR4__(v82, 22)) + (v82 & v80 ^ v78 & (v82 ^ v80));
      v64 = ((_BYTE)v86 + 6) & 0xF;
      v88[v62] += v88[((_BYTE)v86 - 2) & 0xF]
                + ((v88[v64] >> 3) ^ __ROR4__(v88[v64], 7) ^ __ROR4__(v88[v64], 18))
                + ((v88[v56] >> 10) ^ __ROR4__(v88[v56], 17) ^ __ROR4__(v88[v56], 19));
      v65 = v48
          + v88[v62]
          + SHA256Magic[v86 + 5]
          + (v84 & v73 ^ v76 & ~v73)
          + (__ROR4__(v73, 6) ^ __ROR4__(v73, 11) ^ __ROR4__(v73, 25));
      v77 = v65 + v78;
      v8 = v65 + (__ROR4__(v10, 2) ^ __ROR4__(v10, 13) ^ __ROR4__(v10, 22)) + (v10 & v82 ^ v59 & (v10 ^ v82));
      v66 = v86 + 7;
      v67 = ((_BYTE)v86 + 7) & 0xF;
      v88[v64] += v88[((_BYTE)v86 - 1) & 0xF]
                + ((v88[v67] >> 3) ^ __ROR4__(v88[v67], 7) ^ __ROR4__(v88[v67], 18))
                + ((v88[v58] >> 10) ^ __ROR4__(v88[v58], 17) ^ __ROR4__(v88[v58], 19));
      v68 = v76
          + v88[v64]
          + SHA256Magic[v86 + 6]
          + (v77 & v73 ^ v84 & ~v77)
          + (__ROR4__(v77, 6) ^ __ROR4__(v77, 11) ^ __ROR4__(v77, 25));
      v12 = v68 + v59;
      v79 = v12;
      v69 = v88[v62];
      v13 = v77;
      v45 = v68 + (__ROR4__(v8, 2) ^ __ROR4__(v8, 13) ^ __ROR4__(v8, 22)) + (v8 & v10 ^ v82 & (v8 ^ v10));
      v75 = v45;
      v86 += 8;
      v70 = (v69 >> 10) ^ __ROR4__(v69, 17) ^ __ROR4__(v69, 19);
      v71 = v88[v86 & 0xF];
      v88[v67] += v88[v9] + ((v71 >> 3) ^ __ROR4__(v71, 7) ^ __ROR4__(v71, 18)) + v70;
      LODWORD(v9) = v86;
      v72 = v84
          + v88[v67]
          + SHA256Magic[v66]
          + (v12 & v77 ^ v73 & ~v12)
          + (__ROR4__(v12, 6) ^ __ROR4__(v12, 11) ^ __ROR4__(v12, 25));
      v11 = v72 + v82;
      v81 = v72 + v82;
      result = v72 + (__ROR4__(v45, 2) ^ (unsigned int)(__ROR4__(v45, 13) ^ __ROR4__(v45, 22)));
      v7 = result + (v45 & v8 ^ v10 & (v45 ^ v8));
      v83 = v7;
    }
    while ( v86 < 0x40 );
    v46 = a1;
    v14 = v73;
  }
  *v46 += v7;
  v46[1] += v45;
  v46[2] += v8;
  v46[3] += v10;
  v46[4] += v11;
  v46[5] += v12;
  v46[6] += v13;
  v46[7] += v14;
  return result;
}
