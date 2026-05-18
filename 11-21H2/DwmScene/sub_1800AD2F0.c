/*
 * XREFs of sub_1800AD2F0 @ 0x1800AD2F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800120F4 @ 0x1800120F4 (sub_1800120F4.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_180049B94 @ 0x180049B94 (sub_180049B94.c)
 *     sub_180053418 @ 0x180053418 (sub_180053418.c)
 *     sub_180063BE4 @ 0x180063BE4 (sub_180063BE4.c)
 *     sub_180065394 @ 0x180065394 (sub_180065394.c)
 *     sub_1800933B8 @ 0x1800933B8 (sub_1800933B8.c)
 *     sub_1800935DC @ 0x1800935DC (sub_1800935DC.c)
 *     sub_1800A8588 @ 0x1800A8588 (sub_1800A8588.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_1800AD2F0(__int64 *a1, _QWORD *a2, __int64 *a3, __int64 a4, _QWORD *a5, _QWORD *a6)
{
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rdx
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  __int64 v14; // r10
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r15
  void (__fastcall *v23)(__int64, __int128 *, _QWORD, __int64 *, char **); // r13
  __int64 v24; // r8
  __int64 v25; // rdx
  signed __int32 v26; // eax
  signed __int32 v27; // ett
  __int64 v28; // r8
  __int64 v29; // rax
  __int128 v31; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v32; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v33; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v34; // [rsp+68h] [rbp-98h] BYREF
  __int128 v35; // [rsp+78h] [rbp-88h] BYREF
  __int128 v36; // [rsp+88h] [rbp-78h] BYREF
  __int128 v37; // [rsp+98h] [rbp-68h] BYREF
  __int128 v38; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD *v39; // [rsp+B8h] [rbp-48h]
  _QWORD v40[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v41; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD *v42; // [rsp+E0h] [rbp-20h]
  _BYTE v43[16]; // [rsp+E8h] [rbp-18h] BYREF
  char *v44[3]; // [rsp+F8h] [rbp-8h] BYREF
  unsigned __int64 v45; // [rsp+110h] [rbp+10h]

  *(_QWORD *)&v32 = a4;
  *(_QWORD *)&v31 = a3;
  v39 = a5;
  v42 = a6;
  v9 = a1[3];
  v10 = *a3;
  v33 = 0LL;
  v11 = *(_QWORD *)(v10 + 16);
  if ( !v11 )
LABEL_24:
    sub_1800120F4();
  v12 = *(_DWORD *)(v11 + 8);
  do
  {
    if ( !v12 )
      goto LABEL_24;
    v13 = v12;
    v12 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 8), v12 + 1, v12);
  }
  while ( v13 != v12 );
  v33 = *(_OWORD *)(v10 + 8);
  sub_180063BE4(v9, (__int64)v43, (__int64 *)&v33);
  sub_180010910((__int64)&v33);
  v14 = a1[3];
  v34 = 0LL;
  v15 = a5[1];
  if ( v15 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
    v15 = a5[1];
  }
  *(_QWORD *)&v34 = *a5;
  *((_QWORD *)&v34 + 1) = v15;
  v35 = 0LL;
  v16 = a6[1];
  if ( v16 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
    v16 = a6[1];
  }
  *(_QWORD *)&v35 = *a6;
  *((_QWORD *)&v35 + 1) = v16;
  sub_1800A8588(v14, a3, (__int64 *)&v35, (__int64)&v34, 0xFFFFFFFF);
  v41 = 0LL;
  sub_180065394(a1[3], (__int64 *)&v41);
  *(_BYTE *)(a1[3] + 465) &= 0xF8u;
  sub_180049B94(a1[34], -1LL, 0);
  *(_BYTE *)(a1[9] + 72) = 1;
  v17 = a1[9];
  v36 = 0LL;
  v18 = a1[35];
  if ( v18 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
    v18 = a1[35];
  }
  *(_QWORD *)&v36 = a1[34];
  *((_QWORD *)&v36 + 1) = v18;
  sub_180053418(v17, &v36);
  v19 = a1[36];
  v40[0] = *a5;
  v40[1] = a5[1];
  *a5 = 0LL;
  a5[1] = 0LL;
  sub_1800933B8(v19, &qword_1801F5FD8, v40);
  v20 = a1[36];
  v37 = 0LL;
  v21 = a1[41];
  if ( v21 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v21 + 8));
    v21 = a1[41];
  }
  *(_QWORD *)&v37 = a1[40];
  *((_QWORD *)&v37 + 1) = v21;
  sub_1800935DC(v20, &qword_1801F5FD8, &v37);
  v22 = a1[3];
  v23 = *(void (__fastcall **)(__int64, __int128 *, _QWORD, __int64 *, char **))(*(_QWORD *)v22 + 208LL);
  v44[2] = 0LL;
  v45 = 15LL;
  LOBYTE(v44[0]) = 0;
  sub_180012190((__int64 *)v44, "Downsampling", 0xCuLL);
  v24 = *(_QWORD *)v31;
  v38 = 0LL;
  v25 = *(_QWORD *)(v24 + 16);
  if ( !v25 )
LABEL_25:
    sub_1800120F4();
  v26 = *(_DWORD *)(v25 + 8);
  do
  {
    if ( !v26 )
      goto LABEL_25;
    v27 = v26;
    v26 = _InterlockedCompareExchange((volatile signed __int32 *)(v25 + 8), v26 + 1, v26);
  }
  while ( v27 != v26 );
  v38 = *(_OWORD *)(v24 + 8);
  v23(v22, &v38, v32, a1 + 9, v44);
  sub_180010910((__int64)&v38);
  if ( v45 >= 0x10 )
    sub_180010884(v44[0], v45 + 1);
  *(_BYTE *)(a1[9] + 72) = 0;
  v32 = 0LL;
  sub_1800933B8(a1[36], &qword_1801F5FD8, &v32);
  v31 = 0LL;
  sub_1800935DC(a1[36], &qword_1801F5FD8, &v31);
  v28 = *a6;
  *a2 = 0LL;
  a2[1] = 0LL;
  v29 = *(_QWORD *)(v28 + 144);
  if ( v29 )
    _InterlockedIncrement((volatile signed __int32 *)(v29 + 8));
  *a2 = *(_QWORD *)(v28 + 136);
  a2[1] = *(_QWORD *)(v28 + 144);
  sub_180010910((__int64)v43);
  sub_180010910((__int64)a5);
  sub_180010910((__int64)a6);
  return a2;
}
