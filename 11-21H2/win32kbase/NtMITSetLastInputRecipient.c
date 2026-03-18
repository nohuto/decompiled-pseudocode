/*
 * XREFs of NtMITSetLastInputRecipient @ 0x1C0155BB0
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0037CB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     PtiFromThreadId @ 0x1C0091E00 (PtiFromThreadId.c)
 *     ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z @ 0x1C00B18B0 (-SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z.c)
 */

__int64 __fastcall NtMITSetLastInputRecipient(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct tagTHREADINFO *v11; // rax

  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
  v5 = 0LL;
  if ( CInputThreadBase::IsInputThread(gpInputThread) )
  {
    v11 = (struct tagTHREADINFO *)PtiFromThreadId(a1);
    if ( v11 )
    {
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, v11, 0);
      v5 = 1LL;
      goto LABEL_7;
    }
    v6 = 87LL;
  }
  else
  {
    v6 = 5LL;
  }
  UserSetLastError(v6, v2, v3, v4);
LABEL_7:
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v5;
}
