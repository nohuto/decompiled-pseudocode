/*
 * XREFs of FsRtlRegisterUncProvider @ 0x14092E270
 * Callers:
 *     <none>
 * Callees:
 *     sub_1408567A8 @ 0x1408567A8 (sub_1408567A8.c)
 */

NTSTATUS __stdcall FsRtlRegisterUncProvider(
        PHANDLE MupHandle,
        PCUNICODE_STRING RedirectorDeviceName,
        BOOLEAN MailslotsSupported)
{
  __int64 v4; // [rsp+48h] [rbp+20h] BYREF

  v4 = 16777224LL;
  if ( MailslotsSupported )
    HIDWORD(v4) |= 1u;
  return sub_1408567A8((__int64)RedirectorDeviceName, 0LL, (__int64)&v4, MupHandle);
}
