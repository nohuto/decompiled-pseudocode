/*
 * XREFs of ??4hstring@winrt@@QEAAAEAU01@QEBG@Z @ 0x180455AF0
 * Callers:
 *     _anonymous_namespace_::GetScreenClippingAUMID @ 0x180133B1C (_anonymous_namespace_--GetScreenClippingAUMID.c)
 *     ?GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$optional@U?$pair@Uhstring@winrt@@U12@@std@@@std@@PEAUHKEY__@@PEBG@Z @ 0x1806F2B8C (-GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 */

volatile signed __int32 **__fastcall winrt::hstring::operator=(
        volatile signed __int32 **a1,
        const unsigned __int16 *a2)
{
  winrt::hstring *v3; // rax
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = winrt::hstring::hstring((winrt::hstring *)&v6, a2);
  if ( a1 != (volatile signed __int32 **)v3 )
  {
    v4 = *(volatile signed __int32 **)v3;
    *(_QWORD *)v3 = 0LL;
    winrt::handle_type<winrt::impl::hstring_traits>::close(a1);
    winrt::handle_type<winrt::impl::hstring_traits>::close(a1);
    *a1 = v4;
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v6);
  return a1;
}
