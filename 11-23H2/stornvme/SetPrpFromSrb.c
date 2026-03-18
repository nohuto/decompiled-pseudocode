/*
 * XREFs of SetPrpFromSrb @ 0x1C001B6FC
 * Callers:
 *     IoctlToNVMe @ 0x1C00149A0 (IoctlToNVMe.c)
 *     ProtocolCommandToNVMe @ 0x1C00189D4 (ProtocolCommandToNVMe.c)
 *     ProcessCommandNvmePacket @ 0x1C0024E0C (ProcessCommandNvmePacket.c)
 * Callees:
 *     MdlToPrp @ 0x1C0001A70 (MdlToPrp.c)
 *     SglToPrp @ 0x1C001B730 (SglToPrp.c)
 */

__int64 __fastcall SetPrpFromSrb(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 64) & 8) != 0 )
    result = MdlToPrp(a1, a2);
  else
    result = SglToPrp(a1, a2);
  if ( (_DWORD)result )
    ++*(_DWORD *)(a1 + 4080);
  return result;
}
