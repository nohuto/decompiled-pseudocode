/*
 * XREFs of sub_1800ACF60 @ 0x1800ACF60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800120F4 @ 0x1800120F4 (sub_1800120F4.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_180049B78 @ 0x180049B78 (sub_180049B78.c)
 *     sub_180049B94 @ 0x180049B94 (sub_180049B94.c)
 *     sub_180053418 @ 0x180053418 (sub_180053418.c)
 *     sub_1800569D0 @ 0x1800569D0 (sub_1800569D0.c)
 *     sub_180063BE4 @ 0x180063BE4 (sub_180063BE4.c)
 *     sub_180065394 @ 0x180065394 (sub_180065394.c)
 *     sub_18006958C @ 0x18006958C (sub_18006958C.c)
 *     sub_1800933B8 @ 0x1800933B8 (sub_1800933B8.c)
 *     sub_1800935DC @ 0x1800935DC (sub_1800935DC.c)
 *     sub_1800A8588 @ 0x1800A8588 (sub_1800A8588.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800ACF60(__int64 *a1, __int64 *a2, __int64 a3, _QWORD *a4, __int64 *a5)
{
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 *v15; // rax
  char v16; // bl
  char v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rbx
  void (__fastcall *v24)(__int64, __int128 *, _QWORD, __int64 *, char **); // r13
  __int64 v25; // r8
  __int64 v26; // rdx
  signed __int32 v27; // eax
  signed __int32 v28; // ett
  __int128 v30; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v31; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v32; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v33; // [rsp+68h] [rbp-98h] BYREF
  __int128 v34; // [rsp+78h] [rbp-88h] BYREF
  __int128 v35; // [rsp+88h] [rbp-78h] BYREF
  __int64 v36[2]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v37[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v38; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD *v39; // [rsp+C8h] [rbp-38h]
  __int64 *v40; // [rsp+D0h] [rbp-30h]
  _QWORD v41[2]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v42[16]; // [rsp+E8h] [rbp-18h] BYREF
  char *v43[3]; // [rsp+F8h] [rbp-8h] BYREF
  unsigned __int64 v44; // [rsp+110h] [rbp+10h]

  *(_QWORD *)&v30 = a3;
  v39 = a4;
  v40 = a5;
  v8 = a1[3];
  v9 = *a2;
  v31 = 0LL;
  v10 = *(_QWORD *)(v9 + 16);
  if ( !v10 )
LABEL_20:
    sub_1800120F4();
  v11 = *(_DWORD *)(v10 + 8);
  do
  {
    if ( !v11 )
      goto LABEL_20;
    v12 = v11;
    v11 = _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v11 + 1, v11);
  }
  while ( v12 != v11 );
  v31 = *(_OWORD *)(v9 + 8);
  sub_180063BE4(v8, (__int64)v42, (__int64 *)&v31);
  sub_180010910((__int64)&v31);
  v13 = a1[3];
  v32 = 0LL;
  v14 = a4[1];
  if ( v14 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
    v14 = a4[1];
  }
  *(_QWORD *)&v32 = *a4;
  *((_QWORD *)&v32 + 1) = v14;
  v36[0] = *a5;
  v36[1] = a5[1];
  *a5 = 0LL;
  a5[1] = 0LL;
  sub_1800A8588(v13, a2, v36, (__int64)&v32, 0);
  v38 = 0LL;
  sub_180065394(a1[3], (__int64 *)&v38);
  *(_BYTE *)(a1[3] + 465) &= 0xF8u;
  v15 = sub_18006958C(a1[38], v41);
  v16 = sub_1800569D0(*v15, a1 + 42);
  sub_180010910((__int64)v41);
  sub_180049B94(a1[34], -1LL, 0);
  sub_180049B78(a1[34], v16);
  *(_BYTE *)(a1[9] + 72) = v17;
  v18 = a1[9];
  v33 = 0LL;
  v19 = a1[35];
  if ( v19 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
    v19 = a1[35];
  }
  *(_QWORD *)&v33 = a1[34];
  *((_QWORD *)&v33 + 1) = v19;
  sub_180053418(v18, &v33);
  v20 = a1[36];
  v37[0] = *a4;
  v37[1] = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  sub_1800933B8(v20, &qword_1801F5FD8, v37);
  v21 = a1[36];
  v34 = 0LL;
  v22 = a1[41];
  if ( v22 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v22 + 8));
    v22 = a1[41];
  }
  *(_QWORD *)&v34 = a1[40];
  *((_QWORD *)&v34 + 1) = v22;
  sub_1800935DC(v21, &qword_1801F5FD8, &v34);
  v23 = a1[3];
  v24 = *(void (__fastcall **)(__int64, __int128 *, _QWORD, __int64 *, char **))(*(_QWORD *)v23 + 208LL);
  v43[2] = 0LL;
  v44 = 15LL;
  LOBYTE(v43[0]) = 0;
  sub_180012190((__int64 *)v43, "Blurring", 8uLL);
  v25 = *a2;
  v35 = 0LL;
  v26 = *(_QWORD *)(v25 + 16);
  if ( !v26 )
LABEL_21:
    sub_1800120F4();
  v27 = *(_DWORD *)(v26 + 8);
  do
  {
    if ( !v27 )
      goto LABEL_21;
    v28 = v27;
    v27 = _InterlockedCompareExchange((volatile signed __int32 *)(v26 + 8), v27 + 1, v27);
  }
  while ( v28 != v27 );
  v35 = *(_OWORD *)(v25 + 8);
  v24(v23, &v35, v30, a1 + 9, v43);
  sub_180010910((__int64)&v35);
  if ( v44 >= 0x10 )
    sub_180010884(v43[0], v44 + 1);
  v30 = 0LL;
  sub_1800933B8(a1[36], &qword_1801F5FD8, &v30);
  v30 = 0LL;
  sub_1800935DC(a1[36], &qword_1801F5FD8, &v30);
  *(_BYTE *)(a1[9] + 72) = 0;
  sub_180010910((__int64)v42);
  sub_180010910((__int64)a4);
  return sub_180010910((__int64)a5);
}
