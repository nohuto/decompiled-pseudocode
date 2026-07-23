/*
 * XREFs of sub_1406EB3FC @ 0x1406EB3FC
 * Callers:
 *     sub_140751120 @ 0x140751120 (sub_140751120.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x1402E0C80 (RtlCheckTokenMembership.c)
 */

NTSTATUS __fastcall sub_1406EB3FC(PSID SidToCheck)
{
  NTSTATUS result; // eax
  BOOLEAN IsMember; // [rsp+38h] [rbp+10h] BYREF

  IsMember = 0;
  result = RtlCheckTokenMembership(0LL, SidToCheck, &IsMember);
  if ( result < 0 || !IsMember )
    return -1073741790;
  return result;
}
