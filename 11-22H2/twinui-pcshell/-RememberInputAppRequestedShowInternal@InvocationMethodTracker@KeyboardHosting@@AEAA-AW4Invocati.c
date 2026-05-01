/*
 * XREFs of ?RememberInputAppRequestedShowInternal@InvocationMethodTracker@KeyboardHosting@@AEAA?AW4InvocationMethod@12@_NW4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@winrt@@0@Z @ 0x180530274
 * Callers:
 *     ?RememberInputAppRequestedShow@InvocationMethodTracker@KeyboardHosting@@QEAA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@_NW4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@winrt@@0@Z @ 0x180530190 (-RememberInputAppRequestedShow@InvocationMethodTracker@KeyboardHosting@@QEAA-AV-$basic_string_vi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::InvocationMethodTracker::RememberInputAppRequestedShowInternal(
        __int64 a1,
        char a2,
        int a3,
        char a4)
{
  unsigned int v8; // esi

  AcquireSRWLockExclusive((PSRWLOCK)a1);
  v8 = 2;
  if ( a3 == 2 || a4 )
  {
    if ( a1 )
      ReleaseSRWLockExclusive((PSRWLOCK)a1);
    return 0LL;
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 16) || *(_BYTE *)(a1 + 8) )
    {
      v8 = 0;
    }
    else if ( !a2 )
    {
      v8 = 1;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)a1);
    return v8;
  }
}
