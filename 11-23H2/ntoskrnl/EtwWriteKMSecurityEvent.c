/*
 * XREFs of EtwWriteKMSecurityEvent @ 0x140399764
 * Callers:
 *     AdtpWriteToEtwEx @ 0x140670090 (AdtpWriteToEtwEx.c)
 *     AdtpWriteToEtw @ 0x14083D050 (AdtpWriteToEtw.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpEventWriteFull @ 0x140258630 (EtwpEventWriteFull.c)
 */

__int64 EtwWriteKMSecurityEvent()
{
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned int v1; // r8d
  __int64 v2; // r9
  unsigned __int16 *v3; // r10

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  return EtwpEventWriteFull(
           (_QWORD *)(CurrentServerSiloGlobals[108] + 24LL),
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
