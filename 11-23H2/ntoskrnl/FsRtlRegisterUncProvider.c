/*
 * XREFs of FsRtlRegisterUncProvider @ 0x14093DD50
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpRegisterUncProvider @ 0x140851718 (FsRtlpRegisterUncProvider.c)
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
  return FsRtlpRegisterUncProvider((__int64)RedirectorDeviceName, 0LL, (__int64)&v4, MupHandle);
}
