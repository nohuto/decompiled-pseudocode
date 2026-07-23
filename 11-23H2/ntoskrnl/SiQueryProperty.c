/*
 * XREFs of SiQueryProperty @ 0x140A5FA04
 * Callers:
 *     SyspartGetPhysicalPartitions @ 0x140A5F4BC (SyspartGetPhysicalPartitions.c)
 *     SyspartIsSpace @ 0x140A5F628 (SyspartIsSpace.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x14041B1D0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     SiOpenDevice @ 0x1407C04A4 (SiOpenDevice.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall SiQueryProperty(const WCHAR *a1, unsigned int a2, unsigned int a3, _QWORD *a4)
{
  NTSTATUS v7; // edi
  ULONG OutputBufferLength; // esi
  _DWORD *OutputBuffer; // rbx
  HANDLE FileHandle; // [rsp+50h] [rbp-58h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-50h] BYREF
  __int64 InputBuffer; // [rsp+68h] [rbp-40h] BYREF
  int v14; // [rsp+70h] [rbp-38h]

  FileHandle = 0LL;
  *a4 = 0LL;
  IoStatusBlock = 0LL;
  InputBuffer = 0LL;
  v14 = 0;
  v7 = SiOpenDevice(a1, &FileHandle);
  if ( v7 >= 0 )
  {
    InputBuffer = a2;
    OutputBufferLength = 8;
    if ( a3 >= 8 )
      OutputBufferLength = a3;
    OutputBuffer = (_DWORD *)ExAllocatePool2(256LL, OutputBufferLength, 1263556947LL);
    if ( OutputBuffer )
    {
      while ( 1 )
      {
        v7 = ZwDeviceIoControlFile(
               FileHandle,
               0LL,
               0LL,
               0LL,
               &IoStatusBlock,
               0x2D1400u,
               &InputBuffer,
               0xCu,
               OutputBuffer,
               OutputBufferLength);
        if ( ((v7 + 0x80000000) & 0x80000000) == 0 && v7 != -2147483643 )
        {
          ExFreePoolWithTag(OutputBuffer, 0);
          goto LABEL_10;
        }
        v7 = 0;
        if ( OutputBuffer[1] <= OutputBufferLength )
          break;
        OutputBufferLength = OutputBuffer[1];
        ExFreePoolWithTag(OutputBuffer, 0);
        OutputBuffer = (_DWORD *)ExAllocatePool2(256LL, OutputBufferLength, 1263556947LL);
        if ( !OutputBuffer )
          goto LABEL_9;
      }
      OutputBuffer[1] = OutputBufferLength;
      *a4 = OutputBuffer;
    }
    else
    {
LABEL_9:
      v7 = -1073741670;
    }
  }
LABEL_10:
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v7;
}
