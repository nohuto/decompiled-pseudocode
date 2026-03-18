/*
 * XREFs of RtlAddAuditAccessAce @ 0x1409BB0A0
 * Callers:
 *     SepInitProcessAuditSd @ 0x14038848C (SepInitProcessAuditSd.c)
 *     ObInitSystem @ 0x140B4B2F8 (ObInitSystem.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x140735270 (RtlpAddKnownAce.c)
 */

__int64 __fastcall RtlAddAuditAccessAce(__int64 a1, __int64 a2, int a3)
{
  return RtlpAddKnownAce(a1, 2u, 192, a3, (unsigned __int8 *)SeWorldSid, 2);
}
