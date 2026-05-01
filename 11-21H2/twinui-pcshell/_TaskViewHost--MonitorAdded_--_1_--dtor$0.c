/*
 * XREFs of _TaskViewHost::MonitorAdded_::_1_::dtor$0 @ 0x1805FEB9B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TaskViewHost::MonitorAdded_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)(a2 + 32));
}
