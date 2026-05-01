/*
 * XREFs of ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1800F2B2C
 * Callers:
 *     ?Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180045B90 (-Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experie.c)
 *     ?CreateWithParent@XamlExplorerHostShellComponent@@UEAAJ_KPEAUHSTRING__@@PEAPEAUIXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@Windows@ABI@@@Z @ 0x1800F2930 (-CreateWithParent@XamlExplorerHostShellComponent@@UEAAJ_KPEAUHSTRING__@@PEAPEAUIXamlExplorerHost.c)
 *     ?HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x18019EF60 (-HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?CheckAndUpdateHostedAumid@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1803812DC (-CheckAndUpdateHostedAumid@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?ActivateApplicationInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@1W4ActivationKind@Activation@ApplicationModel@Windows@@EURect@Foundation@7@H@Z @ 0x180571950 (-ActivateApplicationInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@1W4A.c)
 *     ?GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@UtagSIZE@@@Z @ 0x18057B628 (-GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$un.c)
 *     ??4MeetAndChatFallbackContent@Shell@Internal@Windows@winrt@@QEAAAEAU01234@AEBU01234@@Z @ 0x1805D4348 (--4MeetAndChatFallbackContent@Shell@Internal@Windows@winrt@@QEAAAEAU01234@AEBU01234@@Z.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800F2CB4 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 */

struct winrt::impl::hstring_header **__fastcall winrt::hstring::operator=(
        struct winrt::impl::hstring_header **a1,
        winrt::impl **a2)
{
  struct winrt::impl::hstring_header *v3; // rbx

  v3 = winrt::impl::duplicate_hstring(*a2, (struct winrt::impl::hstring_header *)a2);
  winrt::handle_type<winrt::impl::hstring_traits>::close(a1);
  *a1 = v3;
  return a1;
}
