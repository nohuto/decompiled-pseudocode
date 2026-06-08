/*
 * XREFs of PopulateEnergyEstimationModel @ 0x1C00470B8
 * Callers:
 *     ProcLibGlobalInit @ 0x1C00462E4 (ProcLibGlobalInit.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1C0002924 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C0003340 (__security_check_cookie.c)
 *     memset @ 0x1C0003A00 (memset.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C002AC80 (GetRegistryDwordValueNoDefault.c)
 *     ReadPowerCurve @ 0x1C004613C (ReadPowerCurve.c)
 *     ReadEnergyEquation @ 0x1C0046FE0 (ReadEnergyEquation.c)
 *     IsValidPowerCurve @ 0x1C00471A8 (IsValidPowerCurve.c)
 *     ProcLibTraceInvalidPowerCurve @ 0x1C0047C74 (ProcLibTraceInvalidPowerCurve.c)
 */

int __fastcall PopulateEnergyEstimationModel(unsigned __int8 a1, int *a2)
{
  int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  int v7; // r9d
  int result; // eax
  int v9; // ecx
  int v10; // [rsp+20h] [rbp-1B8h]
  int v11[4]; // [rsp+30h] [rbp-1A8h] BYREF
  wchar_t pszDest[192]; // [rsp+40h] [rbp-198h] BYREF

  v11[0] = 0;
  v3 = a1;
  memset(a2, 0, 0x100uLL);
  ReadEnergyEquation(v3, (__int64)a2);
  if ( (int)ReadPowerCurve(v3, (__int64)a2) >= 0 )
  {
    if ( (unsigned __int8)IsValidPowerCurve(a2, v4, v5, (unsigned int)a2[1]) )
    {
      a2[1] = v7 | 1;
    }
    else
    {
      LOBYTE(v6) = v3;
      ProcLibTraceInvalidPowerCurve(v6, (unsigned __int8)v7 >> 1, a2 + 2);
    }
  }
  v10 = v3;
  result = RtlStringCchPrintfW(
             pszDest,
             0xC0uLL,
             L"%s\\EfficiencyClass\\%d",
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Power\\EnergyEstimation\\CPU",
             v10);
  if ( result < 0
    || (result = GetRegistryDwordValueNoDefault((__int64)pszDest, (__int64)L"PowerEnvelope", (__int64)v11), result < 0)
    || (v9 = v11[0], result = v11[0] - 1, (unsigned int)(v11[0] - 1) > 0x3E7F) )
  {
    v9 = 750;
  }
  *a2 = v9;
  return result;
}
