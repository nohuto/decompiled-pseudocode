/*
 * XREFs of ?dtor$0@?0??GetBitSet@SchedulerBase@details@Concurrency@@QEAA?AVQuickBitSet@23@PEBVlocation@3@@Z@4HA @ 0x1801004B1
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002C338 @ 0x18002C338 (sub_18002C338.c)
 */

__int64 __fastcall `Concurrency::details::SchedulerBase::GetBitSet'::`1'::dtor$0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_18002C338(*(_QWORD *)(a2 + 88));
  }
  return result;
}
