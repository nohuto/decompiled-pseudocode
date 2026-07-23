/*
 * XREFs of sub_140B3116C @ 0x140B3116C
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x14041B840 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 *     sub_14080A3F8 @ 0x14080A3F8 (sub_14080A3F8.c)
 *     sub_140996FDC @ 0x140996FDC (sub_140996FDC.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 sub_140B3116C()
{
  __int64 result; // rax
  int v1; // [rsp+50h] [rbp-39h] BYREF
  HANDLE FileHandle; // [rsp+58h] [rbp-31h] BYREF
  wchar_t *Buffer; // [rsp+60h] [rbp-29h] BYREF
  int v4; // [rsp+68h] [rbp-21h]
  int v5; // [rsp+6Ch] [rbp-1Dh]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-9h] BYREF
  _QWORD InputBuffer[2]; // [rsp+B0h] [rbp+27h] BYREF
  __int64 OutputBuffer; // [rsp+C0h] [rbp+37h] BYREF
  int v10; // [rsp+C8h] [rbp+3Fh]

  result = 0LL;
  IoStatusBlock = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  memset(InputBuffer, 0, 12);
  OutputBuffer = 0LL;
  v10 = 0;
  v1 = 0;
  if ( byte_140C5AC3C )
  {
    Buffer = stru_140D3CF58.Buffer;
    ObjectAttributes.ObjectName = &stru_140D3CF58;
    FileHandle = 0LL;
    v5 = 1;
    v4 = 0;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u) >= 0 )
    {
      *(_QWORD *)((char *)InputBuffer + 4) = 0LL;
      IoStatusBlock = 0LL;
      LODWORD(InputBuffer[0]) = 7;
      if ( ZwDeviceIoControlFile(
             FileHandle,
             0LL,
             0LL,
             0LL,
             &IoStatusBlock,
             0x2D1400u,
             InputBuffer,
             0xCu,
             &OutputBuffer,
             0xCu) >= 0 )
      {
        if ( (_BYTE)v10 )
          byte_140C245F0 = 1;
        else
          BYTE1(v5) = 1;
      }
    }
    sub_140996FDC((__int64)&Buffer);
    if ( FileHandle )
      ZwClose(FileHandle);
    sub_140A48330();
    sub_14080A3F8(&v1);
    byte_140C23417 = (unsigned int)(v1 - 3) > 1;
    return sub_140A47CF8();
  }
  return result;
}
