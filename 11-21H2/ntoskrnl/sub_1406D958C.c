/*
 * XREFs of sub_1406D958C @ 0x1406D958C
 * Callers:
 *     sub_1407DDABC @ 0x1407DDABC (sub_1407DDABC.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x14041B7E0 (ZwWaitForSingleObject.c)
 *     ZwDeviceIoControlFile @ 0x14041B840 (ZwDeviceIoControlFile.c)
 *     ZwResetEvent @ 0x14041E7A0 (ZwResetEvent.c)
 */

__int64 __fastcall sub_1406D958C(HANDLE *a1, void *a2)
{
  unsigned int v4; // edi
  NTSTATUS Status; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  _DWORD InputBuffer[4]; // [rsp+60h] [rbp-38h] BYREF
  __int64 OutputBuffer; // [rsp+70h] [rbp-28h] BYREF
  int v10; // [rsp+78h] [rbp-20h]

  InputBuffer[2] = 0;
  InputBuffer[1] = 0;
  OutputBuffer = 0LL;
  v10 = 0;
  InputBuffer[0] = 7;
  v4 = 1;
  IoStatusBlock = 0LL;
  ZwResetEvent(a2, 0LL);
  Status = ZwDeviceIoControlFile(*a1, a2, 0LL, 0LL, &IoStatusBlock, 0x2D1400u, InputBuffer, 0xCu, &OutputBuffer, 0xCu);
  if ( Status == 259 )
  {
    ZwWaitForSingleObject(a2, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
    return (_BYTE)v10 != 0;
  return v4;
}
