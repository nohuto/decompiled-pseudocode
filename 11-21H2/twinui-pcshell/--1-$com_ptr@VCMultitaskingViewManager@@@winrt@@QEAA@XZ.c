/*
 * XREFs of ??1?$com_ptr@VCMultitaskingViewManager@@@winrt@@QEAA@XZ @ 0x18049A2A0
 * Callers:
 *     _CMultitaskingViewManager::DismissRequested$_ResumeCoro$1_::_1_::dtor$1 @ 0x1801B2292 (_CMultitaskingViewManager--DismissRequested$_ResumeCoro$1_--_1_--dtor$1.c)
 *     _CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher$_ResumeCoro$1_::_1_::dtor$1 @ 0x1801B280A (_CMultitaskingViewManager--DismissRequestedVirtualDesktopSwitcher$_ResumeCoro$1_--_1_--dtor$1.c)
 *     _CMultitaskingViewManager::ShowRequested$_ResumeCoro$1_::_1_::dtor$1 @ 0x1801B324D (_CMultitaskingViewManager--ShowRequested$_ResumeCoro$1_--_1_--dtor$1.c)
 *     _CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1_::_1_::dtor$1 @ 0x1801B3D55 (_CMultitaskingViewManager--ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1_--_1_--dtor$1.c)
 *     __lambda_bbf3cdef3b46e36cc2ca39d617d8ce03_::operator()_::_1_::dtor$1 @ 0x18021DDC4 (__lambda_bbf3cdef3b46e36cc2ca39d617d8ce03_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ @ 0x180147344 (-unconditional_release_ref@-$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<CMultitaskingViewManager>::~com_ptr<CMultitaskingViewManager>(
        volatile signed __int32 **a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<CMultitaskingViewManager>::unconditional_release_ref(a1);
  return result;
}
