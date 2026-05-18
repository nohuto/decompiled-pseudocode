/*
 * XREFs of sub_1800D1BA0 @ 0x1800D1BA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800435C8 @ 0x1800435C8 (sub_1800435C8.c)
 *     sub_18008AFA0 @ 0x18008AFA0 (sub_18008AFA0.c)
 *     sub_1800CF62C @ 0x1800CF62C (sub_1800CF62C.c)
 *     sub_1800CF694 @ 0x1800CF694 (sub_1800CF694.c)
 *     sub_1800CF6FC @ 0x1800CF6FC (sub_1800CF6FC.c)
 *     sub_1800CF764 @ 0x1800CF764 (sub_1800CF764.c)
 *     sub_1800CF9C4 @ 0x1800CF9C4 (sub_1800CF9C4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall sub_1800D1BA0(__int64 a1, __int64 *a2)
{
  int v3; // r15d
  __int64 v4; // rbx
  __int64 v5; // rax
  __int128 *v6; // rax
  __int16 v7; // di
  _QWORD *v8; // rsi
  _QWORD *v9; // rcx
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int16 v12; // bx
  __int16 v13; // bx
  _QWORD *v14; // rcx
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int16 v17; // di
  __int16 v18; // di
  _QWORD *v19; // rcx
  __int64 *v20; // rax
  __int64 v21; // rcx
  __int16 v22; // bx
  __int16 v23; // bx
  _QWORD *v24; // rcx
  __int64 *v25; // rax
  __int64 v26; // rcx
  __int16 v27; // di
  __int16 v28; // di
  __int64 v29; // r12
  _QWORD *v30; // rcx
  __int64 *v31; // rax
  __int64 v32; // rcx
  __int16 v33; // bx
  __int16 v34; // bx
  __int64 v35; // rdi
  __int64 *v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rcx
  __int64 *v39; // rax
  __int128 v40; // kr00_16
  __int64 *v41; // rax
  __int64 v42; // r14
  __int64 v43; // rcx
  __int64 *v44; // rax
  __int64 v45; // r15
  __int64 v46; // rcx
  __int64 *v47; // rax
  __int64 v48; // r13
  __int64 v49; // rsi
  __int64 v50; // r12
  char v51; // al
  __int64 *v52; // rdi
  bool v53; // zf
  __int64 v54; // rax
  void (__fastcall *v55)(__int64 *, __int64, _QWORD, _QWORD); // rsi
  __int64 v56; // rbx
  __int64 *v57; // rdi
  __int64 v58; // rax
  void (__fastcall *v59)(__int64 *, __int64, _QWORD, _QWORD); // rsi
  __int64 v60; // rbx
  __int64 v61; // r14
  __int64 *v62; // rdi
  __int64 v63; // rax
  void (__fastcall *v64)(__int64 *, __int64, _QWORD, _QWORD); // rsi
  __int64 v65; // rbx
  __int64 *v66; // rdi
  __int64 v67; // rax
  void (__fastcall *v68)(__int64 *, __int64, _QWORD, _QWORD); // rsi
  __int64 v69; // rbx
  __int64 *v70; // rdi
  __int64 v71; // rax
  void (__fastcall *v72)(__int64 *, __int64, _QWORD, _QWORD); // rsi
  __int64 v73; // rbx
  __int64 result; // rax
  __int64 v75; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v76; // [rsp+38h] [rbp-C8h]
  __int64 v77; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v78; // [rsp+48h] [rbp-B8h]
  __int128 v79; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v80; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v81; // [rsp+70h] [rbp-90h] BYREF
  __int64 v82; // [rsp+78h] [rbp-88h]
  __int64 v83[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v84[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v85; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v86; // [rsp+A8h] [rbp-58h]
  __int64 v87; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v88; // [rsp+B8h] [rbp-48h]
  __int128 v89; // [rsp+C0h] [rbp-40h]
  __int128 v90; // [rsp+D0h] [rbp-30h]
  __int128 v91; // [rsp+E0h] [rbp-20h]
  __int128 v92; // [rsp+F0h] [rbp-10h]
  __int64 v93; // [rsp+100h] [rbp+0h] BYREF
  __int64 v94; // [rsp+108h] [rbp+8h]
  __int64 v95; // [rsp+110h] [rbp+10h]
  _QWORD v96[4]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v97; // [rsp+138h] [rbp+38h] BYREF
  __int64 v98; // [rsp+140h] [rbp+40h]
  __int64 v99; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v100; // [rsp+1A8h] [rbp+A8h] BYREF
  __int128 v101; // [rsp+1B0h] [rbp+B0h]

  v99 = a1;
  LODWORD(v100) = 0;
  v3 = *(_DWORD *)(a1 + 88);
  v4 = *a2;
  if ( *a2 )
  {
    LODWORD(v100) = *(_DWORD *)(a1 + 88);
    v5 = sub_1800435C8(v4 + 480, (__int64)&v100);
    if ( v5 == *(_QWORD *)(v4 + 480) )
      v80 = 0LL;
    else
      sub_18001246C(&v80, (_QWORD *)(v5 + 40));
    v6 = &v80;
    v7 = 1;
    v8 = (_QWORD *)v80;
  }
  else
  {
    *((_QWORD *)&v79 + 1) = 0LL;
    v6 = &v79;
    v7 = 2;
    v8 = 0LL;
  }
  v96[2] = v8;
  v95 = *((_QWORD *)v6 + 1);
  v96[3] = v95;
  *(_QWORD *)v6 = 0LL;
  *((_QWORD *)v6 + 1) = 0LL;
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    if ( *((_QWORD *)&v79 + 1) )
      sub_180010530(*((__int64 *)&v79 + 1));
  }
  if ( (v7 & 1) != 0 )
  {
    v7 &= ~1u;
    if ( *((_QWORD *)&v80 + 1) )
      sub_180010530(*((__int64 *)&v80 + 1));
  }
  v89 = 0LL;
  v90 = 0LL;
  v91 = 0LL;
  v92 = 0LL;
  v79 = 0LL;
  if ( sub_180011DE0(a2) )
  {
    v9 = (_QWORD *)v8[12];
    if ( v9 )
    {
      v10 = sub_18008AFA0(v9, &v81, v3);
      v11 = *v10;
      v12 = 4;
    }
    else
    {
      v88 = 0LL;
      v10 = &v87;
      v11 = 0LL;
      v12 = 8;
    }
    v13 = v7 | v12;
    v84[0] = v11;
    *(_QWORD *)&v80 = v10[1];
    v84[1] = v80;
    *v10 = 0LL;
    v10[1] = 0LL;
    if ( (v13 & 8) != 0 )
    {
      v13 &= ~8u;
      if ( v88 )
        sub_180010530(v88);
    }
    if ( (v13 & 4) != 0 )
    {
      v13 &= ~4u;
      if ( v82 )
        sub_180010530(v82);
    }
    v14 = (_QWORD *)v8[14];
    if ( v14 )
    {
      v15 = sub_18008AFA0(v14, &v93, v3);
      v16 = *v15;
      v17 = 16;
    }
    else
    {
      v86 = 0LL;
      v15 = &v85;
      v16 = 0LL;
      v17 = 32;
    }
    v18 = v13 | v17;
    v83[0] = v16;
    v87 = v15[1];
    v83[1] = v87;
    *v15 = 0LL;
    v15[1] = 0LL;
    if ( (v18 & 0x20) != 0 )
    {
      v18 &= ~0x20u;
      if ( v86 )
        sub_180010530(v86);
    }
    if ( (v18 & 0x10) != 0 )
    {
      v18 &= ~0x10u;
      if ( v94 )
        sub_180010530(v94);
    }
    v19 = (_QWORD *)v8[16];
    if ( v19 )
    {
      v20 = sub_18008AFA0(v19, &v81, v3);
      v21 = *v20;
      v22 = 64;
    }
    else
    {
      v76 = 0LL;
      v20 = &v75;
      v21 = 0LL;
      v22 = 128;
    }
    v23 = v18 | v22;
    v96[0] = v21;
    v85 = v20[1];
    v96[1] = v85;
    *v20 = 0LL;
    v20[1] = 0LL;
    if ( (v23 & 0x80u) != 0 )
    {
      v23 &= ~0x80u;
      if ( v76 )
        sub_180010530(v76);
    }
    if ( (v23 & 0x40) != 0 )
    {
      v23 &= ~0x40u;
      if ( v82 )
        sub_180010530(v82);
    }
    v24 = (_QWORD *)v8[18];
    if ( v24 )
    {
      v25 = sub_18008AFA0(v24, &v97, v3);
      v26 = *v25;
      v27 = 256;
    }
    else
    {
      v76 = 0LL;
      v25 = &v75;
      v26 = 0LL;
      v27 = 512;
    }
    v28 = v23 | v27;
    v93 = v26;
    v29 = v25[1];
    v94 = v29;
    *v25 = 0LL;
    v25[1] = 0LL;
    if ( (v28 & 0x200) != 0 )
    {
      v28 &= ~0x200u;
      if ( v76 )
        sub_180010530(v76);
    }
    if ( (v28 & 0x100) != 0 )
    {
      v28 &= ~0x100u;
      if ( v98 )
        sub_180010530(v98);
    }
    v30 = (_QWORD *)v8[20];
    if ( v30 )
    {
      v31 = sub_18008AFA0(v30, &v77, v3);
      v32 = *v31;
      v33 = 1024;
    }
    else
    {
      v76 = 0LL;
      v31 = &v75;
      v32 = 0LL;
      v33 = 2048;
    }
    v34 = v28 | v33;
    v81 = v32;
    v35 = v31[1];
    v82 = v35;
    *v31 = 0LL;
    v31[1] = 0LL;
    if ( (v34 & 0x800) != 0 )
    {
      v34 &= ~0x800u;
      if ( v76 )
        sub_180010530(v76);
    }
    if ( (v34 & 0x400) != 0 && v78 )
      sub_180010530(v78);
    v36 = sub_1800CF9C4(&v77, v84);
    v37 = *v36;
    v75 = v36[1];
    v38 = v75;
    *v36 = 0LL;
    v36[1] = 0LL;
    *(_QWORD *)&v89 = v37;
    *((_QWORD *)&v89 + 1) = v38;
    if ( v78 )
      sub_180010530(v78);
    v39 = sub_1800CF764(&v77, v83);
    v101 = *(_OWORD *)v39;
    v40 = v101;
    *v39 = 0LL;
    v39[1] = 0LL;
    v79 = v40;
    if ( v78 )
      sub_180010530(v78);
    v41 = sub_1800CF6FC(&v77, v96);
    v42 = *v41;
    v84[0] = v41[1];
    v43 = v84[0];
    *v41 = 0LL;
    v41[1] = 0LL;
    *(_QWORD *)&v90 = v42;
    *((_QWORD *)&v90 + 1) = v43;
    if ( v78 )
      sub_180010530(v78);
    v44 = sub_1800CF62C(&v77, &v93);
    v45 = *v44;
    v83[0] = v44[1];
    v46 = v83[0];
    *v44 = 0LL;
    v44[1] = 0LL;
    *(_QWORD *)&v91 = v45;
    *((_QWORD *)&v91 + 1) = v46;
    if ( v78 )
      sub_180010530(v78);
    v47 = sub_1800CF694(&v77, &v81);
    v48 = *v47;
    v100 = v47[1];
    v49 = v100;
    *v47 = 0LL;
    v47[1] = 0LL;
    *(_QWORD *)&v92 = v48;
    *((_QWORD *)&v92 + 1) = v49;
    if ( v78 )
      sub_180010530(v78);
    if ( v35 )
      sub_180010530(v35);
    if ( v29 )
      sub_180010530(v29);
    if ( v85 )
      sub_180010530(v85);
    if ( v87 )
      sub_180010530(v87);
    if ( (_QWORD)v80 )
      sub_180010530(v80);
    v50 = v100;
    if ( v37 )
    {
      v51 = 1;
      goto LABEL_83;
    }
  }
  else
  {
    v75 = *((_QWORD *)&v89 + 1);
    v37 = v89;
    v84[0] = *((_QWORD *)&v90 + 1);
    v42 = v90;
    v83[0] = *((_QWORD *)&v91 + 1);
    v45 = v91;
    v50 = *((_QWORD *)&v92 + 1);
    v48 = v92;
    v101 = v79;
  }
  v51 = 0;
LABEL_83:
  v52 = *(__int64 **)(v99 + 144);
  v53 = v51 == 0;
  v54 = *v52;
  if ( v53 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v54 + 88))(*(_QWORD *)(v99 + 144), 0LL, 0LL, 0LL);
  }
  else
  {
    v55 = *(void (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))(v54 + 88);
    v56 = *(_QWORD *)(v37 + 104);
    v100 = v56;
    if ( v56 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 8LL))(v56);
    v55(v52, v56, 0LL, 0LL);
    sub_18000E72C(&v100);
  }
  v57 = *(__int64 **)(v99 + 144);
  v58 = *v57;
  if ( v42 )
  {
    v59 = *(void (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))(v58 + 480);
    v60 = *(_QWORD *)(v42 + 104);
    v100 = v60;
    if ( v60 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 8LL))(v60);
    v59(v57, v60, 0LL, 0LL);
    sub_18000E72C(&v100);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v58 + 480))(*(_QWORD *)(v99 + 144), 0LL, 0LL, 0LL);
  }
  v61 = v99;
  v62 = *(__int64 **)(v99 + 144);
  v63 = *v62;
  if ( v45 )
  {
    v64 = *(void (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))(v63 + 512);
    v65 = *(_QWORD *)(v45 + 104);
    v99 = v65;
    if ( v65 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 8LL))(v65);
    v64(v62, v65, 0LL, 0LL);
    sub_18000E72C(&v99);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v63 + 512))(*(_QWORD *)(v99 + 144), 0LL, 0LL, 0LL);
  }
  v66 = *(__int64 **)(v61 + 144);
  v67 = *v66;
  if ( v48 )
  {
    v68 = *(void (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))(v67 + 184);
    v69 = *(_QWORD *)(v48 + 104);
    v99 = v69;
    if ( v69 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 8LL))(v69);
    v68(v66, v69, 0LL, 0LL);
    sub_18000E72C(&v99);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v67 + 184))(*(_QWORD *)(v61 + 144), 0LL, 0LL, 0LL);
  }
  v70 = *(__int64 **)(v61 + 144);
  v71 = *v70;
  if ( (_QWORD)v101 )
  {
    v72 = *(void (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))(v71 + 72);
    v73 = *(_QWORD *)(v101 + 104);
    v99 = v73;
    if ( v73 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v73 + 8LL))(v73);
    v72(v70, v73, 0LL, 0LL);
    sub_18000E72C(&v99);
  }
  else
  {
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(v71 + 72))(v70, 0LL, 0LL, 0LL);
  }
  if ( *((_QWORD *)&v101 + 1) )
    sub_180010530(*((__int64 *)&v101 + 1));
  if ( v50 )
    sub_180010530(v50);
  if ( v83[0] )
    sub_180010530(v83[0]);
  if ( v84[0] )
    sub_180010530(v84[0]);
  result = v75;
  if ( v75 )
    result = sub_180010530(v75);
  if ( v95 )
    return sub_180010530(v95);
  return result;
}
