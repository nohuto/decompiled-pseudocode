/*
 * XREFs of ?put_AutomationProvider@Api@CompositionIslandAutomationProviderRequestedEventArgs@Composition@UI@Windows@@UEAAJPEAUIInspectable@@@Z @ 0x1800B7D30
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInspectable@@@Z @ 0x180111748 (--4-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInspectable@@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIslandAutomationProviderRequestedEventArgs::Api::put_AutomationProvider(
        Windows::UI::Composition::CompositionIslandAutomationProviderRequestedEventArgs::Api *this,
        struct IInspectable *a2)
{
  Microsoft::WRL::ComPtr<IInspectable>::operator=((char *)this + 16, a2);
  return 0LL;
}
