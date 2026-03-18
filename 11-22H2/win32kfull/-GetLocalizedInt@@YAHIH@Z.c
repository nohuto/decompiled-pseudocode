/*
 * XREFs of ?GetLocalizedInt@@YAHIH@Z @ 0x1C0076814
 * Callers:
 *     SetIconMetrics @ 0x1C00761C4 (SetIconMetrics.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 */

__int64 __fastcall GetLocalizedInt(__int64 a1)
{
  ULONG Value; // [rsp+20h] [rbp-D8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-D0h] BYREF
  WCHAR SourceString[80]; // [rsp+40h] [rbp-B8h] BYREF

  Value = 0;
  if ( !(unsigned int)RtlLoadStringOrError(a1, SourceString) )
    return 4294966171LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  RtlUnicodeStringToInteger(&DestinationString, 0xAu, &Value);
  return Value;
}
