/*
 * XREFs of ?EnsureLockHeldExclusive@WindowingEnvironmentManager@@UEAAXXZ @ 0x1801561A0
 * Callers:
 *     ?ResetWindowingEnvironments@WindowingEnvironmentManager@@AEAAJXZ @ 0x180156070 (-ResetWindowingEnvironments@WindowingEnvironmentManager@@AEAAJXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall WindowingEnvironmentManager::EnsureLockHeldExclusive(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rbx
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = this + 2;
  if ( TryAcquireSRWLockShared(this + 2) )
  {
    v4 = v1;
    if ( v1 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xF4,
        (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        v2);
  }
  else
  {
    v4 = 0LL;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v4);
}
