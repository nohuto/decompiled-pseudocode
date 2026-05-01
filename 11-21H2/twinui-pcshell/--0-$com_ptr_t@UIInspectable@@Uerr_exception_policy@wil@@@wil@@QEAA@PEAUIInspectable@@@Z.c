/*
 * XREFs of ??0?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIInspectable@@@Z @ 0x18007220C
 * Callers:
 *     ??$GetValueHelper@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@@@@YA?AW4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180072194 (--$GetValueHelper@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@@@@.c)
 *     ?_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@UtagRECT@@PEAU3@PEAW4TRY_POSITION_VIEW_FLAGS@@PEAPEAUIImmersiveMonitor@@@Z @ 0x1800F0580 (-_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@U.c)
 *     ??$GetValueHelper@PEAUHSTRING__@@@@YAPEAUHSTRING__@@PEAUIInspectable@@@Z @ 0x1803DBE88 (--$GetValueHelper@PEAUHSTRING__@@@@YAPEAUHSTRING__@@PEAUIInspectable@@@Z.c)
 *     ??$GetValueHelper@W4AppViewBackButtonVisibility@Core@UI@Windows@@@@YA?AW4AppViewBackButtonVisibility@Core@UI@Windows@@PEAUIInspectable@@@Z @ 0x1803DBF2C (--$GetValueHelper@W4AppViewBackButtonVisibility@Core@UI@Windows@@@@YA-AW4AppViewBackButtonVisibi.c)
 *     ??$GetValueHelper@W4ApplicationWindowFrameStyleInternal@WindowManagement@ApplicationModel@Internal@Windows@@@@YA?AW4ApplicationWindowFrameStyleInternal@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1803DBFCC (--$GetValueHelper@W4ApplicationWindowFrameStyleInternal@WindowManagement@ApplicationModel@Intern.c)
 *     ??$GetValueHelper@W4ApplicationWindowTitleBarVisibilityInternal@WindowManagement@ApplicationModel@Internal@Windows@@@@YA?AW4ApplicationWindowTitleBarVisibilityInternal@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1803DC06C (--$GetValueHelper@W4ApplicationWindowTitleBarVisibilityInternal@WindowManagement@ApplicationMode.c)
 *     ??$GetValueHelper@W4AppModelVisibility@WindowManagement@ApplicationModel@Internal@Windows@@@@YA?AW4AppModelVisibility@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1803E860C (--$GetValueHelper@W4AppModelVisibility@WindowManagement@ApplicationModel@Internal@Windows@@@@YA-.c)
 *     ?TryGetApplicationViewForItem@AppViewDataSourceHelpers@@YA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180420E04 (-TryGetApplicationViewForItem@AppViewDataSourceHelpers@@YA-AV-$com_ptr_t@UIApplicationView@@Uerr.c)
 *     ?SetDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAXPE$AAUISwitchItemDataSource@2345@@Z @ 0x180437F30 (-SetDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAXPE$A.c)
 *     ?PresentationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x1804EB570 (-PresentationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<IInspectable,wil::err_exception_policy>::com_ptr_t<IInspectable,wil::err_exception_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}
