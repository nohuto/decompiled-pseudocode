/*
 * XREFs of ?OnHeadEventOccurredWorkerThread@MPCHeadUpdateListener@@QEAAXXZ @ 0x1800E16B8
 * Callers:
 *     wistd::__function::__func__lambda_de6b1f6763cb8f9e5e4be32e0bbc9f12__void___cdecl(void)_::operator() @ 0x1800E1150 (wistd--__function--__func__lambda_de6b1f6763cb8f9e5e4be32e0bbc9f12__void___cdecl(void)_--operato.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180033458 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x1800BA694 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@.c)
 *     ??$_Emplace_reallocate@AEAV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEAV23@@Z @ 0x1800E0AD8 (--$_Emplace_reallocate@AEAV-$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@-$v.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall MPCHeadUpdateListener::OnHeadEventOccurredWorkerThread(MPCHeadUpdateListener *this)
{
  MPCHeadUpdateListener *v1; // rdi
  __int64 *v2; // r14
  struct _RTL_CRITICAL_SECTION *v3; // r12
  __int128 v4; // xmm6
  __int128 v5; // xmm7
  __int128 v6; // xmm8
  __int128 v7; // xmm9
  __int64 v8; // r13
  __int64 v9; // r15
  _QWORD **v10; // rdi
  _QWORD *v11; // rbx
  __int64 *v12; // rsi
  __int64 *v13; // r8
  __int64 v14; // rcx
  __int64 *v15; // rbx
  __int64 *i; // rdi
  _QWORD *v17; // rcx
  __int64 v18; // rax
  __int128 v19; // [rsp+38h] [rbp-79h] BYREF
  __int64 *v20; // [rsp+48h] [rbp-69h]
  _OWORD v21[8]; // [rsp+58h] [rbp-59h] BYREF
  __int64 v22; // [rsp+118h] [rbp+67h] BYREF
  __int64 v23; // [rsp+120h] [rbp+6Fh] BYREF
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+128h] [rbp+77h]

  v1 = MPCHeadUpdateListener::s_instance;
  v22 = 0LL;
  v19 = 0LL;
  v2 = 0LL;
  v20 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)MPCHeadUpdateListener::s_instance + 160);
  EnterCriticalSection((LPCRITICAL_SECTION)MPCHeadUpdateListener::s_instance + 4);
  v24 = v3;
  v4 = *((_OWORD *)v1 + 6);
  v5 = *((_OWORD *)v1 + 7);
  v6 = *((_OWORD *)v1 + 8);
  v7 = *((_OWORD *)v1 + 9);
  v8 = *((_QWORD *)v1 + 10);
  v23 = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v9 = *((_QWORD *)v1 + 11);
  v22 = v9;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v10 = (_QWORD **)*((_QWORD *)v1 + 2);
  v11 = *v10;
  v12 = (__int64 *)*((_QWORD *)&v19 + 1);
  while ( v11 != v10 )
  {
    v13 = v11 + 3;
    if ( v12 == v2 )
    {
      std::vector<wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy> &>(
        (__int64 **)&v19,
        v12,
        v13);
      v2 = v20;
      v12 = (__int64 *)*((_QWORD *)&v19 + 1);
    }
    else
    {
      v14 = *v13;
      *v12 = *v13;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      *((_QWORD *)&v19 + 1) = ++v12;
    }
    v11 = (_QWORD *)*v11;
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  v15 = (__int64 *)v19;
  for ( i = (__int64 *)v19; i != v12; ++i )
  {
    v17 = (_QWORD *)*i;
    v18 = *(_QWORD *)*i;
    v21[0] = v4;
    v21[1] = v5;
    v21[2] = v6;
    v21[3] = v7;
    (*(void (__fastcall **)(_QWORD *, _OWORD *, __int64, __int64))(v18 + 24))(v17, v21, v8, v9);
  }
  if ( v15 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>(v15, v12);
    std::_Deallocate<16,0>(v15, 8 * (v2 - v15));
  }
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v22);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v23);
}
