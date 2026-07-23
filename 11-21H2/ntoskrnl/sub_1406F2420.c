/*
 * XREFs of sub_1406F2420 @ 0x1406F2420
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     sub_140269180 @ 0x140269180 (sub_140269180.c)
 *     sub_14026924C @ 0x14026924C (sub_14026924C.c)
 *     sub_14026925C @ 0x14026925C (sub_14026925C.c)
 *     sub_14026927C @ 0x14026927C (sub_14026927C.c)
 *     sub_1402693A4 @ 0x1402693A4 (sub_1402693A4.c)
 *     sub_1402693C8 @ 0x1402693C8 (sub_1402693C8.c)
 *     sub_1402693F8 @ 0x1402693F8 (sub_1402693F8.c)
 *     sub_14026940C @ 0x14026940C (sub_14026940C.c)
 *     sub_14026A03C @ 0x14026A03C (sub_14026A03C.c)
 *     sub_14026A05C @ 0x14026A05C (sub_14026A05C.c)
 *     sub_14026A07C @ 0x14026A07C (sub_14026A07C.c)
 *     sub_14026A09C @ 0x14026A09C (sub_14026A09C.c)
 *     sub_14026A0BC @ 0x14026A0BC (sub_14026A0BC.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406F2AA0 @ 0x1406F2AA0 (sub_1406F2AA0.c)
 */

void *__fastcall sub_1406F2420(unsigned int a1, void *a2, unsigned int a3)
{
  __int64 v3; // r15
  int v4; // r11d
  __int64 v5; // rax
  ULONG v6; // ebx
  LARGE_INTEGER v7; // rcx
  ULONG v8; // edi
  LARGE_INTEGER v9; // rdx
  __int64 *v10; // r10
  __int64 v11; // rsi
  __int64 v12; // r9
  __int64 v13; // r9
  int v14; // ebx
  int v15; // edx
  int v16; // r8d
  __int64 *v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int16 v20; // cx
  unsigned __int64 v21; // rax
  unsigned __int16 v22; // cx
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // rax
  unsigned __int16 v25; // cx
  unsigned __int64 v26; // r9
  unsigned __int64 v27; // rax
  unsigned int v28; // r8d
  unsigned __int64 v29; // r9
  int v30; // r8d
  int v31; // r9d
  int v32; // r10d
  int v33; // r11d
  int v34; // edi
  int v35; // esi
  int v36; // r15d
  int v37; // r12d
  int v38; // r13d
  int v39; // eax
  int v40; // ecx
  int v41; // edx
  __int64 *v42; // rdx
  int v43; // r14d
  _DWORD *v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // r8
  char *v47; // rax
  __int64 v48; // rdx
  char *v49; // rax
  unsigned __int64 v50; // r8
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // r8
  int v53; // ecx
  ULONG v54; // r10d
  unsigned int v55; // edx
  unsigned int v56; // r8d
  unsigned int v57; // r9d
  unsigned int v58; // r11d
  unsigned int v59; // edi
  unsigned int v60; // esi
  unsigned int v61; // r14d
  unsigned int v62; // r15d
  unsigned int v63; // r12d
  int v64; // r13d
  __int64 *v65; // rax
  _DWORD *v66; // rax
  int v67; // ecx
  bool v68; // zf
  int v70; // [rsp+40h] [rbp-C0h] BYREF
  int v71; // [rsp+44h] [rbp-BCh]
  int v72; // [rsp+48h] [rbp-B8h]
  __int64 v73; // [rsp+50h] [rbp-B0h]
  unsigned __int64 Src; // [rsp+60h] [rbp-A0h] BYREF
  LARGE_INTEGER v75; // [rsp+68h] [rbp-98h]
  LARGE_INTEGER v76; // [rsp+70h] [rbp-90h]
  __int64 v77; // [rsp+78h] [rbp-88h]
  ULONG v78; // [rsp+80h] [rbp-80h]
  ULONG v79; // [rsp+84h] [rbp-7Ch]
  int v80; // [rsp+88h] [rbp-78h]
  int v81; // [rsp+8Ch] [rbp-74h]
  int v82; // [rsp+90h] [rbp-70h]
  int v83; // [rsp+94h] [rbp-6Ch]
  int v84; // [rsp+98h] [rbp-68h]
  int v85; // [rsp+9Ch] [rbp-64h]
  int v86; // [rsp+A0h] [rbp-60h]
  int v87; // [rsp+A4h] [rbp-5Ch]
  int v88; // [rsp+A8h] [rbp-58h]
  int v89; // [rsp+ACh] [rbp-54h]
  int v90; // [rsp+B0h] [rbp-50h]
  int v91; // [rsp+B4h] [rbp-4Ch]
  int v92; // [rsp+B8h] [rbp-48h]
  int v93; // [rsp+BCh] [rbp-44h]
  int v94; // [rsp+C0h] [rbp-40h]
  int v95; // [rsp+C4h] [rbp-3Ch]
  int v96; // [rsp+C8h] [rbp-38h]
  int v97; // [rsp+CCh] [rbp-34h]
  __int128 v98; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v99; // [rsp+E0h] [rbp-20h] BYREF
  int v100; // [rsp+E8h] [rbp-18h]
  int v101; // [rsp+ECh] [rbp-14h]
  int v102; // [rsp+F0h] [rbp-10h]
  int v103; // [rsp+F4h] [rbp-Ch]
  __int64 v104; // [rsp+F8h] [rbp-8h] BYREF
  int v105; // [rsp+100h] [rbp+0h]
  int v106; // [rsp+104h] [rbp+4h]
  int v107; // [rsp+108h] [rbp+8h]
  int v108; // [rsp+10Ch] [rbp+Ch]
  _QWORD v109[15]; // [rsp+110h] [rbp+10h] BYREF
  int v110; // [rsp+188h] [rbp+88h]
  __int64 v111; // [rsp+18Ch] [rbp+8Ch]
  int v112; // [rsp+194h] [rbp+94h]
  __int128 v113; // [rsp+198h] [rbp+98h]
  __int128 v114; // [rsp+1A8h] [rbp+A8h]
  __int64 *v115; // [rsp+1C0h] [rbp+C0h]
  __int128 v116; // [rsp+1C8h] [rbp+C8h] BYREF
  unsigned __int16 v120; // [rsp+248h] [rbp+148h]

  v3 = a1;
  v82 = 0;
  v84 = 0;
  v99 = 0LL;
  v104 = 0LL;
  v98 = 0LL;
  memset(v109, 0, sizeof(v109));
  v4 = dword_140C47438;
  v5 = qword_140C47440;
  v6 = IoReadOperationCount;
  v7 = IoReadTransferCount;
  v8 = IoWriteOperationCount;
  v9 = IoWriteTransferCount;
  v115 = qword_140D088C0;
  v113 = 0LL;
  v114 = 0LL;
  v116 = 0LL;
  if ( (_DWORD)v3 )
  {
    v10 = qword_140D088C0;
    v11 = (unsigned int)v3;
    do
    {
      v12 = *v10++;
      v4 += *(_DWORD *)(v12 + 11620);
      v6 += *(_DWORD *)(v12 + 11612);
      v8 += *(_DWORD *)(v12 + 11616);
      v9.QuadPart += *(_QWORD *)(v12 + 11632);
      v5 += *(_QWORD *)(v12 + 11640);
      v7.QuadPart += *(_QWORD *)(v12 + 11624);
      --v11;
    }
    while ( v11 );
    v78 = v6;
    v13 = v3;
    v14 = 0;
    v76 = v9;
    v77 = v5;
    v15 = 0;
    v16 = 0;
    v75 = v7;
    v79 = v8;
    v17 = qword_140D088C0;
    v80 = v4;
    do
    {
      v18 = *v17++;
      v16 += *(_DWORD *)(v18 + 11580);
      v15 += *(_DWORD *)(v18 + 11576);
      --v13;
    }
    while ( v13 );
  }
  else
  {
    v78 = IoReadOperationCount;
    v14 = 0;
    v76 = IoWriteTransferCount;
    v16 = 0;
    v15 = 0;
    v75 = IoReadTransferCount;
    v77 = qword_140C47440;
    v79 = IoWriteOperationCount;
    v80 = dword_140C47438;
  }
  v110 = v16;
  v111 = 0LL;
  v112 = v15;
  v120 = sub_14026A0BC(*((_QWORD *)KeGetCurrentThread() + 23));
  v19 = sub_14026A09C(v120);
  if ( v19 > 0xFFFFFFFF )
    v81 = -1;
  else
    v81 = v19;
  v21 = sub_14026A07C(v20);
  if ( v21 > v23 )
    v82 = v23;
  else
    v82 = v21;
  v24 = sub_14026A05C(v22);
  if ( v24 > v26 )
    v83 = v26;
  else
    v83 = v24;
  v27 = sub_14026A03C(v25);
  if ( v27 > v29 )
    LODWORD(v27) = v29;
  v84 = v27;
  if ( (unsigned int)v27 < v28 )
    v84 = v28;
  v30 = 0;
  v31 = 0;
  v71 = 0;
  v32 = 0;
  v72 = 0;
  v33 = 0;
  v70 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  if ( a1 )
  {
    v42 = qword_140D088C0;
    v73 = a1;
    v43 = 0;
    do
    {
      v44 = (_DWORD *)*v42++;
      v30 += v44[2884];
      v31 += v44[2885];
      v32 += v44[2886];
      v33 += v44[8394];
      v34 += v44[2887];
      v35 += v44[2888];
      v36 += v44[2889];
      v37 += v44[8395];
      v38 += v44[8396];
      v43 += v44[2890];
      v71 += v44[2891];
      v72 += v44[2892];
      v70 += v44[2893];
      --v73;
    }
    while ( v73 );
    v39 = v71;
    v40 = v72;
    v41 = v70;
  }
  else
  {
    v43 = 0;
  }
  v85 = v30;
  v86 = v31;
  v87 = v32;
  v88 = v33;
  v89 = v34;
  v90 = v35;
  v91 = v36;
  v92 = v37;
  v93 = v38;
  v94 = v43;
  v95 = v39;
  v96 = v40;
  v97 = v41;
  v100 = sub_14026940C();
  sub_1402693F8(&v116);
  v101 = v116;
  v47 = sub_140269180(2LL, v45, v46);
  if ( (unsigned __int64)v47 > 0xFFFFFFFF )
    LODWORD(v47) = -1;
  v106 = (int)v47;
  v49 = sub_140269180(3LL, v48, 0xFFFFFFFFLL);
  if ( (unsigned __int64)v49 > v50 )
    LODWORD(v49) = v50;
  v107 = (int)v49;
  v103 = DWORD2(v116);
  v108 = DWORD1(v116);
  v102 = HIDWORD(v116);
  sub_1402693C8(6);
  v51 = sub_1402693A4((__int64)&StartContext);
  if ( v52 > v51 )
    LODWORD(v52) = v51;
  v105 = v52;
  Src = DesiredTime * (unsigned __int64)(unsigned int)sub_1406F2AA0(qword_140D06940, &v70);
  sub_14026927C(
    (int)&v98,
    (int)&v98 + 4,
    (int)&v98 + 8,
    (int)&v98 + 12,
    (__int64)&v104 + 4,
    (__int64)&v99,
    (__int64)&v99 + 4,
    (__int64)&v104);
  v53 = 0;
  v54 = CcFastMdlReadWait;
  v55 = 0;
  memset(v109, 0, 20);
  v56 = 0;
  v57 = 0;
  v58 = 0;
  HIDWORD(v109[2]) = CcFastMdlReadWait;
  v59 = 0;
  memset(&v109[3], 0, 96);
  v60 = 0;
  v61 = 0;
  v62 = 0;
  v63 = 0;
  v64 = 0;
  if ( a1 )
  {
    v73 = a1;
    v65 = qword_140D088C0;
    do
    {
      v66 = (_DWORD *)*v65;
      HIDWORD(v109[0]) = v66[2898] + v53;
      HIDWORD(v109[6]) += v66[8374];
      v14 += v66[2897];
      v55 += v66[8384];
      v56 += v66[2899];
      v57 += v66[8368];
      v54 += v66[8369];
      v58 += v66[8386];
      v59 += v66[8370];
      v60 += v66[8371];
      v61 += v66[8372];
      v62 += v66[8387];
      v63 += v66[8388];
      v64 += v66[8373];
      LODWORD(v109[7]) += v66[8375];
      HIDWORD(v109[7]) += v66[8389];
      LODWORD(v109[8]) += v66[8390];
      HIDWORD(v109[8]) += v66[2900];
      LODWORD(v109[9]) += v66[2901];
      HIDWORD(v109[9]) += v66[2902];
      LODWORD(v109[10]) += v66[8385];
      HIDWORD(v109[10]) += v66[8376];
      LODWORD(v109[11]) += v66[8377];
      HIDWORD(v109[11]) += v66[8391];
      LODWORD(v109[12]) += v66[8392];
      HIDWORD(v109[12]) += v66[8393];
      LODWORD(v109[13]) += v66[8379];
      HIDWORD(v109[13]) += v66[8380];
      LODWORD(v109[14]) += v66[8381];
      v67 = v66[8382] + HIDWORD(v109[14]);
      v65 = v115 + 1;
      HIDWORD(v109[14]) = v67;
      v68 = v73-- == 1;
      v53 = HIDWORD(v109[0]);
      ++v115;
    }
    while ( !v68 );
    LODWORD(v109[0]) = v14;
    v109[1] = __PAIR64__(v56, v55);
    v109[2] = __PAIR64__(v54, v57);
    v109[3] = __PAIR64__(v59, v58);
    v109[4] = __PAIR64__(v61, v60);
    v109[5] = __PAIR64__(v63, v62);
    LODWORD(v109[6]) = v64;
  }
  *(_QWORD *)&v113 = *(_QWORD *)qword_140C54C88;
  *((_QWORD *)&v113 + 1) = *(_QWORD *)qword_140C54C80;
  *(_QWORD *)&v114 = sub_14026925C(v120);
  *((_QWORD *)&v114 + 1) = sub_14026924C();
  return memmove(a2, &Src, a3);
}
