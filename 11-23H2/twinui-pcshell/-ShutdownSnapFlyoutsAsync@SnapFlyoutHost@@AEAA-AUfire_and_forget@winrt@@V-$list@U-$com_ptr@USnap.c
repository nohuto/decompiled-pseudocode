/*
 * XREFs of ?ShutdownSnapFlyoutsAsync@SnapFlyoutHost@@AEAA?AUfire_and_forget@winrt@@V?$list@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@@Z @ 0x180228A50
 * Callers:
 *     SnapFlyoutHost::HideAsync$_ResumeCoro$1 @ 0x1802270C0 (SnapFlyoutHost--HideAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     SnapFlyoutHost::ShutdownSnapFlyoutsAsync$_InitCoro$2 @ 0x1802286F8 (SnapFlyoutHost--ShutdownSnapFlyoutsAsync$_InitCoro$2.c)
 *     ?_Tidy@?$list@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@AEAAXXZ @ 0x18067D850 (-_Tidy@-$list@U-$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall SnapFlyoutHost::ShutdownSnapFlyoutsAsync(__int64 a1, _BYTE *a2, __int64 a3)
{
  void *v6; // rax
  int v8; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v9; // [rsp+C0h] [rbp+18h]

  v9 = a3;
  v6 = operator new(0x5AuLL);
  v8 = 0;
  SnapFlyoutHost::ShutdownSnapFlyoutsAsync__InitCoro_2(&v8, (__int64)v6, a2, a3, a1);
  std::list<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>>::_Tidy(a3);
  return a2;
}
