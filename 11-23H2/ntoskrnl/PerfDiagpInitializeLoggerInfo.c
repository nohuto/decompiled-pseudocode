/*
 * XREFs of PerfDiagpInitializeLoggerInfo @ 0x14083BCEC
 * Callers:
 *     PerfDiagpProxyWorker @ 0x14083B990 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x14083BBD8 (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall PerfDiagpInitializeLoggerInfo(int a1, __int16 a2)
{
  memset(&OutputBuffer, 0, 0xB0uLL);
  dword_140C32758 = -2130771792;
  dword_140C3273C = 0x20000;
  wcscpy(&xmmword_140C326EC, L"PerfDiag Logger");
  RtlInitUnicodeString(&DestinationString, &xmmword_140C326EC);
  OutputBuffer = 180;
  dword_140C327C0 = 1;
  if ( a1 )
  {
    word_140C327C6 = 1;
    word_140C327C4 = a2 + 1;
    HIWORD(dword_140C327C0) = 1;
    LOWORD(dword_140C327C0) = a2 + 2;
    OutputBuffer = 4 * (unsigned __int16)(a2 + 1) + 180;
  }
}
