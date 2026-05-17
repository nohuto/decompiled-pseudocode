/*
 * XREFs of RtlpAddForwarderPath @ 0x1800EA960
 * Callers:
 *     RtlpComputePath @ 0x18006A470 (RtlpComputePath.c)
 * Callees:
 *     RtlpAddSystemPath @ 0x1800EA9A0 (RtlpAddSystemPath.c)
 */

__int64 __fastcall RtlpAddForwarderPath(char a1)
{
  if ( a1 )
    RtlpAddSystemPath(L"\\Forwarders\\alt");
  return RtlpAddSystemPath(L"\\Forwarders");
}
