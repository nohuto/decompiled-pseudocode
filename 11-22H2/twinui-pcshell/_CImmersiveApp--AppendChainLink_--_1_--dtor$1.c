/*
 * XREFs of _CImmersiveApp::AppendChainLink_::_1_::dtor$1 @ 0x1803C00B1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CImmersiveApp::AppendChainLink_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 32));
}
