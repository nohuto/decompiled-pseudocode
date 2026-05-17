/*
 * XREFs of RtlCheckTokenMembership @ 0x1800F1230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCheckTokenMembership(void *a1, unsigned __int8 *a2, _BYTE *a3)
{
  return RtlCheckTokenMembershipEx(a1, a2, 0, a3);
}
