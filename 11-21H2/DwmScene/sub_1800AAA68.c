/*
 * XREFs of sub_1800AAA68 @ 0x1800AAA68
 * Callers:
 *     sub_180089820 @ 0x180089820 (sub_180089820.c)
 *     sub_18008C900 @ 0x18008C900 (sub_18008C900.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_18001292C @ 0x18001292C (sub_18001292C.c)
 *     sub_180048A80 @ 0x180048A80 (sub_180048A80.c)
 *     sub_180056B84 @ 0x180056B84 (sub_180056B84.c)
 *     sub_180056BD0 @ 0x180056BD0 (sub_180056BD0.c)
 *     sub_180068694 @ 0x180068694 (sub_180068694.c)
 *     sub_180069018 @ 0x180069018 (sub_180069018.c)
 *     sub_180069EF0 @ 0x180069EF0 (sub_180069EF0.c)
 *     sub_1800955D0 @ 0x1800955D0 (sub_1800955D0.c)
 *     sub_180095628 @ 0x180095628 (sub_180095628.c)
 *     sub_180095680 @ 0x180095680 (sub_180095680.c)
 *     sub_1800956D8 @ 0x1800956D8 (sub_1800956D8.c)
 *     sub_18009587C @ 0x18009587C (sub_18009587C.c)
 *     sub_180095F34 @ 0x180095F34 (sub_180095F34.c)
 *     sub_180096660 @ 0x180096660 (sub_180096660.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall sub_1800AAA68(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // r8
  __int64 v6; // r12
  int v7; // edx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // r8
  int v11; // esi
  __int64 v12; // r8
  int v13; // r14d
  __int64 v14; // r8
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rbx
  int *v18; // rax
  __int64 v19; // r15
  __int64 v20; // r8
  __int64 v21; // r13
  __int64 v22; // rdx
  __int64 v23; // r8
  char v24; // si
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  _QWORD *v41; // rbx
  __int64 v42; // rsi
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rbx
  unsigned __int64 v46; // r12
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // r15
  unsigned __int64 v50; // r15
  _QWORD *v51; // r14
  __int64 v52; // rbx
  char *v53; // rdx
  char *v54; // rcx
  _QWORD *v55; // r8
  __int64 v56; // rcx
  bool result; // al
  __int128 v59; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v60; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v61; // [rsp+58h] [rbp-A8h]
  unsigned int v62; // [rsp+68h] [rbp-98h]
  int v63; // [rsp+6Ch] [rbp-94h]
  __int64 v64; // [rsp+70h] [rbp-90h]
  __int64 v65; // [rsp+78h] [rbp-88h] BYREF
  _DWORD *v66[2]; // [rsp+80h] [rbp-80h] BYREF
  int v67; // [rsp+90h] [rbp-70h] BYREF
  int v68; // [rsp+94h] [rbp-6Ch]
  int v69; // [rsp+98h] [rbp-68h]
  int v70; // [rsp+9Ch] [rbp-64h]
  int v71; // [rsp+A0h] [rbp-60h]
  int v72; // [rsp+A4h] [rbp-5Ch]
  char v73; // [rsp+A8h] [rbp-58h]
  int v74; // [rsp+ACh] [rbp-54h]
  int v75; // [rsp+B0h] [rbp-50h]
  int v76; // [rsp+B4h] [rbp-4Ch]
  int v77; // [rsp+B8h] [rbp-48h]
  __int128 v78; // [rsp+BCh] [rbp-44h]
  char v79; // [rsp+CCh] [rbp-34h]
  int v80; // [rsp+CDh] [rbp-33h]
  int v81; // [rsp+D4h] [rbp-2Ch]
  __int64 v82; // [rsp+E0h] [rbp-20h]
  __int64 v83; // [rsp+E8h] [rbp-18h]
  __int64 v84; // [rsp+F0h] [rbp-10h]
  __int128 v85; // [rsp+100h] [rbp+0h] BYREF
  __int128 v86; // [rsp+110h] [rbp+10h] BYREF
  __int128 v87; // [rsp+120h] [rbp+20h] BYREF
  __int128 v88; // [rsp+130h] [rbp+30h] BYREF
  __int128 v89; // [rsp+140h] [rbp+40h] BYREF
  __int128 v90; // [rsp+150h] [rbp+50h] BYREF
  __int128 v91; // [rsp+160h] [rbp+60h] BYREF
  __int64 v92[4]; // [rsp+170h] [rbp+70h] BYREF
  int v93; // [rsp+190h] [rbp+90h] BYREF
  __int64 v94; // [rsp+198h] [rbp+98h]
  __int128 v95; // [rsp+1A0h] [rbp+A0h]
  __int64 v96; // [rsp+1B0h] [rbp+B0h]
  __int64 v97; // [rsp+1B8h] [rbp+B8h]
  int v98; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v99; // [rsp+1C8h] [rbp+C8h]
  __int128 v100; // [rsp+1D0h] [rbp+D0h]
  __int64 v101; // [rsp+1E0h] [rbp+E0h]
  __int64 v102; // [rsp+1E8h] [rbp+E8h]
  __int64 v103[2]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v104[2]; // [rsp+200h] [rbp+100h] BYREF
  __int64 v105[2]; // [rsp+210h] [rbp+110h] BYREF
  _DWORD v106[2]; // [rsp+220h] [rbp+120h] BYREF
  unsigned int v107; // [rsp+228h] [rbp+128h] BYREF
  char v108; // [rsp+22Ch] [rbp+12Ch] BYREF

  v6 = sub_180056B84(a2);
  v82 = v6;
  v7 = 23;
  if ( *(int *)(a1 + 104) < 40960 )
    v7 = 0;
  v8 = 0;
  if ( (*(_DWORD *)(v6 + 560) & 2) == 0 )
    v8 = v7;
  v63 = v8;
  v9 = sub_180069018(*(_QWORD *)(a1 + 56), (__int64)&qword_1801F5B78, v5);
  v11 = sub_180069018(*(_QWORD *)(a1 + 56), (__int64)&qword_1801F5B18, v10);
  v13 = sub_180069018(*(_QWORD *)(a1 + 56), (__int64)&qword_1801F5C58, v12);
  v15 = sub_180069018(*(_QWORD *)(a1 + 56), (__int64)&qword_1801F5B58, v14);
  v62 = v15;
  v16 = v9;
  v17 = 1LL << v9;
  v84 = v17;
  v106[0] = v11;
  v106[1] = v13;
  if ( a3 )
  {
    v107 = v15;
    v66[0] = v106;
    v18 = (int *)&v108;
  }
  else
  {
    v66[0] = v106;
    v18 = (int *)&v107;
  }
  v66[1] = v18;
  v19 = sub_180056BD0(v16, v66);
  v64 = v19;
  v20 = 0LL;
  v65 = 0LL;
  v21 = 1LL << v11;
  v22 = 1LL << v13;
  v83 = 1LL << v13;
  while ( 1 )
  {
    v23 = v17 | v20;
    if ( !a3 || (v24 = 1, !_bittest64(&v23, v62)) )
      v24 = 0;
    v25 = v23 & v21;
    if ( !v24 || !v25 && (v23 & v22) == 0 )
    {
      sub_180068694(*(_QWORD *)(a1 + 56), &v60, v23, v19 & ~v23, 1);
      v70 = 0;
      v71 = 0;
      v72 = 0;
      v73 = 0;
      v78 = 0LL;
      v81 = 3;
      v67 = 0;
      v68 = 2 - (v24 != 0);
      v69 = v25 != 0 ? v63 : 0;
      v80 = 16843009;
      v74 = 2;
      v75 = 2;
      v76 = 2;
      v77 = 7;
      v79 = 1;
      sub_180048A80((__int64 *)v6, (__int64 *)&v59);
      sub_180096660((_QWORD *)v59, (__int64)&v67, 0LL);
      v26 = (__int64)v60;
      if ( *((_QWORD *)&v59 + 1) )
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v59 + 1) + 8LL));
      v85 = v59;
      sub_1800956D8(v26, &v85);
      if ( !v24 )
      {
        v68 = 1;
        v27 = sub_180048A80((__int64 *)v6, v103);
        v28 = *v27;
        v29 = v27[1];
        *v27 = 0LL;
        v27[1] = 0LL;
        v86 = v59;
        *(_QWORD *)&v59 = v28;
        *((_QWORD *)&v59 + 1) = v29;
        sub_180010910((__int64)&v86);
        sub_180010910((__int64)v103);
        sub_180096660((_QWORD *)v59, (__int64)&v67, 0LL);
        v30 = (__int64)v60;
        if ( *((_QWORD *)&v59 + 1) )
          _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v59 + 1) + 8LL));
        v87 = v59;
        sub_180095628(v30, &v87);
        HIBYTE(v80) = 0;
        v31 = sub_180048A80((__int64 *)v6, v104);
        v32 = *v31;
        v33 = v31[1];
        *v31 = 0LL;
        v31[1] = 0LL;
        v88 = v59;
        *(_QWORD *)&v59 = v32;
        *((_QWORD *)&v59 + 1) = v33;
        sub_180010910((__int64)&v88);
        sub_180010910((__int64)v104);
        sub_180096660((_QWORD *)v59, (__int64)&v67, 0LL);
        v34 = (__int64)v60;
        if ( *((_QWORD *)&v59 + 1) )
          _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v59 + 1) + 8LL));
        v89 = v59;
        sub_1800955D0(v34, &v89);
        v68 = 2;
        v35 = sub_180048A80((__int64 *)v6, v105);
        v36 = *v35;
        v37 = v35[1];
        *v35 = 0LL;
        v35[1] = 0LL;
        v90 = v59;
        *(_QWORD *)&v59 = v36;
        *((_QWORD *)&v59 + 1) = v37;
        sub_180010910((__int64)&v90);
        sub_180010910((__int64)v105);
        sub_180096660((_QWORD *)v59, (__int64)&v67, 0LL);
        v38 = (__int64)v60;
        if ( *((_QWORD *)&v59 + 1) )
          _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v59 + 1) + 8LL));
        v91 = v59;
        sub_180095680(v38, &v91);
      }
      if ( v25 )
      {
        v39 = *(_QWORD *)(a1 + 112);
        v93 = 0;
        v94 = v39;
        v95 = 0LL;
        v96 = 0LL;
        v97 = 0LL;
        sub_180095F34((__int64)v60, (__int64)&v93);
      }
      else
      {
        v40 = *(_QWORD *)(a1 + 120);
        v98 = 0;
        v99 = v40;
        v100 = 0LL;
        v101 = 0LL;
        v102 = 0LL;
        sub_180095F34((__int64)v60, (__int64)&v98);
        v41 = v60;
        v92[2] = 0LL;
        v92[3] = 15LL;
        LOBYTE(v92[0]) = 0;
        sub_180012190(v92, byte_180128042, 0LL);
        sub_18009587C(v41, 5, (__int64)v92);
      }
      v42 = *(_QWORD *)(a1 + 136);
      v43 = *(_QWORD *)(a1 + 144);
      if ( v42 == v43 )
      {
        v44 = *(_QWORD *)(a1 + 128);
        v45 = (v42 - v44) >> 4;
        if ( v45 == 0xFFFFFFFFFFFFFFFLL )
          sub_180012170();
        v46 = v45 + 1;
        v47 = (v43 - v44) >> 4;
        v48 = v47 >> 1;
        if ( v47 <= 0xFFFFFFFFFFFFFFFLL - (v47 >> 1) )
        {
          v49 = v45 + 1;
          if ( v47 + v48 >= v46 )
            v49 = v47 + v48;
          if ( v49 > 0xFFFFFFFFFFFFFFFLL )
            sub_1800120D4();
        }
        else
        {
          v49 = 0xFFFFFFFFFFFFFFFLL;
        }
        v50 = 2 * v49;
        v51 = (_QWORD *)sub_180011088(v50 * 8);
        v52 = 2 * v45;
        v51[v52] = 0LL;
        v51[v52 + 1] = 0LL;
        if ( v61 )
          _InterlockedIncrement((volatile signed __int32 *)(v61 + 8));
        v51[v52] = v60;
        v51[v52 + 1] = v61;
        v53 = *(char **)(a1 + 136);
        v54 = *(char **)(a1 + 128);
        v55 = v51;
        if ( (char *)v42 != v53 )
        {
          sub_18001292C(v54, (char *)v42, v51);
          v55 = &v51[v52 + 2];
          v53 = *(char **)(a1 + 136);
          v54 = (char *)v42;
        }
        sub_18001292C(v54, v53, v55);
        v56 = *(_QWORD *)(a1 + 128);
        if ( v56 )
        {
          sub_1800126E8(v56, *(_QWORD *)(a1 + 136));
          sub_180010884(*(char **)(a1 + 128), (*(_QWORD *)(a1 + 144) - *(_QWORD *)(a1 + 128)) & 0xFFFFFFFFFFFFFFF0uLL);
        }
        *(_QWORD *)(a1 + 128) = v51;
        *(_QWORD *)(a1 + 136) = &v51[2 * v46];
        *(_QWORD *)(a1 + 144) = &v51[v50];
        v19 = v64;
        v6 = v82;
      }
      else
      {
        *(_QWORD *)v42 = 0LL;
        *(_QWORD *)(v42 + 8) = 0LL;
        if ( v61 )
          _InterlockedIncrement((volatile signed __int32 *)(v61 + 8));
        *(_QWORD *)v42 = v60;
        *(_QWORD *)(v42 + 8) = v61;
        *(_QWORD *)(a1 + 136) += 16LL;
      }
      sub_180010910((__int64)&v59);
      sub_180010910((__int64)&v60);
    }
    result = sub_180069EF0(&v65, v19);
    if ( !result )
      break;
    v20 = v65;
    v22 = v83;
    v17 = v84;
  }
  return result;
}
