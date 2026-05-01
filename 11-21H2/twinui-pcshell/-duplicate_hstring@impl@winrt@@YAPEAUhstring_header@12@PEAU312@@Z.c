/*
 * XREFs of ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800F2CB4
 * Callers:
 *     ??$make@U?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@impl@winrt@@AEBUhstring@3@AEBU43@@winrt@@YA?AU?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@0@AEBUhstring@0@0@Z @ 0x18002DB84 (--$make@U-$key_value_pair@U-$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@w.c)
 *     ?get_Key@?$produce@U?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18003BF90 (-get_Key@-$produce@U-$key_value_pair@U-$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundatio.c)
 *     ?get_Value@?$produce@U?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18003BFF0 (-get_Value@-$produce@U-$key_value_pair@U-$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundat.c)
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1800F2B2C (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 *     ?get_Arguments@?$produce@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@6@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800F2BE0 (-get_Arguments@-$produce@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@.c)
 *     ?get_LaunchSourceTelemetryId@?$produce@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppActivatedEventArgs@3456@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800F2C40 (-get_LaunchSourceTelemetryId@-$produce@USearchAppActivatedEventArgs@implementation@Shell@UI@Wind.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800F2C90 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ??0XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@PEAUHWND__@@AEBUhstring@6@@Z @ 0x1800F536C (--0XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEA.c)
 *     ??0error_info_fallback@impl@winrt@@QEAA@HPEAX@Z @ 0x1802D6580 (--0error_info_fallback@impl@winrt@@QEAA@HPEAX@Z.c)
 *     ?GetKeyValueFromArgs@UndockedSearchAppExperienceManager@@AEAA?AUhstring@winrt@@AEBU23@AEBUWwwFormUrlDecoder@Foundation@Windows@3@0@Z @ 0x18038EBDC (-GetKeyValueFromArgs@UndockedSearchAppExperienceManager@@AEAA-AUhstring@winrt@@AEBU23@AEBUWwwFor.c)
 *     _UndockedSearchAppExperienceManager::GetKeyValueFromArgs_::_1_::catch$12 @ 0x18038ECD3 (_UndockedSearchAppExperienceManager--GetKeyValueFromArgs_--_1_--catch$12.c)
 *     ?UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18057C7B0 (-UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct winrt::impl::hstring_header *__fastcall winrt::impl::duplicate_hstring(
        winrt::impl *this,
        struct winrt::impl::hstring_header *a2)
{
  if ( !this )
    return 0LL;
  if ( (*(_BYTE *)this & 1) != 0 )
    return winrt::impl::create_hstring_on_heap(*((winrt::impl **)this + 2), (winrt::impl *)*((unsigned int *)this + 1));
  _InterlockedExchangeAdd((volatile signed __int32 *)this + 6, 1u);
  return this;
}
