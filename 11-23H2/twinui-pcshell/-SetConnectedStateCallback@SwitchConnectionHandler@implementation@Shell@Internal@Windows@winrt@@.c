/*
 * XREFs of ?SetConnectedStateCallback@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$function@$$A6AXAEBUguid@winrt@@@Z@std@@@Z @ 0x1801B1B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::SetConnectedStateCallback(
        __int64 a1,
        __int64 a2)
{
  return std::function<void (void)>::operator=(*(_QWORD *)(a1 + 88) + 40LL, a2);
}
