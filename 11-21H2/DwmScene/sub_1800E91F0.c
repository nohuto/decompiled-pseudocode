/*
 * XREFs of sub_1800E91F0 @ 0x1800E91F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_180099C10 @ 0x180099C10 (sub_180099C10.c)
 *     sub_1800E686C @ 0x1800E686C (sub_1800E686C.c)
 *     sub_1800E68D4 @ 0x1800E68D4 (sub_1800E68D4.c)
 *     sub_1800E693C @ 0x1800E693C (sub_1800E693C.c)
 *     sub_1800E69A4 @ 0x1800E69A4 (sub_1800E69A4.c)
 *     sub_1800E6C14 @ 0x1800E6C14 (sub_1800E6C14.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall sub_1800E91F0(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // r14d
  char v5; // r15
  __int64 *v6; // rcx
  __int64 *v7; // rax
  __int64 *v8; // rsi
  __int64 v9; // rax
  _QWORD *v10; // rsi
  __int128 *v11; // rcx
  __int16 v12; // bx
  _QWORD *v13; // rcx
  __int64 *v14; // rcx
  __int16 v15; // bx
  __int64 v16; // rax
  _QWORD *v17; // rcx
  __int64 *v18; // rcx
  __int16 v19; // bx
  __int64 v20; // rax
  _QWORD *v21; // rcx
  __int64 *v22; // rcx
  __int16 v23; // bx
  __int64 v24; // rax
  _QWORD *v25; // rcx
  __int64 *v26; // rcx
  __int16 v27; // bx
  __int64 v28; // rax
  _QWORD *v29; // rcx
  __int64 *v30; // rcx
  __int16 v31; // bx
  __int64 v32; // rax
  __int64 *v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rcx
  __int64 *v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rcx
  __int64 *v39; // rax
  __int64 v40; // r14
  __int64 v41; // rcx
  __int64 *v42; // rax
  __int64 v43; // r13
  __int64 v44; // rcx
  __int64 *v45; // rax
  __int64 v46; // r12
  __int64 v47; // rcx
  __int64 v48; // rbx
  __int64 *v49; // rsi
  __int64 v50; // rax
  void (__fastcall *v51)(__int64 *, __int64, _QWORD, _QWORD); // r15
  __int64 v52; // rbx
  __int64 v53; // rsi
  void (__fastcall *v54)(__int64, __int64, _QWORD, _QWORD); // r15
  __int64 v55; // rbx
  __int64 v56; // rsi
  void (__fastcall *v57)(__int64, __int64, _QWORD, _QWORD); // r14
  __int64 v58; // rbx
  __int64 v59; // rsi
  void (__fastcall *v60)(__int64, __int64, _QWORD, _QWORD); // r14
  __int64 v61; // rbx
  __int64 v62; // rdi
  void (__fastcall *v63)(__int64, __int64, _QWORD, _QWORD); // rsi
  __int64 v64; // rbx
  __int128 v66; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v67; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v68; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v69; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v70; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v71[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v72[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v73[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v74[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v75[2]; // [rsp+C0h] [rbp-40h] BYREF
  char v76[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v77; // [rsp+D8h] [rbp-28h]
  char v78[8]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v79; // [rsp+E8h] [rbp-18h]
  char v80[8]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v81; // [rsp+F8h] [rbp-8h]
  char v82[8]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v83; // [rsp+108h] [rbp+8h]
  char v84[8]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v85; // [rsp+118h] [rbp+18h]
  _QWORD v86[2]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v87[2]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v88[2]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v89[2]; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v90[2]; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v91[2]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v92[16]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v93[16]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v94[16]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v95[16]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v96[16]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v97[2]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v98[2]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v99[2]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v100[2]; // [rsp+200h] [rbp+100h] BYREF
  __int64 v101[8]; // [rsp+210h] [rbp+110h] BYREF
  __int64 v102; // [rsp+268h] [rbp+168h]

  v4 = *(_DWORD *)(a1 + 88);
  v5 = 1;
  if ( *a2 )
  {
    v6 = *(__int64 **)(*a2 + 480LL);
    v7 = (__int64 *)v6[1];
    v8 = v6;
    while ( !*((_BYTE *)v7 + 25) )
    {
      if ( *((_DWORD *)v7 + 8) >= v4 )
      {
        v8 = v7;
        v7 = (__int64 *)*v7;
      }
      else
      {
        v7 = (__int64 *)v7[2];
      }
    }
    if ( *((_BYTE *)v8 + 25) || v4 < *((_DWORD *)v8 + 8) || v8 == v6 )
    {
      *((_QWORD *)&v66 + 1) = 0LL;
      v10 = 0LL;
    }
    else
    {
      v9 = v8[6];
      if ( v9 )
      {
        _InterlockedAdd((volatile signed __int32 *)(v9 + 8), 1u);
        v9 = v8[6];
      }
      *((_QWORD *)&v66 + 1) = v9;
      v10 = (_QWORD *)v8[5];
    }
    v11 = &v66;
    v12 = 1;
  }
  else
  {
    *((_QWORD *)&v67 + 1) = 0LL;
    v11 = &v67;
    v12 = 2;
    v10 = 0LL;
  }
  v91[0] = v10;
  v91[1] = *((_QWORD *)v11 + 1);
  *(_QWORD *)v11 = 0LL;
  *((_QWORD *)v11 + 1) = 0LL;
  if ( (v12 & 2) != 0 )
  {
    v12 &= ~2u;
    sub_180010910((__int64)&v67);
  }
  if ( (v12 & 1) != 0 )
  {
    v12 &= ~1u;
    sub_180010910((__int64)&v66);
  }
  v66 = 0LL;
  v67 = 0LL;
  v70 = 0LL;
  v69 = 0LL;
  v68 = 0LL;
  if ( !sub_1800122C0(a2) )
  {
    v48 = v66;
    v40 = v67;
    v43 = v70;
    v46 = v69;
    v102 = v68;
LABEL_59:
    v5 = 0;
    goto LABEL_60;
  }
  v13 = (_QWORD *)v10[12];
  if ( v13 )
  {
    v14 = (__int64 *)sub_180099C10(v13, (__int64)v92, v4);
    v15 = v12 | 4;
    v16 = *v14;
  }
  else
  {
    v77 = 0LL;
    v14 = (__int64 *)v76;
    v15 = v12 | 8;
    v16 = 0LL;
  }
  v75[0] = v16;
  v75[1] = v14[1];
  *v14 = 0LL;
  v14[1] = 0LL;
  if ( (v15 & 8) != 0 )
  {
    v15 &= ~8u;
    sub_180010910((__int64)v76);
  }
  if ( (v15 & 4) != 0 )
  {
    v15 &= ~4u;
    sub_180010910((__int64)v92);
  }
  v17 = (_QWORD *)v10[14];
  if ( v17 )
  {
    v18 = (__int64 *)sub_180099C10(v17, (__int64)v93, v4);
    v19 = v15 | 0x10;
    v20 = *v18;
  }
  else
  {
    v79 = 0LL;
    v18 = (__int64 *)v78;
    v19 = v15 | 0x20;
    v20 = 0LL;
  }
  v74[0] = v20;
  v74[1] = v18[1];
  *v18 = 0LL;
  v18[1] = 0LL;
  if ( (v19 & 0x20) != 0 )
  {
    v19 &= ~0x20u;
    sub_180010910((__int64)v78);
  }
  if ( (v19 & 0x10) != 0 )
  {
    v19 &= ~0x10u;
    sub_180010910((__int64)v93);
  }
  v21 = (_QWORD *)v10[16];
  if ( v21 )
  {
    v22 = (__int64 *)sub_180099C10(v21, (__int64)v94, v4);
    v23 = v19 | 0x40;
    v24 = *v22;
  }
  else
  {
    v81 = 0LL;
    v22 = (__int64 *)v80;
    v23 = v19 | 0x80;
    v24 = 0LL;
  }
  v73[0] = v24;
  v73[1] = v22[1];
  *v22 = 0LL;
  v22[1] = 0LL;
  if ( (v23 & 0x80u) != 0 )
  {
    v23 &= ~0x80u;
    sub_180010910((__int64)v80);
  }
  if ( (v23 & 0x40) != 0 )
  {
    v23 &= ~0x40u;
    sub_180010910((__int64)v94);
  }
  v25 = (_QWORD *)v10[18];
  if ( v25 )
  {
    v26 = (__int64 *)sub_180099C10(v25, (__int64)v95, v4);
    v27 = v23 | 0x100;
    v28 = *v26;
  }
  else
  {
    v83 = 0LL;
    v26 = (__int64 *)v82;
    v27 = v23 | 0x200;
    v28 = 0LL;
  }
  v72[0] = v28;
  v72[1] = v26[1];
  *v26 = 0LL;
  v26[1] = 0LL;
  if ( (v27 & 0x200) != 0 )
  {
    v27 &= ~0x200u;
    sub_180010910((__int64)v82);
  }
  if ( (v27 & 0x100) != 0 )
  {
    v27 &= ~0x100u;
    sub_180010910((__int64)v95);
  }
  v29 = (_QWORD *)v10[20];
  if ( v29 )
  {
    v30 = (__int64 *)sub_180099C10(v29, (__int64)v96, v4);
    v31 = v27 | 0x400;
    v32 = *v30;
  }
  else
  {
    v85 = 0LL;
    v30 = (__int64 *)v84;
    v31 = v27 | 0x800;
    v32 = 0LL;
  }
  v71[0] = v32;
  v71[1] = v30[1];
  *v30 = 0LL;
  v30[1] = 0LL;
  if ( (v31 & 0x800) != 0 )
  {
    v31 &= ~0x800u;
    sub_180010910((__int64)v84);
  }
  if ( (v31 & 0x400) != 0 )
    sub_180010910((__int64)v96);
  v33 = sub_1800E6C14(v97, v75);
  v34 = *v33;
  v35 = v33[1];
  *v33 = 0LL;
  v33[1] = 0LL;
  v86[0] = 0LL;
  *(_QWORD *)&v66 = v34;
  v86[1] = 0LL;
  *((_QWORD *)&v66 + 1) = v35;
  sub_180010910((__int64)v86);
  sub_180010910((__int64)v97);
  v36 = sub_1800E69A4(v98, v74);
  v102 = *v36;
  v37 = *v36;
  v38 = v36[1];
  *v36 = 0LL;
  v36[1] = 0LL;
  v87[0] = 0LL;
  *(_QWORD *)&v68 = v37;
  v87[1] = 0LL;
  *((_QWORD *)&v68 + 1) = v38;
  sub_180010910((__int64)v87);
  sub_180010910((__int64)v98);
  v39 = sub_1800E693C(v99, v73);
  v40 = *v39;
  v41 = v39[1];
  *v39 = 0LL;
  v39[1] = 0LL;
  v88[0] = 0LL;
  *(_QWORD *)&v67 = v40;
  v88[1] = 0LL;
  *((_QWORD *)&v67 + 1) = v41;
  sub_180010910((__int64)v88);
  sub_180010910((__int64)v99);
  v42 = sub_1800E686C(v100, v72);
  v43 = *v42;
  v44 = v42[1];
  *v42 = 0LL;
  v42[1] = 0LL;
  v89[0] = 0LL;
  *(_QWORD *)&v70 = v43;
  v89[1] = 0LL;
  *((_QWORD *)&v70 + 1) = v44;
  sub_180010910((__int64)v89);
  sub_180010910((__int64)v100);
  v45 = sub_1800E68D4(v101, v71);
  v46 = *v45;
  v47 = v45[1];
  *v45 = 0LL;
  v45[1] = 0LL;
  v90[0] = 0LL;
  *(_QWORD *)&v69 = v46;
  v90[1] = 0LL;
  *((_QWORD *)&v69 + 1) = v47;
  sub_180010910((__int64)v90);
  sub_180010910((__int64)v101);
  sub_180010910((__int64)v71);
  sub_180010910((__int64)v72);
  sub_180010910((__int64)v73);
  sub_180010910((__int64)v74);
  sub_180010910((__int64)v75);
  v48 = v34;
  if ( !v34 )
    goto LABEL_59;
LABEL_60:
  v49 = *(__int64 **)(a1 + 144);
  v50 = *v49;
  if ( v5 )
  {
    v51 = *(void (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))(v50 + 88);
    v52 = *(_QWORD *)(v48 + 104);
    if ( v52 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 8LL))(v52);
    v51(v49, v52, 0LL, 0LL);
    if ( v52 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v50 + 88))(*(_QWORD *)(a1 + 144), 0LL, 0LL, 0LL);
  }
  if ( v40 )
  {
    v53 = *(_QWORD *)(a1 + 144);
    v54 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v53 + 480LL);
    v55 = *(_QWORD *)(v40 + 104);
    if ( v55 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 8LL))(v55);
    v54(v53, v55, 0LL, 0LL);
    if ( v55 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 144) + 480LL))(
      *(_QWORD *)(a1 + 144),
      0LL,
      0LL,
      0LL);
  }
  if ( v43 )
  {
    v56 = *(_QWORD *)(a1 + 144);
    v57 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v56 + 512LL);
    v58 = *(_QWORD *)(v43 + 104);
    if ( v58 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 8LL))(v58);
    v57(v56, v58, 0LL, 0LL);
    if ( v58 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 144) + 512LL))(
      *(_QWORD *)(a1 + 144),
      0LL,
      0LL,
      0LL);
  }
  if ( v46 )
  {
    v59 = *(_QWORD *)(a1 + 144);
    v60 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v59 + 184LL);
    v61 = *(_QWORD *)(v46 + 104);
    if ( v61 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 8LL))(v61);
    v60(v59, v61, 0LL, 0LL);
    if ( v61 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 144) + 184LL))(
      *(_QWORD *)(a1 + 144),
      0LL,
      0LL,
      0LL);
  }
  if ( v102 )
  {
    v62 = *(_QWORD *)(a1 + 144);
    v63 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v62 + 72LL);
    v64 = *(_QWORD *)(v102 + 104);
    if ( v64 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 8LL))(v64);
    v63(v62, v64, 0LL, 0LL);
    if ( v64 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 144) + 72LL))(
      *(_QWORD *)(a1 + 144),
      0LL,
      0LL,
      0LL);
  }
  sub_180010910((__int64)&v68);
  sub_180010910((__int64)&v69);
  sub_180010910((__int64)&v70);
  sub_180010910((__int64)&v67);
  sub_180010910((__int64)&v66);
  return sub_180010910((__int64)v91);
}
