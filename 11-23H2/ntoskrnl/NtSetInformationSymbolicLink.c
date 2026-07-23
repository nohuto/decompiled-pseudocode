/*
 * XREFs of NtSetInformationSymbolicLink @ 0x14097B640
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287700 (PsIsCurrentThreadInServerSilo.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140737CF0 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtSetInformationSymbolicLink(
        HANDLE LinkHandle,
        SYMBOLIC_LINK_INFO_CLASS SymbolicLinkInformationClass,
        PVOID SymbolicLinkInformation,
        ULONG SymbolicLinkInformationLength)
{
  KPROCESSOR_MODE PreviousMode; // r14
  int v8; // ebx
  __int32 v9; // esi
  int v10; // ecx
  _DWORD *v11; // rax
  int v12; // ecx
  _DWORD *v13; // rdx
  int v14; // eax
  PVOID Object; // [rsp+38h] [rbp-10h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v8 = ObReferenceObjectByHandle(LinkHandle, 2u, ObpSymbolicLinkObjectType, PreviousMode, &Object, 0LL);
  if ( v8 >= 0 )
  {
    v9 = SymbolicLinkInformationClass - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
      {
        v8 = -1073741821;
LABEL_32:
        ObfDereferenceObject(Object);
        return v8;
      }
      if ( SymbolicLinkInformationLength == 4 )
      {
        if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) && !PsIsCurrentThreadInServerSilo() )
        {
          if ( PreviousMode )
          {
            if ( ((unsigned __int8)SymbolicLinkInformation & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (unsigned __int64)SymbolicLinkInformation + 4 > 0x7FFFFFFF0000LL
              || (char *)SymbolicLinkInformation + 4 < SymbolicLinkInformation )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
            }
            v10 = *(_DWORD *)SymbolicLinkInformation;
          }
          else
          {
            v10 = *(_DWORD *)SymbolicLinkInformation;
          }
          v11 = Object;
          *((_DWORD *)Object + 7) |= 8u;
          v11[8] = v10;
          v8 = 0;
          goto LABEL_32;
        }
        goto LABEL_31;
      }
    }
    else if ( SymbolicLinkInformationLength == 4 )
    {
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) && !PsIsCurrentThreadInServerSilo() )
      {
        if ( PreviousMode )
        {
          if ( ((unsigned __int8)SymbolicLinkInformation & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)SymbolicLinkInformation + 4 > 0x7FFFFFFF0000LL
            || (char *)SymbolicLinkInformation + 4 < SymbolicLinkInformation )
          {
            MEMORY[0x7FFFFFFF0000] = 0;
          }
          v12 = *(_DWORD *)SymbolicLinkInformation;
        }
        else
        {
          v12 = *(_DWORD *)SymbolicLinkInformation;
        }
        v13 = Object;
        v14 = *((_DWORD *)Object + 7) | 1;
        *((_DWORD *)Object + 7) = v14;
        if ( v12 )
          v13[7] = v14 | 4;
        goto LABEL_32;
      }
LABEL_31:
      v8 = -1073741727;
      goto LABEL_32;
    }
    v8 = -1073741820;
    goto LABEL_32;
  }
  return v8;
}
