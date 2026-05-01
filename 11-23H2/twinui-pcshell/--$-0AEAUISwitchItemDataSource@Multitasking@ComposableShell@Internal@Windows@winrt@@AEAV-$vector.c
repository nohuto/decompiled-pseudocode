/*
 * XREFs of ??$?0AEAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@AEAV?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEBURect@Foundation@45@HAEAPEAUHWND__@@AEAPEAUHWND__@@AEAUISnapAssistCallback2@WindowSnapping@Shell@345@@?$_Ref_count_obj2@VSnapAssistState@@@std@@QEAA@AEAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@AEAV?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@1@AEBURect@Foundation@67@$$QEAHAEAPEAUHWND__@@4AEAUISnapAssistCallback2@WindowSnapping@Shell@567@@Z @ 0x180768A04
 * Callers:
 *     ??$make_shared@VSnapAssistState@@AEAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@AEAV?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEBURect@Foundation@67@HAEAPEAUHWND__@@AEAPEAUHWND__@@AEAUISnapAssistCallback2@WindowSnapping@Shell@567@@std@@YA?AV?$shared_ptr@VSnapAssistState@@@0@AEAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@AEAV?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@0@AEBURect@Foundation@67@$$QEAHAEAPEAUHWND__@@4AEAUISnapAssistCallback2@WindowSnapping@Shell@567@@Z @ 0x1807698BC (--$make_shared@VSnapAssistState@@AEAUISwitchItemDataSource@Multitasking@ComposableShell@Internal.c)
 * Callees:
 *     ??0SnapAssistState@@QEAA@AEBUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBV?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEBURect@Foundation@56@HPEAUHWND__@@3AEBUISnapAssistCallback2@WindowSnapping@Shell@456@@Z @ 0x18078AFAC (--0SnapAssistState@@QEAA@AEBUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Ref_count_obj2<SnapAssistState>::_Ref_count_obj2<SnapAssistState>(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        _DWORD *a5,
        __int64 *a6,
        __int64 *a7,
        __int64 a8)
{
  *(_OWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<SnapAssistState>::`vftable';
  SnapAssistState::SnapAssistState(a1 + 16, a2, a3, a4, *a5, *a6, *a7, a8);
  return a1;
}
