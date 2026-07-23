/*
 * XREFs of sub_1409FB600 @ 0x1409FB600
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_14056DF08 @ 0x14056DF08 (sub_14056DF08.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1409FB600(HANDLE Handle, int a2, unsigned __int64 a3, int a4, unsigned __int64 a5)
{
  KPROCESSOR_MODE v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  _DWORD *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  NTSTATUS v15; // r15d
  char v16; // r12
  __int64 v17; // rbx
  __int64 v18; // rdi
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF

  if ( a2 )
    return 3221225475LL;
  if ( a4 != 16 )
    return 3221225476LL;
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
    *(_BYTE *)(v10 + 15) = *(_BYTE *)(v10 + 15);
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
  Object = 0LL;
  v15 = ObReferenceObjectByHandle(Handle, 1u, ExTimerObjectType, v8, &Object, 0LL);
  if ( v15 >= 0 )
  {
    v16 = *((_BYTE *)Object + 4);
    v17 = MEMORY[0xFFFFF78000000008];
    v18 = sub_14056DF08((__int64)Object, v12, v13, v14) - v17;
    ObfDereferenceObject(Object);
    if ( v8 )
    {
      *(_BYTE *)(a3 + 8) = v16;
      *(_QWORD *)a3 = v18;
      if ( v11 )
        *v11 = 16;
    }
    else
    {
      *(_BYTE *)(a3 + 8) = v16;
      *(_QWORD *)a3 = v18;
      if ( v11 )
        *v11 = 16;
    }
  }
  return (unsigned int)v15;
}
