/*
 * XREFs of EtwpLogMemInfoRundown @ 0x1409EECF8
 * Callers:
 *     EtwpKernelTraceRundown @ 0x1408200C8 (EtwpKernelTraceRundown.c)
 * Callees:
 *     MmQuerySystemMemoryInformation @ 0x140368708 (MmQuerySystemMemoryInformation.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     EtwpLogMemInfo @ 0x1405FDE24 (EtwpLogMemInfo.c)
 *     EtwpLogMemInfoWs @ 0x1408A6B64 (EtwpLogMemInfoWs.c)
 */

void __fastcall EtwpLogMemInfoRundown(__int64 a1)
{
  _OWORD v2[2]; // [rsp+20h] [rbp-38h] BYREF

  memset(v2, 0, sizeof(v2));
  MmQuerySystemMemoryInformation(v2);
  EtwpLogMemInfo(a1, (__int64)v2);
  EtwpLogMemInfoWs(a1, *(unsigned __int64 *)&v2[0]);
}
