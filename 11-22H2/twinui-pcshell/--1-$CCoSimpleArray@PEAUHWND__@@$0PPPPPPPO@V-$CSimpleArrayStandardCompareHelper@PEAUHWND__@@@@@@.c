/*
 * XREFs of ??1?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@QEAA@XZ @ 0x1803A54D4
 * Callers:
 *     _CClassicWindowManager::EnumerateOwnershipTree_::_1_::dtor$1 @ 0x1803A8E52 (_CClassicWindowManager--EnumerateOwnershipTree_--_1_--dtor$1.c)
 *     _CWin32ApplicationView::EnumerateOwnershipTree_::_1_::dtor$2 @ 0x1803CDC42 (_CWin32ApplicationView--EnumerateOwnershipTree_--_1_--dtor$2.c)
 *     _ApplicationViewManagement::ToolWindowGathererTemplated_ApplicationViewManagement::AssociatedWindowWin32Calls_::GatherWindows_::_1_::dtor$0 @ 0x1803CE255 (_ApplicationViewManagement--ToolWindowGathererTemplated_ApplicationViewManagement--AssociatedWin.c)
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z @ 0x18060C114 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z.c)
 *     _VirtualDesktopGestureWindow::CreateAdjacentDesktop_::_1_::dtor$12 @ 0x18060D0D5 (_VirtualDesktopGestureWindow--CreateAdjacentDesktop_--_1_--dtor$12.c)
 *     _VirtualDesktopGestureWindow::CreateAdjacentDesktop_::_1_::dtor$13 @ 0x18060D0E1 (_VirtualDesktopGestureWindow--CreateAdjacentDesktop_--_1_--dtor$13.c)
 *     _VirtualDesktopHotKeyWindow::CreateAdjacentDesktop_::_1_::dtor$7 @ 0x18061980C (_VirtualDesktopHotKeyWindow--CreateAdjacentDesktop_--_1_--dtor$7.c)
 *     _VirtualDesktopHotKeyWindow::CreateAdjacentDesktop_::_1_::dtor$8 @ 0x180619818 (_VirtualDesktopHotKeyWindow--CreateAdjacentDesktop_--_1_--dtor$8.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CCoSimpleArray<HWND__ *,4294967294,CSimpleArrayStandardCompareHelper<HWND__ *>>::~CCoSimpleArray<HWND__ *,4294967294,CSimpleArrayStandardCompareHelper<HWND__ *>>(
        __int64 a1)
{
  CTSimpleArray<CDelayIAMOperations::COperation *,4294967294,CTPolicyCoTaskMem<CDelayIAMOperations::COperation *>,CSimpleArrayStandardCompareHelper<CDelayIAMOperations::COperation *>,CSimpleArrayStandardMergeHelper<CDelayIAMOperations::COperation *>>::RemoveAll(a1);
}
