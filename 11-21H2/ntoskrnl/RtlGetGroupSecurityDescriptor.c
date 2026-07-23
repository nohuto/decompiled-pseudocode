/*
 * XREFs of RtlGetGroupSecurityDescriptor @ 0x140678970
 * Callers:
 *     sub_140676314 @ 0x140676314 (sub_140676314.c)
 *     sub_140678874 @ 0x140678874 (sub_140678874.c)
 *     sub_1406796E8 @ 0x1406796E8 (sub_1406796E8.c)
 *     sub_1406BCE90 @ 0x1406BCE90 (sub_1406BCE90.c)
 *     sub_14091822C @ 0x14091822C (sub_14091822C.c)
 *     RtlReplaceSidInSd @ 0x1409B92B0 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetGroupSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID *Group,
        PBOOLEAN GroupDefaulted)
{
  char *v4; // rax
  __int64 v5; // rdx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v4 = 0LL;
  if ( *((__int16 *)SecurityDescriptor + 1) >= 0 )
  {
    v4 = (char *)*((_QWORD *)SecurityDescriptor + 2);
  }
  else
  {
    v5 = *((unsigned int *)SecurityDescriptor + 2);
    if ( (_DWORD)v5 )
      v4 = (char *)SecurityDescriptor + v5;
  }
  *Group = v4;
  *GroupDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 2) != 0;
  return 0;
}
