/*
 * XREFs of sub_140643F08 @ 0x140643F08
 * Callers:
 *     WheaReportHwError @ 0x140643630 (WheaReportHwError.c)
 *     sub_140644030 @ 0x140644030 (sub_140644030.c)
 *     sub_140860F60 @ 0x140860F60 (sub_140860F60.c)
 * Callees:
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 */

__int64 __fastcall sub_140643F08(ULONG_PTR a1)
{
  if ( (*(_DWORD *)(a1 + 24) & 1) != 0 )
    return (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 28), 0);
  else
    return sub_140348B40(a1);
}
