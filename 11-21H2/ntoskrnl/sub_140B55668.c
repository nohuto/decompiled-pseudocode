/*
 * XREFs of sub_140B55668 @ 0x140B55668
 * Callers:
 *     sub_140B114E8 @ 0x140B114E8 (sub_140B114E8.c)
 * Callees:
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1403428E0 @ 0x1403428E0 (sub_1403428E0.c)
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     IoGetDeviceObjectPointer @ 0x140710E60 (IoGetDeviceObjectPointer.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_140B55668()
{
  ULONG_PTR v0; // rsi
  ULONG_PTR v1; // rbx
  NTSTATUS DeviceObjectPointer; // eax
  PFILE_OBJECT v3; // r14
  NTSTATUS Status; // edi
  char *Pool2; // rax
  PDEVICE_OBJECT v6; // rdx
  IRP *v7; // rax
  IRP *v8; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _DEVICE_OBJECT *v10; // rcx
  __int64 v11; // rax
  PDEVICE_OBJECT v12; // rdx
  IRP *v13; // rax
  IRP *v14; // rdx
  struct _IO_STACK_LOCATION *v15; // rax
  struct _DEVICE_OBJECT *v16; // rcx
  struct _KEVENT Object; // [rsp+58h] [rbp-29h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp-11h] BYREF
  PFILE_OBJECT FileObject; // [rsp+78h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK v21; // [rsp+80h] [rbp-1h] BYREF
  _OWORD v22[2]; // [rsp+90h] [rbp+Fh] BYREF
  int v23; // [rsp+B0h] [rbp+2Fh]

  DeviceObject = 0LL;
  v23 = 0;
  memset(&Object, 0, sizeof(Object));
  FileObject = 0LL;
  v0 = 0LL;
  v21 = 0LL;
  v1 = 0LL;
  memset(v22, 0, sizeof(v22));
  DeviceObjectPointer = IoGetDeviceObjectPointer(
                          (PUNICODE_STRING)&stru_140A389C0,
                          0x10000000u,
                          &FileObject,
                          &DeviceObject);
  v3 = FileObject;
  Status = DeviceObjectPointer;
  if ( DeviceObjectPointer < 0 )
    goto LABEL_12;
  Pool2 = (char *)ExAllocatePool2(64LL, 0x8CuLL, 0x42626D53u);
  v1 = (ULONG_PTR)Pool2;
  if ( !Pool2 )
    goto LABEL_3;
  *((_DWORD *)Pool2 + 15) = -1;
  *((_DWORD *)Pool2 + 4) = 5;
  *(_DWORD *)Pool2 = 3600;
  *((_DWORD *)Pool2 + 2) = 16;
  *((_DWORD *)Pool2 + 1) = 250;
  *((_DWORD *)Pool2 + 3) = 600;
  *((_DWORD *)Pool2 + 5) = 45;
  *((_DWORD *)Pool2 + 9) = 10;
  *((_DWORD *)Pool2 + 6) = 512;
  *((_DWORD *)Pool2 + 7) = 17;
  *((_DWORD *)Pool2 + 8) = 6144;
  *((_DWORD *)Pool2 + 10) = 500;
  *((_DWORD *)Pool2 + 12) = 500;
  *((_DWORD *)Pool2 + 11) = 10;
  *((_DWORD *)Pool2 + 14) = 45;
  *((_DWORD *)Pool2 + 18) = 5;
  v6 = DeviceObject;
  *((_DWORD *)Pool2 + 13) = 40;
  *((_DWORD *)Pool2 + 16) = 3;
  *((_DWORD *)Pool2 + 17) = 20;
  *(_QWORD *)(Pool2 + 76) = 60LL;
  *((_DWORD *)Pool2 + 21) = 1;
  *((_DWORD *)Pool2 + 22) = 1;
  *((_DWORD *)Pool2 + 23) = 1;
  *((_DWORD *)Pool2 + 24) = 1;
  *((_DWORD *)Pool2 + 25) = 1;
  *((_DWORD *)Pool2 + 26) = 1;
  *((_DWORD *)Pool2 + 27) = 1;
  *((_DWORD *)Pool2 + 28) = 1;
  *((_DWORD *)Pool2 + 29) = 1;
  *((_DWORD *)Pool2 + 30) = 1;
  *((_DWORD *)Pool2 + 31) = 1;
  *((_DWORD *)Pool2 + 32) = 1;
  *(_QWORD *)(Pool2 + 132) = 1LL;
  Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
  Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
  LOWORD(Object.Header.Lock) = 1;
  Object.Header.Size = 6;
  Object.Header.SignalState = 0;
  v7 = sub_1403428E0(-2146172527, (__int64)v6, v22, 0x24u, Pool2, 0x8Cu, 0, &Object, &v21);
  v8 = v7;
  if ( !v7 )
    goto LABEL_3;
  CurrentStackLocation = v7->Tail.Overlay.CurrentStackLocation;
  v10 = DeviceObject;
  CurrentStackLocation[-1].FileObject = v3;
  CurrentStackLocation[-1].MajorFunction = 13;
  Status = IofCallDriver(v10, v8);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    Status = v21.Status;
  }
  if ( Status >= 0 )
  {
    v11 = ExAllocatePool2(64LL, 0x7AuLL, 0x42626D53u);
    v0 = v11;
    if ( v11 )
    {
      *(_BYTE *)(v11 + 69) |= 1u;
      v12 = DeviceObject;
      *(_BYTE *)(v11 + 88) = 1;
      *(_BYTE *)(v11 + 68) = 31;
      *(_WORD *)(v11 + 12) = 222;
      *(_DWORD *)(v11 + 80) = 30;
      *(_DWORD *)(v11 + 84) = 30;
      *(_WORD *)(v11 + 90) = 26;
      *(_DWORD *)(v11 + 20) = 28800;
      *(_DWORD *)(v11 + 24) = 28800;
      *(_DWORD *)(v11 + 32) = 20;
      *(_DWORD *)(v11 + 40) = 20;
      *(_DWORD *)(v11 + 72) = 604800;
      *(_DWORD *)(v11 + 76) = 10;
      *(_DWORD *)(v11 + 28) = 0x8000;
      *(_DWORD *)(v11 + 36) = 5;
      *(_DWORD *)(v11 + 44) = 2048;
      *(_DWORD *)(v11 + 48) = 32;
      *(_DWORD *)(v11 + 52) = 512;
      *(_DWORD *)(v11 + 56) = 0x1000000;
      *(_DWORD *)(v11 + 60) = 0x100000;
      *(_OWORD *)(v11 + 92) = xmmword_140A45F48;
      *(_QWORD *)(v11 + 108) = 0x6D0073006D0076LL;
      *(_WORD *)(v11 + 116) = 98;
      Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
      Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
      LOWORD(Object.Header.Lock) = 1;
      Object.Header.Size = 6;
      Object.Header.SignalState = 0;
      v13 = sub_1403428E0(1311648, (__int64)v12, (const void *)v11, 0x7Au, 0LL, 0, 0, &Object, &v21);
      v14 = v13;
      if ( v13 )
      {
        v15 = v13->Tail.Overlay.CurrentStackLocation;
        v16 = DeviceObject;
        v15[-1].FileObject = v3;
        v15[-1].MajorFunction = 13;
        Status = IofCallDriver(v16, v14);
        if ( Status == 259 )
        {
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
          Status = v21.Status;
        }
        goto LABEL_12;
      }
    }
LABEL_3:
    Status = -1073741670;
  }
LABEL_12:
  if ( v3 )
    ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  if ( v1 )
    sub_140348B40(v1);
  if ( v0 )
    sub_140348B40(v0);
  return (unsigned int)Status;
}
