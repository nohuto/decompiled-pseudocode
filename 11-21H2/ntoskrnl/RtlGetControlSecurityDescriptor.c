/*
 * XREFs of RtlGetControlSecurityDescriptor @ 0x140678850
 * Callers:
 *     sub_14064C900 @ 0x14064C900 (sub_14064C900.c)
 *     sub_14066915C @ 0x14066915C (sub_14066915C.c)
 *     sub_140676314 @ 0x140676314 (sub_140676314.c)
 *     sub_140678698 @ 0x140678698 (sub_140678698.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlGetControlSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_DESCRIPTOR_CONTROL Control,
        PULONG Revision)
{
  *Revision = *(unsigned __int8 *)SecurityDescriptor;
  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  *Control = *((_WORD *)SecurityDescriptor + 1);
  return 0;
}
