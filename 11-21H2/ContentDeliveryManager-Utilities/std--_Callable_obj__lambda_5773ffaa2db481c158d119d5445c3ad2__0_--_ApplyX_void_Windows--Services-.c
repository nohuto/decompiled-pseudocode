/*
 * XREFs of std::_Callable_obj__lambda_5773ffaa2db481c158d119d5445c3ad2__0_::_ApplyX_void_Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal___enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_ @ 0x18009A20C
 * Callers:
 *     std::_Func_impl_std::_Callable_obj__lambda_5773ffaa2db481c158d119d5445c3ad2__0__std::allocator_std::_Func_class_void_Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal___enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil____void_Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal___enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x1800A3D20 (std--_Func_impl_std--_Callable_obj__lambda_5773ffaa2db481c158d119d5445c3ad2__0__std_ea_1800A3D20.c)
 * Callees:
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1800042D0 (-_Xbad_function_call@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ?_Reset0@?$_Ptr_base@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAAXPEAVCorrelationVectorWrapper@Background@ContentDeliveryManager@@PEAV_Ref_count_base@2@@Z @ 0x1800696B0 (-_Reset0@-$_Ptr_base@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAAXPEA.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_37cf5d91b7f47b6dc10f0d32e6c43ea5___ @ 0x1800987D4 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_37cf5d91b7f47b6dc10.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall std::_Callable_obj__lambda_5773ffaa2db481c158d119d5445c3ad2__0_::_ApplyX_void_Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal___enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_(
        __int64 **a1,
        __int64 *a2,
        int *a3,
        int *a4)
{
  int v5; // r10d
  int v6; // r9d
  __int64 v7; // rdi
  _DWORD *v8; // rax
  __int64 *v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned int *v12; // rax
  __int64 result; // rax
  _QWORD *v14; // rcx
  _QWORD *v15; // rdx
  _QWORD *v16; // rdx
  char *v17; // rax
  char *v18; // rcx
  __int64 (__fastcall **v19)(char *, _QWORD *); // r8
  __int64 v20; // rax
  int v21; // [rsp+20h] [rbp-29h] BYREF
  int v22; // [rsp+28h] [rbp-21h] BYREF
  __int64 v23; // [rsp+30h] [rbp-19h] BYREF
  __int128 v24; // [rsp+38h] [rbp-11h] BYREF
  unsigned int *v25[5]; // [rsp+50h] [rbp+7h] BYREF
  _QWORD v26[3]; // [rsp+78h] [rbp+2Fh] BYREF
  _QWORD *v27; // [rsp+90h] [rbp+47h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v5 = *a4;
  v22 = *a4;
  v6 = *a3;
  v21 = *a3;
  v7 = *a2;
  v8 = &unk_1801AD560;
  while ( *v8 != v6 || v8[1] != v5 )
  {
    v8 += 10;
    if ( v8 == (_DWORD *)&unk_1801AD600 )
    {
      v26[0] = &std::_Func_impl<std::_Callable_fun<void (*const)(Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>),0>,std::allocator<std::_Func_class<void,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,void,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
      v26[1] = Windows::Services::TargetedContent::Internal::NoopTriggerTransition;
      v27 = v26;
      goto LABEL_6;
    }
  }
  v17 = (char *)(v8 + 2);
  v27 = 0LL;
  v18 = (char *)*((_QWORD *)v17 + 3);
  if ( v18 )
  {
    v19 = *(__int64 (__fastcall ***)(char *, _QWORD *))v18;
    if ( v18 == v17 )
      v20 = (*v19)(v18, v26);
    else
      v20 = (*v19)(v18, 0LL);
    v27 = (_QWORD *)v20;
  }
  else
  {
    v27 = 0LL;
  }
LABEL_6:
  v9 = *a1;
  v24 = 0LL;
  v10 = v9[1];
  v11 = *v9;
  if ( v10 )
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
  std::_Ptr_base<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Reset0(&v24, v11, v10);
  v25[4] = (unsigned int *)&v24;
  v23 = v7;
  if ( !v27 )
    std::_Xbad_function_call();
  (*(void (__fastcall **)(_QWORD *, __int64 *, __int128 *))(*v27 + 16LL))(v27, &v23, &v24);
  std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)&v24);
  v12 = (unsigned int *)*a1;
  v25[0] = (unsigned int *)&v21;
  v25[1] = (unsigned int *)&v22;
  v25[2] = v12;
  result = Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_37cf5d91b7f47b6dc10f0d32e6c43ea5___(
             v7,
             v25);
  if ( (int)result < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      418LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)result,
      v21);
  v14 = v27;
  if ( v27 )
  {
    v15 = v26;
    LOBYTE(v15) = v27 != v26;
    result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*v27 + 32LL))(v27, v15);
    v14 = 0LL;
    v27 = 0LL;
  }
  if ( v14 )
  {
    v16 = v26;
    LOBYTE(v16) = v14 != v26;
    return (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*v14 + 32LL))(v14, v16);
  }
  return result;
}
