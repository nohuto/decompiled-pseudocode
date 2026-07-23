/*
 * XREFs of NtDuplicateObject @ 0x1406FB7E0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E63B0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObDuplicateObject @ 0x1406FB9A0 (ObDuplicateObject.c)
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
  int v9; // r15d
  PVOID v10; // rdi
  char PreviousMode; // bl
  NTSTATUS result; // eax
  NTSTATUS v13; // r14d
  int v14; // edx
  PVOID v15; // r15
  NTSTATUS v16; // ebx
  __int64 v17; // rdx
  PVOID v18; // [rsp+48h] [rbp-40h] BYREF
  PVOID Object; // [rsp+50h] [rbp-38h] BYREF
  void *v20; // [rsp+58h] [rbp-30h] BYREF

  v9 = (int)SourceHandle;
  v10 = 0LL;
  v20 = 0LL;
  Object = 0LL;
  v18 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( TargetHandle && PreviousMode )
  {
    v17 = (__int64)TargetHandle;
    if ( (unsigned __int64)TargetHandle >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v17 = *(_QWORD *)v17;
    *TargetHandle = 0LL;
  }
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)SourceProcessHandle,
             64,
             (__int64)PsProcessType,
             PreviousMode,
             0x7544624Fu,
             &Object,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    if ( TargetProcessHandle )
    {
      v13 = ObpReferenceObjectByHandleWithTag(
              (ULONG_PTR)TargetProcessHandle,
              64,
              (__int64)PsProcessType,
              PreviousMode,
              0x7544624Fu,
              &v18,
              0LL,
              0LL);
      if ( v13 < 0 )
      {
        v18 = 0LL;
        goto LABEL_7;
      }
    }
    else
    {
      v13 = 0;
    }
    v10 = v18;
LABEL_7:
    v14 = v9;
    v15 = Object;
    v16 = ObDuplicateObject(
            (_DWORD)Object,
            v14,
            (_DWORD)v10,
            (unsigned int)&v20,
            DesiredAccess,
            HandleAttributes,
            Options,
            PreviousMode);
    if ( TargetHandle )
      *TargetHandle = v20;
    ObfDereferenceObjectWithTag(v15, 0x7544624Fu);
    if ( v10 )
      ObfDereferenceObjectWithTag(v10, 0x7544624Fu);
    if ( v13 < 0 )
      return v13;
    return v16;
  }
  return result;
}
