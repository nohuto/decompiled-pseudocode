/*
 * XREFs of ??1?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@QEAA@XZ @ 0x1803E5F40
 * Callers:
 *     _TaskbarLayoutPolicyManager::GetTaskbarLayout_::_1_::dtor$1 @ 0x1803E74BA (_TaskbarLayoutPolicyManager--GetTaskbarLayout_--_1_--dtor$1.c)
 *     _TaskbarLayoutPolicyManager::PopulateAndSetPinned_::_1_::dtor$1 @ 0x1803E7C9B (_TaskbarLayoutPolicyManager--PopulateAndSetPinned_--_1_--dtor$1.c)
 *     _std::vector_ParsedTaskbarLayout_std::allocator_ParsedTaskbarLayout___::_Emplace_reallocate_ParsedTaskbarLayout__::_1_::dtor$0 @ 0x1803E93AA (_std--vector_ParsedTaskbarLayout_std--allocator_ParsedTaskbarLayout___--_Emplace_reallocate_Pars.c)
 *     _std::_Uninitialized_move_ParsedTaskbarLayout___std::allocator_ParsedTaskbarLayout____::_1_::dtor$1 @ 0x1803E94EA (_std--_Uninitialized_move_ParsedTaskbarLayout___std--allocator_ParsedTaskbarLayout__ea_1803E94EA.c)
 *     _std::vector_ParsedTaskbarLayout_std::allocator_ParsedTaskbarLayout___::emplace_back_ParsedTaskbarLayout__::_1_::dtor$0 @ 0x1803E9597 (_std--vector_ParsedTaskbarLayout_std--allocator_ParsedTaskbarLayout___--emplace_back_ParsedTaskb.c)
 *     _winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::GetUnoccludedSnappedWindowsForWindow_::_1_::dtor$4 @ 0x180647DFB (_winrt--Windows--Internal--Shell--TaskGroups--implementation--TaskGroupsComponent--_ea_180647DFB.c)
 *     _CShellSnapComponent::GetAdjacentSnappedViews_::_1_::dtor$2 @ 0x1806609E3 (_CShellSnapComponent--GetAdjacentSnappedViews_--_1_--dtor$2.c)
 *     _CShellSnapComponent::GetSnappedViewFromToolWindow_::_1_::dtor$2 @ 0x1806616CE (_CShellSnapComponent--GetSnappedViewFromToolWindow_--_1_--dtor$2.c)
 *     _CSnapAssistControllerBase::_RetrieveSnappedWindowsForMonitor_::_1_::dtor$1 @ 0x18066DF7B (_CSnapAssistControllerBase--_RetrieveSnappedWindowsForMonitor_--_1_--dtor$1.c)
 *     _SnapServiceProvider::GetSnapRectForDesktopMode_::_1_::dtor$2 @ 0x18066EBAA (_SnapServiceProvider--GetSnapRectForDesktopMode_--_1_--dtor$2.c)
 *     _HotkeyHandler::DetermineRectForSnapAction_::_1_::dtor$0 @ 0x18067635C (_HotkeyHandler--DetermineRectForSnapAction_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CCoSimpleArray<Microsoft::WRL::ComPtr<ISnappedWindow>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ISnappedWindow>>>::~CCoSimpleArray<Microsoft::WRL::ComPtr<ISnappedWindow>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ISnappedWindow>>>(
        __int64 a1)
{
  CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>>::RemoveAll(a1);
}
