/*
 * XREFs of sub_1406C1188 @ 0x1406C1188
 * Callers:
 *     sub_1406C1068 @ 0x1406C1068 (sub_1406C1068.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x1402EF420 (RtlSubAuthorityCountSid.c)
 *     RtlValidSid @ 0x1407B4660 (RtlValidSid.c)
 */

BOOLEAN __fastcall sub_1406C1188(PSID Sid, unsigned int a2)
{
  if ( a2 < 8 || a2 < 4 * (unsigned int)*RtlSubAuthorityCountSid(Sid) + 8 )
    return 0;
  else
    return RtlValidSid(Sid);
}
