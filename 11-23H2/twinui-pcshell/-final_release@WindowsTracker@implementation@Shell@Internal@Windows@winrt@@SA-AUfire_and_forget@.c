/*
 * XREFs of ?final_release@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@SA?AUfire_and_forget@6@V?$unique_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@Z @ 0x18027D230
 * Callers:
 *     ?unconditional_release_ref@?$com_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18019A540 (-unconditional_release_ref@-$com_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt.c)
 *     ?Release@?$produce_base@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@UIWindowsTracker@3456@X@impl@winrt@@UEAAIXZ @ 0x18019A580 (-Release@-$produce_base@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@UIWindowsTr.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowsTracker::final_release$_InitCoro$2 @ 0x18027CF78 (winrt--Windows--Internal--Shell--implementation--WindowsTracker--final_release$_InitCoro$2.c)
 *     ??1?$unique_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x180725410 (--1-$unique_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@U-$default_delete@U.c)
 */

char __fastcall winrt::Windows::Internal::Shell::implementation::WindowsTracker::final_release(__int64 *a1)
{
  void *v2; // rax
  char v3; // bl
  char v5; // [rsp+98h] [rbp+10h] BYREF
  int v6; // [rsp+A0h] [rbp+18h] BYREF

  v2 = operator new(0x5AuLL);
  v6 = 0;
  winrt::Windows::Internal::Shell::implementation::WindowsTracker::final_release__InitCoro_2(
    (__int64)&v5,
    (__int64)&v6,
    (__int64)v2,
    a1);
  v3 = v5;
  std::unique_ptr<winrt::Windows::Internal::Shell::implementation::WindowsTracker>::~unique_ptr<winrt::Windows::Internal::Shell::implementation::WindowsTracker>(a1);
  return v3;
}
