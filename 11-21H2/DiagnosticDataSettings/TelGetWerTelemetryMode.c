/*
 * XREFs of TelGetWerTelemetryMode @ 0x180002760
 * Callers:
 *     <none>
 * Callees:
 *     TelGetNumericPolicy @ 0x180001924 (TelGetNumericPolicy.c)
 *     TelEvaluateActiveSettingAuthority @ 0x180002500 (TelEvaluateActiveSettingAuthority.c)
 */

__int64 __fastcall TelGetWerTelemetryMode(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  if ( (int)TelEvaluateActiveSettingAuthority((int *)&v4, 0LL, a3) < 0 )
    return 1LL;
  result = v4;
  if ( v4 > 3 )
    return 1LL;
  if ( !v4 )
    return result;
  if ( v4 == 1 )
    return 1LL;
  v4 = 0;
  v5 = 0;
  if ( (int)TelGetNumericPolicy((__int64)L"LimitDumpCollection", &v4, &v5) < 0 || v4 && v5 )
    return 2LL;
  else
    return 3LL;
}
