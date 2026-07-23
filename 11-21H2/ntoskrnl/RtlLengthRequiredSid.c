/*
 * XREFs of RtlLengthRequiredSid @ 0x14066A560
 * Callers:
 *     sub_1402022FC @ 0x1402022FC (sub_1402022FC.c)
 *     RtlNormalizeSecurityDescriptor @ 0x140202D70 (RtlNormalizeSecurityDescriptor.c)
 *     sub_14062C598 @ 0x14062C598 (sub_14062C598.c)
 *     sub_1406375D0 @ 0x1406375D0 (sub_1406375D0.c)
 *     NtQueryQuotaInformationFile @ 0x140939960 (NtQueryQuotaInformationFile.c)
 *     sub_140B02560 @ 0x140B02560 (sub_140B02560.c)
 *     sub_140B1F3C0 @ 0x140B1F3C0 (sub_140B1F3C0.c)
 *     sub_140B2940C @ 0x140B2940C (sub_140B2940C.c)
 *     sub_140B2DB68 @ 0x140B2DB68 (sub_140B2DB68.c)
 *     sub_140B2DE24 @ 0x140B2DE24 (sub_140B2DE24.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlLengthRequiredSid(ULONG SubAuthorityCount)
{
  if ( SubAuthorityCount > 0x3FFFFFF7 )
    return -1;
  else
    return 4 * SubAuthorityCount + 8;
}
