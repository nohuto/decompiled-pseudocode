/*
 * XREFs of ??1WORKER_THREAD_EVENT@@UEAA@XZ @ 0x18004E900
 * Callers:
 *     _SpatialPolicy::DetectComboEndpoint_::_1_::dtor$9 @ 0x180079D37 (_SpatialPolicy--DetectComboEndpoint_--_1_--dtor$9.c)
 * Callees:
 *     <none>
 */

void __fastcall WORKER_THREAD_EVENT::~WORKER_THREAD_EVENT(WORKER_THREAD_EVENT *this)
{
  *(_QWORD *)this = &WORKER_THREAD_EVENT::`vftable';
}
