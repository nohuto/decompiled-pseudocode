/*
 * XREFs of ?subtract_reference@?$root_implements@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@Unon_agile@7@@impl@winrt@@IEAAIXZ @ 0x1800F7ED8
 * Callers:
 *     ??1XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18003E22C (--1XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEA.c)
 *     ?NonDelegatingRelease@?$root_implements@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@Unon_agile@7@@impl@winrt@@IEAAIXZ @ 0x1800F7DA8 (-NonDelegatingRelease@-$root_implements@UXamlExplorerHostChildWindow@implementation@XamlExplorer.c)
 *     ??1?$XamlExplorerHostChildWindow_base@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@Unon_agile@7@@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18041CFE4 (--1-$XamlExplorerHostChildWindow_base@UXamlExplorerHostChildWindow@implementation@XamlExplorerHo.c)
 * Callees:
 *     ?Release@?$weak_ref@$0A@$00@impl@winrt@@UEAAIXZ @ 0x18041E580 (-Release@-$weak_ref@$0A@$00@impl@winrt@@UEAAIXZ.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IClosable,winrt::non_agile>::subtract_reference(
        __int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v2; // edx
  signed __int64 v3; // rtt
  unsigned __int32 v5; // ebx

  v1 = *(_QWORD *)(a1 + 8);
  while ( v1 >= 0 )
  {
    v2 = v1 - 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v1 - 1, v1);
    if ( v3 == v1 )
      return v2;
  }
  v5 = _InterlockedDecrement((volatile signed __int32 *)(2 * v1 + 24));
  if ( !v5 )
    winrt::impl::weak_ref<0,1>::Release((void *)(2 * v1));
  return v5;
}
