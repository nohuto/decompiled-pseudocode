/*
 * XREFs of sub_18005C290 @ 0x18005C290
 * Callers:
 *     sub_18008EA40 @ 0x18008EA40 (sub_18008EA40.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18001265C @ 0x18001265C (sub_18001265C.c)
 *     sub_180015604 @ 0x180015604 (sub_180015604.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18001C680 @ 0x18001C680 (sub_18001C680.c)
 *     sub_18001D3F8 @ 0x18001D3F8 (sub_18001D3F8.c)
 *     sub_180026580 @ 0x180026580 (sub_180026580.c)
 *     sub_180026698 @ 0x180026698 (sub_180026698.c)
 *     sub_18002A404 @ 0x18002A404 (sub_18002A404.c)
 *     sub_18002B418 @ 0x18002B418 (sub_18002B418.c)
 *     sub_180030FD4 @ 0x180030FD4 (sub_180030FD4.c)
 *     sub_180031CF0 @ 0x180031CF0 (sub_180031CF0.c)
 *     sub_180034870 @ 0x180034870 (sub_180034870.c)
 *     sub_180034880 @ 0x180034880 (sub_180034880.c)
 *     sub_1800396C8 @ 0x1800396C8 (sub_1800396C8.c)
 *     sub_180039720 @ 0x180039720 (sub_180039720.c)
 *     sub_180041D50 @ 0x180041D50 (sub_180041D50.c)
 *     sub_18004D8C4 @ 0x18004D8C4 (sub_18004D8C4.c)
 *     sub_1800502A4 @ 0x1800502A4 (sub_1800502A4.c)
 *     sub_18005033C @ 0x18005033C (sub_18005033C.c)
 *     sub_18005B98C @ 0x18005B98C (sub_18005B98C.c)
 *     sub_18005BA84 @ 0x18005BA84 (sub_18005BA84.c)
 *     sub_18005CDB0 @ 0x18005CDB0 (sub_18005CDB0.c)
 *     sub_18005D65C @ 0x18005D65C (sub_18005D65C.c)
 *     sub_180060A34 @ 0x180060A34 (sub_180060A34.c)
 *     sub_1800709B4 @ 0x1800709B4 (sub_1800709B4.c)
 *     sub_18008141C @ 0x18008141C (sub_18008141C.c)
 *     sub_1800A2214 @ 0x1800A2214 (sub_1800A2214.c)
 *     sub_1800A22CC @ 0x1800A22CC (sub_1800A22CC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=21
void __fastcall sub_18005C290(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 *v4; // rsi
  __int64 *v6; // rax
  __int64 *v7; // r12
  _QWORD *v8; // rbx
  __int64 *v9; // rax
  __int64 v10; // r8
  __int64 *v11; // rax
  __int64 v12; // r8
  __int64 *v13; // rax
  __int64 v14; // r8
  __int64 *v15; // rax
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 *v18; // rax
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rbx
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rax
  __int64 v29; // rcx
  unsigned __int64 v30; // r14
  __int64 v31; // rbx
  __int64 v32; // r15
  __int64 v33; // r12
  __int64 v34; // rsi
  __int64 v35; // r14
  __int64 v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // rax
  __int64 v39; // [rsp+40h] [rbp-C0h]
  __int128 v40; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v41; // [rsp+58h] [rbp-A8h]
  __int64 v42; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v43; // [rsp+68h] [rbp-98h]
  __int64 v44; // [rsp+70h] [rbp-90h] BYREF
  __int64 v45; // [rsp+78h] [rbp-88h]
  __int64 v46; // [rsp+80h] [rbp-80h]
  __int64 v47; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v48; // [rsp+90h] [rbp-70h]
  unsigned __int64 v49; // [rsp+98h] [rbp-68h]
  __int64 v50; // [rsp+A0h] [rbp-60h]
  __int128 v51; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v52; // [rsp+C0h] [rbp-40h]
  __int64 v53; // [rsp+C8h] [rbp-38h] BYREF
  volatile signed __int32 *v54; // [rsp+D0h] [rbp-30h]
  __int128 v55; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v56; // [rsp+F0h] [rbp-10h]
  __int64 v57; // [rsp+F8h] [rbp-8h]
  void *v58[2]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v59; // [rsp+110h] [rbp+10h] BYREF
  char v60[8]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v61; // [rsp+128h] [rbp+28h]
  __int64 v62; // [rsp+130h] [rbp+30h] BYREF
  __int64 v63; // [rsp+140h] [rbp+40h] BYREF
  __int64 v64; // [rsp+150h] [rbp+50h] BYREF
  char v65[8]; // [rsp+160h] [rbp+60h] BYREF
  volatile signed __int32 *v66; // [rsp+168h] [rbp+68h]
  __int128 v67; // [rsp+170h] [rbp+70h] BYREF
  __int64 v68; // [rsp+180h] [rbp+80h] BYREF
  __int64 v69; // [rsp+188h] [rbp+88h]
  __int64 v70[3]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v71; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v72; // [rsp+1B0h] [rbp+B0h]
  __int64 v73; // [rsp+1B8h] [rbp+B8h] BYREF
  _BYTE v74[16]; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 v75[3]; // [rsp+1D8h] [rbp+D8h] BYREF
  __int64 v76[4]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v77[4]; // [rsp+210h] [rbp+110h] BYREF
  __int64 v78; // [rsp+230h] [rbp+130h] BYREF
  __int64 v79; // [rsp+238h] [rbp+138h]
  char v80[32]; // [rsp+250h] [rbp+150h] BYREF

  v4 = a2;
  v52 = a2;
  if ( *(_BYTE *)(a1 + 72) && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 16LL))(*a2) )
  {
    sub_18002A404(*v4 + 24);
    sub_18001246C(&v44, a3);
    if ( !v44 )
    {
      v6 = sub_180026698(*v4, &v71, 0);
      sub_180011020(&v44, v6);
      if ( v72 )
        sub_180010530(v72);
    }
    sub_18005BA84(a1, &v42, v4);
    v7 = (__int64 *)sub_180026580(*v4);
    v41 = v7;
    v8 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v44 + 184LL))(v44);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v44 + 200LL))(v44, &v53);
    v9 = sub_180015604(&v73, v8);
    sub_180039720(v10, v9);
    v11 = sub_18002B418(&v62, &v53);
    sub_1800396C8(v12, v11);
    v13 = sub_180015604(&v63, v8);
    sub_180039720(v14, v13);
    v15 = sub_18002B418(&v64, &v53);
    sub_1800396C8(v16, v15);
    if ( v54 )
      sub_180010574(v54);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v4 + 104LL))(*v4, &v42);
    sub_18005D65C(a1, &v51);
    sub_18001C680(v80, (_QWORD *)(a1 + 24), " scene");
    sub_1800A2214(v74, &v42, v80);
    v17 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v44 + 200LL))(v44, v65);
    sub_180030FD4(v75, v17);
    if ( v66 )
      sub_180010574(v66);
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD *))(*(_QWORD *)a1 + 192LL))(a1, v4, a3);
    sub_180011C50(a1 + 56, &v67);
    v59 = v67;
    v18 = (__int64 *)sub_18001265C(v67, &v68);
    v46 = *v18;
    v56 = v46;
    v19 = v18[1];
    v57 = v19;
    *v18 = 0LL;
    v18[1] = 0LL;
    if ( v69 )
      sub_180010530(v69);
    v20 = sub_18008141C(a1);
    v21 = sub_180034870(v20);
    sub_18005033C(v21, (__int64 *)v58);
    v22 = *(_QWORD *)v58[0];
    v47 = *(_QWORD *)v58[0];
    while ( !*(_BYTE *)(v22 + 25) )
    {
      v23 = sub_180017648(v76, v22 + 32);
      sub_1800502A4(v21, &v40, v23);
      v24 = v40;
      v25 = (_QWORD *)sub_180060A34(v40, &v78);
      (*(void (__fastcall **)(_QWORD, __int128 *, __int64 *))(*(_QWORD *)*v25 + 32LL))(*v25, &v51, &v44);
      if ( v79 )
        sub_180010530(v79);
      if ( ((*(_DWORD *)(a1 + 316) - 2) & 0xFFFFFFFD) != 0 )
      {
        v26 = (_QWORD *)sub_180060A34(v24, v70);
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v26 + 96LL))(*v26, *v4);
        v27 = v70[1];
      }
      else
      {
        v28 = (_QWORD *)sub_180060A34(v24, v60);
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v28 + 96LL))(*v28, *v4);
        v27 = v61;
      }
      if ( v27 )
        sub_180010530(v27);
      if ( *((_QWORD *)&v40 + 1) )
        sub_180010530(*((__int64 *)&v40 + 1));
      sub_18001D3F8(&v47);
      v22 = v47;
    }
    v29 = *(int *)(a1 + 168);
    v50 = v29;
    if ( *(_DWORD *)(a1 + 176) == -1 )
    {
      v48 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a1 + 112) - *(_QWORD *)(a1 + 104)) >> 4) - 1;
      v29 = v50;
    }
    else
    {
      v48 = *(int *)(a1 + 176);
    }
    v30 = 0LL;
    v49 = 0LL;
    v31 = *(_QWORD *)(a1 + 104);
    if ( 0xAAAAAAAAAAAAAAABuLL * ((*(_QWORD *)(a1 + 112) - v31) >> 4) )
    {
      v32 = 0LL;
      do
      {
        if ( *(_BYTE *)(v32 + v31)
          && (v30 != v29 || (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)*v4 + 96LL))(*v4, 9LL)) )
        {
          sub_18005B98C(a1, v30);
          v33 = *(_QWORD *)(a1 + 416);
          if ( v33 != *(_QWORD *)(a1 + 424) )
          {
            v34 = *(_QWORD *)(a1 + 424);
            v35 = v46;
            do
            {
              *(_OWORD *)(a1 + 520) = *(_OWORD *)(a1 + 488);
              *(_OWORD *)(a1 + 504) = *(_OWORD *)(a1 + 472);
              sub_1800709B4(a1 + 504, *(_QWORD *)(v32 + v31 + 8), 0LL);
              sub_1800709B4(v36, *(_QWORD *)(v32 + v31 + 16), 1LL);
              v39 = *(_QWORD *)(v32 + v31 + 24);
              v55 = 0LL;
              if ( *((_QWORD *)&v51 + 1) )
              {
                _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v51 + 1) + 8LL));
                v35 = v56;
              }
              v55 = v51;
              v37 = sub_180012440(v77, v33);
              sub_180041D50(v35, (__int64)v37, (__int64)&v42, (__int64 *)&v55, (_QWORD *)(v32 + v31 + 32), v39);
              if ( *((_QWORD *)&v55 + 1) )
                sub_180010530(*((__int64 *)&v55 + 1));
              v33 += 32LL;
            }
            while ( v33 != v34 );
            v46 = v35;
            v4 = v52;
            v30 = v49;
          }
          if ( (*(_BYTE *)(a1 + 440) & 1) != 0 && v48 == v30 )
            sub_18005CDB0(a1, &v42);
        }
        v49 = ++v30;
        v32 += 48LL;
        v31 = *(_QWORD *)(a1 + 104);
        v29 = v50;
      }
      while ( v30 < 0xAAAAAAAAAAAAAAABuLL * ((*(_QWORD *)(a1 + 112) - v31) >> 4) );
      v19 = v57;
      v7 = v41;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1);
    sub_18004D8C4(v58, (__int64)v58);
    if ( v19 )
      sub_180010530(v19);
    if ( *((_QWORD *)&v59 + 1) )
      sub_180010530(*((__int64 *)&v59 + 1));
    sub_180031CF0((__int64)v75);
    sub_1800A22CC(v74);
    sub_180011B24((__int64)v80);
    if ( (*(_DWORD *)(a1 + 440) & 0x10000) != 0 )
    {
      sub_180010DD0(&v78, (__int64)"Symbols");
      sub_1800A2214(v60, &v42, &v78);
      v38 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v44 + 200LL))(v44, &v59);
      sub_180030FD4(v70, v38);
      if ( *((_QWORD *)&v59 + 1) )
        sub_180010574(*((volatile signed __int32 **)&v59 + 1));
      sub_180034880();
    }
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v4 + 112LL))(*v4, &v42);
    v40 = 0LL;
    sub_180039720(v42, (__int64 *)&v40);
    v40 = 0LL;
    sub_1800396C8(v42, (__int64 *)&v40);
    v40 = 0LL;
    sub_180039720(*v7, (__int64 *)&v40);
    v40 = 0LL;
    sub_1800396C8(*v7, (__int64 *)&v40);
    if ( *((_QWORD *)&v51 + 1) )
      sub_180010530(*((__int64 *)&v51 + 1));
    if ( v43 )
      sub_180010530(v43);
    if ( v45 )
      sub_180010530(v45);
  }
}
