/*
 * XREFs of RtlGetOwnerSecurityDescriptor @ 0x140679440
 * Callers:
 *     sub_140676314 @ 0x140676314 (sub_140676314.c)
 *     sub_140678C4C @ 0x140678C4C (sub_140678C4C.c)
 *     sub_1406793E4 @ 0x1406793E4 (sub_1406793E4.c)
 *     sub_1406796E8 @ 0x1406796E8 (sub_1406796E8.c)
 *     sub_1406B4F98 @ 0x1406B4F98 (sub_1406B4F98.c)
 *     sub_1406BCE90 @ 0x1406BCE90 (sub_1406BCE90.c)
 *     sub_1407F8298 @ 0x1407F8298 (sub_1407F8298.c)
 *     sub_14091822C @ 0x14091822C (sub_14091822C.c)
 *     RtlReplaceSidInSd @ 0x1409B92B0 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetOwnerSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID *Owner,
        PBOOLEAN OwnerDefaulted)
{
  char *v4; // rax
  __int64 v5; // rdx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v4 = 0LL;
  if ( *((__int16 *)SecurityDescriptor + 1) >= 0 )
  {
    v4 = (char *)*((_QWORD *)SecurityDescriptor + 1);
  }
  else
  {
    v5 = *((unsigned int *)SecurityDescriptor + 1);
    if ( (_DWORD)v5 )
      v4 = (char *)SecurityDescriptor + v5;
  }
  *Owner = v4;
  *OwnerDefaulted = *((_BYTE *)SecurityDescriptor + 2) & 1;
  return 0;
}
