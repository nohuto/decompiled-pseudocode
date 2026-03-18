/*
 * XREFs of NtUserIsMouseInPointerEnabled @ 0x1C015F6F0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 */

__int64 NtUserIsMouseInPointerEnabled()
{
  unsigned int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
  v0 = (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 424) + 820LL) >> 2) & 1;
  UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
  return v0;
}
