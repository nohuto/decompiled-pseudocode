/*
 * XREFs of sub_180035810 @ 0x180035810
 * Callers:
 *     sub_180038370 @ 0x180038370 (sub_180038370.c)
 *     sub_180039234 @ 0x180039234 (sub_180039234.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001287C @ 0x18001287C (sub_18001287C.c)
 *     sub_180016240 @ 0x180016240 (sub_180016240.c)
 *     sub_18001F2B4 @ 0x18001F2B4 (sub_18001F2B4.c)
 *     sub_180028260 @ 0x180028260 (sub_180028260.c)
 *     sub_18002850C @ 0x18002850C (sub_18002850C.c)
 *     sub_180028544 @ 0x180028544 (sub_180028544.c)
 *     sub_18002858C @ 0x18002858C (sub_18002858C.c)
 *     sub_180028614 @ 0x180028614 (sub_180028614.c)
 *     sub_180028D88 @ 0x180028D88 (sub_180028D88.c)
 *     sub_180029368 @ 0x180029368 (sub_180029368.c)
 *     sub_18002C3FC @ 0x18002C3FC (sub_18002C3FC.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     sub_18002C5FC @ 0x18002C5FC (sub_18002C5FC.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_18002C8E4 @ 0x18002C8E4 (sub_18002C8E4.c)
 *     sub_1800306A0 @ 0x1800306A0 (sub_1800306A0.c)
 *     sub_180033A0C @ 0x180033A0C (sub_180033A0C.c)
 *     sub_180035ED4 @ 0x180035ED4 (sub_180035ED4.c)
 *     sub_180035FAC @ 0x180035FAC (sub_180035FAC.c)
 *     sub_180036AEC @ 0x180036AEC (sub_180036AEC.c)
 *     sub_180037268 @ 0x180037268 (sub_180037268.c)
 *     sub_180037E5C @ 0x180037E5C (sub_180037E5C.c)
 *     sub_180037F5C @ 0x180037F5C (sub_180037F5C.c)
 *     sub_180038C68 @ 0x180038C68 (sub_180038C68.c)
 *     sub_18003914C @ 0x18003914C (sub_18003914C.c)
 *     sub_180039F10 @ 0x180039F10 (sub_180039F10.c)
 *     sub_18003C790 @ 0x18003C790 (sub_18003C790.c)
 *     sub_180056888 @ 0x180056888 (sub_180056888.c)
 *     sub_180056B10 @ 0x180056B10 (sub_180056B10.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall sub_180035810(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rdi
  __int64 v4; // rbx
  unsigned int v5; // r14d
  __int64 v6; // rax
  int v7; // eax
  const char *v8; // rdx
  _QWORD *i; // rcx
  unsigned int v10; // r12d
  __int64 v11; // rcx
  unsigned int v12; // r15d
  __int64 v13; // rbx
  _QWORD *v14; // r14
  volatile signed __int32 *v15; // rcx
  __int64 *v16; // rdx
  __int64 *v17; // rax
  _BOOL8 v18; // rbx
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned int j; // ebx
  int k; // eax
  _BYTE *v24; // rcx
  unsigned int v25; // eax
  __int64 *v26; // r14
  __int64 *v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // rdx
  _OWORD v31[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v32; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+60h] [rbp-A0h] BYREF
  char v34; // [rsp+68h] [rbp-98h]
  __int64 v35; // [rsp+70h] [rbp-90h] BYREF
  char v36; // [rsp+78h] [rbp-88h]
  __int64 v37; // [rsp+80h] [rbp-80h] BYREF
  char v38; // [rsp+88h] [rbp-78h]
  __int128 v39; // [rsp+90h] [rbp-70h] BYREF
  __int128 v40; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v41; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v42; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v43[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v44; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v45; // [rsp+F0h] [rbp-10h] BYREF
  _Mtx_t v46; // [rsp+100h] [rbp+0h] BYREF
  char v47; // [rsp+108h] [rbp+8h]
  __int64 v48; // [rsp+110h] [rbp+10h] BYREF
  char v49; // [rsp+118h] [rbp+18h]
  _QWORD v50[2]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v51[2]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v52[2]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v53; // [rsp+150h] [rbp+50h] BYREF
  char v54; // [rsp+158h] [rbp+58h]
  _QWORD v55[2]; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v56[2]; // [rsp+170h] [rbp+70h] BYREF
  char *v57; // [rsp+180h] [rbp+80h] BYREF
  unsigned __int64 v58; // [rsp+198h] [rbp+98h]

  v3 = *(_QWORD **)a2;
  v31[0] = *(_OWORD *)a2;
  v4 = *((_QWORD *)&v31[0] + 1);
  v5 = 0;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  v45 = 0LL;
  v40 = 0LL;
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v3 = *(_QWORD **)&v31[0];
  }
  v40 = v31[0];
  sub_180037E5C(a1, 8LL, &v40, &v45);
  sub_18002C460((__int64)(a1 + 1), (__int64)&v37);
  v6 = sub_180037268(a1);
  sub_18002C3FC(v6, (__int64)&v35);
  v41 = 0LL;
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v3 = *(_QWORD **)&v31[0];
  }
  v41 = v31[0];
  sub_180039F10(a1, &v41);
  sub_18001F2B4(
    &stru_1801EA288,
    3,
    "-----------------------------------------------------------------------------------");
  sub_1800306A0((__int64 *)&v57, v3 + 10);
  v7 = sub_180028544((__int64)v3);
  sub_18001F2B4(&stru_1801EA288, 3, "Engine::DeleteDevice() -- removing device id %u -- %s", v7, v8);
  if ( v58 >= 0x10 )
    sub_180010884(v57, v58 + 1);
  sub_18002C5FC((__int64)(a1 + 14), (__int64)&v33);
  if ( (_QWORD *)sub_18002850C((__int64)v3) != a1 )
    goto LABEL_75;
  for ( i = (_QWORD *)a1[11]; i != (_QWORD *)a1[12] && !sub_180016240(i, v31); i += 2 )
    ;
  if ( sub_18001287C((__int64)i) == a1[12] )
  {
LABEL_75:
    sub_18001F2B4(&stru_1801EA288, 3, "Engine::DeleteDevice() -- device is not attached to this engine");
    if ( v34 )
      sub_18002C8E4(v33);
    if ( v36 )
      j_LanguageEnumProc(v35);
    if ( v38 )
      j_LanguageEnumProc(v37);
  }
  else
  {
    if ( v34 )
      sub_18002C8E4(v33);
    sub_18002C460((__int64)(v3 + 3), (__int64)&v53);
    v10 = sub_180028544((__int64)v3);
    v12 = sub_180028614(v11);
    if ( v12 )
    {
      do
      {
        sub_18002858C((__int64)v3, v50, v5);
        v13 = v50[0];
        sub_18002C3FC(v50[0] + 8LL, (__int64)&v48);
        (*(void (__fastcall **)(__int64, _Mtx_t *))(*(_QWORD *)v13 + 320LL))(v13, &v46);
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 360LL))(v13, 0LL);
        if ( v47 )
          Mtx_unlock(v46);
        if ( v49 )
          j_LanguageEnumProc(v48);
        sub_180010910((__int64)v50);
        ++v5;
      }
      while ( v5 < v12 );
    }
    v14 = a1 + 23;
    v15 = 0LL;
    if ( *((_QWORD *)&v31[0] + 1) )
    {
      v15 = (volatile signed __int32 *)*((_QWORD *)&v31[0] + 1);
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v31[0] + 1) + 12LL));
      v3 = *(_QWORD **)&v31[0];
    }
    v16 = (__int64 *)*v14;
    v17 = *(__int64 **)(*v14 + 8LL);
    while ( !*((_BYTE *)v17 + 25) )
    {
      if ( v17[5] >= (unsigned __int64)v15 )
      {
        v16 = v17;
        v17 = (__int64 *)*v17;
      }
      else
      {
        v17 = (__int64 *)v17[2];
      }
    }
    v18 = !*((_BYTE *)v16 + 25) && (unsigned __int64)v15 >= v16[5];
    if ( v15 )
    {
      if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
      v3 = *(_QWORD **)&v31[0];
    }
    if ( v18 )
    {
      v42 = 0LL;
      if ( *((_QWORD *)&v31[0] + 1) )
      {
        v42 = v31[0];
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v31[0] + 1) + 12LL));
        v3 = *(_QWORD **)&v31[0];
      }
      v19 = (_QWORD *)sub_180033A0C(a1 + 23, &v42);
      v20 = v19[1];
      if ( v20 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
        v20 = v19[1];
        v3 = *(_QWORD **)&v31[0];
      }
      v43[0] = *v19;
      v43[1] = v20;
      v21 = *((_QWORD *)&v42 + 1);
      if ( *((_QWORD *)&v42 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v42 + 1) + 12LL), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
        v3 = *(_QWORD **)&v31[0];
      }
      v32 = 0LL;
      if ( *((_QWORD *)&v31[0] + 1) )
      {
        v32 = v31[0];
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v31[0] + 1) + 12LL));
        v3 = *(_QWORD **)&v31[0];
      }
      sub_18003C790(a1 + 23, &v32);
      if ( *((_QWORD *)&v32 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v32 + 1) + 12LL), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v32 + 1) + 8LL))(*((_QWORD *)&v32 + 1));
        v3 = *(_QWORD **)&v31[0];
      }
      sub_180035ED4(a1, v43);
      sub_180010910((__int64)v43);
    }
    v44 = 0LL;
    if ( *((_QWORD *)&v31[0] + 1) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v31[0] + 1) + 8LL));
      v3 = *(_QWORD **)&v31[0];
    }
    v44 = v31[0];
    sub_180035FAC(a1, &v44);
    if ( sub_180028D88((__int64)v3) )
      (*(void (**)(void))(*v3 + 8LL))();
    for ( j = 0; j < v12; ++j )
    {
      sub_18002858C((__int64)v3, v51, j);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v51[0] + 176LL))(v51[0]);
      sub_180010910((__int64)v51);
    }
    sub_180056B10(a1[64]);
    sub_180056888(a1[64], v10);
    for ( k = sub_180028614((__int64)v3); k; k = sub_180028614((__int64)v3) )
    {
      sub_18002858C((__int64)v3, v52, 0);
      sub_180028260((__int64)v3, v52);
      sub_180010910((__int64)v52);
    }
    if ( sub_180028D88((__int64)v3) )
      sub_180029368(v24);
    if ( v54 )
      j_LanguageEnumProc(v53);
    sub_18002C460((__int64)(a1 + 14), (__int64)&v39);
    v25 = sub_180036AEC(a1, v31);
    v26 = (__int64 *)a1[12];
    v27 = (__int64 *)(a1[11] + 16LL * v25 + 16);
    if ( v27 != v26 )
    {
      do
      {
        v28 = *v27;
        v29 = v27[1];
        *v27 = 0LL;
        v27[1] = 0LL;
        v55[0] = *(v27 - 2);
        *(v27 - 2) = v28;
        v55[1] = *(v27 - 1);
        *(v27 - 1) = v29;
        sub_180010910((__int64)v55);
        v27 += 2;
      }
      while ( v27 != v26 );
      v26 = (__int64 *)a1[12];
    }
    sub_180010910((__int64)(v26 - 2));
    a1[12] -= 16LL;
    if ( BYTE8(v39) )
      j_LanguageEnumProc(v39);
    v39 = 0LL;
    v56[0] = v3;
    v56[1] = *((_QWORD *)&v31[0] + 1);
    v31[0] = 0uLL;
    sub_180010910((__int64)v56);
    sub_180010910((__int64)&v39);
    sub_18001F2B4(&stru_1801EA288, 3, "Engine::DeleteDevice() -- completed");
    sub_18001F2B4(
      &stru_1801EA288,
      3,
      "-----------------------------------------------------------------------------------");
    sub_180038C68(a1);
    sub_18003914C(a1);
    sub_180037F5C(a1);
    if ( v36 )
      j_LanguageEnumProc(v35);
    if ( v38 )
      j_LanguageEnumProc(v37);
  }
  return sub_180010910((__int64)v31);
}
