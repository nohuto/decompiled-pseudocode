/*
 * XREFs of sub_14083F680 @ 0x14083F680
 * Callers:
 *     sub_14083F5FC @ 0x14083F5FC (sub_14083F5FC.c)
 * Callees:
 *     RtlLengthSid @ 0x1402A4730 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14081549C @ 0x14081549C (sub_14081549C.c)
 */

NTSTATUS sub_14083F680()
{
  ULONG v0; // eax
  __int64 v1; // rcx
  int v3; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-30h] BYREF
  PSID v5; // [rsp+48h] [rbp-20h]
  ULONG v6; // [rsp+50h] [rbp-18h]
  int v7; // [rsp+54h] [rbp-14h]

  v4.Reserved = 0;
  v4.Ptr = (ULONGLONG)&v3;
  v5 = Group;
  v3 = 1;
  v4.Size = 4;
  v0 = RtlLengthSid(Group);
  v7 = 0;
  v6 = v0;
  return sub_14081549C(v1, (const EVENT_DESCRIPTOR *)qword_140012688, 0LL, 2u, &v4);
}
