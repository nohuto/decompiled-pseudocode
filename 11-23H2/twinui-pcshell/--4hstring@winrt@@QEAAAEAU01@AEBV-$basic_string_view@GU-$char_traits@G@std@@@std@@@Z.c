/*
 * XREFs of ??4hstring@winrt@@QEAAAEAU01@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180051A34
 * Callers:
 *     ?TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x180051930 (-TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z.c)
 *     ?OnUINavigationControllerAdded@GamingOverlayExperienceManager@@AEAAXUIInspectable@Foundation@Windows@winrt@@AEBUUINavigationController@Input@Gaming@45@@Z @ 0x180403670 (-OnUINavigationControllerAdded@GamingOverlayExperienceManager@@AEAAXUIInspectable@Foundation@Win.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x1800DC390 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 */

struct winrt::impl::hstring_header **__fastcall winrt::hstring::operator=(
        struct winrt::impl::hstring_header **a1,
        __int64 a2,
        unsigned int a3)
{
  struct winrt::impl::hstring_header *hstring_on_heap; // rdi
  struct winrt::impl::hstring_header *v6; // [rsp+30h] [rbp+8h] BYREF

  hstring_on_heap = winrt::impl::create_hstring_on_heap(
                      *(winrt::impl **)a2,
                      (winrt::impl *)*(unsigned int *)(a2 + 8),
                      a3);
  v6 = hstring_on_heap;
  if ( a1 != &v6 )
  {
    v6 = 0LL;
    winrt::handle_type<winrt::impl::hstring_traits>::close(a1);
    winrt::handle_type<winrt::impl::hstring_traits>::close(a1);
    *a1 = hstring_on_heap;
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v6);
  return a1;
}
