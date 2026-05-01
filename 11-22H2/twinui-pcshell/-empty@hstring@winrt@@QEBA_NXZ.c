/*
 * XREFs of ?empty@hstring@winrt@@QEBA_NXZ @ 0x1800B6D04
 * Callers:
 *     ?HideFromAltTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x180035BE0 (-HideFromAltTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall winrt::hstring::empty(winrt::hstring *this)
{
  return *(_QWORD *)this == 0LL;
}
