/*
 * XREFs of NtDuplicateObject @ 0x1407A1DC0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     ObDuplicateObject @ 0x1407A1F80 (ObDuplicateObject.c)
 */

NTSTATUS __cdecl NtDuplicateObject(
        HANDLE SourceProcessHandle,
        HANDLE SourceHandle,
        HANDLE TargetProcessHandle,
        PHANDLE TargetHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        ULONG Options)
{
  PVOID v9; // rdi
  char v10; // bl
  NTSTATUS result; // eax
  NTSTATUS v12; // r14d
  PVOID v13; // r15
  NTSTATUS v14; // ebx
  __int64 v15; // rdx
  PVOID v16; // [rsp+48h] [rbp-40h] BYREF
  PVOID Object; // [rsp+50h] [rbp-38h] BYREF
  void *v18; // [rsp+58h] [rbp-30h]

  v9 = 0LL;
  v18 = 0LL;
  Object = 0LL;
  v16 = 0LL;
  v10 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( TargetHandle && v10 )
  {
    v15 = (__int64)TargetHandle;
    if ( (unsigned __int64)TargetHandle >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v15 = *(_QWORD *)v15;
    *TargetHandle = 0LL;
  }
  result = sub_140732D40(
             (ULONG_PTR)SourceProcessHandle,
             64,
             (__int64)PsProcessType,
             v10,
             0x7544624Fu,
             &Object,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    if ( TargetProcessHandle )
    {
      v12 = sub_140732D40((ULONG_PTR)TargetProcessHandle, 64, (__int64)PsProcessType, v10, 0x7544624Fu, &v16, 0LL, 0LL);
      if ( v12 < 0 )
      {
        v16 = 0LL;
        goto LABEL_7;
      }
    }
    else
    {
      v12 = 0;
    }
    v9 = v16;
LABEL_7:
    v13 = Object;
    v14 = ObDuplicateObject((ULONG_PTR)Object, DesiredAccess, HandleAttributes, Options, v10);
    if ( TargetHandle )
      *TargetHandle = v18;
    ObfDereferenceObjectWithTag(v13, 0x7544624Fu);
    if ( v9 )
      ObfDereferenceObjectWithTag(v9, 0x7544624Fu);
    if ( v12 < 0 )
      return v12;
    return v14;
  }
  return result;
}
