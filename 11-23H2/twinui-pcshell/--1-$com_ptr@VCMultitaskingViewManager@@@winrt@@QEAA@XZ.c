/*
 * XREFs of ??1?$com_ptr@VCMultitaskingViewManager@@@winrt@@QEAA@XZ @ 0x18055349C
 * Callers:
 *     __lambda_e5288bd2e8441abb5041b2e3fba677a0_::operator()_::_1_::dtor$1 @ 0x18020E45D (__lambda_e5288bd2e8441abb5041b2e3fba677a0_--operator()_--_1_--dtor$1.c)
 *     _CMultitaskingViewManager::DismissRequested$_ResumeCoro$1_::_1_::dtor$1 @ 0x18020E81A (_CMultitaskingViewManager--DismissRequested$_ResumeCoro$1_--_1_--dtor$1.c)
 *     _CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher$_ResumeCoro$1_::_1_::dtor$1 @ 0x18020ECB6 (_CMultitaskingViewManager--DismissRequestedVirtualDesktopSwitcher$_ResumeCoro$1_--_1_--dtor$1.c)
 *     _CMultitaskingViewManager::ShowRequested$_ResumeCoro$1_::_1_::dtor$1 @ 0x18020F775 (_CMultitaskingViewManager--ShowRequested$_ResumeCoro$1_--_1_--dtor$1.c)
 *     _CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1_::_1_::dtor$1 @ 0x1802100A5 (_CMultitaskingViewManager--ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1_--_1_--dtor$1.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ @ 0x180141204 (-unconditional_release_ref@-$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<CMultitaskingViewManager>::~com_ptr<CMultitaskingViewManager>(__int64 *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<CMultitaskingViewManager>::unconditional_release_ref(a1);
  return result;
}
