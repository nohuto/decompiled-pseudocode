/*
 * XREFs of sub_140B54AE4 @ 0x140B54AE4
 * Callers:
 *     sub_140B30860 @ 0x140B30860 (sub_140B30860.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1403428E0 @ 0x1403428E0 (sub_1403428E0.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     wcscat_s @ 0x1403E7610 (wcscat_s.c)
 *     ZwCreateFile @ 0x14041C200 (ZwCreateFile.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     IoGetDeviceObjectPointer @ 0x140710E60 (IoGetDeviceObjectPointer.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     IoGetDeviceInterfaces @ 0x1407896A0 (IoGetDeviceInterfaces.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140B54AE4(wchar_t *Src)
{
  NTSTATUS DeviceInterfaces; // ebx
  PZZWSTR v3; // r12
  __int64 v4; // r14
  __int64 v5; // rax
  unsigned int v6; // ebx
  unsigned int v7; // r13d
  __int64 Pool2; // rax
  const void *v9; // rdi
  unsigned int v10; // ebx
  _DWORD *v11; // rsi
  IRP *v12; // rax
  char *v13; // rbx
  __int128 v14; // xmm0
  PZZWSTR v15; // r14
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rbx
  IRP *v17; // rax
  struct _KEVENT Object_8; // [rsp+68h] [rbp-A0h] BYREF
  PZZWSTR SymbolicLinkList; // [rsp+80h] [rbp-88h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+88h] [rbp-80h] BYREF
  PFILE_OBJECT FileObject; // [rsp+90h] [rbp-78h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-70h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D8h] [rbp-30h] BYREF
  UNICODE_STRING v26; // [rsp+E8h] [rbp-20h] BYREF
  _OWORD v27[6]; // [rsp+F8h] [rbp-10h] BYREF
  _OWORD v28[3]; // [rsp+158h] [rbp+50h] BYREF
  __int64 v29; // [rsp+188h] [rbp+80h]
  _DWORD EaBuffer[2]; // [rsp+198h] [rbp+90h] BYREF
  __int64 v31; // [rsp+1A0h] [rbp+98h]
  GUID v32; // [rsp+1A8h] [rbp+A0h]
  __int128 v33; // [rsp+1B8h] [rbp+B0h]
  __int128 v34; // [rsp+1C8h] [rbp+C0h]
  __int128 v35; // [rsp+1D8h] [rbp+D0h]
  __int128 v36; // [rsp+1E8h] [rbp+E0h]
  int v37; // [rsp+1F8h] [rbp+F0h]
  int v38; // [rsp+1FCh] [rbp+F4h]

  DeviceObject = 0LL;
  v29 = 0LL;
  SymbolicLinkList = 0LL;
  FileObject = 0LL;
  DestinationString = 0LL;
  memset(&Object_8, 0, sizeof(Object_8));
  v26 = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  memset(v28, 0, sizeof(v28));
  if ( !Src )
  {
    DeviceInterfaces = -1073741811;
    goto LABEL_3;
  }
  memset(v27, 0, 0x54uLL);
  DeviceInterfaces = IoGetDeviceInterfaces(&stru_1400473C0, 0LL, 0, &SymbolicLinkList);
  if ( DeviceInterfaces < 0 )
    goto LABEL_3;
  v3 = SymbolicLinkList;
  if ( !*SymbolicLinkList )
  {
    DeviceInterfaces = -1073741275;
    goto LABEL_3;
  }
  RtlInitUnicodeString(&DestinationString, SymbolicLinkList);
  DeviceInterfaces = IoGetDeviceObjectPointer(&DestinationString, 0x10000000u, &FileObject, &DeviceObject);
  if ( DeviceInterfaces < 0 )
    goto LABEL_3;
  v4 = -1LL;
  v5 = -1LL;
  do
    ++v5;
  while ( Src[v5] );
  v6 = 2 * v5 + 2;
  v7 = 2 * v5 + 34;
  Pool2 = ExAllocatePool2(64LL, v7, 0x42646856u);
  v9 = (const void *)Pool2;
  if ( !Pool2 )
    goto LABEL_11;
  *(_DWORD *)(Pool2 + 4) = 0;
  *(_OWORD *)(Pool2 + 8) = xmmword_14003B070;
  *(_DWORD *)Pool2 = 1;
  *(_DWORD *)(Pool2 + 24) = 32;
  *(_DWORD *)(Pool2 + 28) = v6;
  memmove((void *)(Pool2 + 32), Src, v6);
  v10 = v6 + 540;
  v11 = (_DWORD *)ExAllocatePool2(64LL, v10, 0x42646856u);
  if ( !v11 )
  {
LABEL_11:
    DeviceInterfaces = -1073741801;
    goto LABEL_3;
  }
  Object_8.Header.WaitListHead.Blink = &Object_8.Header.WaitListHead;
  Object_8.Header.SignalState = 0;
  Object_8.Header.WaitListHead.Flink = &Object_8.Header.WaitListHead;
  LOWORD(Object_8.Header.Lock) = 1;
  Object_8.Header.Size = 6;
  v12 = sub_1403428E0(2971948, (__int64)DeviceObject, v9, v7, v11, v10, 0, &Object_8, &IoStatusBlock);
  if ( !v12 )
    goto LABEL_14;
  DeviceInterfaces = IofCallDriver(DeviceObject, v12);
  if ( DeviceInterfaces == 259 )
  {
    KeWaitForSingleObject(&Object_8, Executive, 0, 0, 0LL);
    DeviceInterfaces = IoStatusBlock.Status;
  }
  if ( DeviceInterfaces < 0 )
    goto LABEL_3;
  v13 = (char *)v11 + (unsigned int)v11[5];
  if ( *(_WORD *)v13 == 92 && *((_WORD *)v13 + 1) == 92 && *((_WORD *)v13 + 2) == 46 && *((_WORD *)v13 + 3) == 92 )
    *(_DWORD *)(v13 + 2) = 4128831;
  do
    ++v4;
  while ( Src[v4] );
  wcscat_s((wchar_t *)v13, (unsigned int)(v4 + 257), Src);
  RtlInitUnicodeString(&v26, (PCWSTR)v13);
  ObjectAttributes.ObjectName = &v26;
  ObjectAttributes.Length = 48;
  v38 = 0;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 512;
  *(_QWORD *)((char *)&v27[2] + 4) = 0x400000054LL;
  v31 = 0x4B534454524956LL;
  EaBuffer[0] = 0;
  EaBuffer[1] = 5506944;
  v14 = *(_OWORD *)v11;
  LODWORD(v27[2]) = v11[4];
  v33 = v14;
  DWORD1(v27[3]) = 2;
  v37 = v27[5];
  v32 = stru_1400473C0;
  v34 = v27[2];
  v35 = v27[3];
  v36 = v27[4];
  DeviceInterfaces = ZwCreateFile(
                       &qword_140D04D98,
                       0x80000000,
                       &ObjectAttributes,
                       &IoStatusBlock,
                       0LL,
                       0x80u,
                       1u,
                       2u,
                       0,
                       EaBuffer,
                       0x67u);
  if ( DeviceInterfaces < 0 )
    goto LABEL_3;
  SymbolicLinkList = 0LL;
  DeviceInterfaces = ObReferenceObjectByHandle(qword_140D04D98, 0xC0100000, 0LL, 0, (PVOID *)&SymbolicLinkList, 0LL);
  if ( DeviceInterfaces < 0 )
    goto LABEL_3;
  v15 = SymbolicLinkList;
  RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)SymbolicLinkList);
  LODWORD(v28[0]) = 1;
  LOWORD(Object_8.Header.Lock) = 1;
  Object_8.Header.WaitListHead.Blink = &Object_8.Header.WaitListHead;
  Object_8.Header.Size = 6;
  Object_8.Header.WaitListHead.Flink = &Object_8.Header.WaitListHead;
  Object_8.Header.SignalState = 0;
  v17 = sub_1403428E0(2955548, (__int64)RelatedDeviceObject, v28, 0x38u, 0LL, 0, 0, &Object_8, &IoStatusBlock);
  if ( !v17 )
  {
LABEL_14:
    DeviceInterfaces = -1073741670;
    goto LABEL_3;
  }
  v17->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v15;
  DeviceInterfaces = IofCallDriver(RelatedDeviceObject, v17);
  if ( DeviceInterfaces == 259 )
  {
    KeWaitForSingleObject(&Object_8, Executive, 0, 0, 0LL);
    DeviceInterfaces = IoStatusBlock.Status;
  }
  if ( DeviceInterfaces < 0 )
LABEL_3:
    KeBugCheckEx(0x12Fu, 5uLL, DeviceInterfaces, 0LL, 0LL);
  sub_140348B40((ULONG_PTR)v9);
  sub_140348B40((ULONG_PTR)v11);
  if ( v15 )
    ObfDereferenceObjectWithTag(v15, 0x746C6644u);
  if ( FileObject )
    ObfDereferenceObjectWithTag(FileObject, 0x746C6644u);
  sub_140348B40((ULONG_PTR)v3);
  return (unsigned int)DeviceInterfaces;
}
