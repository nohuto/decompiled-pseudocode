/*
 * XREFs of NtUserGetKeyboardLayoutList @ 0x1C004FCF0
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     _GetKeyboardLayoutList @ 0x1C004FD7C (_GetKeyboardLayoutList.c)
 */

__int64 __fastcall NtUserGetKeyboardLayoutList(unsigned int a1, volatile void *a2)
{
  __int64 v3; // rdi
  __int64 CurrentProcessWow64Process; // rax
  unsigned int KeyboardLayoutList; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  v3 = a1;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
  if ( a2 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
    ProbeForWrite(a2, 8 * v3, CurrentProcessWow64Process != 0 ? 1 : 4);
  }
  else
  {
    LODWORD(v3) = 0;
  }
  KeyboardLayoutList = GetKeyboardLayoutList((unsigned int)v3, a2);
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return KeyboardLayoutList;
}
