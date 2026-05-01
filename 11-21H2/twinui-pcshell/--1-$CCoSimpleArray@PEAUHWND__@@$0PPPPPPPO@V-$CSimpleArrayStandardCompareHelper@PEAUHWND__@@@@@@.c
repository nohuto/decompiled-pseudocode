/*
 * XREFs of ??1?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@QEAA@XZ @ 0x1802EC858
 * Callers:
 *     _CClassicWindowManager::EnumerateOwnershipTree_::_1_::dtor$1 @ 0x1802F0282 (_CClassicWindowManager--EnumerateOwnershipTree_--_1_--dtor$1.c)
 *     _CWin32ApplicationView::EnumerateOwnershipTree_::_1_::dtor$2 @ 0x18031245C (_CWin32ApplicationView--EnumerateOwnershipTree_--_1_--dtor$2.c)
 *     _ApplicationViewManagement::ToolWindowGathererTemplated_ApplicationViewManagement::AssociatedWindowWin32Calls_::GatherWindows_::_1_::dtor$0 @ 0x180312A59 (_ApplicationViewManagement--ToolWindowGathererTemplated_ApplicationViewManagement--AssociatedWin.c)
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@AEAAJPEA_NIUtagRECT@@@Z @ 0x180550704 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@AEAAJPEA_NIUtagRECT@@@Z.c)
 *     _VirtualDesktopGestureWindow::CreateAdjacentDesktop_::_1_::dtor$12 @ 0x18055162C (_VirtualDesktopGestureWindow--CreateAdjacentDesktop_--_1_--dtor$12.c)
 *     _VirtualDesktopGestureWindow::CreateAdjacentDesktop_::_1_::dtor$13 @ 0x180551638 (_VirtualDesktopGestureWindow--CreateAdjacentDesktop_--_1_--dtor$13.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CCoSimpleArray<HWND__ *,4294967294,CSimpleArrayStandardCompareHelper<HWND__ *>>::~CCoSimpleArray<HWND__ *,4294967294,CSimpleArrayStandardCompareHelper<HWND__ *>>(
        __int64 a1)
{
  CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::RemoveAll(a1);
}
