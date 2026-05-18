/*
 * XREFs of ?dtor$0@?0???1ScheduleGroupSegmentBase@details@Concurrency@@UEAA@XZ@4HA_3 @ 0x1800EAC3D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall `Concurrency::details::ScheduleGroupSegmentBase::~ScheduleGroupSegmentBase'::`1'::dtor$0(
        __int64 a1,
        __int64 a2)
{
  Mtx_destroy_in_situ((_Mtx_t)(*(_QWORD *)(a2 + 64) + 48LL));
}
