/*
 * XREFs of sub_18005A8D0 @ 0x18005A8D0
 * Callers:
 *     sub_180059A9C @ 0x180059A9C (sub_180059A9C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180059A08 @ 0x180059A08 (sub_180059A08.c)
 *     sub_180059A14 @ 0x180059A14 (sub_180059A14.c)
 *     sub_180059A20 @ 0x180059A20 (sub_180059A20.c)
 *     sub_180059A2C @ 0x180059A2C (sub_180059A2C.c)
 *     sub_180059A38 @ 0x180059A38 (sub_180059A38.c)
 *     sub_180059A44 @ 0x180059A44 (sub_180059A44.c)
 *     sub_180059A50 @ 0x180059A50 (sub_180059A50.c)
 *     sub_180059A5C @ 0x180059A5C (sub_180059A5C.c)
 *     sub_180059C38 @ 0x180059C38 (sub_180059C38.c)
 *     sub_18005B860 @ 0x18005B860 (sub_18005B860.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_18005A8D0(__int64 a1)
{
  __int64 *v1; // rdi
  struct _Mtx_internal_imp_t *v2; // rbx
  int v3; // eax
  _QWORD *v4; // rdx
  int v5; // eax
  _QWORD *v6; // rdx
  int v7; // eax
  _QWORD *v8; // rdx
  int v9; // eax
  _QWORD *v10; // rdx
  int v11; // eax
  _QWORD *v12; // rdx
  int v13; // eax
  _QWORD *v14; // rdx
  int v15; // eax
  _QWORD *v16; // rdx
  int v17; // eax
  _QWORD *v18; // rdx
  __int64 v20; // [rsp+20h] [rbp-60h] BYREF
  struct _Mtx_internal_imp_t *v21; // [rsp+28h] [rbp-58h]
  _QWORD v22[7]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD *v23; // [rsp+68h] [rbp-18h]

  v1 = (__int64 *)(a1 + 496);
  v2 = (struct _Mtx_internal_imp_t *)(a1 + 512);
  v21 = (struct _Mtx_internal_imp_t *)(a1 + 512);
  v3 = Mtx_lock((_Mtx_t)(a1 + 512));
  if ( v3 )
    std::_Throw_C_error(v3);
  v20 = _std_type_info_hash(&qword_1801EB670);
  sub_180059C38(v1, (unsigned __int64 *)&v20);
  v23 = 0LL;
  if ( sub_180059A44() )
  {
    v22[0] = &std::_Func_impl_no_alloc<_lambda_966210904f8ddb1ecfe06826adf9ae70_,std::shared_ptr<Spectre::Engine::RendererResource>,>::`vftable';
    v23 = v22;
  }
  sub_18005B860(v22);
  if ( v23 )
  {
    v4 = v22;
    LOBYTE(v4) = v23 != v22;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v23 + 32LL))(v23, v4);
  }
  Mtx_unlock(v2);
  v21 = v2;
  v5 = Mtx_lock(v2);
  if ( v5 )
    std::_Throw_C_error(v5);
  v20 = _std_type_info_hash(&qword_1801EB588);
  sub_180059C38(v1, (unsigned __int64 *)&v20);
  v23 = 0LL;
  if ( sub_180059A14() )
  {
    v22[0] = &std::_Func_impl_no_alloc<_lambda_2f7a86c028961b1be19ef61dc11d1eb9_,std::shared_ptr<Spectre::Engine::RendererResource>,>::`vftable';
    v23 = v22;
  }
  sub_18005B860(v22);
  if ( v23 )
  {
    v6 = v22;
    LOBYTE(v6) = v23 != v22;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v23 + 32LL))(v23, v6);
  }
  Mtx_unlock(v2);
  v21 = v2;
  v7 = Mtx_lock(v2);
  if ( v7 )
    std::_Throw_C_error(v7);
  v20 = _std_type_info_hash(&qword_1801EB5C8);
  sub_180059C38(v1, (unsigned __int64 *)&v20);
  v23 = 0LL;
  if ( sub_180059A20() )
  {
    v22[0] = &std::_Func_impl_no_alloc<_lambda_55ce5d336e7bc116043b5e90d1e00759_,std::shared_ptr<Spectre::Engine::RendererResource>,>::`vftable';
    v23 = v22;
  }
  sub_18005B860(v22);
  if ( v23 )
  {
    v8 = v22;
    LOBYTE(v8) = v23 != v22;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v23 + 32LL))(v23, v8);
  }
  Mtx_unlock(v2);
  v21 = v2;
  v9 = Mtx_lock(v2);
  if ( v9 )
    std::_Throw_C_error(v9);
  v20 = _std_type_info_hash(&qword_1801EB600);
  sub_180059C38(v1, (unsigned __int64 *)&v20);
  v23 = 0LL;
  if ( sub_180059A2C() )
  {
    v22[0] = &std::_Func_impl_no_alloc<_lambda_76eddb9b03c24eac3632c1cece1b494c_,std::shared_ptr<Spectre::Engine::RendererResource>,>::`vftable';
    v23 = v22;
  }
  sub_18005B860(v22);
  if ( v23 )
  {
    v10 = v22;
    LOBYTE(v10) = v23 != v22;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v23 + 32LL))(v23, v10);
  }
  Mtx_unlock(v2);
  v21 = v2;
  v11 = Mtx_lock(v2);
  if ( v11 )
    std::_Throw_C_error(v11);
  v20 = _std_type_info_hash(&qword_1801EB638);
  sub_180059C38(v1, (unsigned __int64 *)&v20);
  v23 = 0LL;
  if ( sub_180059A08() )
  {
    v22[0] = &std::_Func_impl_no_alloc<_lambda_1ffa97e75efc20dc5ba4ef23b8bdb63a_,std::shared_ptr<Spectre::Engine::RendererResource>,>::`vftable';
    v23 = v22;
  }
  sub_18005B860(v22);
  if ( v23 )
  {
    v12 = v22;
    LOBYTE(v12) = v23 != v22;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v23 + 32LL))(v23, v12);
  }
  Mtx_unlock(v2);
  v21 = v2;
  v13 = Mtx_lock(v2);
  if ( v13 )
    std::_Throw_C_error(v13);
  v20 = _std_type_info_hash(&qword_1801EAF08);
  sub_180059C38(v1, (unsigned __int64 *)&v20);
  v23 = 0LL;
  if ( sub_180059A50() )
  {
    v22[0] = &std::_Func_impl_no_alloc<_lambda_96714d38a6c31817520ed894af71e986_,std::shared_ptr<Spectre::Engine::RendererResource>,>::`vftable';
    v23 = v22;
  }
  sub_18005B860(v22);
  if ( v23 )
  {
    v14 = v22;
    LOBYTE(v14) = v23 != v22;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v23 + 32LL))(v23, v14);
  }
  Mtx_unlock(v2);
  v21 = v2;
  v15 = Mtx_lock(v2);
  if ( v15 )
    std::_Throw_C_error(v15);
  v20 = _std_type_info_hash(&qword_1801EB518);
  sub_180059C38(v1, (unsigned __int64 *)&v20);
  v23 = 0LL;
  if ( sub_180059A5C() )
  {
    v22[0] = &std::_Func_impl_no_alloc<_lambda_b20bfe755ee06a1fa4c395733db982e8_,std::shared_ptr<Spectre::Engine::RendererResource>,>::`vftable';
    v23 = v22;
  }
  sub_18005B860(v22);
  if ( v23 )
  {
    v16 = v22;
    LOBYTE(v16) = v23 != v22;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v23 + 32LL))(v23, v16);
  }
  Mtx_unlock(v2);
  v21 = v2;
  v17 = Mtx_lock(v2);
  if ( v17 )
    std::_Throw_C_error(v17);
  v20 = _std_type_info_hash(&qword_1801EB550);
  sub_180059C38(v1, (unsigned __int64 *)&v20);
  v23 = 0LL;
  if ( sub_180059A38() )
  {
    v22[0] = &std::_Func_impl_no_alloc<_lambda_838beeeaa6fb5cde8c4026525d949f60_,std::shared_ptr<Spectre::Engine::RendererResource>,>::`vftable';
    v23 = v22;
  }
  sub_18005B860(v22);
  if ( v23 )
  {
    v18 = v22;
    LOBYTE(v18) = v23 != v22;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v23 + 32LL))(v23, v18);
  }
  return Mtx_unlock(v2);
}
