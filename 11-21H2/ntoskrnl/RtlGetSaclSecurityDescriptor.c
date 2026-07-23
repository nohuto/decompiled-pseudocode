/*
 * XREFs of RtlGetSaclSecurityDescriptor @ 0x14066FE80
 * Callers:
 *     sub_14064C418 @ 0x14064C418 (sub_14064C418.c)
 *     sub_14066FDE8 @ 0x14066FDE8 (sub_14066FDE8.c)
 *     sub_140676314 @ 0x140676314 (sub_140676314.c)
 *     sub_1406796E8 @ 0x1406796E8 (sub_1406796E8.c)
 *     NtSetSecurityObject @ 0x1406B57C0 (NtSetSecurityObject.c)
 *     sub_1406BCE90 @ 0x1406BCE90 (sub_1406BCE90.c)
 *     sub_14091822C @ 0x14091822C (sub_14091822C.c)
 *     sub_140918574 @ 0x140918574 (sub_140918574.c)
 *     RtlReplaceSidInSd @ 0x1409B92B0 (RtlReplaceSidInSd.c)
 *     sub_1409CE660 @ 0x1409CE660 (sub_1409CE660.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetSaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PBOOLEAN SaclPresent,
        PACL *Sacl,
        PBOOLEAN SaclDefaulted)
{
  ACL *v4; // rax
  __int16 v6; // dx
  __int64 v7; // rdx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v4 = 0LL;
  if ( (*((_BYTE *)SecurityDescriptor + 2) & 0x10) != 0 )
  {
    *SaclPresent = 1;
    v6 = *((_WORD *)SecurityDescriptor + 1);
    if ( (v6 & 0x10) != 0 )
    {
      if ( v6 >= 0 )
      {
        v4 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
      }
      else
      {
        v7 = *((unsigned int *)SecurityDescriptor + 3);
        if ( (_DWORD)v7 )
          v4 = (ACL *)((char *)SecurityDescriptor + v7);
      }
    }
    *Sacl = v4;
    *SaclDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 0x20) != 0;
  }
  else
  {
    *SaclPresent = 0;
  }
  return 0;
}
