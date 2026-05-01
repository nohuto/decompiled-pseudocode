/*
 * XREFs of ??$?0Uhstring@winrt@@W4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@$0A@@?$tuple@Uhstring@winrt@@$$CBW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@std@@QEAA@$$QEAUhstring@winrt@@$$QEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x180508338
 * Callers:
 *     _anonymous_namespace_::GetViewTypeFromExperienceId @ 0x180510890 (_anonymous_namespace_--GetViewTypeFromExperienceId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::tuple<winrt::hstring,enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType const>::tuple<winrt::hstring,enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType const>(
        __int64 a1,
        __int64 *a2,
        _DWORD *a3)
{
  __int64 v3; // rax

  *(_DWORD *)a1 = *a3;
  v3 = *a2;
  *a2 = 0LL;
  *(_QWORD *)(a1 + 8) = v3;
  return a1;
}
