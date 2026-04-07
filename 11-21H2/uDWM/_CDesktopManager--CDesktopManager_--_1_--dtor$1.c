/*
 * XREFs of _CDesktopManager::CDesktopManager_::_1_::dtor$1 @ 0x180065D2A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CDesktopManager::CDesktopManager_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((CBaseObject **)(*(_QWORD *)(a2 + 48) + 40LL));
}
