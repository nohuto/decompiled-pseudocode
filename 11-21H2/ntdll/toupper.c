/*
 * XREFs of toupper @ 0x180099780
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x180002FFC (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     RtlUpcaseUnicodeToMultiByteN @ 0x18000DBB0 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlAnsiCharToUnicodeChar @ 0x18005F8E0 (RtlAnsiCharToUnicodeChar.c)
 */

int __cdecl toupper(int C)
{
  int result; // eax
  char *v2; // [rsp+30h] [rbp-10h] BYREF
  int v3; // [rsp+50h] [rbp+10h] BYREF
  unsigned __int8 v4; // [rsp+58h] [rbp+18h] BYREF
  unsigned __int8 v5; // [rsp+59h] [rbp+19h]
  __int16 v6; // [rsp+60h] [rbp+20h]
  int v7; // [rsp+68h] [rbp+28h] BYREF

  v3 = C;
  v2 = (char *)&v3;
  v6 = RtlAnsiCharToUnicodeChar(&v2);
  if ( (int)RtlUpcaseUnicodeToMultiByteN((__int64)&v4, 2LL, (__int64)&v7) < 0 )
    return v3;
  result = v4;
  if ( v7 != 1 )
    return v5 | (v4 << 8);
  return result;
}
