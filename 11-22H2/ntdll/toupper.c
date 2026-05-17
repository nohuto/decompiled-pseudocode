/*
 * XREFs of toupper @ 0x180094840
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18007BFAC (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x18005A200 (RtlAnsiCharToUnicodeChar.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x18007E600 (RtlUpcaseUnicodeToMultiByteN.c)
 */

int __cdecl toupper(int C)
{
  int result; // eax
  char *v2; // [rsp+30h] [rbp-10h] BYREF
  int v3; // [rsp+50h] [rbp+10h] BYREF
  unsigned __int8 v4; // [rsp+58h] [rbp+18h]
  unsigned __int8 v5; // [rsp+59h] [rbp+19h]
  __int16 v6; // [rsp+60h] [rbp+20h]
  int v7; // [rsp+68h] [rbp+28h]

  v3 = C;
  v2 = (char *)&v3;
  v6 = RtlAnsiCharToUnicodeChar(&v2);
  if ( (int)RtlUpcaseUnicodeToMultiByteN() < 0 )
    return v3;
  result = v4;
  if ( v7 != 1 )
    return v5 | (v4 << 8);
  return result;
}
