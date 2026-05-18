/*
 * XREFs of sub_180074808 @ 0x180074808
 * Callers:
 *     sub_1800713F0 @ 0x1800713F0 (sub_1800713F0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_180036540 @ 0x180036540 (sub_180036540.c)
 *     sub_180036808 @ 0x180036808 (sub_180036808.c)
 *     sub_18004614C @ 0x18004614C (sub_18004614C.c)
 *     sub_1800474F8 @ 0x1800474F8 (sub_1800474F8.c)
 *     sub_1800533EC @ 0x1800533EC (sub_1800533EC.c)
 *     sub_180065414 @ 0x180065414 (sub_180065414.c)
 *     sub_180065550 @ 0x180065550 (sub_180065550.c)
 *     sub_180065628 @ 0x180065628 (sub_180065628.c)
 *     sub_18006566C @ 0x18006566C (sub_18006566C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180074808(__int64 a1, __int64 *a2)
{
  __int64 v3; // r8
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 v6; // r15
  __int64 v7; // rax
  char v8; // bl
  __int64 v9; // r13
  __int64 v10; // r8
  char v11; // r14
  __int64 *v12; // rdi
  __int64 *v13; // rbx
  __int64 *v14; // rax
  __int64 v15; // r8
  __int64 v16; // r8
  char v17; // al
  __int64 v18; // r8
  char v19; // al
  __int64 v20; // r8
  char v21; // al
  __int64 v22; // r8
  char v23; // al
  __int64 v24; // r8
  char v25; // al
  char v26; // al
  __int64 v27; // r8
  volatile signed __int32 *v28; // rcx
  __int64 v29; // rax
  __int64 *v30; // rax
  __int64 *v31; // rdi
  __int64 *v32; // rbx
  __int64 v33; // rbx
  char v34; // al
  __int64 v35; // rbx
  char v36; // al
  __int64 v37; // rbx
  char v38; // al
  __int64 v39; // rbx
  char v40; // al
  __int64 v41; // rbx
  char v42; // al
  __int64 v43; // rbx
  char v44; // al
  __int64 v45; // rbx
  char v46; // al
  __int64 v47; // rbx
  char v48; // al
  __int64 v49; // rbx
  char v50; // al
  __int64 v51; // rbx
  char v52; // al
  char v53; // di
  __int64 v54; // r8
  char v55; // si
  __int64 v56; // rbx
  __int64 *v57; // rax
  __int64 *v58; // rax
  __int64 v59; // rbx
  __int64 *v60; // rax
  __int64 *v61; // rax
  __int128 v63; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v64[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v65[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v66[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v67[4]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v68[4]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v69[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v70[4]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v71[12]; // [rsp+F0h] [rbp-10h] BYREF

  v6 = sub_180036808(a1, *(_DWORD *)(*a2 + 112));
  v63 = 0LL;
  v7 = a2[1];
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v4 = *a2;
    v7 = a2[1];
  }
  *(_QWORD *)&v63 = v4;
  *((_QWORD *)&v63 + 1) = v7;
  sub_180036540(v5, v64, v3, &v63);
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, &qword_1801F83B8, 0LL);
  v9 = v64[0];
  sub_18006566C(v64[0], 0, v8);
  if ( v8 )
    sub_180065550(v9);
  LOBYTE(v10) = 1;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v6 + 64LL))(v6, &qword_1801F83D8, v10);
  v12 = sub_18001875C(v67, (__int64)&qword_1801F5758);
  v13 = sub_18001875C(v68, (__int64)&qword_1801F57D8);
  v14 = sub_18001875C(v69, (__int64)&qword_1801F57B8);
  sub_180065414(v9, v11 != 0, v15, (__int64)v14, (__int64)v13, (__int64)v12);
  sub_180065628(v9, 1, v11);
  LOBYTE(v16) = 1;
  v17 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v6 + 64LL))(v6, &qword_1801F83F8, v16);
  sub_18006566C(v9, 1, v17);
  LOBYTE(v18) = 1;
  v19 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v6 + 64LL))(v6, &qword_1801F8418, v18);
  sub_18006566C(v9, 2, v19);
  LOBYTE(v20) = 1;
  v21 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v6 + 64LL))(v6, &qword_1801F8438, v20);
  sub_18006566C(v9, 3, v21);
  LOBYTE(v22) = 1;
  v23 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v6 + 64LL))(v6, &qword_1801F8378, v22);
  sub_1800533EC(0LL, v23);
  LOBYTE(v24) = 1;
  v25 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v6 + 64LL))(v6, &qword_1801F8398, v24);
  sub_1800533EC(1uLL, v25);
  v26 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, &qword_1801F87D8, 0LL);
  sub_180065628(v9, 0x4000000, v26);
  v27 = 0LL;
  v28 = 0LL;
  v29 = a2[1];
  if ( v29 )
  {
    v28 = (volatile signed __int32 *)a2[1];
    _InterlockedAdd((volatile signed __int32 *)(v29 + 12), 1u);
  }
  v30 = *(__int64 **)(*(_QWORD *)(a1 + 728) + 8LL);
  v31 = *(__int64 **)(a1 + 728);
  while ( !*((_BYTE *)v30 + 25) )
  {
    if ( v30[5] >= (unsigned __int64)v28 )
    {
      v31 = v30;
      v30 = (__int64 *)*v30;
    }
    else
    {
      v30 = (__int64 *)v30[2];
    }
  }
  if ( *((_BYTE *)v31 + 25) || (unsigned __int64)v28 < v31[5] )
    v31 = *(__int64 **)(a1 + 728);
  if ( v28 && _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
  v32 = (__int64 *)v31[6];
  if ( v32 != (__int64 *)v31[7] )
  {
    v33 = *v32;
    v34 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, &qword_1801F84B8, 0LL);
    sub_180065628(v33, 0x10000, v34);
    v35 = *(_QWORD *)v31[6];
    v36 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, &qword_1801F84D8, 0LL);
    sub_180065628(v35, 0x20000, v36);
    v37 = *(_QWORD *)v31[6];
    v38 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, &qword_1801F84F8, 0LL);
    sub_180065628(v37, 0x40000, v38);
    v39 = *(_QWORD *)v31[6];
    v40 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, &qword_1801F8518, 0LL);
    sub_180065628(v39, 0x80000, v40);
    v41 = *(_QWORD *)v31[6];
    v42 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, &qword_1801F8538, 0LL);
    sub_180065628(v41, 0x100000, v42);
    v43 = *(_QWORD *)v31[6];
    v44 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, &qword_1801F8558, 0LL);
    sub_180065628(v43, 0x200000, v44);
    v45 = *(_QWORD *)v31[6];
    v46 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, &qword_1801F8578, 0LL);
    sub_180065628(v45, 0x400000, v46);
    v47 = *(_QWORD *)v31[6];
    v48 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, &qword_1801F8598, 0LL);
    sub_180065628(v47, 0x800000, v48);
    v49 = *(_QWORD *)v31[6];
    v50 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, &qword_1801F85B8, 0LL);
    sub_180065628(v49, 0x10000000, v50);
    v51 = *(_QWORD *)v31[6];
    v52 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, &qword_1801F85D8, 0LL);
    sub_180065628(v51, 0x20000000, v52);
  }
  LOBYTE(v27) = 1;
  v53 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v6 + 64LL))(v6, &qword_1801F88F8, v27);
  LOBYTE(v54) = 1;
  v55 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v6 + 64LL))(v6, &qword_1801F8918, v54);
  v56 = *a2;
  v57 = sub_1800129F4(v70, (__int64)&qword_1801F7FF8);
  v58 = sub_18004614C(v56, v65, (char *)v57);
  sub_1800474F8(*v58, v53);
  sub_180010910((__int64)v65);
  v59 = *a2;
  v60 = sub_1800129F4(v71, (__int64)&qword_1801F7FD8);
  v61 = sub_18004614C(v59, v66, (char *)v60);
  sub_1800474F8(*v61, v55);
  sub_180010910((__int64)v66);
  return sub_180010910((__int64)v64);
}
