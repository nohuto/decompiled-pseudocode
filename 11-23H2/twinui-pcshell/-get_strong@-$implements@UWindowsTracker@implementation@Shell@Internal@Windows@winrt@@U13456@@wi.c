/*
 * XREFs of ?get_strong@?$implements@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@U13456@@winrt@@QEAA?AU?$com_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1801BEBD0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::WindowsTracker::SetEventHookForWindowAsync$_ResumeCoro$1 @ 0x18027C8F0 (winrt--Windows--Internal--Shell--implementation--WindowsTracker--SetEventHookForWindowAsync$_Res.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowsTracker::UnhookEventForAllWindowsAsync$_ResumeCoro$1 @ 0x18027CCF0 (winrt--Windows--Internal--Shell--implementation--WindowsTracker--UnhookEventForAllW_ea_18027CCF0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::WindowsTracker,winrt::Windows::Internal::Shell::WindowsTracker>::get_strong(
        __int64 a1,
        _QWORD *a2)
{
  signed __int64 v2; // r8
  bool v3; // zf
  signed __int64 v4; // rax

  *a2 = 0LL;
  if ( a1 )
  {
    *a2 = a1;
    v2 = *(_QWORD *)(a1 + 8);
    while ( v2 >= 0 )
    {
      v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v2 + 1, v2);
      v3 = v2 == v4;
      v2 = v4;
      if ( v3 )
        return a2;
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v2 + 24), 1u);
  }
  return a2;
}
