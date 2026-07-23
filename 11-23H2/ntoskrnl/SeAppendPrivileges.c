/*
 * XREFs of SeAppendPrivileges @ 0x1407B66C0
 * Callers:
 *     IopCreateSecurityCheck @ 0x14035A8EC (IopCreateSecurityCheck.c)
 *     ObpAdjustCreatorAccessState @ 0x1406C2B38 (ObpAdjustCreatorAccessState.c)
 *     ObCheckCreateObjectAccess @ 0x1406C4F40 (ObCheckCreateObjectAccess.c)
 *     ObpCreateHandle @ 0x1406E4540 (ObpCreateHandle.c)
 *     CmpDoParseKey @ 0x1406E9130 (CmpDoParseKey.c)
 *     IopParseDevice @ 0x14072CF50 (IopParseDevice.c)
 *     ObCheckObjectAccess @ 0x1407B6540 (ObCheckObjectAccess.c)
 *     ObpCheckTraverseAccess @ 0x14097B918 (ObpCheckTraverseAccess.c)
 *     CMFCheckAccess @ 0x140A01B74 (CMFCheckAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x140A1B398 (CmpCheckKeyBodyAccess.c)
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 *     SepConcatenatePrivileges @ 0x1407B6728 (SepConcatenatePrivileges.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall SeAppendPrivileges(PACCESS_STATE AccessState, PPRIVILEGE_SET Privileges)
{
  PVOID *AuxData; // rdi
  ULONG PrivilegeCount; // r8d
  _DWORD *v6; // rcx
  int v7; // r9d
  unsigned int v9; // ebx
  int v10; // edx
  int v11; // eax
  void *Pool2; // rsi
  _DWORD *v13; // rdx
  __int64 v14; // rdx

  AuxData = (PVOID *)AccessState->AuxData;
  PrivilegeCount = Privileges->PrivilegeCount;
  v6 = *AuxData;
  v7 = *(_DWORD *)*AuxData;
  if ( v7 + Privileges->PrivilegeCount <= 3 )
  {
    SepConcatenatePrivileges(v6, Privileges, Privileges);
    return 0;
  }
  v9 = 8;
  if ( PrivilegeCount )
    v10 = 12 * PrivilegeCount + 8;
  else
    v10 = 8;
  if ( v6 )
  {
    if ( v7 )
      v11 = 12 * v7 + 8;
    else
      v11 = 8;
  }
  else
  {
    v11 = 0;
  }
  Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)(v11 + v10), 1917871443LL);
  if ( Pool2 )
  {
    v13 = *AuxData;
    if ( *AuxData )
    {
      if ( *v13 )
        v9 = 12 * *v13 + 8;
    }
    else
    {
      v9 = 0;
    }
    memmove(Pool2, v13, v9);
    SepConcatenatePrivileges(Pool2, v14, Privileges);
    if ( AccessState->PrivilegesAllocated )
      ExFreePoolWithTag(*AuxData, 0);
    *AuxData = Pool2;
    AccessState->PrivilegesAllocated = 1;
    return 0;
  }
  return -1073741670;
}
