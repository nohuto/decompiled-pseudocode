/*
 * XREFs of PerfDiagpInitializeLoggerInfo @ 0x14083B9EC
 * Callers:
 *     PerfDiagpProxyWorker @ 0x14083B690 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x14083B8D8 (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1B0 (RtlInitUnicodeString.c)
 *     memset @ 0x140435A00 (memset.c)
 */

void __fastcall PerfDiagpInitializeLoggerInfo(int a1, __int16 a2)
{
  memset(dword_140C32790, 0, 0xB0uLL);
  dword_140C327D8 = -2130771792;
  dword_140C327BC = 0x20000;
  wcscpy(&xmmword_140C3276C, L"PerfDiag Logger");
  RtlInitUnicodeString(&DestinationString, &xmmword_140C3276C);
  LODWORD(dword_140C32790[0]) = 180;
  dword_140C32840 = 1;
  if ( a1 )
  {
    word_140C32846 = 1;
    word_140C32844 = a2 + 1;
    HIWORD(dword_140C32840) = 1;
    LOWORD(dword_140C32840) = a2 + 2;
    LODWORD(dword_140C32790[0]) = 4 * (unsigned __int16)(a2 + 1) + 180;
  }
}
