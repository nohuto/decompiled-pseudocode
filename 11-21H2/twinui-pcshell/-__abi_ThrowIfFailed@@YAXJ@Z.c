/*
 * XREFs of ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x18017F9B0
 * Callers:
 *     ?CreateDesktopDismissAnimationProvider@SnapAssistAnimationProviderFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@SAPE$AAUIAnimationProvider@2345@PE$AAUIDismissAnimationPolicy@2345@VAnimationProviderArgs@2345@@Z @ 0x1801E8FD8 (-CreateDesktopDismissAnimationProvider@SnapAssistAnimationProviderFactory@Switcher@Experiences@C.c)
 *     ?CreateDesktopDismissAnimationProvider@__ISnapAssistAnimationProviderFactoryStatics@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAUIAnimationProvider@2345@PE$AAUIDismissAnimationPolicy@2345@VAnimationProviderArgs@2345@@Z @ 0x1801E90C0 (-CreateDesktopDismissAnimationProvider@__ISnapAssistAnimationProviderFactoryStatics@Switcher@Exp.c)
 *     ?CreateDesktopInvokeAnimationProvider@SnapAssistAnimationProviderFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@SAPE$AAUIAnimationProvider@2345@PE$AAUIInvokeAnimationPolicy@2345@VAnimationProviderArgs@2345@@Z @ 0x1801E9134 (-CreateDesktopInvokeAnimationProvider@SnapAssistAnimationProviderFactory@Switcher@Experiences@Co.c)
 *     ?CreateDesktopInvokeAnimationProvider@__ISnapAssistAnimationProviderFactoryStatics@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAUIAnimationProvider@2345@PE$AAUIInvokeAnimationPolicy@2345@VAnimationProviderArgs@2345@@Z @ 0x1801E921C (-CreateDesktopInvokeAnimationProvider@__ISnapAssistAnimationProviderFactoryStatics@Switcher@Expe.c)
 *     ?get@?QIFrameworkElement@Xaml@UI@Windows@@ActualWidth@FrameworkElement@234@UE$AAANXZ @ 0x1801E9A08 (-get@-QIFrameworkElement@Xaml@UI@Windows@@ActualWidth@FrameworkElement@234@UE$AAANXZ.c)
 *     ?get@VirtualDesktopRenameInProgress@__IVirtualDesktopBarElementViewModelPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAA_NXZ @ 0x1801E9A80 (-get@VirtualDesktopRenameInProgress@__IVirtualDesktopBarElementViewModelPublicNonVirtuals@Switch.c)
 *     ?set@?QIFrameworkElement@Xaml@UI@Windows@@Margin@FrameworkElement@234@UE$AAAXVThickness@234@@Z @ 0x1801E9ABC (-set@-QIFrameworkElement@Xaml@UI@Windows@@Margin@FrameworkElement@234@UE$AAAXVThickness@234@@Z.c)
 *     ?set@GridBottomPadding@__IVirtualDesktopBarElementPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXN@Z @ 0x1801E9B44 (-set@GridBottomPadding@__IVirtualDesktopBarElementPublicNonVirtuals@Switcher@Experiences@Composa.c)
 *     ?set@GridLeftRightPadding@__IVirtualDesktopBarElementPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXN@Z @ 0x1801E9B74 (-set@GridLeftRightPadding@__IVirtualDesktopBarElementPublicNonVirtuals@Switcher@Experiences@Comp.c)
 *     ?set@RightBounds@__IVirtualDesktopBarElementPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXN@Z @ 0x1801E9BA4 (-set@RightBounds@__IVirtualDesktopBarElementPublicNonVirtuals@Switcher@Experiences@ComposableShe.c)
 *     ?CreateDesktopTaskViewDismissAnimationProvider@TaskViewAnimationProviderFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@SAPE$AAUIAnimationProvider@2345@PE$AAUIDismissAnimationPolicy@2345@VAnimationProviderArgs@2345@@Z @ 0x1801E9C94 (-CreateDesktopTaskViewDismissAnimationProvider@TaskViewAnimationProviderFactory@Switcher@Experie.c)
 *     ?CreateDesktopTaskViewDismissAnimationProvider@__ITaskViewAnimationProviderFactoryStatics@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAUIAnimationProvider@2345@PE$AAUIDismissAnimationPolicy@2345@VAnimationProviderArgs@2345@@Z @ 0x1801E9D7C (-CreateDesktopTaskViewDismissAnimationProvider@__ITaskViewAnimationProviderFactoryStatics@Switch.c)
 *     ?CreateDesktopTaskViewInvokeAnimationProvider@TaskViewAnimationProviderFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@SAPE$AAUIAnimationProvider@2345@PE$AAUIInvokeAnimationPolicy@2345@VAnimationProviderArgs@2345@@Z @ 0x1801E9DF0 (-CreateDesktopTaskViewInvokeAnimationProvider@TaskViewAnimationProviderFactory@Switcher@Experien.c)
 *     ?CreateDesktopTaskViewInvokeAnimationProvider@__ITaskViewAnimationProviderFactoryStatics@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAUIAnimationProvider@2345@PE$AAUIInvokeAnimationPolicy@2345@VAnimationProviderArgs@2345@@Z @ 0x1801E9ED8 (-CreateDesktopTaskViewInvokeAnimationProvider@__ITaskViewAnimationProviderFactoryStatics@Switche.c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

void __fastcall __abi_ThrowIfFailed(int a1)
{
  if ( a1 < 0 )
  {
    __abi_WinRTraiseException(a1);
    JUMPOUT(0x18017F9C3LL);
  }
}
