/*
 * XREFs of _CAppViewManager::_QueueOperation_::_1_::dtor$0 @ 0x1803B80F6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAppViewManager::_QueueOperation_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 88));
}
