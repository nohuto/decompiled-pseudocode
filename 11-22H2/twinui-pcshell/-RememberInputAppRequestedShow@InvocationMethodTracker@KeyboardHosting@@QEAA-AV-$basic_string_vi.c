/*
 * XREFs of ?RememberInputAppRequestedShow@InvocationMethodTracker@KeyboardHosting@@QEAA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@_NW4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@winrt@@0@Z @ 0x180530190
 * Callers:
 *     ?UpdateInvocationMethodShellPreference@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18051B9E8 (-UpdateInvocationMethodShellPreference@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x1804AB598 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 *     ?RememberInputAppRequestedShowInternal@InvocationMethodTracker@KeyboardHosting@@AEAA?AW4InvocationMethod@12@_NW4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@winrt@@0@Z @ 0x180530274 (-RememberInputAppRequestedShowInternal@InvocationMethodTracker@KeyboardHosting@@AEAA-AW4Invocati.c)
 */

_QWORD *__fastcall KeyboardHosting::InvocationMethodTracker::RememberInputAppRequestedShow(
        PSRWLOCK SRWLock,
        _QWORD *a2,
        char a3,
        __int64 a4,
        char a5)
{
  unsigned int v5; // eax
  _QWORD *v6; // rbx
  int v8; // esi
  char *v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = a4;
  LOBYTE(a4) = a5;
  v6 = a2;
  LOBYTE(a2) = a3;
  v8 = KeyboardHosting::InvocationMethodTracker::RememberInputAppRequestedShowInternal(SRWLock, a2, v5, a4);
  AcquireSRWLockExclusive(SRWLock);
  if ( HIDWORD(SRWLock[1].Ptr) == v8 )
  {
    *v6 = 0LL;
    v6[1] = 0LL;
  }
  else
  {
    HIDWORD(SRWLock[1].Ptr) = v8;
    if ( v8 )
    {
      if ( v8 == 1 )
      {
        v6[1] = 3LL;
        *v6 = L"Tap";
      }
      else
      {
        if ( v8 != 2 )
        {
          LODWORD(v10) = v8;
          wil::details::in1diag3::FailFast_UnexpectedMsg(
            retaddr,
            (void *)0x4F,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\invocationmethodtracker.cpp",
            "Unknown Invocation Method: %d",
            v10);
        }
        v6[1] = 6LL;
        *v6 = L"Button";
      }
    }
    else
    {
      v6[1] = 4LL;
      *v6 = L"None";
    }
  }
  ReleaseSRWLockExclusive(SRWLock);
  return v6;
}
