/*
 * XREFs of RtlpAddForwarderPath @ 0x1800EA2D0
 * Callers:
 *     RtlpComputePath @ 0x180033140 (RtlpComputePath.c)
 * Callees:
 *     RtlpAddSystemPath @ 0x1800EA310 (RtlpAddSystemPath.c)
 */

__int64 __fastcall RtlpAddForwarderPath(char a1)
{
  if ( a1 )
    RtlpAddSystemPath(L"\\Forwarders\\alt");
  return RtlpAddSystemPath(L"\\Forwarders");
}
