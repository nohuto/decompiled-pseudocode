/*
 * XREFs of ?RemovePendingActivation@WindowEventDispatcher@@UEAAJ_K@Z @ 0x1803E5FB0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7cb52cc91a5a866bcb2f7ec0d39eb038___::Run @ 0x1803E63E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7cb52cc91a5a866bcb2f7ec0d39eb038___--Run.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?QueuePendingActivationForDestruction@WindowEventDispatcher@@AEAAX_K@Z @ 0x1803E5930 (-QueuePendingActivationForDestruction@WindowEventDispatcher@@AEAAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowEventDispatcher::RemovePendingActivation(RTL_SRWLOCK *this, __int64 a2)
{
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  wil::AcquireSRWLockExclusive(&v7, this + 56);
  try
  {
    WindowEventDispatcher::QueuePendingActivationForDestruction((WindowEventDispatcher *)&this[-3], a2);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v7);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x761,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      v4);
  }
  return 0LL;
}
