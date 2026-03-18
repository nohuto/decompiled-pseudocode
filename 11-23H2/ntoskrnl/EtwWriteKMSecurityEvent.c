/*
 * XREFs of EtwWriteKMSecurityEvent @ 0x140399584
 * Callers:
 *     AdtpWriteToEtwEx @ 0x14066FB40 (AdtpWriteToEtwEx.c)
 *     AdtpWriteToEtw @ 0x14083CD50 (AdtpWriteToEtw.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D370 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpEventWriteFull @ 0x140258570 (EtwpEventWriteFull.c)
 */

__int64 EtwWriteKMSecurityEvent()
{
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned int v1; // r8d
  __int64 v2; // r9
  __int64 v3; // r10

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
