/*
 * XREFs of _CAppViewManager::_GetViewForSwitchInternal_::_1_::dtor$2 @ 0x1802FC5A9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAppViewManager::_GetViewForSwitchInternal_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 72));
}
