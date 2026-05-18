/*
 * XREFs of sub_180034E40 @ 0x180034E40
 * Callers:
 *     sub_180016778 @ 0x180016778 (sub_180016778.c)
 *     sub_1800169B8 @ 0x1800169B8 (sub_1800169B8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_18001292C @ 0x18001292C (sub_18001292C.c)
 *     sub_18001F2B4 @ 0x18001F2B4 (sub_18001F2B4.c)
 *     sub_180028544 @ 0x180028544 (sub_180028544.c)
 *     sub_18002858C @ 0x18002858C (sub_18002858C.c)
 *     sub_180028614 @ 0x180028614 (sub_180028614.c)
 *     sub_180028E0C @ 0x180028E0C (sub_180028E0C.c)
 *     sub_18002BA14 @ 0x18002BA14 (sub_18002BA14.c)
 *     sub_18002C3FC @ 0x18002C3FC (sub_18002C3FC.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     sub_18002C7C4 @ 0x18002C7C4 (sub_18002C7C4.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_18003036C @ 0x18003036C (sub_18003036C.c)
 *     sub_1800306A0 @ 0x1800306A0 (sub_1800306A0.c)
 *     sub_1800317F0 @ 0x1800317F0 (sub_1800317F0.c)
 *     sub_180033A0C @ 0x180033A0C (sub_180033A0C.c)
 *     sub_180035438 @ 0x180035438 (sub_180035438.c)
 *     sub_180036540 @ 0x180036540 (sub_180036540.c)
 *     sub_180037268 @ 0x180037268 (sub_180037268.c)
 *     sub_180037288 @ 0x180037288 (sub_180037288.c)
 *     sub_1800372D8 @ 0x1800372D8 (sub_1800372D8.c)
 *     sub_180038C68 @ 0x180038C68 (sub_180038C68.c)
 *     sub_180038EAC @ 0x180038EAC (sub_180038EAC.c)
 *     sub_18005645C @ 0x18005645C (sub_18005645C.c)
 *     sub_18005EC68 @ 0x18005EC68 (sub_18005EC68.c)
 *     sub_18005F020 @ 0x18005F020 (sub_18005F020.c)
 *     sub_180079B60 @ 0x180079B60 (sub_180079B60.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall sub_180034E40(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // r14
  int v7; // eax
  const char *v8; // r8
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // r13
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // r13
  _QWORD *v27; // r14
  __int64 v28; // r15
  __int64 v29; // rax
  char *v30; // rdx
  char *v31; // rcx
  _QWORD *v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rdx
  unsigned __int64 i; // rbx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 *v41; // rbx
  __int64 *v42; // r14
  void ***v43; // rdx
  __int64 result; // rax
  unsigned int v45; // eax
  int v46; // r8d
  __int64 v47; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v48; // [rsp+40h] [rbp-C0h]
  __int128 v49; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v50; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v51; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v52[2]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v53[2]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v54[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v55; // [rsp+A8h] [rbp-58h] BYREF
  char v56; // [rsp+B0h] [rbp-50h]
  __int64 v57[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v58; // [rsp+C8h] [rbp-38h] BYREF
  char v59; // [rsp+D0h] [rbp-30h]
  __int64 v60; // [rsp+D8h] [rbp-28h] BYREF
  char v61; // [rsp+E0h] [rbp-20h]
  _QWORD v62[2]; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v63[5]; // [rsp+F8h] [rbp-8h] BYREF
  void **v64; // [rsp+120h] [rbp+20h] BYREF
  __int64 v65; // [rsp+128h] [rbp+28h]
  __int64 v66; // [rsp+130h] [rbp+30h]
  void ***v67; // [rsp+158h] [rbp+58h]
  char *v68; // [rsp+160h] [rbp+60h] BYREF
  unsigned __int64 v69; // [rsp+178h] [rbp+78h]
  _QWORD v70[4]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+1A0h] [rbp+A0h] BYREF

  sub_18002C3FC(a1 + 8, (__int64)&v60);
  v4 = sub_180037268(a1);
  sub_18002C3FC(v4, (__int64)&v58);
  sub_18002C7C4(*a2 + 24);
  if ( !*(_DWORD *)(a1 + 552) && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2) )
  {
    v5 = *(_QWORD **)(a1 + 88);
    v6 = *(_QWORD **)(a1 + 96);
    while ( v5 != v6 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 32LL))(*v5) )
      {
        sub_1800113D0(
          v70,
          "This Engine instance cannot create multiple devices because it was created with option General.EngineDeviceMode==Single.");
        v45 = (unsigned int)sub_1800113D0(
                              v63,
                              "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\sour"
                              "ce\\engine\\engine.cpp");
        sub_180079B60((unsigned int)pExceptionObject, v45, v46, (unsigned int)v70, 0);
        throw (Spectre::Engine::EngineException *)pExceptionObject;
      }
      v5 += 2;
    }
  }
  sub_18001F2B4(
    &stru_1801EA288,
    3,
    "-----------------------------------------------------------------------------------");
  sub_1800306A0((__int64 *)&v68, (_QWORD *)(*a2 + 80));
  v7 = sub_180028544(*a2);
  sub_18001F2B4(&stru_1801EA288, 3, "Engine::CreateDevice() -- attaching device id %u -- %s", v7, v8);
  if ( v69 >= 0x10 )
    sub_180010884(v68, v69 + 1);
  if ( (unsigned int)sub_180028614(*a2) )
  {
    sub_180035438(a1, &v47, v9, 0LL);
    v49 = 0LL;
    sub_180036540(a1, v52, v10, &v49);
    if ( v52[0] )
      sub_18005EC68(v47, v52);
    sub_180010910((__int64)v52);
    v11 = v47;
    v12 = sub_18002858C(*a2, v62, 0);
    sub_18005F020(v11, v12);
    sub_180010910((__int64)v62);
    v50 = 0LL;
    v13 = a2[1];
    if ( v13 )
    {
      *(_QWORD *)&v50 = *a2;
      *((_QWORD *)&v50 + 1) = v13;
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 12));
    }
    v14 = (_QWORD *)sub_180033A0C((__int64 *)(a1 + 184), &v50);
    v15 = v48;
    if ( v48 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v48 + 8));
      v15 = v48;
    }
    v54[0] = *v14;
    *v14 = v47;
    v54[1] = v14[1];
    v14[1] = v15;
    sub_180010910((__int64)v54);
    v16 = *((_QWORD *)&v50 + 1);
    if ( *((_QWORD *)&v50 + 1)
      && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v50 + 1) + 12LL), 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    }
    sub_180010910((__int64)&v47);
  }
  sub_18002C460(a1 + 112, (__int64)&v55);
  v17 = *(_QWORD *)(a1 + 96);
  v18 = *(_QWORD *)(a1 + 104);
  if ( v17 == v18 )
  {
    v20 = (v17 - *(_QWORD *)(a1 + 88)) >> 4;
    v21 = 0xFFFFFFFFFFFFFFFLL;
    if ( v20 == 0xFFFFFFFFFFFFFFFLL )
      sub_180012170();
    v22 = v20 + 1;
    v23 = (v18 - *(_QWORD *)(a1 + 88)) >> 4;
    if ( v23 <= 0xFFFFFFFFFFFFFFFLL - (v23 >> 1) )
    {
      v24 = v23 + (v23 >> 1);
      v25 = v20 + 1;
      if ( v24 >= v22 )
        v25 = v24;
      if ( v25 > 0xFFFFFFFFFFFFFFFLL )
        sub_1800120D4();
      v21 = v25;
    }
    v26 = 2 * v21;
    v27 = (_QWORD *)sub_180011088(v26 * 8);
    v28 = 2 * v20;
    v27[v28] = 0LL;
    v27[v28 + 1] = 0LL;
    v29 = a2[1];
    if ( v29 )
      _InterlockedIncrement((volatile signed __int32 *)(v29 + 8));
    v27[v28] = *a2;
    v27[v28 + 1] = a2[1];
    v30 = *(char **)(a1 + 96);
    v31 = *(char **)(a1 + 88);
    v32 = v27;
    if ( (char *)v17 != v30 )
    {
      sub_18001292C(v31, (char *)v17, v27);
      v32 = &v27[v28 + 2];
      v30 = *(char **)(a1 + 96);
      v31 = (char *)v17;
    }
    sub_18001292C(v31, v30, v32);
    v33 = *(_QWORD *)(a1 + 88);
    if ( v33 )
    {
      sub_1800126E8(v33, *(_QWORD *)(a1 + 96));
      sub_180010884(*(char **)(a1 + 88), (*(_QWORD *)(a1 + 104) - *(_QWORD *)(a1 + 88)) & 0xFFFFFFFFFFFFFFF0uLL);
    }
    *(_QWORD *)(a1 + 88) = v27;
    *(_QWORD *)(a1 + 96) = &v27[2 * v22];
    *(_QWORD *)(a1 + 104) = &v27[v26];
  }
  else
  {
    *(_QWORD *)v17 = 0LL;
    *(_QWORD *)(v17 + 8) = 0LL;
    v19 = a2[1];
    if ( v19 )
      _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
    *(_QWORD *)v17 = *a2;
    *(_QWORD *)(v17 + 8) = a2[1];
    *(_QWORD *)(a1 + 96) += 16LL;
  }
  if ( v56 )
    j_LanguageEnumProc(v55);
  sub_180038EAC(a1);
  v34 = *(_QWORD *)(a1 + 512);
  v51 = 0LL;
  v35 = a2[1];
  if ( v35 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v35 + 8));
    v35 = a2[1];
  }
  *(_QWORD *)&v51 = *a2;
  *((_QWORD *)&v51 + 1) = v35;
  sub_18005645C(v34, &v51);
  for ( i = 0LL; i < sub_1800372D8(a1); ++i )
  {
    sub_180037288(a1, v57, i);
    if ( v57[0] && sub_18002BA14(v57[0], 2) )
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v37 + 16LL))(v37, a2);
    sub_180010910((__int64)v57);
  }
  v38 = a2[1];
  if ( v38 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v38 + 8));
    v38 = a2[1];
  }
  v53[0] = *a2;
  v53[1] = v38;
  v67 = 0LL;
  if ( sub_1800317F0() )
  {
    v64 = &std::_Func_impl_no_alloc<_lambda_991510985cb39e07691d1fb2432ec0d9_,void,std::shared_ptr<Spectre::Engine::Component> const &>::`vftable';
    v65 = 0LL;
    v66 = 0LL;
    if ( v40 )
      _InterlockedIncrement((volatile signed __int32 *)(v40 + 8));
    v65 = v39;
    v66 = v40;
    v67 = &v64;
  }
  sub_180010910((__int64)v53);
  v41 = *(__int64 **)(a1 + 704);
  v42 = *(__int64 **)(a1 + 712);
  while ( v41 != v42 )
  {
    sub_18002C460(*v41 + 16, (__int64)&v49);
    sub_18003036C(*v41, (__int64)&v64);
    if ( BYTE8(v49) )
      j_LanguageEnumProc(v49);
    v41 += 2;
  }
  if ( v67 )
  {
    v43 = &v64;
    LOBYTE(v43) = v67 != &v64;
    ((void (__fastcall *)(void ***, void ***))(*v67)[4])(v67, v43);
  }
  sub_180028E0C(*a2);
  result = sub_180038C68(a1);
  if ( v59 )
    result = j_LanguageEnumProc(v58);
  if ( v61 )
    return j_LanguageEnumProc(v60);
  return result;
}
