/*
 * XREFs of ?get_AutomationProvider@Api@CompositionIslandAutomationProviderRequestedEventArgs@Composition@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z @ 0x1801600F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180088E0C (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIslandAutomationProviderRequestedEventArgs::Api::get_AutomationProvider(
        Windows::UI::Composition::CompositionIslandAutomationProviderRequestedEventArgs::Api *this,
        struct IInspectable **a2)
{
  struct IInspectable **v2; // rbx

  *a2 = 0LL;
  v2 = (struct IInspectable **)((char *)this + 16);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)this + 2);
  *a2 = *v2;
  return 0LL;
}
