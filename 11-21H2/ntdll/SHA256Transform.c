/*
 * XREFs of SHA256Transform @ 0x180014068
 * Callers:
 *     SHA256Update @ 0x180013F84 (SHA256Update.c)
 * Callees:
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

__int64 __fastcall SHA256Transform(_DWORD *a1, __int64 a2)
{
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  __int64 v5; // r8
  unsigned __int64 v6; // rax
  int v7; // r11d
  int v8; // ebx
  int v9; // r15d
  int v10; // esi
  int v11; // r12d
  int v12; // r14d
  int v13; // edi
  int v14; // r9d
  __int64 v15; // r13
  int v16; // r8d
  int v17; // esi
  __int64 v18; // r13
  int v19; // edx
  int v20; // r8d
  __int64 v21; // r13
  int v22; // r8d
  int v23; // r15d
  int v24; // edi
  int v25; // r8d
  __int64 v26; // r13
  int v27; // r8d
  int v28; // ebx
  int v29; // r14d
  int v30; // r8d
  __int64 v31; // r13
  int v32; // r8d
  int v33; // r11d
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
  bool v45; // cf
  _DWORD *v46; // r13
  unsigned int v47; // r10d
  __int64 v48; // r9
  __int64 v49; // rbx
  __int64 v50; // rdi
  __int64 v51; // r12
  unsigned int v52; // ecx
  char v53; // al
  int v54; // r10d
  int v55; // edx
  int v56; // ecx
  int v57; // r8d
  int v58; // eax
  __int64 v59; // r11
  __int64 v60; // rsi
  unsigned int v61; // ecx
  int v62; // edx
  int v63; // r8d
  int v64; // edx
  __int64 v65; // r9
  __int64 v66; // r15
  int v67; // edx
  int v68; // r8d
  __int64 v69; // r14
  int v70; // edx
  int v71; // r8d
  __int64 v72; // r9
  __int64 v73; // rdi
  int v74; // ecx
  __int64 v75; // rbx
  int v76; // edx
  int v77; // r8d
  __int64 v78; // r10
  int v79; // edx
  __int64 v80; // r11
  int v81; // r8d
  __int64 v82; // r9
  int v83; // edx
  int v84; // r8d
  unsigned int v85; // ecx
  int v86; // edx
  int v87; // r8d
  int v88; // [rsp+0h] [rbp-80h]
  int v89; // [rsp+0h] [rbp-80h]
  int v90; // [rsp+4h] [rbp-7Ch]
  int v91; // [rsp+4h] [rbp-7Ch]
  int v92; // [rsp+8h] [rbp-78h]
  int v93; // [rsp+8h] [rbp-78h]
  int v94; // [rsp+Ch] [rbp-74h]
  int v95; // [rsp+Ch] [rbp-74h]
  int v96; // [rsp+10h] [rbp-70h]
  int v97; // [rsp+10h] [rbp-70h]
  int v98; // [rsp+14h] [rbp-6Ch]
  int v99; // [rsp+18h] [rbp-68h]
  int v100; // [rsp+1Ch] [rbp-64h]
  unsigned int v101; // [rsp+20h] [rbp-60h]
  unsigned int v102; // [rsp+20h] [rbp-60h]
  _DWORD v104[4]; // [rsp+30h] [rbp-50h]
  _BYTE v105[48]; // [rsp+40h] [rbp-40h] BYREF

  v3 = a2 - (_QWORD)v105;
  v4 = v105;
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
  v8 = a1[1];
  v9 = a1[2];
  v10 = a1[3];
  v11 = a1[4];
  v12 = a1[5];
  v13 = a1[6];
  v14 = a1[7];
  v15 = 0LL;
  do
  {
    v16 = v14
        + v104[v15]
        + SHA256Magic[v15]
        + (v11 & v12 ^ v13 & ~v11)
        + (__ROR4__(v11, 6) ^ __ROR4__(v11, 11) ^ __ROR4__(v11, 25));
    v17 = v16 + v10;
    v18 = (unsigned int)(v15 + 1);
    v19 = v16 + (__ROR4__(v7, 13) ^ __ROR4__(v7, 22) ^ __ROR4__(v7, 2)) + (v7 & v8 ^ v9 & (v7 ^ v8));
    v20 = v104[v18]
        + SHA256Magic[v18]
        + (v17 & v11 ^ v12 & ~v17)
        + (__ROR4__(v17, 6) ^ __ROR4__(v17, 11) ^ __ROR4__(v17, 25));
    v21 = (unsigned int)(v18 + 1);
    v22 = v13 + v20;
    v23 = v22 + v9;
    v24 = v22 + (__ROR4__(v19, 13) ^ __ROR4__(v19, 22) ^ __ROR4__(v19, 2)) + (v7 & v8 ^ v19 & (v7 ^ v8));
    v25 = v104[v21]
        + SHA256Magic[v21]
        + (v23 & v17 ^ v11 & ~v23)
        + (__ROR4__(v23, 6) ^ __ROR4__(v23, 11) ^ __ROR4__(v23, 25));
    v26 = (unsigned int)(v21 + 1);
    v27 = v12 + v25;
    v28 = v27 + v8;
    v29 = v27 + (__ROR4__(v24, 2) ^ __ROR4__(v24, 13) ^ __ROR4__(v24, 22)) + (v7 & v24 ^ v19 & (v7 ^ v24));
    v30 = v104[v26]
        + SHA256Magic[v26]
        + (v28 & v23 ^ v17 & ~v28)
        + (__ROR4__(v28, 6) ^ __ROR4__(v28, 11) ^ __ROR4__(v28, 25));
    v31 = (unsigned int)(v26 + 1);
    v32 = v11 + v30;
    v33 = v32 + v7;
    v34 = v32 + (__ROR4__(v29, 2) ^ __ROR4__(v29, 13) ^ __ROR4__(v29, 22)) + (v29 & v24 ^ v19 & (v29 ^ v24));
    v35 = v17
        + v104[v31]
        + SHA256Magic[v31]
        + (v33 & v28 ^ v23 & ~v33)
        + (__ROR4__(v33, 6) ^ __ROR4__(v33, 11) ^ __ROR4__(v33, 25));
    v14 = v35 + v19;
    v36 = (unsigned int)(v31 + 1);
    v88 = v14;
    v10 = v35 + (__ROR4__(v34, 2) ^ __ROR4__(v34, 13) ^ __ROR4__(v34, 22)) + (v34 & v29 ^ v24 & (v34 ^ v29));
    v37 = v104[v36]
        + SHA256Magic[v36]
        + (v33 & v14 ^ v28 & ~v14)
        + (__ROR4__(v14, 6) ^ __ROR4__(v14, 11) ^ __ROR4__(v35 + v19, 25));
    v38 = (unsigned int)(v36 + 1);
    v39 = v23 + v37;
    v13 = v39 + v24;
    v9 = v39 + (__ROR4__(v10, 2) ^ __ROR4__(v10, 13) ^ __ROR4__(v10, 22)) + (v10 & v34 ^ v29 & (v10 ^ v34));
    v40 = v28
        + v104[v38]
        + SHA256Magic[v38]
        + (v13 & v14 ^ v33 & ~v13)
        + (__ROR4__(v13, 6) ^ __ROR4__(v13, 11) ^ __ROR4__(v13, 25));
    v12 = v40 + v29;
    v41 = (unsigned int)(v38 + 1);
    v8 = v40 + (__ROR4__(v9, 2) ^ __ROR4__(v9, 13) ^ __ROR4__(v9, 22)) + (v9 & v10 ^ v34 & (v9 ^ v10));
    v42 = v104[v41]
        + SHA256Magic[v41]
        + (v12 & v13 ^ v14 & ~v12)
        + (__ROR4__(v12, 6) ^ __ROR4__(v12, 11) ^ __ROR4__(v12, 25));
    v15 = (unsigned int)(v41 + 1);
    v43 = v33 + v42;
    v11 = v43 + v34;
    result = v43 + (__ROR4__(v8, 2) ^ (unsigned int)(__ROR4__(v8, 13) ^ __ROR4__(v8, 22)));
    v7 = result + (v8 & v9 ^ v10 & (v8 ^ v9));
  }
  while ( (unsigned int)v15 < 0x10 );
  v101 = v15;
  v45 = (unsigned int)v15 < 0x40;
  v46 = a1;
  v90 = v13;
  v92 = v8;
  v96 = result + (v8 & v9 ^ v10 & (v8 ^ v9));
  v94 = v12;
  v98 = v11;
  if ( v45 )
  {
    v47 = v101;
    do
    {
      v48 = v47;
      v49 = v47 + 1;
      v50 = v47 & 0xF;
      v51 = ((_BYTE)v47 + 1) & 0xF;
      v52 = v104[((_BYTE)v47 - 2) & 0xF];
      v53 = v47 - 7;
      v54 = v7 & v92;
      v104[v50] += v104[v53 & 0xF]
                 + ((v104[v51] >> 3) ^ __ROR4__(v104[v51], 7) ^ __ROR4__(v104[v51], 18))
                 + ((v52 >> 10) ^ __ROR4__(v52, 17) ^ __ROR4__(v52, 19));
      v55 = v88
          + v104[v50]
          + SHA256Magic[v48]
          + (v98 & v12 ^ v90 & ~v98)
          + (__ROR4__(v98, 6) ^ __ROR4__(v98, 11) ^ __ROR4__(v98, 25));
      LODWORD(v48) = v7 ^ v92;
      v56 = __ROR4__(v7, 13) ^ __ROR4__(v7, 22);
      v99 = v55 + v10;
      v57 = v7 ^ v92;
      v58 = __ROR4__(v7, 2);
      v59 = (unsigned int)(v49 + 1);
      v89 = v55 + (v56 ^ v58) + (v54 ^ v9 & v57);
      v60 = ((_BYTE)v49 + 1) & 0xF;
      v61 = v104[((_BYTE)v49 - 2) & 0xF];
      v62 = v104[v51]
          + v104[((_BYTE)v49 - 7) & 0xF]
          + ((v61 >> 10) ^ __ROR4__(v61, 17) ^ __ROR4__(v61, 19))
          + (__ROR4__(v104[v60], 7) ^ __ROR4__(v104[v60], 18) ^ (v104[v60] >> 3));
      v104[v51] = v62;
      v63 = v90
          + v62
          + SHA256Magic[v49]
          + (v99 & v98 ^ v94 & ~v99)
          + (__ROR4__(v99, 6) ^ __ROR4__(v99, 11) ^ __ROR4__(v99, 25));
      v100 = v63 + v9;
      v64 = v48;
      v65 = (unsigned int)(v49 + 2);
      LODWORD(v49) = v63 + v9;
      v66 = ((_BYTE)v59 + 1) & 0xF;
      v91 = v63 + (__ROR4__(v89, 13) ^ __ROR4__(v89, 22) ^ __ROR4__(v89, 2)) + (v54 ^ v89 & v64);
      v67 = v104[v60]
          + v104[((_BYTE)v59 - 7) & 0xF]
          + ((v104[v50] >> 10) ^ __ROR4__(v104[v50], 17) ^ __ROR4__(v104[v50], 19))
          + (__ROR4__(v104[v66], 7) ^ __ROR4__(v104[v66], 18) ^ (v104[v66] >> 3));
      v104[v60] = v67;
      v68 = v94
          + v67
          + SHA256Magic[v59]
          + (v49 & v99 ^ v98 & ~(_DWORD)v49)
          + (__ROR4__(v49, 6) ^ __ROR4__(v49, 11) ^ __ROR4__(v49, 25));
      v93 = v68 + v92;
      v69 = ((_BYTE)v59 + 2) & 0xF;
      v95 = v68 + (__ROR4__(v91, 2) ^ __ROR4__(v91, 13) ^ __ROR4__(v91, 22)) + (v96 & v91 ^ v89 & (v96 ^ v91));
      v70 = v104[v66]
          + v104[((_BYTE)v65 - 7) & 0xF]
          + ((v104[v51] >> 10) ^ __ROR4__(v104[v51], 17) ^ __ROR4__(v104[v51], 19))
          + (__ROR4__(v104[v69], 7) ^ __ROR4__(v104[v69], 18) ^ (v104[v69] >> 3));
      v104[v66] = v70;
      v71 = v98
          + v70
          + SHA256Magic[v65]
          + (v93 & v49 ^ v99 & ~v93)
          + (__ROR4__(v93, 6) ^ __ROR4__(v93, 11) ^ __ROR4__(v93, 25));
      v97 = v71 + v96;
      v72 = (unsigned int)(v59 + 3);
      v73 = ((_BYTE)v59 + 3) & 0xF;
      LODWORD(v51) = v71 + (__ROR4__(v95, 2) ^ __ROR4__(v95, 13) ^ __ROR4__(v95, 22)) + (v95 & v91 ^ v89 & (v95 ^ v91));
      v74 = v49 & ~v97;
      v75 = (unsigned int)(v59 + 4);
      v76 = v104[v69]
          + v104[((_BYTE)v59 - 5) & 0xF]
          + ((v104[v60] >> 10) ^ __ROR4__(v104[v60], 17) ^ __ROR4__(v104[v60], 19))
          + (__ROR4__(v104[v73], 7) ^ __ROR4__(v104[v73], 18) ^ (v104[v73] >> 3));
      v104[v69] = v76;
      v77 = v99
          + v76
          + SHA256Magic[(unsigned int)(v59 + 2)]
          + (v97 & v93 ^ v74)
          + (__ROR4__(v97, 6) ^ __ROR4__(v97, 11) ^ __ROR4__(v97, 25));
      v88 = v77 + v89;
      v10 = v77 + (__ROR4__(v51, 2) ^ __ROR4__(v51, 13) ^ __ROR4__(v51, 22)) + (v51 & v95 ^ v91 & (v51 ^ v95));
      v78 = ((_BYTE)v59 + 4) & 0xF;
      v79 = v104[v73]
          + v104[((_BYTE)v59 - 4) & 0xF]
          + ((v104[v66] >> 10) ^ __ROR4__(v104[v66], 17) ^ __ROR4__(v104[v66], 19))
          + (__ROR4__(v104[v78], 7) ^ __ROR4__(v104[v78], 18) ^ (v104[v78] >> 3));
      v104[v73] = v79;
      v80 = (unsigned int)(v59 + 5);
      v81 = v100
          + v79
          + SHA256Magic[v72]
          + (v97 & v88 ^ v93 & ~v88)
          + (__ROR4__(v88, 6) ^ __ROR4__(v88, 11) ^ __ROR4__(v88, 25));
      v90 = v81 + v91;
      v82 = ((_BYTE)v75 + 1) & 0xF;
      v9 = v81 + (__ROR4__(v10, 2) ^ __ROR4__(v10, 13) ^ __ROR4__(v10, 22)) + (v10 & v51 ^ v95 & (v10 ^ v51));
      v83 = v104[v78]
          + v104[((_BYTE)v75 - 7) & 0xF]
          + ((v104[v69] >> 10) ^ __ROR4__(v104[v69], 17) ^ __ROR4__(v104[v69], 19))
          + (__ROR4__(v104[v82], 7) ^ __ROR4__(v104[v82], 18) ^ (v104[v82] >> 3));
      v104[v78] = v83;
      v84 = v93
          + v83
          + SHA256Magic[v75]
          + (v90 & v88 ^ v97 & ~v90)
          + (__ROR4__(v90, 6) ^ __ROR4__(v90, 11) ^ __ROR4__(v90, 25));
      v12 = v84 + v95;
      v94 = v12;
      v85 = v104[v73];
      v13 = v90;
      v8 = v84 + (__ROR4__(v9, 2) ^ __ROR4__(v9, 13) ^ __ROR4__(v9, 22)) + (v9 & v10 ^ v51 & (v9 ^ v10));
      v92 = v8;
      v102 = v80 + 1;
      v86 = v104[v82]
          + v104[((_BYTE)v80 - 7) & 0xF]
          + ((v85 >> 10) ^ __ROR4__(v85, 17) ^ __ROR4__(v85, 19))
          + (__ROR4__(v104[v102 & 0xF], 7) ^ __ROR4__(v104[v102 & 0xF], 18) ^ (v104[v102 & 0xF] >> 3));
      v104[v82] = v86;
      v14 = v88;
      v47 = v80 + 1;
      v87 = v97
          + v86
          + SHA256Magic[v80]
          + (v12 & v90 ^ v88 & ~v12)
          + (__ROR4__(v12, 6) ^ __ROR4__(v12, 11) ^ __ROR4__(v12, 25));
      v11 = v87 + v51;
      v98 = v11;
      result = v87 + (__ROR4__(v8, 2) ^ (unsigned int)(__ROR4__(v8, 13) ^ __ROR4__(v8, 22)));
      v7 = result + (v8 & v9 ^ v10 & (v8 ^ v9));
      v96 = v7;
    }
    while ( v102 < 0x40 );
    v46 = a1;
  }
  *v46 += v7;
  v46[1] += v8;
  v46[2] += v9;
  v46[3] += v10;
  v46[4] += v11;
  v46[5] += v12;
  v46[6] += v13;
  v46[7] += v14;
  return result;
}
