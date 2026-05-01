/*
 * XREFs of ?AnimateView@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@QEAAXAEBW4ShellView@4UI@WindowsUdk@7@AEBUShellViewCoordinator@49WindowsUdk@7@_KAEBUGestureAnimationData@Input@9WindowsUdk@7@UPoint@Foundation@67@@Z @ 0x18075FDF4
 * Callers:
 *     ?AnimateView@?$produce@UShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@UIShellAnimationCoordinator@34567@@impl@winrt@@UEAAHHPEAX_KUstruct_WindowsUdk_UI_Input_GestureAnimationData@23@UPoint@Foundation@Windows@3@@Z @ 0x18075FD60 (-AnimateView@-$produce@UShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windo.c)
 * Callees:
 *     ?Visibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18005A3A4 (-Visibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?TryDismissAsync@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUDismissShellViewOptions@Shell@UI@WindowsUdk@3@@Z @ 0x18044A25C (-TryDismissAsync@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shel.c)
 *     ?TryShowAsync@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUShowShellViewOptions@Shell@UI@WindowsUdk@3@@Z @ 0x18069849C (-TryShowAsync@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@U.c)
 *     ?CreateDismissShellViewOptions@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@SA?AUDismissShellViewOptions@4UI@WindowsUdk@7@_KAEBUGestureAnimationData@Input@9WindowsUdk@7@@Z @ 0x18076001C (-CreateDismissShellViewOptions@ShellAnimationCoordinator@implementation@Animations@Shell@Interna.c)
 *     ?CreateShowShellViewOptions@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@SA?AUShowShellViewOptions@4UI@WindowsUdk@7@W4ShellView@49WindowsUdk@7@_KUPoint@Foundation@67@AEBUGestureAnimationData@Input@9WindowsUdk@7@@Z @ 0x1807601F8 (-CreateShowShellViewOptions@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@W.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator::AnimateView(
        __int64 a1,
        unsigned int *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD *DismissShellViewOptions; // rax
  _QWORD *ShowShellViewOptions; // rax
  _QWORD v11[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v12; // [rsp+50h] [rbp+10h] BYREF

  v12 = a1;
  if ( (unsigned int)winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::Visibility(a3) )
  {
    ShowShellViewOptions = (_QWORD *)winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator::CreateShowShellViewOptions(
                                       v11,
                                       *a2,
                                       a4,
                                       a6,
                                       a5);
    winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::TryShowAsync(
      a3,
      &v12,
      ShowShellViewOptions);
    if ( v12 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  }
  else
  {
    DismissShellViewOptions = (_QWORD *)winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator::CreateDismissShellViewOptions(
                                          v11,
                                          a4,
                                          a5);
    winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::TryDismissAsync(
      a3,
      &v12,
      DismissShellViewOptions);
    if ( v12 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  }
  if ( v11[0] )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v11);
}
