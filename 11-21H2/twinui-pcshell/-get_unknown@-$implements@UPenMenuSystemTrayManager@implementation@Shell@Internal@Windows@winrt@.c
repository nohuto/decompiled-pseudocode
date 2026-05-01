/*
 * XREFs of ?get_unknown@?$implements@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIPenMenuSystemTrayManager@@@winrt@@EEBAPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@2@XZ @ 0x18017E0C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager,winrt::immersive_shell_component,IPenMenuSystemTrayManager>::get_unknown(
        __int64 a1)
{
  return (a1 - 32) & -(__int64)(a1 != 40);
}
