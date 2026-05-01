/*
 * XREFs of ?InitializeDataAsync@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x18021A924
 * Callers:
 *     ?perform_delayed_initialization@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1800AE6C0 (-perform_delayed_initialization@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAX.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::InitializeDataAsync$_InitCoro$2 @ 0x18021A6F8 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--InitializeDataAsync$_InitCoro$2.c)
 */

_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::InitializeDataAsync(
        __int64 a1,
        _BYTE *a2)
{
  void *v4; // rax
  int v6; // [rsp+78h] [rbp+10h] BYREF

  v4 = operator new(0x32uLL);
  v6 = 0;
  winrt::Windows::Internal::Shell::implementation::WindowTabHost::InitializeDataAsync__InitCoro_2(
    &v6,
    (__int64)v4,
    a2,
    a1);
  return a2;
}
