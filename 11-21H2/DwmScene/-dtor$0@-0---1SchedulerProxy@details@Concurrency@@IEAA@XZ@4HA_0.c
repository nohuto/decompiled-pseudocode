/*
 * XREFs of ?dtor$0@?0???1SchedulerProxy@details@Concurrency@@IEAA@XZ@4HA_0 @ 0x18010D1AA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall `Concurrency::details::SchedulerProxy::~SchedulerProxy'::`1'::dtor$0(__int64 a1, __int64 a2)
{
  Mtx_destroy_in_situ((_Mtx_t)(*(_QWORD *)(a2 + 64) + 64LL));
}
