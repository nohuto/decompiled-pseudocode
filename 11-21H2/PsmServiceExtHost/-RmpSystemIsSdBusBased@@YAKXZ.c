/*
 * XREFs of ?RmpSystemIsSdBusBased@@YAKXZ @ 0x1800936F4
 * Callers:
 *     ?RmpGetResourceManagerRuntimeConfiguration@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@@Z @ 0x180049F00 (-RmpGetResourceManagerRuntimeConfiguration@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

__int64 RmpSystemIsSdBusBased(void)
{
  unsigned int v0; // ebx
  void *FileHandle; // [rsp+50h] [rbp-49h] BYREF
  __int128 v3; // [rsp+60h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-29h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-19h] BYREF
  __int128 InputBuffer; // [rsp+B0h] [rbp+17h] BYREF
  _BYTE OutputBuffer[32]; // [rsp+C0h] [rbp+27h] BYREF

  LODWORD(InputBuffer) = 2490404;
  *((_QWORD *)&InputBuffer + 1) = L"\\Device\\BootDevice";
  v3 = InputBuffer;
  v0 = 0;
  ObjectAttributes.Length = 48;
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v3;
  if ( NtOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u) >= 0 )
  {
    *(_QWORD *)((char *)&InputBuffer + 4) = 0LL;
    LODWORD(InputBuffer) = 1;
    if ( NtDeviceIoControlFile(
           FileHandle,
           0LL,
           0LL,
           0LL,
           &IoStatusBlock,
           0x2D1400u,
           &InputBuffer,
           0xCu,
           OutputBuffer,
           0x20u) >= 0 )
      LOBYTE(v0) = OutputBuffer[24] == 12;
  }
  if ( FileHandle )
    NtClose(FileHandle);
  return v0;
}
