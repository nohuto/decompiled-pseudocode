/*
 * XREFs of ?dtor$0@?0??GetBitSet@SchedulerBase@details@Concurrency@@QEAA?AVQuickBitSet@23@PEBVlocation@3@@Z@4HA @ 0x1800E3B77
 * Callers:
 *     <none>
 * Callees:
 *     ??1TaskStack@details@Concurrency@@QEAA@XZ @ 0x180010240 (--1TaskStack@details@Concurrency@@QEAA@XZ.c)
 */

void __fastcall `Concurrency::details::SchedulerBase::GetBitSet'::`1'::dtor$0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    Concurrency::details::TaskStack::~TaskStack(*(Concurrency::details::TaskStack **)(a2 + 88));
  }
}
