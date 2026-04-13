/*
 * XREFs of TelpReadRegistryString @ 0x180001380
 * Callers:
 *     ?TelpGetTelemetryClientRegPath@@YAPEAGXZ @ 0x180001578 (-TelpGetTelemetryClientRegPath@@YAPEAGXZ.c)
 *     TelGetRegionalSettingsValue @ 0x180002AF0 (TelGetRegionalSettingsValue.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003EA4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TelpReadRegistryString(__int64 a1, const WCHAR *a2, const WCHAR *a3, void *pvData, unsigned int *a5)
{
  unsigned int *v5; // rbx
  __int64 result; // rax
  LSTATUS ValueW; // edx
  int v8; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 pcbData; // [rsp+50h] [rbp+8h] BYREF

  pcbData = a1;
  v5 = a5;
  if ( a5 )
  {
    LODWORD(pcbData) = 2 * *a5;
    ValueW = RegGetValueW(HKEY_LOCAL_MACHINE, a2, a3, 2u, 0LL, pvData, (LPDWORD)&pcbData);
    result = (unsigned __int16)ValueW | 0x80070000;
    *v5 = (unsigned int)pcbData >> 1;
    if ( ValueW <= 0 )
      return (unsigned int)ValueW;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x84, (unsigned int)a3, (const char *)0x80070057LL, v8);
    return 2147942487LL;
  }
  return result;
}
