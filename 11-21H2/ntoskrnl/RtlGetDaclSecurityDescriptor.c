/*
 * XREFs of RtlGetDaclSecurityDescriptor @ 0x140203DD0
 * Callers:
 *     sub_14064B9D8 @ 0x14064B9D8 (sub_14064B9D8.c)
 *     sub_14066915C @ 0x14066915C (sub_14066915C.c)
 *     sub_14066FDE8 @ 0x14066FDE8 (sub_14066FDE8.c)
 *     sub_140676314 @ 0x140676314 (sub_140676314.c)
 *     sub_140678698 @ 0x140678698 (sub_140678698.c)
 *     sub_140678874 @ 0x140678874 (sub_140678874.c)
 *     sub_1406796E8 @ 0x1406796E8 (sub_1406796E8.c)
 *     sub_1406BCE90 @ 0x1406BCE90 (sub_1406BCE90.c)
 *     sub_1407F8298 @ 0x1407F8298 (sub_1407F8298.c)
 *     sub_14082BD64 @ 0x14082BD64 (sub_14082BD64.c)
 *     sub_14082C308 @ 0x14082C308 (sub_14082C308.c)
 *     sub_14082C49C @ 0x14082C49C (sub_14082C49C.c)
 *     sub_14085F700 @ 0x14085F700 (sub_14085F700.c)
 *     sub_14091822C @ 0x14091822C (sub_14091822C.c)
 *     RtlReplaceSidInSd @ 0x1409B92B0 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetDaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PBOOLEAN DaclPresent,
        PACL *Dacl,
        PBOOLEAN DaclDefaulted)
{
  ACL *v4; // rax
  __int16 v5; // dx
  __int64 v6; // rdx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v4 = 0LL;
  if ( (*((_BYTE *)SecurityDescriptor + 2) & 4) != 0 )
  {
    *DaclPresent = 1;
    v5 = *((_WORD *)SecurityDescriptor + 1);
    if ( (v5 & 4) != 0 )
    {
      if ( v5 >= 0 )
      {
        v4 = (ACL *)*((_QWORD *)SecurityDescriptor + 4);
      }
      else
      {
        v6 = *((unsigned int *)SecurityDescriptor + 4);
        if ( (_DWORD)v6 )
          v4 = (ACL *)((char *)SecurityDescriptor + v6);
      }
    }
    *Dacl = v4;
    *DaclDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 8) != 0;
  }
  else
  {
    *DaclPresent = 0;
  }
  return 0;
}
