/*
 * XREFs of sub_1409CE660 @ 0x1409CE660
 * Callers:
 *     sub_1409C8EE8 @ 0x1409C8EE8 (sub_1409C8EE8.c)
 * Callees:
 *     RtlFindAceByType @ 0x140349610 (RtlFindAceByType.c)
 *     RtlGetSaclSecurityDescriptor @ 0x14066FE80 (RtlGetSaclSecurityDescriptor.c)
 */

bool __fastcall sub_1409CE660(void *a1)
{
  char v1; // bl
  PACL Acl; // [rsp+20h] [rbp-18h] BYREF
  BOOLEAN v4; // [rsp+48h] [rbp+10h] BYREF
  BOOLEAN v5; // [rsp+50h] [rbp+18h] BYREF
  ULONG Index; // [rsp+58h] [rbp+20h] BYREF

  v1 = 0;
  Acl = 0LL;
  v4 = 0;
  Index = 0;
  if ( RtlGetSaclSecurityDescriptor(a1, &v4, &Acl, &v5) >= 0 && v4 )
    return RtlFindAceByType(Acl, 0x12u, &Index) != 0LL;
  return v1;
}
