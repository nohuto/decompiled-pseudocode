/*
 * XREFs of sub_180086BE0 @ 0x180086BE0
 * Callers:
 *     sub_180043F98 @ 0x180043F98 (sub_180043F98.c)
 *     sub_180086AFC @ 0x180086AFC (sub_180086AFC.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011DD0 @ 0x180011DD0 (sub_180011DD0.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     sub_180026618 @ 0x180026618 (sub_180026618.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_180029870 @ 0x180029870 (sub_180029870.c)
 *     sub_18002A404 @ 0x18002A404 (sub_18002A404.c)
 *     sub_1800435A8 @ 0x1800435A8 (sub_1800435A8.c)
 *     sub_1800435C8 @ 0x1800435C8 (sub_1800435C8.c)
 *     sub_1800503B4 @ 0x1800503B4 (sub_1800503B4.c)
 *     sub_180054270 @ 0x180054270 (sub_180054270.c)
 *     sub_180060D9C @ 0x180060D9C (sub_180060D9C.c)
 *     sub_180085F84 @ 0x180085F84 (sub_180085F84.c)
 *     sub_1800861C4 @ 0x1800861C4 (sub_1800861C4.c)
 *     sub_18008640C @ 0x18008640C (sub_18008640C.c)
 *     sub_180086474 @ 0x180086474 (sub_180086474.c)
 *     sub_1800864DC @ 0x1800864DC (sub_1800864DC.c)
 *     sub_180086544 @ 0x180086544 (sub_180086544.c)
 *     sub_1800865AC @ 0x1800865AC (sub_1800865AC.c)
 *     sub_180086808 @ 0x180086808 (sub_180086808.c)
 *     sub_180087454 @ 0x180087454 (sub_180087454.c)
 *     sub_180088290 @ 0x180088290 (sub_180088290.c)
 *     sub_1800883E0 @ 0x1800883E0 (sub_1800883E0.c)
 *     sub_18008B088 @ 0x18008B088 (sub_18008B088.c)
 *     sub_18008BEC0 @ 0x18008BEC0 (sub_18008BEC0.c)
 *     sub_18008C164 @ 0x18008C164 (sub_18008C164.c)
 *     sub_18008C230 @ 0x18008C230 (sub_18008C230.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
unsigned __int8 __fastcall sub_180086BE0(__int64 a1, __int64 *a2)
{
  unsigned int v4; // r15d
  __int64 v5; // rcx
  __int64 v6; // r14
  __int64 *v7; // rbx
  __int64 *v8; // rax
  __int64 v9; // r8
  int v10; // ecx
  __int64 *v11; // rax
  __int64 *v12; // rdi
  __int64 v13; // r8
  __int64 *v14; // rax
  __int64 *v15; // rdi
  __int64 v16; // r8
  __int64 *v17; // rax
  __int64 *v18; // rdi
  __int64 v19; // r8
  __int64 v20; // rdi
  _QWORD *v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  bool v25; // r12
  __int64 *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rax
  unsigned __int8 result; // al
  __int64 *v37; // rax
  char v38; // bl
  __int64 v39; // rcx
  __int64 *v40; // rax
  __int64 v41; // rcx
  char v42; // di
  char v43; // di
  __int64 *v44; // rax
  __int64 v45; // rcx
  char v46; // bl
  char v47; // bl
  __int64 *v48; // rax
  __int64 v49; // rcx
  char v50; // dl
  char v51; // bl
  __int64 v52; // r12
  void (__fastcall *v53)(__int64, __int64 *, __int64 *, __int64 *, __int64 *, __int64 *); // r15
  __int64 *v54; // r14
  __int64 *v55; // rsi
  __int64 *v56; // rdi
  __int64 *v57; // rbx
  __int64 *v58; // rax
  __int64 v59; // rax
  __int64 v60; // rcx
  char v61; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v62; // [rsp+48h] [rbp-B8h]
  __int64 v63; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v64; // [rsp+58h] [rbp-A8h]
  __int64 v65; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v66; // [rsp+68h] [rbp-98h]
  __int64 v67; // [rsp+70h] [rbp-90h] BYREF
  __int64 v68; // [rsp+78h] [rbp-88h]
  int v69; // [rsp+80h] [rbp-80h] BYREF
  __int64 v70; // [rsp+84h] [rbp-7Ch]
  int v71; // [rsp+8Ch] [rbp-74h]
  int v72; // [rsp+90h] [rbp-70h]
  int v73; // [rsp+94h] [rbp-6Ch]
  char v74; // [rsp+98h] [rbp-68h]
  __int128 v75; // [rsp+9Ch] [rbp-64h]
  __int128 v76; // [rsp+ACh] [rbp-54h]
  int v77; // [rsp+BCh] [rbp-44h]
  char v78; // [rsp+C0h] [rbp-40h]
  int v79; // [rsp+C4h] [rbp-3Ch]
  __int64 v80; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v81; // [rsp+D8h] [rbp-28h]
  __int64 v82; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v83; // [rsp+E8h] [rbp-18h]
  __int64 v84; // [rsp+F0h] [rbp-10h]
  __int64 v85; // [rsp+F8h] [rbp-8h]
  __int64 v86; // [rsp+100h] [rbp+0h]
  __int64 v87; // [rsp+108h] [rbp+8h]
  __int64 v88; // [rsp+110h] [rbp+10h] BYREF
  __int64 v89; // [rsp+118h] [rbp+18h]
  _QWORD v90[2]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v91[4]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v92; // [rsp+150h] [rbp+50h] BYREF
  __int64 v93; // [rsp+160h] [rbp+60h] BYREF
  __int64 v94[10]; // [rsp+170h] [rbp+70h] BYREF
  unsigned int v95; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 *v96; // [rsp+1D8h] [rbp+D8h]
  unsigned int v97; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 *v98; // [rsp+1E8h] [rbp+E8h]

  v96 = a2;
  v95 = 0;
  sub_18002A404(*a2 + 24);
  v4 = sub_180026650(*a2);
  v97 = v4;
  v6 = sub_180026618(v5);
  v7 = (__int64 *)(a1 + 48);
  if ( sub_180011DD0((_QWORD *)(a1 + 48)) )
  {
    v8 = sub_1800435A8(v6, &v63);
    sub_180011020((_QWORD *)(a1 + 48), v8);
    if ( v64 )
      sub_180010530(v64);
    sub_180029870(*v7, 1, 0);
    v69 = 0;
    v70 = 2LL;
    v71 &= v9;
    v72 &= v9;
    v73 &= v9;
    v74 = 0;
    v75 = 0LL;
    v76 = 0LL;
    v77 = 65793;
    v78 = 1;
    v79 = 3;
    if ( (*(_BYTE *)(a1 + 124) & 1) != 0 )
    {
      HIDWORD(v70) = *(_DWORD *)(a1 + 112);
      LODWORD(v70) = *(_DWORD *)(a1 + 116);
      LOBYTE(v77) = *(_BYTE *)(a1 + 125);
      v10 = *(_DWORD *)(a1 + 120);
      BYTE1(v77) = ((v10 - 1) & 0xFFFFFFFD) == 0;
      BYTE2(v77) = (unsigned int)(v10 - 2) <= 1;
    }
    sub_1800883E0(*v7, &v69, v9);
    if ( (*(_BYTE *)(a1 + 124) & 2) != 0 )
    {
      LODWORD(v70) = 1;
      v11 = sub_1800435A8(v6, &v63);
      v12 = (__int64 *)(a1 + 64);
      sub_180011020((_QWORD *)(a1 + 64), v11);
      if ( v64 )
        sub_180010530(v64);
      sub_180029870(*v12, 1, 0);
      sub_1800883E0(*v12, &v69, v13);
    }
    if ( (*(_BYTE *)(a1 + 124) & 4) != 0 )
    {
      LODWORD(v70) = 1;
      v78 = 0;
      v14 = sub_1800435A8(v6, &v63);
      v15 = (__int64 *)(a1 + 80);
      sub_180011020((_QWORD *)(a1 + 80), v14);
      if ( v64 )
        sub_180010530(v64);
      sub_180029870(*v15, 1, 0);
      sub_1800883E0(*v15, &v69, v16);
    }
    if ( (*(_BYTE *)(a1 + 124) & 8) != 0 )
    {
      LODWORD(v70) = *(_DWORD *)(a1 + 116);
      v78 = 0;
      v17 = sub_1800435A8(v6, &v63);
      v18 = (__int64 *)(a1 + 96);
      sub_180011020((_QWORD *)(a1 + 96), v17);
      if ( v64 )
        sub_180010530(v64);
      sub_180029870(*v18, 1, 0);
      sub_1800883E0(*v18, &v69, v19);
    }
  }
  v20 = *v7;
  v21 = (_QWORD *)(*v7 + 128);
  v95 = v4;
  if ( sub_1800435C8((__int64)v21, (__int64)&v95) == *v21 )
    sub_180088290(v20, a2);
  v22 = *(_QWORD *)(a1 + 64);
  if ( v22 )
  {
    v95 = v4;
    if ( sub_1800435C8(v22 + 128, (__int64)&v95) == *(_QWORD *)(v22 + 128) )
      sub_180088290(v22, a2);
  }
  v23 = *(_QWORD *)(a1 + 80);
  if ( v23 )
  {
    v95 = v4;
    if ( sub_1800435C8(v23 + 128, (__int64)&v95) == *(_QWORD *)(v23 + 128) )
      sub_180088290(v23, a2);
  }
  v24 = *(_QWORD *)(a1 + 96);
  if ( v24 )
  {
    v95 = v4;
    if ( sub_1800435C8(v24 + 128, (__int64)&v95) == *(_QWORD *)(v24 + 128) )
      sub_180088290(v24, a2);
  }
  sub_180087454(a1, &v80, 1LL);
  v25 = sub_180011DE0(&v80);
  if ( v25 && !*(_QWORD *)(a1 + 176) )
  {
    v26 = sub_1800861C4(v6, &v63);
    v27 = *v26;
    v28 = v26[1];
    *v26 = 0LL;
    v26[1] = 0LL;
    *(_QWORD *)(a1 + 176) = v27;
    v29 = *(_QWORD *)(a1 + 184);
    *(_QWORD *)(a1 + 184) = v28;
    if ( v29 )
      sub_180010530(v29);
    if ( v64 )
      sub_180010530(v64);
    sub_180060D9C(*(_QWORD *)(a1 + 16), &v65);
    v30 = (_QWORD *)sub_18008B088(v80, v91);
    v31 = sub_1800503B4(v65, v30);
    v32 = *(_QWORD *)(a1 + 176);
    v33 = sub_180086808((__int64)&v69, a1 + 128);
    sub_18008C230(v32, v33, v31);
    if ( v66 )
      sub_180010530(v66);
  }
  v34 = *(_QWORD *)(a1 + 176);
  if ( v34 && !(unsigned __int8)sub_18008C164(*(_QWORD *)(a1 + 176), v4) && v25 )
    sub_18008BEC0(v34, a2);
  v98 = (__int64 *)(a1 + 480);
  v95 = v4;
  v35 = sub_1800435C8(a1 + 480, (__int64)&v95);
  if ( v35 == *(_QWORD *)(a1 + 480) || (result = sub_180011DD0((_QWORD *)(v35 + 40))) != 0 )
  {
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)*a2 + 192LL))(*a2, &v95);
    if ( (v95 & 0x20) != 0 )
    {
      v37 = (__int64 *)sub_180087454(a1, &v67, 5LL);
      v38 = 1;
      v39 = *v37;
    }
    else
    {
      v62 = 0LL;
      v37 = (__int64 *)&v61;
      v38 = 2;
      v39 = 0LL;
    }
    v63 = v39;
    v87 = v37[1];
    v64 = v87;
    *v37 = 0LL;
    v37[1] = 0LL;
    if ( (v38 & 2) != 0 )
    {
      v38 &= ~2u;
      if ( v62 )
        sub_180010530(v62);
    }
    if ( (v38 & 1) != 0 )
    {
      v38 &= ~1u;
      if ( v68 )
        sub_180010530(v68);
    }
    if ( (v95 & 0x10) != 0 )
    {
      v40 = (__int64 *)sub_180087454(a1, &v82, 4LL);
      v41 = *v40;
      v42 = 4;
    }
    else
    {
      v62 = 0LL;
      v40 = (__int64 *)&v61;
      v41 = 0LL;
      v42 = 8;
    }
    v43 = v38 | v42;
    v90[0] = v41;
    v86 = v40[1];
    v90[1] = v86;
    *v40 = 0LL;
    v40[1] = 0LL;
    if ( (v43 & 8) != 0 )
    {
      v43 &= ~8u;
      if ( v62 )
        sub_180010530(v62);
    }
    if ( (v43 & 4) != 0 )
    {
      v43 &= ~4u;
      if ( v83 )
        sub_180010530(v83);
    }
    if ( (v95 & 8) != 0 )
    {
      v44 = (__int64 *)sub_180087454(a1, &v67, 3LL);
      v45 = *v44;
      v46 = 16;
    }
    else
    {
      v62 = 0LL;
      v44 = (__int64 *)&v61;
      v45 = 0LL;
      v46 = 32;
    }
    v47 = v43 | v46;
    v82 = v45;
    v85 = v44[1];
    v83 = v85;
    *v44 = 0LL;
    v44[1] = 0LL;
    if ( (v47 & 0x20) != 0 )
    {
      v47 &= ~0x20u;
      if ( v62 )
        sub_180010530(v62);
    }
    if ( (v47 & 0x10) != 0 )
    {
      v47 &= ~0x10u;
      if ( v68 )
        sub_180010530(v68);
    }
    if ( (v95 & 4) != 0 )
    {
      v48 = (__int64 *)sub_180087454(a1, &v88, 2LL);
      v49 = *v48;
      v50 = 64;
    }
    else
    {
      v62 = 0LL;
      v48 = (__int64 *)&v61;
      v49 = 0LL;
      v50 = 0x80;
    }
    v51 = v50 | v47;
    v67 = v49;
    v84 = v48[1];
    v68 = v84;
    *v48 = 0LL;
    v48[1] = 0LL;
    if ( v51 < 0 )
    {
      v51 &= ~0x80u;
      if ( v62 )
        sub_180010530(v62);
    }
    if ( (v51 & 0x40) != 0 && v89 )
      sub_180010530(v89);
    sub_180085F84(*a2, &v65);
    v52 = v65;
    v53 = *(void (__fastcall **)(__int64, __int64 *, __int64 *, __int64 *, __int64 *, __int64 *))(*(_QWORD *)v65 + 40LL);
    v54 = sub_180086474(&v88, v90);
    v55 = sub_18008640C(&v92, &v82);
    v56 = sub_1800864DC(&v93, &v67);
    v57 = sub_180086544(v94, &v63);
    v58 = sub_1800865AC(v91, &v80);
    v53(v52, v58, v57, v56, v55, v54);
    v59 = sub_180054270(v98, (__int64)v91, &v97);
    result = (unsigned __int8)sub_1800124F8((__int64 *)(*(_QWORD *)v59 + 40LL), &v65);
    if ( v66 )
      result = sub_180010530(v66);
    if ( v84 )
      result = sub_180010530(v84);
    if ( v85 )
      result = sub_180010530(v85);
    if ( v86 )
      result = sub_180010530(v86);
    if ( v87 )
      result = sub_180010530(v87);
  }
  if ( v81 )
    result = sub_180010530(v81);
  v60 = a2[1];
  if ( v60 )
    return sub_180010530(v60);
  return result;
}
