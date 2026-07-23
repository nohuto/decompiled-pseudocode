/*
 * XREFs of sub_1406C78D4 @ 0x1406C78D4
 * Callers:
 *     NtSetInformationFile @ 0x1402F72B0 (NtSetInformationFile.c)
 *     IoSetInformation @ 0x14080AE60 (IoSetInformation.c)
 * Callees:
 *     sub_1402A3A14 @ 0x1402A3A14 (sub_1402A3A14.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     IoConvertFileHandleToKernelHandle @ 0x14065CA50 (IoConvertFileHandleToKernelHandle.c)
 *     IoCreateFileEx @ 0x14066E670 (IoCreateFileEx.c)
 *     sub_1406C7B5C @ 0x1406C7B5C (sub_1406C7B5C.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 */

NTSTATUS __fastcall sub_1406C78D4(HANDLE *a1, __int64 a2, __int64 a3, struct _FILE_OBJECT *a4)
{
  bool v4; // zf
  HANDLE v9; // rsi
  NTSTATUS result; // eax
  void *v11; // rcx
  __int64 v12; // r15
  char v13; // al
  char v14; // cl
  PVOID *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // r8
  NTSTATUS v18; // ebx
  struct _FILE_OBJECT *v19; // rdi
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rbx
  HANDLE FileHandle; // [rsp+80h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-78h] BYREF
  PVOID Object; // [rsp+90h] [rbp-70h] BYREF
  struct _IO_DRIVER_CREATE_CONTEXT DriverContext; // [rsp+98h] [rbp-68h] BYREF
  __int64 v25; // [rsp+B8h] [rbp-48h]
  _WORD v26[2]; // [rsp+C0h] [rbp-40h] BYREF
  int v27; // [rsp+C4h] [rbp-3Ch]
  __int64 v28; // [rsp+C8h] [rbp-38h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+D0h] [rbp-30h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-28h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+108h] [rbp+8h] BYREF
  __int128 v32; // [rsp+118h] [rbp+18h]
  __int128 v33; // [rsp+128h] [rbp+28h]
  __int64 v34; // [rsp+138h] [rbp+38h]

  FileHandle = 0LL;
  v4 = (a4->Flags & 0x800) == 0;
  Handle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v27 = 0;
  IoStatusBlock = 0LL;
  v9 = 0LL;
  HandleInformation = 0LL;
  v32 = 0LL;
  v34 = 0LL;
  v33 = 0LL;
  memset(&DriverContext.Size + 1, 0, 22);
  if ( !v4 || (result = sub_1406C7B5C(a4), result >= 0) )
  {
    v11 = *(void **)(a3 + 8);
    if ( v11 )
    {
      if ( *((_BYTE *)KeGetCurrentThread() + 562) == 1 )
      {
        result = IoConvertFileHandleToKernelHandle(v11, 1, 0, 0, &Handle);
        if ( result < 0 )
          return result;
        v9 = Handle;
      }
      else
      {
        v9 = *(HANDLE *)(a3 + 8);
        Handle = v9;
      }
    }
    v12 = *(_QWORD *)(a2 + 184);
    v26[0] = *(_WORD *)(a3 + 16);
    v26[1] = v26[0];
    v28 = a3 + 20;
    v13 = ~(unsigned __int8)(a4->Flags >> 11);
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = v9;
    v14 = ~*(_BYTE *)(v12 - 70);
    v25 = 1LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v26;
    ObjectAttributes.Attributes = v13 & 0x40 | ((v14 & 1) << 10) | 0x200;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    DriverContext.Size = 40;
    memset(&DriverContext.Size + 1, 0, 22);
    v15 = (PVOID *)sub_1402A3A14((__int64)a4, 1, 0LL);
    if ( v15 )
      DriverContext.DeviceObjectHint = *v15;
    DriverContext.TxnParameters = (PTXN_PARAMETER_BLOCK)sub_1402A3A14(v16, 0, v17);
    v18 = IoCreateFileEx(
            &FileHandle,
            0x100002u,
            &ObjectAttributes,
            &IoStatusBlock,
            0LL,
            0,
            3u,
            1u,
            0x4000u,
            0LL,
            0,
            CreateFileTypeNone,
            0LL,
            ((*(_BYTE *)(v12 - 70) & 1) == 0) | 0x104,
            &DriverContext);
    if ( v18 >= 0 )
    {
      Object = 0LL;
      v18 = ObReferenceObjectByHandle(FileHandle, 2u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, &HandleInformation);
      if ( v18 < 0 )
      {
        ObCloseHandle(FileHandle, 0);
      }
      else
      {
        v19 = (struct _FILE_OBJECT *)Object;
        ObfDereferenceObject(Object);
        RelatedDeviceObject = IoGetRelatedDeviceObject(a4);
        if ( IoGetRelatedDeviceObject(v19) == RelatedDeviceObject )
        {
          *(_QWORD *)(v12 - 48) = v19;
          v18 = 0;
          *a1 = FileHandle;
        }
        else
        {
          ObCloseHandle(FileHandle, 0);
          v18 = -1073741612;
        }
      }
    }
    if ( v9 )
    {
      if ( *((_BYTE *)KeGetCurrentThread() + 562) == 1 )
        ObCloseHandle(Handle, 0);
    }
    return v18;
  }
  return result;
}
