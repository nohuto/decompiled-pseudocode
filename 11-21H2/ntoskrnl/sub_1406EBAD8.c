/*
 * XREFs of sub_1406EBAD8 @ 0x1406EBAD8
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x1402E0C80 (RtlCheckTokenMembership.c)
 */

BOOLEAN sub_1406EBAD8()
{
  BOOLEAN IsMember; // [rsp+30h] [rbp+8h] BYREF

  IsMember = 0;
  RtlCheckTokenMembership(0LL, Group, &IsMember);
  return IsMember;
}
