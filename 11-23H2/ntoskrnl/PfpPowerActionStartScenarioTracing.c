/*
 * XREFs of PfpPowerActionStartScenarioTracing @ 0x140A9FF44
 * Callers:
 *     PfPowerActionNotify @ 0x140A9FCE4 (PfPowerActionNotify.c)
 * Callees:
 *     PfLogEvent @ 0x14028C318 (PfLogEvent.c)
 *     PfTAccessTracingCleanup @ 0x140A874E0 (PfTAccessTracingCleanup.c)
 *     MmPerformMemoryListCommand @ 0x140A884BC (MmPerformMemoryListCommand.c)
 *     PfTAccessTracingStart @ 0x140A88964 (PfTAccessTracingStart.c)
 */

__int64 __fastcall PfpPowerActionStartScenarioTracing(__int64 a1)
{
  __int64 v2; // rax
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  PfTAccessTracingCleanup((__int64)&PfTGlobals, (__int64)&PfKernelGlobals, 4);
  MmPerformMemoryListCommand();
  PfTAccessTracingStart((__int64)&PfTGlobals, (__int64)&PfKernelGlobals, 4);
  v2 = *(int *)(a1 + 48);
  v5 = 0LL;
  v4 = v2;
  LODWORD(v5) = 4 * (unsigned __int16)*(_DWORD *)(a1 + 52);
  return PfLogEvent(
           27,
           dword_140C64FAC
         + (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                         + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10),
           &v4,
           0x10u);
}
