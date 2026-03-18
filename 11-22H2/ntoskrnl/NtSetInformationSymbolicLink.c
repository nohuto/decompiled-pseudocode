/*
 * XREFs of NtSetInformationSymbolicLink @ 0x14097B4F0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287350 (PsIsCurrentThreadInServerSilo.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140738000 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtSetInformationSymbolicLink(void *a1, int a2, unsigned __int64 a3, int a4)
{
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS v8; // ebx
  int v9; // esi
  int v10; // ecx
  _DWORD *v11; // rax
  int v12; // ecx
  _DWORD *v13; // rdx
  int v14; // eax
  PVOID Object; // [rsp+38h] [rbp-10h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v8 = ObReferenceObjectByHandle(a1, 2u, ObpSymbolicLinkObjectType, PreviousMode, &Object, 0LL);
  if ( v8 >= 0 )
  {
    v9 = a2 - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
      {
        v8 = -1073741821;
LABEL_32:
        ObfDereferenceObject(Object);
        return (unsigned int)v8;
      }
      if ( a4 == 4 )
      {
        if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) && !PsIsCurrentThreadInServerSilo() )
        {
          if ( PreviousMode )
          {
            if ( (a3 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( a3 + 4 > 0x7FFFFFFF0000LL || a3 + 4 < a3 )
              MEMORY[0x7FFFFFFF0000] = 0;
            v10 = *(_DWORD *)a3;
          }
          else
          {
            v10 = *(_DWORD *)a3;
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
    else if ( a4 == 4 )
    {
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) && !PsIsCurrentThreadInServerSilo() )
      {
        if ( PreviousMode )
        {
          if ( (a3 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( a3 + 4 > 0x7FFFFFFF0000LL || a3 + 4 < a3 )
            MEMORY[0x7FFFFFFF0000] = 0;
          v12 = *(_DWORD *)a3;
        }
        else
        {
          v12 = *(_DWORD *)a3;
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
  return (unsigned int)v8;
}
