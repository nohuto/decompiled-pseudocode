/*
 * XREFs of SmpSendPlatformBinaryStatus @ 0x14001A120
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x14000B688 (SmpLoadDataFromRegistry.c)
 *     SmpGetPlatformBinary @ 0x14000CAF0 (SmpGetPlatformBinary.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x140001008 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x140010ED0 (__security_check_cookie.c)
 */

char __fastcall SmpSendPlatformBinaryStatus(int a1, __int64 a2, __int64 a3, unsigned __int16 *a4)
{
  bool v5; // zf
  __int64 v6; // rcx
  char *Heap; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  char *InputBuffer; // rbx
  __int64 v13; // rcx
  _QWORD *v14; // r9
  void *v15; // rdx
  __int64 v16; // r8
  unsigned __int8 *v17; // rdx
  ULONG ShareAccess[2]; // [rsp+28h] [rbp-E0h]
  int ShareAccessa; // [rsp+28h] [rbp-E0h]
  ULONG OpenOptions[2]; // [rsp+30h] [rbp-D8h]
  __int64 v22; // [rsp+58h] [rbp-B0h] BYREF
  void *FileHandle; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+68h] [rbp-A0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-98h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v27[3]; // [rsp+B0h] [rbp-58h] BYREF
  char v28[32]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 *v29; // [rsp+E8h] [rbp-20h]
  __int64 v30; // [rsp+F0h] [rbp-18h]
  __int64 *v31; // [rsp+F8h] [rbp-10h]
  __int64 v32; // [rsp+100h] [rbp-8h]
  _DWORD *v33; // [rsp+108h] [rbp+0h]
  __int64 v34; // [rsp+110h] [rbp+8h]
  __int64 v35; // [rsp+118h] [rbp+10h]
  _DWORD v36[2]; // [rsp+120h] [rbp+18h] BYREF
  int v37; // [rsp+168h] [rbp+60h] BYREF

  v37 = a1;
  v5 = a1 == 0;
  FileHandle = 0LL;
  v6 = *(_QWORD *)&KeGetPcr()->MajorVersion;
  if ( !v5 )
    a2 = 0LL;
  Heap = (char *)RtlAllocateHeap(*(PVOID *)(v6 + 48), 8u, 0x34uLL);
  InputBuffer = Heap;
  if ( Heap )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 0;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"8:";
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    LODWORD(Heap) = NtOpenFile(&FileHandle, 0x120003u, &ObjectAttributes, &IoStatusBlock, 2u, 0x60u);
    if ( (int)Heap >= 0 )
    {
      *((_DWORD *)InputBuffer + 5) = 1;
      *((_DWORD *)InputBuffer + 7) = 1;
      *(_DWORD *)InputBuffer = 1130980673;
      *((_DWORD *)InputBuffer + 1) = 1396854879;
      *((_DWORD *)InputBuffer + 2) = 52;
      *((_DWORD *)InputBuffer + 3) = 4;
      *((_DWORD *)InputBuffer + 4) = 0x40000;
      *((_DWORD *)InputBuffer + 6) = 0x40000;
      *((_DWORD *)InputBuffer + 8) = 0x40000;
      *((_DWORD *)InputBuffer + 9) = v37;
      *((_DWORD *)InputBuffer + 10) = 524290;
      *(_QWORD *)(InputBuffer + 44) = a2;
      LOBYTE(Heap) = NtDeviceIoControlFile(
                       FileHandle,
                       0LL,
                       0LL,
                       0LL,
                       &IoStatusBlock,
                       0x32C000u,
                       InputBuffer,
                       0x34u,
                       0LL,
                       0);
    }
  }
  if ( FileHandle )
    LOBYTE(Heap) = NtClose(FileHandle);
  if ( InputBuffer )
    LOBYTE(Heap) = RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, InputBuffer);
  v13 = SmpTraceHandle;
  if ( SmpTraceHandle )
  {
    if ( v37 )
    {
      v27[1] = 4LL;
      v27[0] = &v37;
      v14 = v27;
      v16 = 1LL;
      v15 = &SmssEvt_PlatformBinaryExecutionFailed;
    }
    else
    {
      v14 = 0LL;
      v15 = &SmssEvt_PlatformBinaryExecuted;
      v16 = 0LL;
    }
    LOBYTE(Heap) = EtwEventWrite(SmpTraceHandle, v15, v16, v14, *(_QWORD *)ShareAccess, *(_QWORD *)OpenOptions);
  }
  if ( a4 )
  {
    if ( (unsigned int)dword_14002A028 > 5 )
    {
      v17 = (unsigned __int8 *)&unk_140025E47;
      LODWORD(v22) = v37;
      v29 = &v22;
      v31 = &v24;
      v33 = v36;
      v35 = *((_QWORD *)a4 + 1);
      v36[0] = *a4;
      ShareAccessa = 6;
      v34 = 2LL;
      v36[1] = 0;
LABEL_20:
      v30 = 4LL;
      v24 = a3;
      v32 = 8LL;
      LOBYTE(Heap) = tlgWriteTransfer_EtwEventWriteTransfer(v13, v17, v10, v11, ShareAccessa, (__int64)v28);
    }
  }
  else if ( (unsigned int)dword_14002A028 > 5 )
  {
    v17 = (unsigned __int8 *)&unk_140025E16;
    LODWORD(v22) = v37;
    v29 = &v22;
    v31 = &v24;
    ShareAccessa = 4;
    goto LABEL_20;
  }
  return (char)Heap;
}
