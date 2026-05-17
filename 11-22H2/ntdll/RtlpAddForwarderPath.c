/*
 * XREFs of RtlpAddForwarderPath @ 0x1800E9630
 * Callers:
 *     RtlpComputePath @ 0x18006A490 (RtlpComputePath.c)
 * Callees:
 *     RtlpAddSystemPath @ 0x1800E9670 (RtlpAddSystemPath.c)
 */

__int64 __fastcall RtlpAddForwarderPath(char a1)
{
  if ( a1 )
    RtlpAddSystemPath(L"\\Forwarders\\alt");
  return RtlpAddSystemPath(L"\\Forwarders");
}
