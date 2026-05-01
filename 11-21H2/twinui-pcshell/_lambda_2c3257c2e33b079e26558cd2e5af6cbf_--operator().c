/*
 * XREFs of _lambda_2c3257c2e33b079e26558cd2e5af6cbf_::operator() @ 0x180147F88
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_2c3257c2e33b079e26558cd2e5af6cbf___::Run @ 0x180147F60 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_2c3257c2e33b079e26558cd2e5af6cbf___--.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_2c3257c2e33b079e26558cd2e5af6cbf_::operator()(__int64 a1)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  RTL_SRWLOCK *v6; // rbx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v11; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0LL;
  v2 = **(__int64 ***)a1;
  v3 = *v2;
  v10 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v3 + 48))(v2, &v10);
  v5 = v4;
  if ( v4 < 0 )
  {
    v8 = 632LL;
  }
  else
  {
    v6 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 8) + 248LL);
    AcquireSRWLockShared(v6);
    v11 = v6;
    LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(a1 + 8) + 200LL);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v11);
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, bool))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 280LL) + 128LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 280LL),
           v10,
           (_BYTE)v6 == 0);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v5 = 0;
      goto LABEL_4;
    }
    v8 = 639LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
    (const char *)(unsigned int)v4);
LABEL_4:
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return v5;
}
