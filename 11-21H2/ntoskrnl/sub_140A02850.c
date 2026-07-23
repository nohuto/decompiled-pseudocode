/*
 * XREFs of sub_140A02850 @ 0x140A02850
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_140A02850(HANDLE Handle, int a2, unsigned __int64 a3, int a4, unsigned __int64 a5)
{
  KPROCESSOR_MODE v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  _DWORD *v11; // rbx
  NTSTATUS v13; // esi
  int v14; // r14d
  int v15; // r15d
  PVOID Object; // [rsp+38h] [rbp-20h] BYREF

  v8 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v8 )
  {
    if ( (a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = 0x7FFFFFFF0000LL;
    v10 = 0x7FFFFFFF0000LL;
    if ( a3 < 0x7FFFFFFF0000LL )
      v10 = a3;
    *(_BYTE *)v10 = *(_BYTE *)v10;
    *(_BYTE *)(v10 + 7) = *(_BYTE *)(v10 + 7);
    v11 = (_DWORD *)a5;
    if ( a5 )
    {
      if ( a5 < 0x7FFFFFFF0000LL )
        v9 = a5;
      *(_DWORD *)v9 = *(_DWORD *)v9;
    }
  }
  else
  {
    v11 = (_DWORD *)a5;
  }
  if ( a2 )
    return 3221225475LL;
  if ( a4 != 8 )
    return 3221225476LL;
  Object = 0LL;
  v13 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)ExSemaphoreObjectType, v8, &Object, 0LL);
  if ( v13 >= 0 )
  {
    v14 = *((_DWORD *)Object + 1);
    v15 = *((_DWORD *)Object + 6);
    ObfDereferenceObject(Object);
    if ( v8 )
    {
      *(_DWORD *)a3 = v14;
      *(_DWORD *)(a3 + 4) = v15;
      if ( v11 )
        *v11 = 8;
    }
    else
    {
      *(_DWORD *)a3 = v14;
      *(_DWORD *)(a3 + 4) = v15;
      if ( v11 )
        *v11 = 8;
    }
  }
  return (unsigned int)v13;
}
