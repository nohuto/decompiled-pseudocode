/*
 * XREFs of EtwWriteKMSecurityEvent @ 0x1403CC568
 * Callers:
 *     AdtpWriteToEtwEx @ 0x14064B24C (AdtpWriteToEtwEx.c)
 *     AdtpWriteToEtw @ 0x140844C0C (AdtpWriteToEtw.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x140300E50 (EtwpEventWriteFull.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 EtwWriteKMSecurityEvent()
{
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned int v1; // r8d
  __int64 v2; // r9
  __int64 v3; // r10

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  return EtwpEventWriteFull(
           CurrentServerSiloGlobals[108] + 24LL,
           *(_BYTE *)(CurrentServerSiloGlobals[108] + 4064LL),
           0,
           0,
           v3,
           0,
           0,
           0LL,
           0LL,
           v1,
           v2,
           0LL,
           0LL,
           0LL,
           0,
           0LL,
           0LL);
}
