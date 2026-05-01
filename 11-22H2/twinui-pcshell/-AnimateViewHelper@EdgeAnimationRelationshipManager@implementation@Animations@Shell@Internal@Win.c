/*
 * XREFs of ?AnimateViewHelper@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@AEAAXUShellAnimationCoordinator@34567@AEBW4ShellView@4UI@WindowsUdk@7@AEBUGestureAnimationData@Input@UI@WindowsUdk@7@AEBUPoint@Foundation@67@@Z @ 0x180760A24
 * Callers:
 *     ?ReportEdgeGesture@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@QEAAXW4EdgeLocation@34567@AEBUGestureAnimationData@Input@UI@WindowsUdk@7@UPoint@Foundation@67@@Z @ 0x180760DF8 (-ReportEdgeGesture@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Win.c)
 *     ?ReportViewDragGesture@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@QEAAXW4EdgeLocation@34567@AEBW4ShellView@4UI@WindowsUdk@7@AEBUGestureAnimationData@Input@UI@WindowsUdk@7@UPoint@Foundation@67@@Z @ 0x180760F9C (-ReportViewDragGesture@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?AnimateView@?$consume_Windows_Internal_Shell_Animations_IShellAnimationCoordinator@UIShellAnimationCoordinator@Animations@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBW4ShellView@Shell@UI@WindowsUdk@3@AEBUShellViewCoordinator@5673@_KAEBUGestureAnimationData@Input@673@AEBUPoint@Foundation@Windows@3@@Z @ 0x1807609B4 (-AnimateView@-$consume_Windows_Internal_Shell_Animations_IShellAnimationCoordinator@UIShellAnima.c)
 *     ?GetEdgeGestureOffsetForAnimatingView@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@AEAA_KW4ShellView@4UI@WindowsUdk@7@@Z @ 0x180760B58 (-GetEdgeGestureOffsetForAnimatingView@EdgeAnimationRelationshipManager@implementation@Animations.c)
 *     ?at@?$unordered_map@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@U?$hash@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@U?$equal_to@W4ShellView@Shell@UI@WindowsUdk@winrt@@@8@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@8@@std@@QEAAAEAUShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@AEBW4ShellView@4567@@Z @ 0x1807614AC (-at@-$unordered_map@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@U-$hash@W4.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager::AnimateViewHelper(
        __int64 a1,
        __int64 **a2,
        unsigned int *a3,
        __int128 *a4,
        _QWORD *a5)
{
  __int64 EdgeGestureOffsetForAnimatingView; // rdi
  _QWORD *v10; // rax

  EdgeGestureOffsetForAnimatingView = winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager::GetEdgeGestureOffsetForAnimatingView(
                                        a1,
                                        *a3);
  v10 = (_QWORD *)std::unordered_map<enum winrt::WindowsUdk::UI::Shell::ShellView,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::at(
                    a1 + 88,
                    a3);
  winrt::impl::consume_Windows_Internal_Shell_Animations_IShellAnimationCoordinator<winrt::Windows::Internal::Shell::Animations::IShellAnimationCoordinator>::AnimateView(
    a2,
    a3,
    v10,
    EdgeGestureOffsetForAnimatingView,
    a4,
    a5);
  if ( *a2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)a2);
}
