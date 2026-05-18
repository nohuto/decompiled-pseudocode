/*
 * XREFs of sub_1800DC2D0 @ 0x1800DC2D0
 * Callers:
 *     sub_1800D8F04 @ 0x1800D8F04 (sub_1800D8F04.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180059C38 @ 0x180059C38 (sub_180059C38.c)
 *     sub_18005B860 @ 0x18005B860 (sub_18005B860.c)
 *     sub_1800D8D44 @ 0x1800D8D44 (sub_1800D8D44.c)
 *     sub_1800D8D50 @ 0x1800D8D50 (sub_1800D8D50.c)
 *     sub_1800D8D5C @ 0x1800D8D5C (sub_1800D8D5C.c)
 *     sub_1800D8D68 @ 0x1800D8D68 (sub_1800D8D68.c)
 *     sub_1800D8D74 @ 0x1800D8D74 (sub_1800D8D74.c)
 *     sub_1800D8D80 @ 0x1800D8D80 (sub_1800D8D80.c)
 *     sub_1800D8D8C @ 0x1800D8D8C (sub_1800D8D8C.c)
 *     sub_1800D8D98 @ 0x1800D8D98 (sub_1800D8D98.c)
 *     sub_1800D8DA4 @ 0x1800D8DA4 (sub_1800D8DA4.c)
 *     sub_1800D8DB0 @ 0x1800D8DB0 (sub_1800D8DB0.c)
 *     sub_1800D8DBC @ 0x1800D8DBC (sub_1800D8DBC.c)
 *     sub_1800D8DC8 @ 0x1800D8DC8 (sub_1800D8DC8.c)
 *     sub_1800D8DD4 @ 0x1800D8DD4 (sub_1800D8DD4.c)
 *     sub_1800D8DE0 @ 0x1800D8DE0 (sub_1800D8DE0.c)
 *     sub_1800D8DEC @ 0x1800D8DEC (sub_1800D8DEC.c)
 *     sub_1800D8DF8 @ 0x1800D8DF8 (sub_1800D8DF8.c)
 *     sub_1800D8E04 @ 0x1800D8E04 (sub_1800D8E04.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_1800DC2D0(__int64 a1)
{
  __int64 *v1; // rdi
  struct _Mtx_internal_imp_t *v2; // rbx
  int v3; // eax
  __int64 v4; // rdx
  _QWORD *v5; // rdx
  int v6; // eax
  __int64 v7; // rdx
  _QWORD *v8; // rdx
  int v9; // eax
  __int64 v10; // rdx
  _QWORD *v11; // rdx
  int v12; // eax
  __int64 v13; // rdx
  _QWORD *v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  _QWORD *v17; // rdx
  int v18; // eax
  __int64 v19; // rdx
  _QWORD *v20; // rdx
  int v21; // eax
  __int64 v22; // rdx
  _QWORD *v23; // rdx
  int v24; // eax
  __int64 v25; // rdx
  _QWORD *v26; // rdx
  int v27; // eax
  __int64 v28; // rdx
  _QWORD *v29; // rdx
  int v30; // eax
  __int64 v31; // rdx
  _QWORD *v32; // rdx
  int v33; // eax
  __int64 v34; // rdx
  _QWORD *v35; // rdx
  int v36; // eax
  __int64 v37; // rdx
  _QWORD *v38; // rdx
  int v39; // eax
  __int64 v40; // rdx
  _QWORD *v41; // rdx
  int v42; // eax
  __int64 v43; // rdx
  _QWORD *v44; // rdx
  int v45; // eax
  __int64 v46; // rdx
  _QWORD *v47; // rdx
  int v48; // eax
  __int64 v49; // rdx
  _QWORD *v50; // rdx
  int v51; // eax
  __int64 v52; // rdx
  _QWORD *v53; // rdx
  __int64 v55; // [rsp+20h] [rbp-60h] BYREF
  struct _Mtx_internal_imp_t *v56; // [rsp+28h] [rbp-58h]
  _QWORD v57[7]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD *v58; // [rsp+68h] [rbp-18h]

  v1 = (__int64 *)(a1 + 496);
  v2 = (struct _Mtx_internal_imp_t *)(a1 + 512);
  v56 = (struct _Mtx_internal_imp_t *)(a1 + 512);
  v3 = Mtx_lock((_Mtx_t)(a1 + 512));
  if ( v3 )
    std::_Throw_C_error(v3);
  v55 = _std_type_info_hash(&qword_1801EAFD8);
  sub_180059C38(v1, (unsigned __int64 *)&v55);
  v58 = 0LL;
  if ( sub_1800D8D44() )
  {
    v57[0] = &std::_Func_impl_no_alloc<_lambda_075568019f0ba5dd51131882019b8c39_,std::shared_ptr<Spectre::Engine::RendererResource>,>::`vftable';
    v58 = v57;
  }
  sub_18005B860((__int64)v57, v4);
  if ( v58 )
  {
    v5 = v57;
    LOBYTE(v5) = v58 != v57;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v58 + 32LL))(v58, v5);
  }
  Mtx_unlock(v2);
  v56 = v2;
  v6 = Mtx_lock(v2);
  if ( v6 )
    std::_Throw_C_error(v6);
  v55 = _std_type_info_hash(&qword_1801EBCB0);
  sub_180059C38(v1, (unsigned __int64 *)&v55);
  v58 = 0LL;
  if ( sub_1800D8D80() )
  {
    v57[0] = &std::_Func_impl_no_alloc<_lambda_556c08597dcc0a279de66e0fd68990af_,std::shared_ptr<Spectre::Engine::RendererResource>,>::`vftable';
    v58 = v57;
  }
  sub_18005B860((__int64)v57, v7);
  if ( v58 )
  {
    v8 = v57;
    LOBYTE(v8) = v58 != v57;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v58 + 32LL))(v58, v8);
  }
  Mtx_unlock(v2);
  v56 = v2;
  v9 = Mtx_lock(v2);
  if ( v9 )
    std::_Throw_C_error(v9);
  v55 = _std_type_info_hash(&qword_1801EB550);
  sub_180059C38(v1, (unsigned __int64 *)&v55);
  v58 = 0LL;
  if ( sub_1800D8DC8() )
  {
    v57[0] = &std::_Func_impl_no_alloc<_lambda_8be67bcf9b5b289d242b19ff70747553_,std::shared_ptr<Spectre::Engine::RendererResource>,>::`vftable';
    v58 = v57;
  }
  sub_18005B860((__int64)v57, v10);
  if ( v58 )
  {
    v11 = v57;
    LOBYTE(v11) = v58 != v57;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v58 + 32LL))(v58, v11);
  }
  Mtx_unlock(v2);
  v56 = v2;
  v12 = Mtx_lock(v2);
  if ( v12 )
    std::_Throw_C_error(v12);
  v55 = _std_type_info_hash(&qword_1801EB600);
  sub_180059C38(v1, (unsigned __int64 *)&v55);
  v58 = 0LL;
  if ( sub_1800D8DD4() )
  {
    v57[0] = &std::_Func_impl_no_alloc<_lambda_973e7e53f49bf9ebe6ecec01f6a7b8f1_,std::shared_ptr<Spectre::Engine::RendererResource>,>::`vftable';
    v58 = v57;
  }
  sub_18005B860((__int64)v57, v13);
  if ( v58 )
  {
    v14 = v57;
    LOBYTE(v14) = v58 != v57;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v58 + 32LL))(v58, v14);
  }
  Mtx_unlock(v2);
  v56 = v2;
  v15 = Mtx_lock(v2);
  if ( v15 )
    std::_Throw_C_error(v15);
  v55 = _std_type_info_hash(&qword_1801EAF08);
  sub_180059C38(v1, (unsigned __int64 *)&v55);
  v58 = 0LL;
  if ( sub_1800D8D68() )
  {
    v57[0] = &std::_Func_impl_no_alloc<_lambda_4751ef0567697aa51a05750371275a1e_,std::shared_ptr<Spectre::Engine::RendererResource>,>::`vftable';
    v58 = v57;
  }
  sub_18005B860((__int64)v57, v16);
  if ( v58 )
  {
    v17 = v57;
    LOBYTE(v17) = v58 != v57;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v58 + 32LL))(v58, v17);
  }
  Mtx_unlock(v2);
  v56 = v2;
  v18 = Mtx_lock(v2);
  if ( v18 )
    std::_Throw_C_error(v18);
  v55 = _std_type_info_hash(&qword_1801EB518);
  sub_180059C38(v1, (unsigned __int64 *)&v55);
  v58 = 0LL;
  if ( sub_1800D8DE0() )
  {
    v57[0] = &std::_Func_impl_no_alloc<_lambda_ad0815aa9f361cf5dc68792ada8f36bf_,std::shared_ptr<Spectre::Engine::RendererResource>,>::`vftable';
    v58 = v57;
  }
  sub_18005B860((__int64)v57, v19);
  if ( v58 )
  {
    v20 = v57;
    LOBYTE(v20) = v58 != v57;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v58 + 32LL))(v58, v20);
  }
  Mtx_unlock(v2);
  v56 = v2;
  v21 = Mtx_lock(v2);
  if ( v21 )
    std::_Throw_C_error(v21);
  v55 = _std_type_info_hash(&qword_1801EABF8);
  sub_180059C38(v1, (unsigned __int64 *)&v55);
  v58 = 0LL;
  if ( sub_1800D8E04() )
  {
    v57[0] = &std::_Func_impl_no_alloc<_lambda_e7785b2161b4c7cd8c3a887037d40e0a_,std::shared_ptr<Spectre::Engine::RendererResource>,>::`vftable';
    v58 = v57;
  }
  sub_18005B860((__int64)v57, v22);
  if ( v58 )
  {
    v23 = v57;
    LOBYTE(v23) = v58 != v57;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v58 + 32LL))(v58, v23);
  }
  Mtx_unlock(v2);
  v56 = v2;
  v24 = Mtx_lock(v2);
  if ( v24 )
    std::_Throw_C_error(v24);
  v55 = _std_type_info_hash(&qword_1801EB670);
  sub_180059C38(v1, (unsigned __int64 *)&v55);
  v58 = 0LL;
  if ( sub_1800D8DEC() )
  {
    v57[0] = &std::_Func_impl_no_alloc<_lambda_bf7fa8efd816e1ebfe1394980608a68c_,std::shared_ptr<Spectre::Engine::RendererResource>,>::`vftable';
    v58 = v57;
  }
  sub_18005B860((__int64)v57, v25);
  if ( v58 )
  {
    v26 = v57;
    LOBYTE(v26) = v58 != v57;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v58 + 32LL))(v58, v26);
  }
  Mtx_unlock(v2);
  v56 = v2;
  v27 = Mtx_lock(v2);
  if ( v27 )
    std::_Throw_C_error(v27);
  v55 = _std_type_info_hash(&qword_1801EBC78);
  sub_180059C38(v1, (unsigned __int64 *)&v55);
  v58 = 0LL;
  if ( sub_1800D8D8C() )
  {
    v57[0] = &std::_Func_impl_no_alloc<_lambda_67580e89edb989bae1ab2e6bcdd7b69a_,std::shared_ptr<Spectre::Engine::RendererResource>,>::`vftable';
    v58 = v57;
  }
  sub_18005B860((__int64)v57, v28);
  if ( v58 )
  {
    v29 = v57;
    LOBYTE(v29) = v58 != v57;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v58 + 32LL))(v58, v29);
  }
  Mtx_unlock(v2);
  v56 = v2;
  v30 = Mtx_lock(v2);
  if ( v30 )
    std::_Throw_C_error(v30);
  v55 = _std_type_info_hash(&qword_1801EB5C8);
  sub_180059C38(v1, (unsigned __int64 *)&v55);
  v58 = 0LL;
  if ( sub_1800D8DF8() )
  {
    v57[0] = &std::_Func_impl_no_alloc<_lambda_d7f4d8d432685ceaae68a7b31eb4d631_,std::shared_ptr<Spectre::Engine::RendererResource>,>::`vftable';
    v58 = v57;
  }
  sub_18005B860((__int64)v57, v31);
  if ( v58 )
  {
    v32 = v57;
    LOBYTE(v32) = v58 != v57;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v58 + 32LL))(v58, v32);
  }
  Mtx_unlock(v2);
  v56 = v2;
  v33 = Mtx_lock(v2);
  if ( v33 )
    std::_Throw_C_error(v33);
  v55 = _std_type_info_hash(&qword_1801EB638);
  sub_180059C38(v1, (unsigned __int64 *)&v55);
  v58 = 0LL;
  if ( sub_1800D8D98() )
  {
    v57[0] = &std::_Func_impl_no_alloc<_lambda_70a7c175e000a2384906e3376e592082_,std::shared_ptr<Spectre::Engine::RendererResource>,>::`vftable';
    v58 = v57;
  }
  sub_18005B860((__int64)v57, v34);
  if ( v58 )
  {
    v35 = v57;
    LOBYTE(v35) = v58 != v57;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v58 + 32LL))(v58, v35);
  }
  Mtx_unlock(v2);
  v56 = v2;
  v36 = Mtx_lock(v2);
  if ( v36 )
    std::_Throw_C_error(v36);
  v55 = _std_type_info_hash(&qword_1801EB588);
  sub_180059C38(v1, (unsigned __int64 *)&v55);
  v58 = 0LL;
  if ( sub_1800D8DA4() )
  {
    v57[0] = &std::_Func_impl_no_alloc<_lambda_74281c84ea322a35b112587499033771_,std::shared_ptr<Spectre::Engine::RendererResource>,>::`vftable';
    v58 = v57;
  }
  sub_18005B860((__int64)v57, v37);
  if ( v58 )
  {
    v38 = v57;
    LOBYTE(v38) = v58 != v57;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v58 + 32LL))(v58, v38);
  }
  Mtx_unlock(v2);
  v56 = v2;
  v39 = Mtx_lock(v2);
  if ( v39 )
    std::_Throw_C_error(v39);
  v55 = _std_type_info_hash(&qword_1801EBBC8);
  sub_180059C38(v1, (unsigned __int64 *)&v55);
  v58 = 0LL;
  if ( sub_1800D8DB0() )
  {
    v57[0] = &std::_Func_impl_no_alloc<_lambda_76d404fbcba0e82d74f92b1af906afb0_,std::shared_ptr<Spectre::Engine::RendererResource>,>::`vftable';
    v58 = v57;
  }
  sub_18005B860((__int64)v57, v40);
  if ( v58 )
  {
    v41 = v57;
    LOBYTE(v41) = v58 != v57;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v58 + 32LL))(v58, v41);
  }
  Mtx_unlock(v2);
  v56 = v2;
  v42 = Mtx_lock(v2);
  if ( v42 )
    std::_Throw_C_error(v42);
  v55 = _std_type_info_hash(&qword_1801EBC40);
  sub_180059C38(v1, (unsigned __int64 *)&v55);
  v58 = 0LL;
  if ( sub_1800D8D50() )
  {
    v57[0] = &std::_Func_impl_no_alloc<_lambda_0afe27ddc9a0cdc90bbf3e2db7bb1a1d_,std::shared_ptr<Spectre::Engine::RendererResource>,>::`vftable';
    v58 = v57;
  }
  sub_18005B860((__int64)v57, v43);
  if ( v58 )
  {
    v44 = v57;
    LOBYTE(v44) = v58 != v57;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v58 + 32LL))(v58, v44);
  }
  Mtx_unlock(v2);
  v56 = v2;
  v45 = Mtx_lock(v2);
  if ( v45 )
    std::_Throw_C_error(v45);
  v55 = _std_type_info_hash(&qword_1801EBC08);
  sub_180059C38(v1, (unsigned __int64 *)&v55);
  v58 = 0LL;
  if ( sub_1800D8DBC() )
  {
    v57[0] = &std::_Func_impl_no_alloc<_lambda_8063c925c9079455a8b5523fef35cede_,std::shared_ptr<Spectre::Engine::RendererResource>,>::`vftable';
    v58 = v57;
  }
  sub_18005B860((__int64)v57, v46);
  if ( v58 )
  {
    v47 = v57;
    LOBYTE(v47) = v58 != v57;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v58 + 32LL))(v58, v47);
  }
  Mtx_unlock(v2);
  v56 = v2;
  v48 = Mtx_lock(v2);
  if ( v48 )
    std::_Throw_C_error(v48);
  v55 = _std_type_info_hash(&qword_1801EBB48);
  sub_180059C38(v1, (unsigned __int64 *)&v55);
  v58 = 0LL;
  if ( sub_1800D8D5C() )
  {
    v57[0] = &std::_Func_impl_no_alloc<_lambda_1bf4f65eb3aa0df8ad84d0734f8c2df8_,std::shared_ptr<Spectre::Engine::RendererResource>,>::`vftable';
    v58 = v57;
  }
  sub_18005B860((__int64)v57, v49);
  if ( v58 )
  {
    v50 = v57;
    LOBYTE(v50) = v58 != v57;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v58 + 32LL))(v58, v50);
  }
  Mtx_unlock(v2);
  v56 = v2;
  v51 = Mtx_lock(v2);
  if ( v51 )
    std::_Throw_C_error(v51);
  v55 = _std_type_info_hash(&qword_1801EAFA8);
  sub_180059C38(v1, (unsigned __int64 *)&v55);
  v58 = 0LL;
  if ( sub_1800D8D74() )
  {
    v57[0] = &std::_Func_impl_no_alloc<_lambda_53997277a49255653d15a2e9d753df18_,std::shared_ptr<Spectre::Engine::RendererResource>,>::`vftable';
    v58 = v57;
  }
  sub_18005B860((__int64)v57, v52);
  if ( v58 )
  {
    v53 = v57;
    LOBYTE(v53) = v58 != v57;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v58 + 32LL))(v58, v53);
  }
  return Mtx_unlock(v2);
}
