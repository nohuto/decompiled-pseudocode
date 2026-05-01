/*
 * XREFs of ?GetTransitionScreenTimeout@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@EEBA?AV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@XZ @ 0x18072DCF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMaxConnectionTimeoutFromAdmin@CloudPCHelpers@@YAHXZ @ 0x18072DB04 (-GetMaxConnectionTimeoutFromAdmin@CloudPCHelpers@@YAHXZ.c)
 */

_QWORD *__fastcall winrt::Windows::Internal::Shell::implementation::BootProviderActivator::GetTransitionScreenTimeout(
        CloudPCHelpers *a1,
        _QWORD *a2)
{
  *a2 = 600000000LL * (int)CloudPCHelpers::GetMaxConnectionTimeoutFromAdmin(a1);
  return a2;
}
