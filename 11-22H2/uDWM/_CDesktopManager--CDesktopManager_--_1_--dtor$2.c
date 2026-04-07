/*
 * XREFs of _CDesktopManager::CDesktopManager_::_1_::dtor$2 @ 0x180068270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopManager::CDesktopManager_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(*(_QWORD *)(a2 + 48) + 56LL);
}
