/*
 * XREFs of sub_18007F0F0 @ 0x18007F0F0
 * Callers:
 *     sub_18006CDA0 @ 0x18006CDA0 (sub_18006CDA0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_180028460 @ 0x180028460 (sub_180028460.c)
 *     sub_18002C73C @ 0x18002C73C (sub_18002C73C.c)
 *     sub_18003D898 @ 0x18003D898 (sub_18003D898.c)
 *     sub_18003D930 @ 0x18003D930 (sub_18003D930.c)
 *     sub_18003DA04 @ 0x18003DA04 (sub_18003DA04.c)
 *     sub_180063BE4 @ 0x180063BE4 (sub_180063BE4.c)
 *     sub_18007D80C @ 0x18007D80C (sub_18007D80C.c)
 *     sub_18007D97C @ 0x18007D97C (sub_18007D97C.c)
 *     sub_18007F724 @ 0x18007F724 (sub_18007F724.c)
 *     sub_1800B4528 @ 0x1800B4528 (sub_1800B4528.c)
 *     sub_1800B4684 @ 0x1800B4684 (sub_1800B4684.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_18007F0F0(_QWORD *a1, _QWORD *a2, char a3)
{
  __int64 v6; // r8
  __int64 v7; // rdx
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  __int64 v10; // rcx
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 *v14; // r8
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int128 *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  _QWORD *v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rbx
  __int64 v35[3]; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v36; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v37; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v38[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v39; // [rsp+80h] [rbp-80h] BYREF
  __int128 v40; // [rsp+90h] [rbp-70h] BYREF
  __int128 v41; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v42; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v43; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v44; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v45; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v46; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v47[2]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v48[2]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v49[2]; // [rsp+120h] [rbp+20h] BYREF
  __int128 v50; // [rsp+130h] [rbp+30h] BYREF
  __int128 v51; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v52[8]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v53; // [rsp+158h] [rbp+58h]
  _BYTE v54[16]; // [rsp+160h] [rbp+60h] BYREF
  __int128 v55; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v56[2]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v57[16]; // [rsp+190h] [rbp+90h] BYREF
  char *v58[3]; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned __int64 v59; // [rsp+1B8h] [rbp+B8h]

  v6 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a2 + 376LL))(*a2, v52);
  v37 = 0LL;
  v7 = *(_QWORD *)(v6 + 8);
  if ( v7 )
  {
    v8 = *(_DWORD *)(v7 + 8);
    while ( v8 )
    {
      v9 = v8;
      v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 + 1, v8);
      if ( v9 == v8 )
      {
        v37 = *(_OWORD *)v6;
        break;
      }
    }
  }
  v10 = v53;
  if ( v53 && _InterlockedExchangeAdd((volatile signed __int32 *)(v53 + 12), 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v10 + 8LL))(v10, v7, v6);
  sub_18002C73C(a1[36] + 16LL);
  v11 = (__int64 *)sub_180028460(v37);
  v12 = v11[1];
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    v12 = v11[1];
  }
  v13 = *v11;
  v47[0] = *v11;
  v47[1] = v12;
  v14 = (__int64 *)a1[34];
  v15 = *v14;
  v42 = 0LL;
  if ( *((_QWORD *)&v37 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v37 + 1) + 8LL));
  v42 = v37;
  (*(void (__fastcall **)(__int64 *, __int128 *))(v15 + 88))(v14, &v42);
  v36 = 0LL;
  if ( a1[8] )
  {
    v17 = (__int64 *)sub_18007F724(a1, v54, v16, &v37);
    v18 = *v17;
    v19 = v17[1];
    *v17 = 0LL;
    v17[1] = 0LL;
    v48[0] = 0LL;
    *(_QWORD *)&v36 = v18;
    v48[1] = 0LL;
    *((_QWORD *)&v36 + 1) = v19;
    sub_180010910((__int64)v48);
    v20 = (__int128 *)v54;
  }
  else
  {
    v21 = a1[57];
    v22 = *(_QWORD *)(v21 + 144);
    if ( v22 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v22 + 8));
      v22 = *(_QWORD *)(v21 + 144);
    }
    v55 = 0LL;
    v23 = *(_QWORD *)(v21 + 136);
    v49[0] = 0LL;
    *(_QWORD *)&v36 = v23;
    v49[1] = 0LL;
    *((_QWORD *)&v36 + 1) = v22;
    sub_180010910((__int64)v49);
    v20 = &v55;
  }
  sub_180010910((__int64)v20);
  sub_180063BE4(a1[34], (__int64)v38, (__int64 *)&v37);
  v24 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 184LL))(*a2);
  (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*a2 + 200LL))(*a2, &v39);
  v40 = 0LL;
  v25 = v24[1];
  if ( v25 )
  {
    *(_QWORD *)&v40 = *v24;
    *((_QWORD *)&v40 + 1) = v25;
    _InterlockedIncrement((volatile signed __int32 *)(v25 + 12));
  }
  sub_18003D930(v13, (__int64 *)&v40);
  v43 = 0LL;
  if ( *((_QWORD *)&v39 + 1) )
  {
    v43 = v39;
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v39 + 1) + 12LL));
  }
  sub_18003D898(v13, (__int64 *)&v43);
  v26 = v38[0];
  v41 = 0LL;
  v27 = v24[1];
  if ( v27 )
  {
    *(_QWORD *)&v41 = *v24;
    *((_QWORD *)&v41 + 1) = v27;
    _InterlockedIncrement((volatile signed __int32 *)(v27 + 12));
  }
  sub_18003D930(v26, (__int64 *)&v41);
  v28 = v38[0];
  v44 = 0LL;
  if ( *((_QWORD *)&v39 + 1) )
  {
    v44 = v39;
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v39 + 1) + 12LL));
  }
  sub_18003D898(v28, (__int64 *)&v44);
  v29 = *((_QWORD *)&v39 + 1);
  if ( *((_QWORD *)&v39 + 1)
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v39 + 1) + 12LL), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
  }
  (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v37 + 104LL))(v37, v38);
  v58[2] = 0LL;
  v59 = 15LL;
  LOBYTE(v58[0]) = 0;
  sub_180012190((__int64 *)v58, "IPM_ProcessScene", 0x10uLL);
  sub_1800B4528(v57, v38, v58);
  if ( v59 >= 0x10 )
    sub_180010884(v58[0], v59 + 1);
  if ( a3 )
  {
    v45 = 0LL;
    if ( *((_QWORD *)&v36 + 1) )
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v36 + 1) + 8LL));
    v45 = v36;
    v30 = sub_18007D97C((__int64)a1, v56, (__int64 *)&v37, (__int64)a2, &v45);
    v31 = *v30;
    v32 = v30[1];
    *v30 = 0LL;
    v30[1] = 0LL;
    v50 = v36;
    *(_QWORD *)&v36 = v31;
    *((_QWORD *)&v36 + 1) = v32;
    sub_180010910((__int64)&v50);
    sub_180010910((__int64)v56);
  }
  v46 = 0LL;
  if ( *((_QWORD *)&v36 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v36 + 1) + 8LL));
  v46 = v36;
  sub_18007D80C((__int64)a1, (__int64)a2, (__int64)&v46);
  sub_1800B4684(v57);
  (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v37 + 112LL))(v37, v38);
  *(_OWORD *)v35 = 0LL;
  v51 = 0LL;
  v33 = v47[0];
  sub_18003DA04(v47[0], (__int64)&v51, (__int64)v35);
  sub_180010910((__int64)&v51);
  sub_180010910((__int64)v35);
  *(_OWORD *)v35 = 0LL;
  sub_18003D930(v33, v35);
  *(_OWORD *)v35 = 0LL;
  sub_18003D898(v33, v35);
  *(_OWORD *)v35 = 0LL;
  sub_18003D930(v38[0], v35);
  *(_OWORD *)v35 = 0LL;
  sub_18003D898(v38[0], v35);
  sub_180010910((__int64)v38);
  sub_180010910((__int64)&v36);
  sub_180010910((__int64)v47);
  return sub_180010910((__int64)&v37);
}
