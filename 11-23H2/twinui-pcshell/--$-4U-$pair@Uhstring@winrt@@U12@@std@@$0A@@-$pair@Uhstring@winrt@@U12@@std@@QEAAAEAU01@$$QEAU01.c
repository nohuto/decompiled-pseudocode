/*
 * XREFs of ??$?4U?$pair@Uhstring@winrt@@U12@@std@@$0A@@?$pair@Uhstring@winrt@@U12@@std@@QEAAAEAU01@$$QEAU01@@Z @ 0x1806EDF44
 * Callers:
 *     ?GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$optional@U?$pair@Uhstring@winrt@@U12@@std@@@std@@PEAUHKEY__@@PEBG@Z @ 0x1806F2B8C (-GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

volatile signed __int32 **__fastcall std::pair<winrt::hstring,winrt::hstring>::operator=<std::pair<winrt::hstring,winrt::hstring>,0>(
        volatile signed __int32 **a1,
        volatile signed __int32 **a2)
{
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 **v5; // rax
  volatile signed __int32 *v6; // rbx

  if ( a1 != a2 )
  {
    v4 = *a2;
    *a2 = 0LL;
    winrt::handle_type<winrt::impl::hstring_traits>::close(a1);
    winrt::handle_type<winrt::impl::hstring_traits>::close(a1);
    *a1 = v4;
  }
  v5 = a2 + 1;
  if ( a1 + 1 != a2 + 1 )
  {
    v6 = *v5;
    *v5 = 0LL;
    winrt::handle_type<winrt::impl::hstring_traits>::close(a1 + 1);
    winrt::handle_type<winrt::impl::hstring_traits>::close(a1 + 1);
    a1[1] = v6;
  }
  return a1;
}
