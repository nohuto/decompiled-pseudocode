/*
 * XREFs of UserGetDesktopIdForCurrentThread @ 0x1C0059368
 * Callers:
 *     NtDCompositionGetMaterialProperty @ 0x1C0057CE0 (NtDCompositionGetMaterialProperty.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 */

__int64 UserGetDesktopIdForCurrentThread()
{
  __int64 v0; // rdx
  __int64 *v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rbx
  __int64 **v5; // rax

  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
  v4 = 0LL;
  if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) )
  {
    v5 = *(__int64 ***)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL);
    v1 = *v5;
    v4 = **v5;
  }
  UserSessionSwitchLeaveCrit((__int64)v1, v0, v2, v3);
  return v4;
}
