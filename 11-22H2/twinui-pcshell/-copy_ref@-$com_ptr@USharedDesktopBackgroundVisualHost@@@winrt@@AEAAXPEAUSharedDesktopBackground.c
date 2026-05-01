/*
 * XREFs of ?copy_ref@?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@AEAAXPEAUSharedDesktopBackgroundVisualHost@@@Z @ 0x1806E40F8
 * Callers:
 *     ?GetBackgroundHostForId@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA?AU?$com_ptr@USharedDesktopBackgroundVisualHost@@@7@_K@Z @ 0x1806E2174 (-GetBackgroundHostForId@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA-A.c)
 *     ?GetBackgroundHostForType@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA_KW4BackgroundIdentifier@34567@_N@Z @ 0x1806E2288 (-GetBackgroundHostForType@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA.c)
 *     ?StartXamlHostThread@SharedDesktopBackgroundVisualHost@@AEAA_NXZ @ 0x1806E96DC (-StartXamlHostThread@SharedDesktopBackgroundVisualHost@@AEAA_NXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801FA5AC (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 */

__int64 __fastcall winrt::com_ptr<SharedDesktopBackgroundVisualHost>::copy_ref(volatile __int64 **a1, __int64 a2)
{
  __int64 result; // rax
  signed __int64 v5; // rdx
  bool v6; // zf

  if ( *a1 != (volatile __int64 *)a2 )
  {
    if ( *a1 )
      result = winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(a1);
    *a1 = (volatile __int64 *)a2;
    if ( a2 )
    {
      v5 = *(_QWORD *)(a2 + 8);
      while ( v5 >= 0 )
      {
        result = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 8), v5 + 1, v5);
        v6 = v5 == result;
        v5 = result;
        if ( v6 )
          return result;
      }
      return (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(2 * v5 + 24), 1u);
    }
  }
  return result;
}
