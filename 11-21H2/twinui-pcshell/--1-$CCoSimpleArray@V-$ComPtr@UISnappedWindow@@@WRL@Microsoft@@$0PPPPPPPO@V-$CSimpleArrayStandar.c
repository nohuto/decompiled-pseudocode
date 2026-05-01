/*
 * XREFs of ??1?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@QEAA@XZ @ 0x180317118
 * Callers:
 *     _TaskbarLayoutPolicyManager::GetTaskbarLayout_::_1_::dtor$1 @ 0x1803188A5 (_TaskbarLayoutPolicyManager--GetTaskbarLayout_--_1_--dtor$1.c)
 *     _TaskbarLayoutPolicyManager::PopulateAndSetPinned_::_1_::dtor$1 @ 0x180319071 (_TaskbarLayoutPolicyManager--PopulateAndSetPinned_--_1_--dtor$1.c)
 *     _std::vector_ParsedTaskbarLayout_std::allocator_ParsedTaskbarLayout___::_Emplace_back_with_unused_capacity_ParsedTaskbarLayout__::_1_::dtor$0 @ 0x18031A914 (_std--vector_ParsedTaskbarLayout_std--allocator_ParsedTaskbarLayout___--_Emplace_back_with_unuse.c)
 *     _std::vector_ParsedTaskbarLayout_std::allocator_ParsedTaskbarLayout___::_Emplace_reallocate_ParsedTaskbarLayout__::_1_::dtor$0 @ 0x18031AE92 (_std--vector_ParsedTaskbarLayout_std--allocator_ParsedTaskbarLayout___--_Emplace_reallocate_Pars.c)
 *     _std::_Uninitialized_move_ParsedTaskbarLayout___std::allocator_ParsedTaskbarLayout____::_1_::dtor$1 @ 0x18031B002 (_std--_Uninitialized_move_ParsedTaskbarLayout___std--allocator_ParsedTaskbarLayout__ea_18031B002.c)
 *     _winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::GetUnoccludedSnappedWindowsForWindow_::_1_::dtor$4 @ 0x180589D63 (_winrt--Windows--Internal--Shell--TaskGroups--implementation--TaskGroupsComponent--_ea_180589D63.c)
 *     _CShellSnapComponent::GetAdjacentHalfSnappedView_::_1_::dtor$3 @ 0x180592CA7 (_CShellSnapComponent--GetAdjacentHalfSnappedView_--_1_--dtor$3.c)
 *     _CShellSnapComponent::GetAdjacentSnappedViews_::_1_::dtor$2 @ 0x18059336F (_CShellSnapComponent--GetAdjacentSnappedViews_--_1_--dtor$2.c)
 *     _CShellSnapComponent::GetHalfSnappedViewFromToolWindow_::_1_::dtor$2 @ 0x180593951 (_CShellSnapComponent--GetHalfSnappedViewFromToolWindow_--_1_--dtor$2.c)
 *     _CShellSnapComponent::OnGetWindowArrangementRects_::_1_::dtor$8 @ 0x180594F4E (_CShellSnapComponent--OnGetWindowArrangementRects_--_1_--dtor$8.c)
 *     _CSnapAssistControllerBase::_RetrieveSnappedWindowsForMonitor_::_1_::dtor$1 @ 0x18059E7F9 (_CSnapAssistControllerBase--_RetrieveSnappedWindowsForMonitor_--_1_--dtor$1.c)
 *     _SnapServiceProvider::GetSnapRectForDesktopMode_::_1_::dtor$2 @ 0x18059F7C1 (_SnapServiceProvider--GetSnapRectForDesktopMode_--_1_--dtor$2.c)
 *     _HotkeyHandler::DetermineRectForSnapAction_::_1_::dtor$0 @ 0x1805A9A4B (_HotkeyHandler--DetermineRectForSnapAction_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 CCoSimpleArray<Microsoft::WRL::ComPtr<ISnappedWindow>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ISnappedWindow>>>::~CCoSimpleArray<Microsoft::WRL::ComPtr<ISnappedWindow>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ISnappedWindow>>>()
{
  return CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>>::RemoveAll();
}
