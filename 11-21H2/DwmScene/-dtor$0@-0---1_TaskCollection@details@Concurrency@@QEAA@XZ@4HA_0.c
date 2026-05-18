/*
 * XREFs of ?dtor$0@?0???1_TaskCollection@details@Concurrency@@QEAA@XZ@4HA_0 @ 0x18010D43C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall `Concurrency::details::_TaskCollection::~_TaskCollection'::`1'::dtor$0(__int64 a1, __int64 a2)
{
  Mtx_destroy_in_situ((_Mtx_t)(*(_QWORD *)(a2 + 80) + 88LL));
}
