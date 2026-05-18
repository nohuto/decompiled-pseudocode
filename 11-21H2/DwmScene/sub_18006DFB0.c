/*
 * XREFs of sub_18006DFB0 @ 0x18006DFB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800120F4 @ 0x1800120F4 (sub_1800120F4.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18006A5AC @ 0x18006A5AC (sub_18006A5AC.c)
 *     sub_18006A718 @ 0x18006A718 (sub_18006A718.c)
 *     sub_18006A884 @ 0x18006A884 (sub_18006A884.c)
 *     sub_18006A9F0 @ 0x18006A9F0 (sub_18006A9F0.c)
 *     sub_18006AB5C @ 0x18006AB5C (sub_18006AB5C.c)
 *     sub_18006ACC8 @ 0x18006ACC8 (sub_18006ACC8.c)
 *     sub_18006B5A8 @ 0x18006B5A8 (sub_18006B5A8.c)
 *     sub_18006C9B0 @ 0x18006C9B0 (sub_18006C9B0.c)
 *     sub_180070344 @ 0x180070344 (sub_180070344.c)
 */

// Hidden C++ exception states: #wind=6
__int64 **__fastcall sub_18006DFB0(__int64 *a1, __int64 **a2, __int64 a3, _QWORD *a4)
{
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rdx
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  __int64 v12; // rdi
  __int64 v13; // r15
  __int64 i; // rbx
  __int64 v15; // rcx
  __int64 *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 *v25; // rbx
  __int64 *v26; // r12
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 *v32; // rbx
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 *v38; // rbx
  _QWORD *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 *v43; // rax
  _QWORD *v44; // rbx
  __int64 v45; // rcx
  __int64 v46; // rdx
  _QWORD *v47; // r15
  char *v48; // r12
  __int64 v49; // rbx
  __int64 v50; // rcx
  __int64 *v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 *v55; // rax
  __int64 *v56; // rbx
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 *v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 *v63; // r8
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 *v66; // r8
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 *v69; // r8
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 *v72; // r8
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 *v75; // r8
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 *v78; // r8
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 *v81; // r8
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int128 v85; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v86; // [rsp+40h] [rbp-C0h] BYREF
  int v87; // [rsp+50h] [rbp-B0h] BYREF
  int v88; // [rsp+54h] [rbp-ACh] BYREF
  int v89; // [rsp+58h] [rbp-A8h] BYREF
  int v90; // [rsp+5Ch] [rbp-A4h] BYREF
  int v91; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v92; // [rsp+68h] [rbp-98h] BYREF
  __int128 v93; // [rsp+78h] [rbp-88h] BYREF
  __int128 v94; // [rsp+88h] [rbp-78h] BYREF
  __int128 v95; // [rsp+98h] [rbp-68h] BYREF
  __int128 v96; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v97; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v98; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v99; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v100; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v101; // [rsp+100h] [rbp+0h] BYREF
  __int128 v102; // [rsp+110h] [rbp+10h] BYREF
  __int128 v103; // [rsp+120h] [rbp+20h] BYREF
  __int128 v104; // [rsp+130h] [rbp+30h] BYREF
  __int128 v105; // [rsp+140h] [rbp+40h] BYREF
  __int128 v106; // [rsp+150h] [rbp+50h] BYREF
  __int128 v107; // [rsp+160h] [rbp+60h] BYREF
  __int128 v108; // [rsp+170h] [rbp+70h] BYREF
  __int128 v109; // [rsp+180h] [rbp+80h] BYREF
  _QWORD v110[2]; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v111[2]; // [rsp+1A0h] [rbp+A0h] BYREF
  _QWORD v112[2]; // [rsp+1B0h] [rbp+B0h] BYREF
  _QWORD v113[2]; // [rsp+1C0h] [rbp+C0h] BYREF
  _QWORD v114[2]; // [rsp+1D0h] [rbp+D0h] BYREF
  _QWORD v115[2]; // [rsp+1E0h] [rbp+E0h] BYREF
  _QWORD v116[2]; // [rsp+1F0h] [rbp+F0h] BYREF
  _QWORD v117[2]; // [rsp+200h] [rbp+100h] BYREF
  _QWORD v118[2]; // [rsp+210h] [rbp+110h] BYREF
  _QWORD v119[2]; // [rsp+220h] [rbp+120h] BYREF
  _QWORD v120[2]; // [rsp+230h] [rbp+130h] BYREF
  _QWORD v121[2]; // [rsp+240h] [rbp+140h] BYREF
  _QWORD v122[2]; // [rsp+250h] [rbp+150h] BYREF
  _QWORD v123[2]; // [rsp+260h] [rbp+160h] BYREF
  _QWORD v124[2]; // [rsp+270h] [rbp+170h] BYREF
  _QWORD v125[2]; // [rsp+280h] [rbp+180h] BYREF
  _QWORD v126[2]; // [rsp+290h] [rbp+190h] BYREF
  _QWORD v127[2]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _QWORD v128[2]; // [rsp+2B0h] [rbp+1B0h] BYREF
  _QWORD v129[2]; // [rsp+2C0h] [rbp+1C0h] BYREF
  _QWORD v130[2]; // [rsp+2D0h] [rbp+1D0h] BYREF
  _QWORD v131[2]; // [rsp+2E0h] [rbp+1E0h] BYREF
  _QWORD v132[2]; // [rsp+2F0h] [rbp+1F0h] BYREF
  _BYTE v133[64]; // [rsp+300h] [rbp+200h] BYREF
  __int64 v135; // [rsp+368h] [rbp+268h] BYREF

  v7 = sub_18001D684();
  v8 = v7;
  v135 = v7;
  if ( v7 )
  {
    *(_OWORD *)v7 = 0LL;
    *(_DWORD *)(v7 + 8) = 1;
    *(_DWORD *)(v7 + 12) = 1;
    *(_QWORD *)v7 = &std::_Ref_count_obj2<Spectre::Engine::ViewerEngine::ViewerSceneData>::`vftable';
    sub_18006B5A8((_QWORD *)(v7 + 16));
  }
  else
  {
    v8 = 0LL;
  }
  *(_QWORD *)&v86 = v8 + 16;
  *((_QWORD *)&v86 + 1) = v8;
  v85 = 0LL;
  v9 = a4[1];
  if ( !v9 )
LABEL_64:
    sub_1800120F4();
  v10 = *(_DWORD *)(v9 + 8);
  do
  {
    if ( !v10 )
      goto LABEL_64;
    v11 = v10;
    v10 = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), v10 + 1, v10);
  }
  while ( v11 != v10 );
  *(_QWORD *)&v85 = *a4;
  v12 = a4[1];
  *((_QWORD *)&v85 + 1) = v12;
  v13 = v86;
  for ( i = 0LL; i < 6; i += 2LL )
  {
    v92 = 0LL;
    v15 = a1[i + 2];
    if ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
      v15 = a1[i + 2];
      v12 = *((_QWORD *)&v85 + 1);
    }
    *(_QWORD *)&v92 = a1[i + 1];
    *((_QWORD *)&v92 + 1) = v15;
    v101 = 0LL;
    if ( v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
      v12 = *((_QWORD *)&v85 + 1);
    }
    v101 = v85;
    v16 = sub_18006A884(a3, v125, &v101, (__int64 *)&v92);
    v17 = *v16;
    v18 = v16[1];
    *v16 = 0LL;
    v16[1] = 0LL;
    v110[0] = *(_QWORD *)(i * 8 + v13 + 8);
    *(_QWORD *)(i * 8 + v13 + 8) = v17;
    v110[1] = *(_QWORD *)(i * 8 + v13 + 16);
    *(_QWORD *)(i * 8 + v13 + 16) = v18;
    sub_180010910((__int64)v110);
    sub_180010910((__int64)v125);
    v93 = 0LL;
    v19 = a1[i + 8];
    if ( v19 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
      v19 = a1[i + 8];
      v12 = *((_QWORD *)&v85 + 1);
    }
    *(_QWORD *)&v93 = a1[i + 7];
    *((_QWORD *)&v93 + 1) = v19;
    v102 = 0LL;
    if ( v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
      v12 = *((_QWORD *)&v85 + 1);
    }
    v102 = v85;
    v20 = sub_18006A5AC(a3, v126, &v102, (__int64 *)&v93);
    v21 = *v20;
    v22 = v20[1];
    *v20 = 0LL;
    v20[1] = 0LL;
    v111[0] = *(_QWORD *)(v13 + i * 8 + 56);
    *(_QWORD *)(v13 + i * 8 + 56) = v21;
    v111[1] = *(_QWORD *)(v13 + i * 8 + 64);
    *(_QWORD *)(v13 + i * 8 + 64) = v22;
    sub_180010910((__int64)v111);
    sub_180010910((__int64)v126);
  }
  LODWORD(v135) = 0;
  v23 = sub_18006C9B0(a1 + 13, (int *)&v135);
  v94 = 0LL;
  v24 = *(_QWORD *)(v23 + 8);
  if ( v24 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v24 + 8));
    v12 = *((_QWORD *)&v85 + 1);
  }
  v94 = *(_OWORD *)v23;
  v103 = 0LL;
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    v12 = *((_QWORD *)&v85 + 1);
  }
  v103 = v85;
  v25 = sub_18006A9F0(a3, v127, &v103, (__int64 *)&v94);
  v26 = (__int64 *)(v86 + 104);
  v91 = 0;
  v27 = (_QWORD *)sub_18006C9B0((__int64 *)(v86 + 104), &v91);
  v28 = *v25;
  v29 = v25[1];
  *v25 = 0LL;
  v25[1] = 0LL;
  v112[0] = *v27;
  *v27 = v28;
  v112[1] = v27[1];
  v27[1] = v29;
  sub_180010910((__int64)v112);
  sub_180010910((__int64)v127);
  v87 = 1;
  v30 = sub_18006C9B0(a1 + 13, &v87);
  v95 = 0LL;
  v31 = *(_QWORD *)(v30 + 8);
  if ( v31 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v31 + 8));
    v12 = *((_QWORD *)&v85 + 1);
  }
  v95 = *(_OWORD *)v30;
  v104 = 0LL;
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    v12 = *((_QWORD *)&v85 + 1);
  }
  v104 = v85;
  v32 = sub_18006A9F0(a3, v128, &v104, (__int64 *)&v95);
  v88 = 1;
  v33 = (_QWORD *)sub_18006C9B0(v26, &v88);
  v34 = *v32;
  v35 = v32[1];
  *v32 = 0LL;
  v32[1] = 0LL;
  v113[0] = *v33;
  *v33 = v34;
  v113[1] = v33[1];
  v33[1] = v35;
  sub_180010910((__int64)v113);
  sub_180010910((__int64)v128);
  v89 = 2;
  v36 = sub_18006C9B0(a1 + 13, &v89);
  v96 = 0LL;
  v37 = *(_QWORD *)(v36 + 8);
  if ( v37 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v37 + 8));
    v12 = *((_QWORD *)&v85 + 1);
  }
  v96 = *(_OWORD *)v36;
  v105 = 0LL;
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    v12 = *((_QWORD *)&v85 + 1);
  }
  v105 = v85;
  v38 = sub_18006A9F0(a3, v129, &v105, (__int64 *)&v96);
  v90 = 2;
  v39 = (_QWORD *)sub_18006C9B0(v26, &v90);
  v40 = *v38;
  v41 = v38[1];
  *v38 = 0LL;
  v38[1] = 0LL;
  v114[0] = *v39;
  *v39 = v40;
  v114[1] = v39[1];
  v39[1] = v41;
  sub_180010910((__int64)v114);
  sub_180010910((__int64)v129);
  v97 = 0LL;
  v42 = a1[16];
  if ( v42 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v42 + 8));
    v42 = a1[16];
    v12 = *((_QWORD *)&v85 + 1);
  }
  *(_QWORD *)&v97 = a1[15];
  *((_QWORD *)&v97 + 1) = v42;
  v106 = 0LL;
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    v12 = *((_QWORD *)&v85 + 1);
  }
  v106 = v85;
  v43 = sub_18006A718(a3, v130, &v106, (__int64 *)&v97);
  v44 = (_QWORD *)v86;
  v45 = *v43;
  v46 = v43[1];
  *v43 = 0LL;
  v43[1] = 0LL;
  v115[0] = v44[15];
  v44[15] = v45;
  v115[1] = v44[16];
  v44[16] = v46;
  sub_180010910((__int64)v115);
  sub_180010910((__int64)v130);
  v47 = v44 + 18;
  v48 = (char *)((char *)a1 - (char *)v44);
  v49 = 3LL;
  do
  {
    v98 = 0LL;
    v50 = *(_QWORD *)((char *)v47 + (_QWORD)v48);
    if ( v50 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v50 + 8));
      v50 = *(_QWORD *)((char *)v47 + (_QWORD)v48);
      v12 = *((_QWORD *)&v85 + 1);
    }
    *(_QWORD *)&v98 = *(_QWORD *)((char *)v47 + (_QWORD)v48 - 8);
    *((_QWORD *)&v98 + 1) = v50;
    v107 = 0LL;
    if ( v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
      v12 = *((_QWORD *)&v85 + 1);
    }
    v107 = v85;
    v51 = sub_18006AB5C(a3, v131, &v107, (__int64 *)&v98);
    v52 = *v51;
    v53 = v51[1];
    *v51 = 0LL;
    v51[1] = 0LL;
    v116[0] = *(v47 - 1);
    *(v47 - 1) = v52;
    v116[1] = *v47;
    *v47 = v53;
    sub_180010910((__int64)v116);
    sub_180010910((__int64)v131);
    v47 += 2;
    --v49;
  }
  while ( v49 );
  v99 = 0LL;
  v54 = a1[24];
  if ( v54 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v54 + 8));
    v54 = a1[24];
    v12 = *((_QWORD *)&v85 + 1);
  }
  *(_QWORD *)&v99 = a1[23];
  *((_QWORD *)&v99 + 1) = v54;
  v108 = 0LL;
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    v12 = *((_QWORD *)&v85 + 1);
  }
  v108 = v85;
  v55 = sub_18006ACC8(a3, v132, &v108, (__int64 *)&v99);
  v56 = (__int64 *)v86;
  v57 = *v55;
  v58 = v55[1];
  *v55 = 0LL;
  v55[1] = 0LL;
  v117[0] = v56[23];
  v56[23] = v57;
  v117[1] = v56[24];
  v56[24] = v58;
  sub_180010910((__int64)v117);
  sub_180010910((__int64)v132);
  v100 = 0LL;
  v59 = a1[26];
  if ( v59 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v59 + 8));
    v59 = a1[26];
    v56 = (__int64 *)v86;
    v12 = *((_QWORD *)&v85 + 1);
  }
  *(_QWORD *)&v100 = a1[25];
  *((_QWORD *)&v100 + 1) = v59;
  v109 = 0LL;
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    v56 = (__int64 *)v86;
  }
  v109 = v85;
  v60 = (__int64 *)sub_180070344(a3, v133, &v109, &v100);
  v61 = *v60;
  v62 = v60[1];
  *v60 = 0LL;
  v60[1] = 0LL;
  v118[0] = v56[25];
  v56[25] = v61;
  v118[1] = v56[26];
  v56[26] = v62;
  sub_180010910((__int64)v118);
  sub_180010910((__int64)v133);
  v63 = v56 + 27;
  v64 = a1[28];
  if ( v64 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v64 + 8));
    v64 = a1[28];
    v56 = (__int64 *)v86;
  }
  v65 = a1[27];
  v119[0] = *v63;
  *v63 = v65;
  v119[1] = v63[1];
  v63[1] = v64;
  sub_180010910((__int64)v119);
  v66 = v56 + 29;
  v67 = a1[30];
  if ( v67 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v67 + 8));
    v67 = a1[30];
    v56 = (__int64 *)v86;
  }
  v68 = a1[29];
  v120[0] = *v66;
  *v66 = v68;
  v120[1] = v66[1];
  v66[1] = v67;
  sub_180010910((__int64)v120);
  v69 = v56 + 31;
  v70 = a1[32];
  if ( v70 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v70 + 8));
    v70 = a1[32];
    v56 = (__int64 *)v86;
  }
  v71 = a1[31];
  v121[0] = *v69;
  *v69 = v71;
  v121[1] = v69[1];
  v69[1] = v70;
  sub_180010910((__int64)v121);
  v72 = v56 + 33;
  v73 = a1[34];
  if ( v73 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v73 + 8));
    v73 = a1[34];
    v56 = (__int64 *)v86;
  }
  v74 = a1[33];
  v122[0] = *v72;
  *v72 = v74;
  v122[1] = v72[1];
  v72[1] = v73;
  sub_180010910((__int64)v122);
  v75 = v56 + 35;
  v76 = a1[36];
  if ( v76 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v76 + 8));
    v76 = a1[36];
    v56 = (__int64 *)v86;
  }
  v77 = a1[35];
  v123[0] = *v75;
  *v75 = v77;
  v123[1] = v75[1];
  v75[1] = v76;
  sub_180010910((__int64)v123);
  v78 = v56 + 37;
  v79 = a1[38];
  if ( v79 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v79 + 8));
    v79 = a1[38];
    v56 = (__int64 *)v86;
  }
  v80 = a1[37];
  v124[0] = *v78;
  *v78 = v80;
  v124[1] = v78[1];
  v78[1] = v79;
  sub_180010910((__int64)v124);
  v81 = v56 + 39;
  v82 = a1[40];
  if ( v82 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v82 + 8));
    v82 = a1[40];
    v56 = (__int64 *)v86;
  }
  v83 = a1[39];
  *(_QWORD *)&v86 = *v81;
  *v81 = v83;
  *((_QWORD *)&v86 + 1) = v81[1];
  v81[1] = v82;
  sub_180010910((__int64)&v86);
  *a2 = v56;
  a2[1] = (__int64 *)v8;
  v86 = 0LL;
  sub_180010910((__int64)&v85);
  sub_180010910((__int64)&v86);
  return a2;
}
