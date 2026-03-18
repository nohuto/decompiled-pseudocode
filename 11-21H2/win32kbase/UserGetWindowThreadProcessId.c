/*
 * XREFs of UserGetWindowThreadProcessId @ 0x1C0166F24
 * Callers:
 *     ?Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z @ 0x1C00967A8 (-Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z.c)
 *     NtUserGetWindowThreadProcessId @ 0x1C015B100 (NtUserGetWindowThreadProcessId.c)
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     HMValidateCatHandleNoRip @ 0x1C0210298 (HMValidateCatHandleNoRip.c)
 */

__int64 __fastcall UserGetWindowThreadProcessId(__int64 a1, _DWORD *a2)
{
  unsigned int ThreadId; // edi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx

  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
  ThreadId = 0;
  v5 = HMValidateCatHandleNoRip(a1);
  if ( v5 )
  {
    v10 = *(_QWORD *)(v5 + 16);
    ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v10);
    if ( a2 )
      *a2 = (unsigned int)PsGetProcessId(**(PEPROCESS **)(v10 + 424));
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return ThreadId;
}
