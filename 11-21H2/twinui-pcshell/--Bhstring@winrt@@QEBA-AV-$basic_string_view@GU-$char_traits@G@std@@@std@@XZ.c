/*
 * XREFs of ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1800FC164
 * Callers:
 *     ?OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView@3UI@456@AEBUWindowTabViewPropertyChangedEventArgs@38456@@Z @ 0x180024200 (-OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView.c)
 *     ?WINRT_GetActivationFactory@@YAHPEAUHSTRING__@@PEAPEAX@Z @ 0x1800FC02C (-WINRT_GetActivationFactory@@YAHPEAUHSTRING__@@PEAPEAX@Z.c)
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1800FC0AC (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x1800FC0F8 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NAEBUhstring@winrt@@W4SearchAppActivationMode@Shell@UI@WindowsUdk@3@PEBG@Z @ 0x18019D9F4 (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NAEBUhstring@winrt@@W4SearchAppActiv.c)
 *     ??$assign@Uhstring@winrt@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBUhstring@winrt@@@Z @ 0x180329DD4 (--$assign@Uhstring@winrt@@$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA.c)
 *     ??Hwinrt@@YA?AUhstring@0@PEBGAEBU10@@Z @ 0x18038E578 (--Hwinrt@@YA-AUhstring@0@PEBGAEBU10@@Z.c)
 *     ??R_lambda_ab0ddc0523f74db67f1d98d90aaf8740_@@QEBAXAEBUShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UDismissShellViewRequestedEventArgs@2345@@Z @ 0x1805E0DD8 (--R_lambda_ab0ddc0523f74db67f1d98d90aaf8740_@@QEBAXAEBUShellViewCoordinator@Shell@UI@WindowsUdk@.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall winrt::hstring::operator std::basic_string_view<unsigned short>(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // r8

  v2 = *a1;
  if ( *a1 )
  {
    *a2 = *(_QWORD *)(v2 + 16);
    a2[1] = *(unsigned int *)(v2 + 4);
  }
  else
  {
    a2[1] = 0LL;
    *a2 = &LocaleName;
  }
  return a2;
}
