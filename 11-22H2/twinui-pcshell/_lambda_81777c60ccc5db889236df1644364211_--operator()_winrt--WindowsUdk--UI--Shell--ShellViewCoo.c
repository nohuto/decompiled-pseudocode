/*
 * XREFs of _lambda_81777c60ccc5db889236df1644364211_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_const__winrt::WindowsUdk::UI::Shell::ShellViewGestureReportedArgs_const__ @ 0x18064C4FC
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShellViewGestureReportedArgs___lambda_81777c60ccc5db889236df1644364211___::Invoke @ 0x18064D580 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_18064D580.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1800D9200 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReportViewDragGesture@TouchEdgeGestureProcessor@@QEAAXAEBW4ShellView@Shell@UI@WindowsUdk@winrt@@AEBUShellViewGestureReportedArgs@3456@@Z @ 0x180655930 (-ReportViewDragGesture@TouchEdgeGestureProcessor@@QEAAXAEBW4ShellView@Shell@UI@WindowsUdk@winrt@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_81777c60ccc5db889236df1644364211_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_const__winrt::WindowsUdk::UI::Shell::ShellViewGestureReportedArgs_const__(
        __int64 a1,
        __int64 a2,
        const struct winrt::WindowsUdk::UI::Shell::ShellViewGestureReportedArgs *a3)
{
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rbx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  v5 = *(_QWORD *)a1;
  if ( v5 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v5 + 24LL))(
      v5,
      &winrt::impl::guid_v<IInspectable>,
      &v9);
    if ( v9 )
      v5 = v9 - 16;
    else
      v5 = 0LL;
    result = v5;
    v9 = 0LL;
    v8 = v5;
    v7 = v5;
  }
  else
  {
    v8 = 0LL;
    result = 0LL;
    v7 = 0LL;
  }
  if ( v5 )
  {
    TouchEdgeGestureProcessor::ReportViewDragGesture(
      (TouchEdgeGestureProcessor *)(v5 + 96),
      (const enum winrt::WindowsUdk::UI::Shell::ShellView *)(a1 + 8),
      a3);
    result = v7;
  }
  if ( result )
    return winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v8);
  return result;
}
