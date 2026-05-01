/*
 * XREFs of ?get_local_iids@?$implements@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIPenMenuSystemTrayManager@@@winrt@@UEBA?AU?$pair@IPEBUguid@winrt@@@std@@XZ @ 0x180183320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager,winrt::immersive_shell_component,IPenMenuSystemTrayManager>::get_local_iids(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)a2 = 0;
  result = a2;
  *(_QWORD *)(a2 + 8) = 0LL;
  return result;
}
