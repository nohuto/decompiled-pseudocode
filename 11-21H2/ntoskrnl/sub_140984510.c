/*
 * XREFs of sub_140984510 @ 0x140984510
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_140984510(void *a1, int a2, unsigned __int64 a3, int a4)
{
  KPROCESSOR_MODE v7; // r14
  NTSTATUS v8; // ebx
  int v9; // esi
  int v10; // ecx
  _DWORD *v11; // rax
  int v12; // ecx
  _DWORD *v13; // rdx
  int v14; // eax
  PVOID Object; // [rsp+38h] [rbp-10h] BYREF

  v7 = *((_BYTE *)KeGetCurrentThread() + 562);
  Object = 0LL;
  v8 = ObReferenceObjectByHandle(a1, 2u, qword_140C24FC0, v7, &Object, 0LL);
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
        if ( SeSinglePrivilegeCheck(stru_140D3CA10, v7) && !PsIsCurrentThreadInServerSilo() )
        {
          if ( v7 )
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
      if ( SeSinglePrivilegeCheck(stru_140D3CA10, v7) && !PsIsCurrentThreadInServerSilo() )
      {
        if ( v7 )
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
