/*
 * XREFs of ?subtract_reference@?$root_implements@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlExplorerHostChildWindow_WASDK2@34567@UIClosable@Foundation@67@Unon_agile@7@@impl@winrt@@IEAAIXZ @ 0x1801FAE14
 * Callers:
 *     ??1?$root_implements@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlExplorerHostChildWindow_WASDK2@34567@UIClosable@Foundation@67@Unon_agile@7@@impl@winrt@@MEAA@XZ @ 0x1801FA5FC (--1-$root_implements@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@In.c)
 *     ?Release@?$implements@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlExplorerHostChildWindow_WASDK2@34567@UIClosable@Foundation@67@Unon_agile@7@@winrt@@QEAAKXZ @ 0x1801FA818 (-Release@-$implements@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@I.c)
 *     ?Release@?$produce_base@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDK2@34567@X@impl@winrt@@UEAAIXZ @ 0x1801FA870 (-Release@-$produce_base@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplo_ea_1801FA870.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK2,winrt::Windows::Foundation::IClosable,winrt::non_agile>::subtract_reference(
        __int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v2; // edx
  signed __int64 v3; // rtt

  v1 = *(_QWORD *)(a1 + 8);
  while ( v1 >= 0 )
  {
    v2 = v1 - 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v1 - 1, v1);
    if ( v3 == v1 )
      return v2;
  }
  return winrt::impl::weak_ref<0,1>::decrement_strong((volatile signed __int32 *)(2 * v1));
}
