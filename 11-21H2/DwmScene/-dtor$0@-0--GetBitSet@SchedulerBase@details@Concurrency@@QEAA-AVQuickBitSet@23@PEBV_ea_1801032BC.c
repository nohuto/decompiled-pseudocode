/*
 * XREFs of ?dtor$0@?0??GetBitSet@SchedulerBase@details@Concurrency@@QEAA?AVQuickBitSet@23@PEBVlocation@3@@Z@4HA_0 @ 0x1801032BC
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005508C @ 0x18005508C (sub_18005508C.c)
 */

__int64 __fastcall `Concurrency::details::SchedulerBase::GetBitSet'::`1'::dtor$0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_18005508C(*(__int64 **)(a2 + 88));
  }
  return result;
}
