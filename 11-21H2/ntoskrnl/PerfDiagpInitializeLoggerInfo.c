/*
 * XREFs of PerfDiagpInitializeLoggerInfo @ 0x140818D14
 * Callers:
 *     PerfDiagpProxyWorker @ 0x140818A90 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x1408603A8 (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall PerfDiagpInitializeLoggerInfo(int a1, __int16 a2)
{
  memset(dword_140C16710, 0, 0xB0uLL);
  dword_140C16758 = -2130771792;
  dword_140C1673C = 0x20000;
  wcscpy(&xmmword_140C166EC, L"PerfDiag Logger");
  RtlInitUnicodeString(&DestinationString, &xmmword_140C166EC);
  LODWORD(dword_140C16710[0]) = 180;
  dword_140C167C0 = 1;
  if ( a1 )
  {
    word_140C167C6 = 1;
    word_140C167C4 = a2 + 1;
    HIWORD(dword_140C167C0) = 1;
    LOWORD(dword_140C167C0) = a2 + 2;
    LODWORD(dword_140C16710[0]) = 4 * (unsigned __int16)(a2 + 1) + 180;
  }
}
