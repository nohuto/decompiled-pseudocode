/*
 * XREFs of ?GetWindowId@UwpWindowWrapperBase@@UEAAJPEAK@Z @ 0x180415240
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall UwpWindowWrapperBase::GetWindowId(UwpWindowWrapperBase *this, unsigned int *a2)
{
  ULONGLONG v4; // rdi
  ULONGLONG TickCount64; // rax
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 34) + 216LL))(*((_QWORD *)this + 34), &SRWLock);
  v4 = GetTickCount64() + 2000;
  while ( !*((_DWORD *)this + 72) )
  {
    TickCount64 = GetTickCount64();
    if ( TickCount64 > v4 )
      break;
    if ( !SleepConditionVariableSRW((PCONDITION_VARIABLE)this + 37, SRWLock, v4 - TickCount64, 1u) )
    {
      if ( GetLastError() != 1460 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0xC78,
          (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
          v7);
      break;
    }
  }
  *a2 = *((_DWORD *)this + 72);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&SRWLock);
  return 0LL;
}
