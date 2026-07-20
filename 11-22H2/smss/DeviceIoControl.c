/*
 * XREFs of DeviceIoControl @ 0x140012BA4
 * Callers:
 *     BasepGetVolumeDosLetterNameFromNTName @ 0x140012818 (BasepGetVolumeDosLetterNameFromNTName.c)
 * Callees:
 *     BaseSetLastNTError @ 0x1400149C0 (BaseSetLastNTError.c)
 */

__int64 __fastcall DeviceIoControl(
        HANDLE Object,
        ULONG FsControlCode,
        void *a3,
        ULONG a4,
        void *a5,
        ULONG OutputBufferLength,
        _DWORD *a7)
{
  unsigned int v8; // eax
  __int64 Status; // rcx
  NTSTATUS v10; // eax
  struct _IO_STATUS_BLOCK v12; // [rsp+50h] [rbp-18h] BYREF

  if ( (FsControlCode & 0xFFFF0000) == 0x90000 )
    v8 = NtFsControlFile(Object, 0LL, 0LL, 0LL, &v12, FsControlCode, a3, a4, a5, OutputBufferLength);
  else
    v8 = NtDeviceIoControlFile(Object, 0LL, 0LL, 0LL, &v12, FsControlCode, a3, a4, a5, OutputBufferLength);
  Status = v8;
  if ( v8 == 259 )
  {
    v10 = NtWaitForSingleObject(Object, 0, 0LL);
    Status = (unsigned int)v10;
    if ( v10 >= 0 )
      Status = (unsigned int)v12.Status;
  }
  if ( (int)Status < 0 )
  {
    if ( (Status & 0xC0000000) != 0xC0000000 && a7 )
      *a7 = v12.Information;
    BaseSetLastNTError(Status);
    return 0LL;
  }
  else
  {
    if ( a7 )
      *a7 = v12.Information;
    return 1LL;
  }
}
