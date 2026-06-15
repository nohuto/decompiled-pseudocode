/*
 * XREFs of ??1WORKER_THREAD_EVENT@@UEAA@XZ @ 0x18003BDFC
 * Callers:
 *     _SpatialPolicy::DetectComboEndpoint_::_1_::dtor$10 @ 0x180071765 (_SpatialPolicy--DetectComboEndpoint_--_1_--dtor$10.c)
 * Callees:
 *     <none>
 */

void __fastcall WORKER_THREAD_EVENT::~WORKER_THREAD_EVENT(WORKER_THREAD_EVENT *this)
{
  *(_QWORD *)this = &WORKER_THREAD_EVENT::`vftable';
}
