/*
 * XREFs of sub_1800727D0 @ 0x1800727D0
 * Callers:
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180011D4C @ 0x180011D4C (sub_180011D4C.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180013D44 @ 0x180013D44 (sub_180013D44.c)
 *     sub_180013E78 @ 0x180013E78 (sub_180013E78.c)
 *     sub_180014620 @ 0x180014620 (sub_180014620.c)
 *     sub_1800161AC @ 0x1800161AC (sub_1800161AC.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_180026618 @ 0x180026618 (sub_180026618.c)
 *     sub_180029824 @ 0x180029824 (sub_180029824.c)
 *     sub_180029FE4 @ 0x180029FE4 (sub_180029FE4.c)
 *     sub_180034094 @ 0x180034094 (sub_180034094.c)
 *     sub_180034870 @ 0x180034870 (sub_180034870.c)
 *     sub_18003B5D8 @ 0x18003B5D8 (sub_18003B5D8.c)
 *     sub_18003BF94 @ 0x18003BF94 (sub_18003BF94.c)
 *     sub_18004051C @ 0x18004051C (sub_18004051C.c)
 *     sub_1800408A8 @ 0x1800408A8 (sub_1800408A8.c)
 *     sub_1800412EC @ 0x1800412EC (sub_1800412EC.c)
 *     sub_1800446D8 @ 0x1800446D8 (sub_1800446D8.c)
 *     sub_18004CA0C @ 0x18004CA0C (sub_18004CA0C.c)
 *     sub_1800502A4 @ 0x1800502A4 (sub_1800502A4.c)
 *     sub_180054950 @ 0x180054950 (sub_180054950.c)
 *     sub_180059E2C @ 0x180059E2C (sub_180059E2C.c)
 *     sub_180060148 @ 0x180060148 (sub_180060148.c)
 *     sub_180060CAC @ 0x180060CAC (sub_180060CAC.c)
 *     sub_180071014 @ 0x180071014 (sub_180071014.c)
 *     sub_18008CE00 @ 0x18008CE00 (sub_18008CE00.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800727D0(__int64 a1, __int64 a2)
{
  __int64 v4; // r12
  __int64 *v5; // rax
  __int64 *v6; // r14
  __int64 v7; // rdx
  _QWORD *v8; // rax
  __int64 v9; // rdi
  _QWORD *v10; // rbx
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 *v13; // rbx
  __int64 v14; // rax
  __int64 *v15; // rax
  __int64 *v16; // rdi
  __int64 v17; // rbx
  void **v18; // rax
  __int64 v19; // rbx
  _QWORD *v20; // rax
  __int64 *v21; // rax
  __int64 *v22; // rbx
  __int64 *v23; // rax
  __int64 *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 *v27; // rax
  __int64 v28; // rbx
  _QWORD *v29; // rax
  __int64 v30; // rbx
  __int64 *v31; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  __int64 result; // rax
  __int128 *v35; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v36; // [rsp+30h] [rbp-D0h]
  __int128 v37; // [rsp+38h] [rbp-C8h] BYREF
  __int64 *v38; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+50h] [rbp-B0h]
  _QWORD v40[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+68h] [rbp-98h] BYREF
  __int64 v42; // [rsp+70h] [rbp-90h]
  _DWORD v43[7]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v44; // [rsp+94h] [rbp-6Ch]
  int v45; // [rsp+A4h] [rbp-5Ch]
  int v46; // [rsp+A8h] [rbp-58h]
  __int64 v47; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v48; // [rsp+B8h] [rbp-48h]
  __int64 v49; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v50; // [rsp+C8h] [rbp-38h]
  __int64 v51; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v52; // [rsp+D8h] [rbp-28h]
  __int64 v53; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v54; // [rsp+E8h] [rbp-18h]
  __int64 v55; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v56; // [rsp+F8h] [rbp-8h]
  __int64 v57; // [rsp+100h] [rbp+0h] BYREF
  __int64 v58; // [rsp+108h] [rbp+8h]
  _BYTE v59[8]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v60; // [rsp+118h] [rbp+18h]
  __int64 v61; // [rsp+120h] [rbp+20h] BYREF
  __int64 v62; // [rsp+128h] [rbp+28h]
  __int64 v63; // [rsp+130h] [rbp+30h] BYREF
  __int64 v64; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v65[4]; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v66[4]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v67[4]; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v68[4]; // [rsp+1B0h] [rbp+B0h] BYREF
  _QWORD v69[4]; // [rsp+1D0h] [rbp+D0h] BYREF

  *(_QWORD *)(a1 + 32) = a2;
  v4 = sub_180026618(a2);
  v5 = (__int64 *)sub_1800408A8(&v38, v4);
  v6 = (__int64 *)(a1 + 288);
  sub_180011020((_QWORD *)(a1 + 288), v5);
  if ( v39 )
    sub_180010530(v39);
  v35 = &v37;
  v37 = 0LL;
  v7 = *(_QWORD *)(a1 + 296);
  if ( v7 )
  {
    *(_QWORD *)&v37 = (*v6 + 16) & -(__int64)(*v6 != 0);
    *((_QWORD *)&v37 + 1) = v7;
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 12));
  }
  v8 = (_QWORD *)sub_180011D4C(*(_QWORD *)(a1 + 32) + 8LL, &v47);
  v40[0] = (*v8 + 24LL) & -(__int64)(*v8 != 0LL);
  v40[1] = v8[1];
  *v8 = 0LL;
  v8[1] = 0LL;
  sub_180029FE4((__int64)v40, (__int64)&v37);
  if ( v48 )
    sub_180010530(v48);
  v9 = *v6;
  v10 = sub_180012440(v65, (__int64)&unk_1801D4008);
  sub_180010DD0(v69, (__int64)"ImageProcessingCamera");
  v11 = sub_18003BF94(v69);
  sub_18004051C(v9, (__int64)&v38, v11, (__int64)v10);
  sub_180011B24((__int64)v69);
  v12 = sub_180071014((__int64)v38, &v49);
  v13 = (__int64 *)(a1 + 272);
  sub_180011020((_QWORD *)(a1 + 272), v12);
  if ( v50 )
    sub_180010530(v50);
  sub_180059E2C(*v13, (__int64)&unk_1801D3FC8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)*v13 + 16LL))(*v13);
  v14 = sub_180026618(a2);
  v15 = sub_1800161AC(v14, &v51);
  v16 = (__int64 *)(a1 + 304);
  sub_180011020((_QWORD *)(a1 + 304), v15);
  if ( v52 )
    sub_180010530(v52);
  v17 = *v16;
  v18 = (void **)sub_180010DD0(v66, (__int64)"Image Processing Manager Sampler");
  sub_180029824(v17, v18);
  v43[1] = 0;
  v43[2] = 0;
  v43[3] = 0;
  v43[4] = 0;
  v43[5] = 1;
  v43[6] = 7;
  v45 = 0;
  v46 = 2139095039;
  v43[0] = 2;
  v44 = 0LL;
  sub_180054950(*v16, v43, 0LL);
  v19 = sub_180034870(v4);
  v20 = sub_180017648(v67, (__int64)&unk_1801D7EC8);
  v21 = sub_1800502A4(v19, &v53, v20);
  v22 = (__int64 *)(a1 + 432);
  sub_180011020((_QWORD *)(a1 + 432), v21);
  if ( v54 )
    sub_180010530(v54);
  v23 = (__int64 *)sub_180060CAC(*v22, &v55);
  sub_180011020((_QWORD *)(a1 + 416), v23);
  if ( v56 )
    sub_180010530(v56);
  v24 = sub_180060148(*v22, &v57);
  sub_180011020((_QWORD *)(a1 + 400), v24);
  if ( v58 )
    sub_180010530(v58);
  v25 = sub_180026618(a2);
  v26 = sub_180034094(v25, 1);
  *(_DWORD *)(a1 + 448) = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v26 + 72LL))(
                            v26,
                            &unk_1801D5968,
                            0LL);
  sub_1800446D8(*(_QWORD *)(a1 + 400), (__int64)&unk_1801D81C8, 1);
  v27 = (__int64 *)sub_18008CE00(v59, v4);
  sub_180011020((_QWORD *)(a1 + 320), v27);
  if ( v60 )
    sub_180010530(v60);
  v28 = *v6;
  v29 = sub_180012440(v68, (__int64)&unk_1801D3FC8);
  sub_1800412EC(v28, (__int64)&v41, v29);
  sub_180013E78(v41, &v35);
  v30 = (__int64)v35;
  if ( !v35 )
  {
    v31 = sub_180013D44(v41, &v61);
    sub_180011020(&v35, v31);
    if ( v62 )
      sub_180010530(v62);
    v30 = (__int64)v35;
  }
  v32 = sub_18001246C(&v63, (_QWORD *)(a1 + 320));
  sub_180014620(v30, v32);
  v33 = sub_18001246C(&v64, (_QWORD *)(a1 + 368));
  sub_18004CA0C(v30, v33);
  *(_BYTE *)(v30 + 72) = 0;
  result = (__int64)sub_18003B5D8((_QWORD *)(a1 + 336), &v35);
  if ( v36 )
    result = sub_180010530(v36);
  if ( v42 )
    result = sub_180010530(v42);
  if ( v39 )
    return sub_180010530(v39);
  return result;
}
