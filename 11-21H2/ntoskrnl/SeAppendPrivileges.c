/*
 * XREFs of SeAppendPrivileges @ 0x1406A8AD0
 * Callers:
 *     sub_14024B8BC @ 0x14024B8BC (sub_14024B8BC.c)
 *     ObCheckObjectAccess @ 0x1406698A0 (ObCheckObjectAccess.c)
 *     ObCheckCreateObjectAccess @ 0x1406B6C50 (ObCheckCreateObjectAccess.c)
 *     sub_1406CDC5C @ 0x1406CDC5C (sub_1406CDC5C.c)
 *     sub_1407227B0 @ 0x1407227B0 (sub_1407227B0.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 *     sub_140731DA0 @ 0x140731DA0 (sub_140731DA0.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_1407F7AD0 @ 0x1407F7AD0 (sub_1407F7AD0.c)
 *     sub_140A03FB4 @ 0x140A03FB4 (sub_140A03FB4.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1409C6C34 @ 0x1409C6C34 (sub_1409C6C34.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall SeAppendPrivileges(PACCESS_STATE AccessState, PPRIVILEGE_SET Privileges)
{
  PVOID *AuxData; // r14
  ULONG PrivilegeCount; // r9d
  _DWORD *v6; // rbx
  int v7; // r8d
  unsigned int v8; // esi
  int v10; // ecx
  unsigned int v11; // esi
  int v12; // eax
  void *Pool2; // rbx
  _DWORD *v14; // rdx
  __int64 v15; // rdx

  AuxData = (PVOID *)AccessState->AuxData;
  PrivilegeCount = Privileges->PrivilegeCount;
  v6 = *AuxData;
  v7 = *(_DWORD *)*AuxData;
  if ( v7 + Privileges->PrivilegeCount <= 3 )
  {
    if ( v6 )
    {
      if ( v7 )
        v8 = 12 * v7 + 8;
      else
        v8 = 8;
    }
    else
    {
      v8 = 0;
    }
    memmove((char *)v6 + v8, Privileges->Privilege, 12 * PrivilegeCount);
    *v6 += Privileges->PrivilegeCount;
    return 0;
  }
  if ( PrivilegeCount )
    v10 = 12 * PrivilegeCount + 8;
  else
    v10 = 8;
  v11 = 0;
  if ( v6 )
  {
    if ( v7 )
      v12 = 12 * v7 + 8;
    else
      v12 = 8;
  }
  else
  {
    v12 = 0;
  }
  Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)(v10 + v12), 1917871443LL);
  if ( Pool2 )
  {
    v14 = *AuxData;
    if ( *AuxData )
    {
      if ( *v14 )
        v11 = 12 * *v14 + 8;
      else
        v11 = 8;
    }
    memmove(Pool2, v14, v11);
    sub_1409C6C34(Pool2, v15, Privileges);
    if ( AccessState->PrivilegesAllocated )
      ExFreePoolWithTag(*AuxData, 0);
    *AuxData = Pool2;
    AccessState->PrivilegesAllocated = 1;
    return 0;
  }
  return -1073741670;
}
