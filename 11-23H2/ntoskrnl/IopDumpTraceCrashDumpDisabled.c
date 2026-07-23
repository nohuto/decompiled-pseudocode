/*
 * XREFs of IopDumpTraceCrashDumpDisabled @ 0x140552F2C
 * Callers:
 *     IopDisableCrashDump @ 0x140552BFC (IopDisableCrashDump.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     EtwWriteEx @ 0x1402582A0 (EtwWriteEx.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6DB4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     IopDumpIsTracingEnabled @ 0x140552F08 (IopDumpIsTracingEnabled.c)
 */

char IopDumpTraceCrashDumpDisabled()
{
  char result; // al
  __int64 v1; // [rsp+40h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+48h] [rbp-40h] BYREF
  __int64 *v3; // [rsp+68h] [rbp-20h]
  int v4; // [rsp+70h] [rbp-18h]
  int v5; // [rsp+74h] [rbp-14h]

  result = IopDumpIsTracingEnabled();
  if ( result )
    result = EtwWriteEx(IopDumpEtwRegHandle, &DUMP_EVENT_CRASHDUMP_DISABLED, 0LL, 0, 0LL, 0LL, 0, 0LL);
  if ( (unsigned int)dword_140C062A8 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_140C062A8, 0x400000000000LL);
    if ( result )
    {
      v5 = 0;
      v3 = &v1;
      v1 = 0x1000000LL;
      v4 = 8;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140C062A8,
               (unsigned __int8 *)byte_14002B779,
               0LL,
               0LL,
               3u,
               &v2);
    }
  }
  return result;
}
