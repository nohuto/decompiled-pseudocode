/*
 * XREFs of SdbpGetFileTimestamp @ 0x180051BEC
 * Callers:
 *     SdbGetMergeRedirectPath @ 0x180051604 (SdbGetMergeRedirectPath.c)
 * Callees:
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetFileTimestamp(_QWORD *a1, const WCHAR *a2)
{
  struct _UNICODE_STRING *p_DestinationString; // rbx
  int v5; // ebx
  HMODULE ModuleHandleW; // rax
  FARPROC ProcAddress; // rax
  __int64 v8; // rax
  NTSTATUS v9; // eax
  NTSTATUS v10; // eax
  __int64 FileAttributes; // [rsp+28h] [rbp-D8h]
  void *FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v14[8]; // [rsp+68h] [rbp-98h] BYREF
  PVOID P; // [rsp+70h] [rbp-90h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE FileInformation[16]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v20; // [rsp+D8h] [rbp-28h]
  __int64 v21; // [rsp+E0h] [rbp-20h]
  _BYTE v22[24]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v23; // [rsp+108h] [rbp+8h]
  __int64 v24; // [rsp+110h] [rbp+10h]

  FileHandle = 0LL;
  memset_0(v22, 0, 0x48uLL);
  P = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  p_DestinationString = &DestinationString;
  if ( _wcsnicmp(a2, L"\\SystemRoot\\", 0xCuLL) )
  {
    v5 = RtlDosPathNameToNtPathName_U_WithStatus(a2, v14, 0LL, 0LL);
    if ( v5 < 0 )
      goto LABEL_15;
    p_DestinationString = (struct _UNICODE_STRING *)v14;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = p_DestinationString;
  ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
  if ( !ModuleHandleW )
  {
    v5 = -1073741823;
    goto LABEL_15;
  }
  ProcAddress = GetProcAddress(ModuleHandleW, "NtQueryInformationByName");
  if ( ProcAddress
    && ((int (__fastcall *)(struct _OBJECT_ATTRIBUTES *, struct _IO_STATUS_BLOCK *, _BYTE *, __int64, int))ProcAddress)(
         &ObjectAttributes,
         &IoStatusBlock,
         v22,
         72LL,
         68) >= 0 )
  {
    v8 = v24;
  }
  else
  {
    v9 = ZwCreateFile(&FileHandle, 0x80100080, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 1u, 1u, 0x60u, 0LL, 0);
    v5 = v9;
    if ( v9 < 0 )
    {
      AslLogCallPrintf(1, (unsigned int)"SdbpGetFileTimestamp", 1379, (unsigned int)"Failed to open file [%x]", v9);
      goto LABEL_15;
    }
    v10 = NtQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
    v5 = v10;
    if ( v10 < 0 )
    {
      LODWORD(FileAttributes) = v10;
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpGetFileTimestamp",
        1389,
        (unsigned int)"Failed to get timestamp from %S. [%x]",
        a2,
        FileAttributes);
      goto LABEL_15;
    }
    v23 = v20;
    v8 = v21;
    v24 = v21;
  }
  *a1 = v8;
  v5 = 0;
LABEL_15:
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( P )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return (unsigned int)v5;
}
