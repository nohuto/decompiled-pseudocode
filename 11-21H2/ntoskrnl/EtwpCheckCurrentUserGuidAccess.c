/*
 * XREFs of EtwpCheckCurrentUserGuidAccess @ 0x1409EB7FC
 * Callers:
 *     EtwpStartLogger @ 0x1406EE2AC (EtwpStartLogger.c)
 * Callees:
 *     EtwpCheckGuidAccess @ 0x140790CA8 (EtwpCheckGuidAccess.c)
 */

__int64 __fastcall EtwpCheckCurrentUserGuidAccess(__int64 a1, ACCESS_MASK a2)
{
  return EtwpCheckGuidAccess(a1, a2);
}
