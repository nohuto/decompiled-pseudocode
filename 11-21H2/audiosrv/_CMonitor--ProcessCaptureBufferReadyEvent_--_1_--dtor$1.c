/*
 * XREFs of _CMonitor::ProcessCaptureBufferReadyEvent_::_1_::dtor$1 @ 0x180122C53
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMonitor::ProcessCaptureBufferReadyEvent_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 80));
}
