/*
 * XREFs of _lambda_2707938463de754926d7d6334e653630_::operator() @ 0x18076096C
 * Callers:
 *     ?GetEdgeGestureOffsetForAnimatingView@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@AEAA_KW4ShellView@4UI@WindowsUdk@7@@Z @ 0x180760B58 (-GetEdgeGestureOffsetForAnimatingView@EdgeAnimationRelationshipManager@implementation@Animations.c)
 * Callees:
 *     ?Visibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18005A3A4 (-Visibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@.c)
 *     ?at@?$unordered_map@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@U?$hash@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@U?$equal_to@W4ShellView@Shell@UI@WindowsUdk@winrt@@@8@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@8@@std@@QEAAAEAUShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@AEBW4ShellView@4567@@Z @ 0x1807614AC (-at@-$unordered_map@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@U-$hash@W4.c)
 */

bool __fastcall lambda_2707938463de754926d7d6334e653630_::operator()(_QWORD *a1, __int64 a2)
{
  __int64 *v2; // rax

  v2 = (__int64 *)std::unordered_map<enum winrt::WindowsUdk::UI::Shell::ShellView,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::at(
                    *a1 + 88LL,
                    a2);
  return (unsigned int)winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::Visibility(v2) == 0;
}
