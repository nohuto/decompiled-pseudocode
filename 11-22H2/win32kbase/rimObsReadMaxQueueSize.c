/*
 * XREFs of rimObsReadMaxQueueSize @ 0x1C01AF234
 * Callers:
 *     RawInputManagerInputObserverObjectCreate @ 0x1C0191B04 (RawInputManagerInputObserverObjectCreate.c)
 * Callees:
 *     RIMRegQueryDWord @ 0x1C006DA64 (RIMRegQueryDWord.c)
 */

__int64 rimObsReadMaxQueueSize()
{
  __int64 result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows");
  RIMRegQueryDWord((__int64)&DestinationString, L"RimObserverQueueSize", 256, (int *)&v2);
  result = v2;
  if ( v2 > 0xFA00 )
    return 64000LL;
  return result;
}
