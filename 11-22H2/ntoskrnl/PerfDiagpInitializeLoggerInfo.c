/*
 * XREFs of PerfDiagpInitializeLoggerInfo @ 0x14083D77C
 * Callers:
 *     PerfDiagpProxyWorker @ 0x14083D420 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x14083D668 (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     memset @ 0x140435400 (memset.c)
 */

void __fastcall PerfDiagpInitializeLoggerInfo(int a1, __int16 a2)
{
  memset(&OutputBuffer, 0, 0xB0uLL);
  dword_140C32778 = -2130771792;
  dword_140C3275C = 0x20000;
  wcscpy(&xmmword_140C3270C, L"PerfDiag Logger");
  RtlInitUnicodeString(&DestinationString, &xmmword_140C3270C);
  OutputBuffer = 180;
  dword_140C327E0 = 1;
  if ( a1 )
  {
    word_140C327E6 = 1;
    word_140C327E4 = a2 + 1;
    HIWORD(dword_140C327E0) = 1;
    LOWORD(dword_140C327E0) = a2 + 2;
    OutputBuffer = 4 * (unsigned __int16)(a2 + 1) + 180;
  }
}
