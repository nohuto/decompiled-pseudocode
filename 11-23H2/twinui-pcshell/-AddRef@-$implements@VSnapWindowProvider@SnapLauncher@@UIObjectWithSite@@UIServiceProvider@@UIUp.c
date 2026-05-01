/*
 * XREFs of ?AddRef@?$implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvider@@UIUpdateViewValueSet@@Unon_agile@winrt@@@winrt@@UEAAKXZ @ 0x18022DE50
 * Callers:
 *     ?AddRef@?$implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvider@@UIUpdateViewValueSet@@Unon_agile@winrt@@@winrt@@W7EAAKXZ @ 0x1802ABDD0 (-AddRef@-$implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceP_ea_1802ABDD0.c)
 *     ?AddRef@?$implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvider@@UIUpdateViewValueSet@@Unon_agile@winrt@@@winrt@@WBA@EAAKXZ @ 0x1802ABDF0 (-AddRef@-$implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceP_ea_1802ABDF0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<SnapLauncher::SnapWindowProvider,IObjectWithSite,IServiceProvider,IUpdateViewValueSet,winrt::non_agile>::AddRef(
        __int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 32));
}
