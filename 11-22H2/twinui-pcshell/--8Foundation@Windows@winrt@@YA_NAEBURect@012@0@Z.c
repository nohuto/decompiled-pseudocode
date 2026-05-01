/*
 * XREFs of ??8Foundation@Windows@winrt@@YA_NAEBURect@012@0@Z @ 0x1805216D8
 * Callers:
 *     ?IndexOf@?$vector_view_base@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@URect@Foundation@Windows@3@Ucollection_version@23@@winrt@@QEBA_NAEBURect@Foundation@Windows@2@AEAI@Z @ 0x1805241B8 (-IndexOf@-$vector_view_base@U-$vector_impl@URect@Foundation@Windows@winrt@@V-$vector@URect@Found.c)
 *     ??$TryGetForWorkArea@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAA?AUDesktopSnapLayoutManager@23456@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@AEBURect@Foundation@56@@Z @ 0x180680F7C (--$TryGetForWorkArea@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AX.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBURect@012@0@Z @ 0x180682D68 (--9Foundation@Windows@winrt@@YA_NAEBURect@012@0@Z.c)
 *     ?GetOrCreateForWorkArea@ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA?AUDesktopSnapLayoutManager@34567@AEBURect@Foundation@67@@Z @ 0x180683D0C (-GetOrCreateForWorkArea@ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt.c)
 *     ?TryLoadSnapLayoutPickerExtension@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AUSnapLayoutPickerExtension@4UI@WindowsUdk@7@IPEAUHWND__@@PEAUHMONITOR__@@AEBURect@Foundation@67@W4SnapControlType@34567@W4InputDeviceKind@49WindowsUdk@7@@Z @ 0x1806920E8 (-TryLoadSnapLayoutPickerExtension@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal.c)
 * Callees:
 *     <none>
 */

bool __fastcall winrt::Windows::Foundation::operator==(float *a1, float *a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3];
}
