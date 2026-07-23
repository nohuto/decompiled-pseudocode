/*
 * XREFs of RtlAddAccessDeniedAceEx @ 0x14084DB60
 * Callers:
 *     sub_140B225D8 @ 0x140B225D8 (sub_140B225D8.c)
 * Callees:
 *     sub_1407B4900 @ 0x1407B4900 (sub_1407B4900.c)
 */

NTSTATUS __cdecl RtlAddAccessDeniedAceEx(PACL Acl, ULONG AceRevision, ULONG AceFlags, ACCESS_MASK AccessMask, PSID Sid)
{
  return sub_1407B4900(Acl, AceRevision, AceFlags, AccessMask, (unsigned __int8 *)Sid, 1u);
}
