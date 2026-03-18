/*
 * XREFs of RtlAddAuditAccessAce @ 0x1409B8050
 * Callers:
 *     SepInitProcessAuditSd @ 0x1403CE4A4 (SepInitProcessAuditSd.c)
 *     ObInitSystem @ 0x140AFE184 (ObInitSystem.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x1407B4900 (RtlpAddKnownAce.c)
 */

__int64 __fastcall RtlAddAuditAccessAce(__int64 a1, __int64 a2, int a3)
{
  return RtlpAddKnownAce(a1, 2u, 192, a3, (unsigned __int8 *)SeWorldSid, 2);
}
