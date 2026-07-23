/*
 * XREFs of sub_140A216DC @ 0x140A216DC
 * Callers:
 *     sub_140A21B74 @ 0x140A21B74 (sub_140A21B74.c)
 *     sub_140A22034 @ 0x140A22034 (sub_140A22034.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x14041B840 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406BB6BC @ 0x1406BB6BC (sub_1406BB6BC.c)
 */

__int64 __fastcall sub_140A216DC(const WCHAR *a1, _DWORD *a2, _DWORD *a3)
{
  NTSTATUS v5; // ebx
  HANDLE FileHandle; // [rsp+50h] [rbp-30h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-28h] BYREF
  __int64 OutputBuffer; // [rsp+68h] [rbp-18h] BYREF
  int v10; // [rsp+70h] [rbp-10h]

  FileHandle = 0LL;
  OutputBuffer = 0LL;
  IoStatusBlock = 0LL;
  v10 = 0;
  v5 = sub_1406BB6BC(a1, &FileHandle);
  if ( v5 >= 0 )
  {
    v5 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x2D1080u, 0LL, 0, &OutputBuffer, 0xCu);
    if ( v5 >= 0 )
    {
      if ( (_DWORD)OutputBuffer == 7 )
      {
        *a2 = HIDWORD(OutputBuffer);
        *a3 = v10;
      }
      else
      {
        v5 = -1073741637;
      }
    }
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v5;
}
