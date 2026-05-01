/*
 * XREFs of ?GetWindowId@UwpWindowWrapperBase@@UEAAJPEAK@Z @ 0x1804F11F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall UwpWindowWrapperBase::GetWindowId(UwpWindowWrapperBase *this, unsigned int *a2)
{
  ULONGLONG v4; // rdi
  ULONGLONG TickCount64; // rax
  RTL_SRWLOCK *v6; // rcx
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 35) + 216LL))(*((_QWORD *)this + 35), &SRWLock);
  v4 = GetTickCount64() + 2000;
  while ( !*((_DWORD *)this + 74) )
  {
    TickCount64 = GetTickCount64();
    if ( TickCount64 > v4 )
      break;
    if ( !SleepConditionVariableSRW((PCONDITION_VARIABLE)this + 38, SRWLock, v4 - TickCount64, 1u) )
    {
      if ( GetLastError() != 1460 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0xC96,
          (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
          v8);
      break;
    }
  }
  v6 = SRWLock;
  *a2 = *((_DWORD *)this + 74);
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return 0LL;
}
