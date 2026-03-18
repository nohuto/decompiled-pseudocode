/*
 * XREFs of ?HandleLowLevelHook@Mouse@InputTraceLogging@@SAXXZ @ 0x1C01563D6
 * Callers:
 *     xxxReceiveMessage @ 0x1C01267C0 (xxxReceiveMessage.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0040C00 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C0041D94 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 */

void InputTraceLogging::Mouse::HandleLowLevelHook(void)
{
  struct _EVENT_DATA_DESCRIPTOR v0; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1C0359080 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C0359080, 64LL) )
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C0359080,
        (unsigned __int8 *)dword_1C031C0F9,
        0LL,
        0LL,
        2u,
        &v0);
  }
}
