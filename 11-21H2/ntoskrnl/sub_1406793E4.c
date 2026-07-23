/*
 * XREFs of sub_1406793E4 @ 0x1406793E4
 * Callers:
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 * Callees:
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x140679440 (RtlGetOwnerSecurityDescriptor.c)
 *     sub_140721BF0 @ 0x140721BF0 (sub_140721BF0.c)
 */

BOOLEAN __fastcall sub_1406793E4(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  BOOLEAN OwnerDefaulted; // [rsp+40h] [rbp+18h] BYREF
  PSID Owner; // [rsp+48h] [rbp+20h] BYREF

  Owner = 0LL;
  if ( qword_140D3B070
    && (v2 = sub_140721BF0(a1, a2, 0LL),
        RtlGetOwnerSecurityDescriptor((PSECURITY_DESCRIPTOR)(v2 + 32), &Owner, &OwnerDefaulted) >= 0)
    && Owner )
  {
    return RtlEqualSid(qword_140D3B070, Owner);
  }
  else
  {
    return 0;
  }
}
