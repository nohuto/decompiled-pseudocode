/*
 * XREFs of _CAppViewManager::StealForegroundActivateGlom_::_1_::dtor$1 @ 0x1803B297F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAppViewManager::StealForegroundActivateGlom_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 104));
}
