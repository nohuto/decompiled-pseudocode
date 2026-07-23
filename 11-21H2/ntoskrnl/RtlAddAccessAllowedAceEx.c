/*
 * XREFs of RtlAddAccessAllowedAceEx @ 0x140811740
 * Callers:
 *     sub_140B22228 @ 0x140B22228 (sub_140B22228.c)
 *     sub_140B225D8 @ 0x140B225D8 (sub_140B225D8.c)
 *     sub_140B2888C @ 0x140B2888C (sub_140B2888C.c)
 * Callees:
 *     sub_1407B4900 @ 0x1407B4900 (sub_1407B4900.c)
 */

NTSTATUS __stdcall RtlAddAccessAllowedAceEx(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        ACCESS_MASK AccessMask,
        PSID Sid)
{
  return sub_1407B4900(Acl, AceRevision, AceFlags, AccessMask, (unsigned __int8 *)Sid, 0);
}
