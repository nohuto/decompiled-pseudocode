/*
 * XREFs of sub_14080F068 @ 0x14080F068
 * Callers:
 *     IoCreateArcName @ 0x14080F050 (IoCreateArcName.c)
 *     sub_140B0E1A8 @ 0x140B0E1A8 (sub_140B0E1A8.c)
 * Callees:
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402E0198 @ 0x1402E0198 (sub_1402E0198.c)
 *     IoBuildDeviceIoControlRequest @ 0x140342880 (IoBuildDeviceIoControlRequest.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403C5514 @ 0x1403C5514 (sub_1403C5514.c)
 *     sub_1403C5578 @ 0x1403C5578 (sub_1403C5578.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     IoCreateSymbolicLink @ 0x1406C4C40 (IoCreateSymbolicLink.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_140705F30 @ 0x140705F30 (sub_140705F30.c)
 *     sub_1408645D8 @ 0x1408645D8 (sub_1408645D8.c)
 *     sub_140A3437C @ 0x140A3437C (sub_140A3437C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14080F068(PDEVICE_OBJECT DeviceObject, int a2)
{
  void *v3; // r12
  int v4; // r15d
  _DWORD *Pool2; // rsi
  PDEVICE_OBJECT v6; // rax
  __int64 OutputBufferLength; // rdi
  IRP *v8; // rbx
  NTSTATUS Status; // ebx
  IRP *v10; // rbx
  unsigned int v11; // eax
  __int64 i; // rdx
  IRP *v13; // rbx
  char v14; // bl
  PVOID *v15; // rdi
  PVOID *v16; // r11
  bool v18; // zf
  const wchar_t *v19; // r8
  const char *v20; // r15
  int v21; // edi
  unsigned int v22; // r14d
  void *v23; // rax
  IRP *v24; // rax
  IRP *v25; // rbx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  char v28; // al
  unsigned __int8 *v29; // rcx
  __int64 v30; // r8
  int v31; // edx
  int v32; // eax
  PVOID OutputBuffer; // [rsp+20h] [rbp-E0h]
  struct _KEVENT Object; // [rsp+50h] [rbp-B0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING SymbolicLinkName; // [rsp+78h] [rbp-88h] BYREF
  LARGE_INTEGER v37; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  __int128 v39; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v40; // [rsp+B0h] [rbp-50h]
  __int64 v41; // [rsp+B8h] [rbp-48h] BYREF
  int v42; // [rsp+C0h] [rbp-40h]
  char v43[64]; // [rsp+D0h] [rbp-30h] BYREF
  WCHAR SourceString[64]; // [rsp+110h] [rbp+10h] BYREF

  v41 = 0LL;
  v42 = 0;
  v3 = 0LL;
  v40 = 0LL;
  v4 = 0;
  Pool2 = 0LL;
  v6 = (PDEVICE_OBJECT)qword_140D3CBD8;
  LODWORD(OutputBufferLength) = 4096;
  SymbolicLinkName = 0LL;
  DestinationString = 0LL;
  v39 = 0LL;
  memset(&Object, 0, sizeof(Object));
  IoStatusBlock = 0LL;
  while ( 1 )
  {
    if ( v6 == (PDEVICE_OBJECT)&qword_140D3CBD8 )
    {
      if ( a2 == -1 )
      {
        v8 = IoBuildDeviceIoControlRequest(0x2D1080u, DeviceObject, 0LL, 0, &v41, 0xCu, 0, &Object, &IoStatusBlock);
        if ( !v8 )
          return (unsigned int)-1073741670;
        KeInitializeEvent(&Object, NotificationEvent, 0);
        Status = IofCallDriver(DeviceObject, v8);
        if ( Status == 259 )
        {
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
        }
        if ( Status < 0 )
          return (unsigned int)Status;
      }
      else
      {
        HIDWORD(v41) = a2;
      }
      v10 = IoBuildDeviceIoControlRequest(0x70000u, DeviceObject, 0LL, 0, &v39, 0x18u, 0, &Object, &IoStatusBlock);
      if ( v10 )
      {
        KeInitializeEvent(&Object, NotificationEvent, 0);
        Status = IofCallDriver(DeviceObject, v10);
        if ( Status == 259 )
        {
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
        }
        if ( Status < 0 )
          return (unsigned int)Status;
        v11 = HIDWORD(v40);
        if ( HIDWORD(v40) < 0x200 )
          v11 = 512;
        v18 = DeviceObject->DeviceType == 2;
        HIDWORD(v40) = v11;
        if ( !v18 )
        {
          for ( i = 4096LL; ; i = OutputBufferLength )
          {
            Pool2 = (_DWORD *)ExAllocatePool2(64LL, i, 1866624841LL);
            if ( !Pool2 )
              return (unsigned int)-1073741670;
            v13 = IoBuildDeviceIoControlRequest(
                    0x70050u,
                    DeviceObject,
                    0LL,
                    0,
                    Pool2,
                    OutputBufferLength,
                    0,
                    &Object,
                    &IoStatusBlock);
            if ( !v13 )
            {
              Status = -1073741670;
              goto LABEL_36;
            }
            KeResetEvent(&Object);
            Status = IofCallDriver(DeviceObject, v13);
            if ( Status == 259 )
            {
              KeWaitForSingleObject(&Object, Suspended, 0, 0, 0LL);
              Status = IoStatusBlock.Status;
            }
            if ( Status != -1073741789 )
              break;
            ExFreePoolWithTag(Pool2, 0);
            OutputBufferLength = (unsigned int)(2 * OutputBufferLength);
          }
          if ( Status < 0 )
            goto LABEL_36;
          if ( *Pool2 != 2 && (*Pool2 || Pool2[1] || Pool2[2]) )
          {
            v14 = 0;
            goto LABEL_30;
          }
          v4 = Pool2[3];
LABEL_29:
          v14 = 1;
LABEL_30:
          v15 = (PVOID *)qword_140D3CBD8;
          v16 = &qword_140D3CBD8;
          while ( 1 )
          {
            if ( v15 == v16 )
            {
              Status = -1073741637;
              goto LABEL_36;
            }
            if ( !*((_BYTE *)v15 + 72) && !v15[8] )
            {
              if ( v14 )
              {
                if ( *((_BYTE *)v15 + 36) )
                  goto LABEL_34;
                v18 = *((_DWORD *)v15 + 8) == v4;
              }
              else
              {
                if ( !(unsigned __int8)sub_1408645D8(Pool2, v15, &v37) )
                  goto LABEL_34;
                if ( v15[7] )
                {
                  v28 = sub_140A3437C(DeviceObject);
                  v16 = &qword_140D3CBD8;
                  if ( !v28 )
                    goto LABEL_34;
                }
                if ( *Pool2 )
                  goto LABEL_46;
                v18 = *((_DWORD *)v15 + 8) == Pool2[3];
              }
              if ( v18 )
              {
LABEL_46:
                v15[8] = DeviceObject;
                v19 = L"\\Device\\CdRom%d";
                if ( DeviceObject->DeviceType != 2 )
                  v19 = L"\\Device\\Harddisk%d\\Partition0";
                sub_1402E0198(SourceString, 64LL, v19, HIDWORD(v41));
                RtlInitUnicodeString(&DestinationString, SourceString);
                v20 = (const char *)v15[3];
                sub_1403C5514(v43, 64LL, "\\ArcName\\%s", v20);
                Status = sub_1403C5578(&SymbolicLinkName, v43);
                if ( Status >= 0 )
                {
                  IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString);
                  RtlFreeUnicodeString(&SymbolicLinkName);
                  if ( DeviceObject->DeviceType == 2 )
                  {
                    if ( (unsigned int)dword_140C4E560 < 2 )
                    {
                      v29 = (unsigned __int8 *)v15[3];
                      v30 = *(_QWORD *)(qword_140D068D0 + 184) - (_QWORD)v29;
                      do
                      {
                        v31 = v29[v30];
                        v32 = *v29 - v31;
                        if ( v32 )
                          break;
                        ++v29;
                      }
                      while ( v31 );
                      if ( !v32 )
                        DeviceObject->Flags |= 0x100u;
                    }
                  }
                  else if ( Pool2[1] )
                  {
                    Status = 0;
                    v21 = 1;
                    do
                    {
                      LODWORD(OutputBuffer) = v21;
                      v22 = v21;
                      sub_1402E0198(
                        SourceString,
                        64LL,
                        L"\\Device\\Harddisk%d\\Partition%d",
                        HIDWORD(v41),
                        OutputBuffer);
                      RtlInitUnicodeString(&DestinationString, SourceString);
                      sub_1403C5514(v43, 64LL, "\\ArcName\\%spartition(%d)", v20, v21);
                      if ( sub_1403C5578(&SymbolicLinkName, v43) >= 0 )
                      {
                        IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString);
                        RtlFreeUnicodeString(&SymbolicLinkName);
                      }
                      ++v21;
                    }
                    while ( v22 < Pool2[1] );
                  }
                }
LABEL_36:
                if ( Pool2 )
                  ExFreePoolWithTag(Pool2, 0);
                if ( !v3 )
                  return (unsigned int)Status;
LABEL_62:
                ExFreePoolWithTag(v3, 0);
                return (unsigned int)Status;
              }
            }
LABEL_34:
            v15 = (PVOID *)*v15;
          }
        }
        v37.QuadPart = 0x8000LL;
        v23 = (void *)ExAllocatePool2(72LL, v11, 538996553LL);
        v3 = v23;
        if ( v23 )
        {
          v24 = sub_140705F30(3u, (__int64)DeviceObject, v23, HIDWORD(v40), &v37, &Object, &IoStatusBlock);
          v25 = v24;
          if ( !v24 )
          {
            Status = -1073741670;
            goto LABEL_62;
          }
          v24->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
          KeInitializeEvent(&Object, NotificationEvent, 0);
          Status = IofCallDriver(DeviceObject, v25);
          if ( Status == 259 )
          {
            KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
            Status = IoStatusBlock.Status;
          }
          if ( Status < 0 )
            goto LABEL_62;
          v26 = 0LL;
          v27 = (unsigned __int64)HIDWORD(v40) >> 2;
          if ( v27 )
          {
            do
              v4 += *((_DWORD *)v3 + v26++);
            while ( v26 < v27 );
          }
          v4 = -v4;
          goto LABEL_29;
        }
      }
      return (unsigned int)-1073741670;
    }
    if ( v6->DeviceExtension == DeviceObject )
      return 0LL;
    v6 = *(PDEVICE_OBJECT *)&v6->Type;
  }
}
