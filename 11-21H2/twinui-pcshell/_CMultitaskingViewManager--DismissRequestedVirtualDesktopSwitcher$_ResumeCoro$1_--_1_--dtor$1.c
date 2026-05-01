/*
 * XREFs of _CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher$_ResumeCoro$1_::_1_::dtor$1 @ 0x1801B280A
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@VCMultitaskingViewManager@@@winrt@@QEAA@XZ @ 0x18049A2A0 (--1-$com_ptr@VCMultitaskingViewManager@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher__ResumeCoro_1_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 48) = *(_QWORD *)(a2 + 112) + 24LL;
  return winrt::com_ptr<CMultitaskingViewManager>::~com_ptr<CMultitaskingViewManager>(*(_QWORD *)(a2 + 48));
}
