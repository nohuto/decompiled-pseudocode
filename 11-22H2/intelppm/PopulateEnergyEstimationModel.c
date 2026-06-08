/*
 * XREFs of PopulateEnergyEstimationModel @ 0x1C0048B64
 * Callers:
 *     ProcLibGlobalInit @ 0x1C0048C54 (ProcLibGlobalInit.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1C0003048 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C0003770 (__security_check_cookie.c)
 *     memset @ 0x1C00045C0 (memset.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C00270EC (GetRegistryDwordValueNoDefault.c)
 *     IsValidPowerCurve @ 0x1C0048A00 (IsValidPowerCurve.c)
 *     ReadEnergyEquation @ 0x1C0048A8C (ReadEnergyEquation.c)
 *     ReadPowerCurve @ 0x1C00499A4 (ReadPowerCurve.c)
 *     ProcLibTraceInvalidPowerCurve @ 0x1C004AE6C (ProcLibTraceInvalidPowerCurve.c)
 */

int __fastcall PopulateEnergyEstimationModel(unsigned __int8 a1, int *a2)
{
  int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // r9d
  int result; // eax
  int v8; // ecx
  int v9; // [rsp+20h] [rbp-1B8h]
  int v10[4]; // [rsp+30h] [rbp-1A8h] BYREF
  wchar_t pszDest[192]; // [rsp+40h] [rbp-198h] BYREF

  v10[0] = 0;
  v3 = a1;
  memset(a2, 0, 0x100uLL);
  ReadEnergyEquation(v3, (__int64)a2);
  LOBYTE(v4) = v3;
  if ( (int)ReadPowerCurve(v4, a2) >= 0 )
  {
    if ( IsValidPowerCurve(a2) )
    {
      a2[1] = v6 | 1;
    }
    else
    {
      LOBYTE(v5) = v3;
      ProcLibTraceInvalidPowerCurve(v5, (unsigned __int8)v6 >> 1, a2 + 2);
    }
  }
  v9 = v3;
  result = RtlStringCchPrintfW(
             pszDest,
             0xC0uLL,
             L"%s\\EfficiencyClass\\%d",
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Power\\EnergyEstimation\\CPU",
             v9);
  if ( result < 0
    || (result = GetRegistryDwordValueNoDefault((__int64)pszDest, (__int64)L"PowerEnvelope", (__int64)v10), result < 0)
    || (v8 = v10[0], result = v10[0] - 1, (unsigned int)(v10[0] - 1) > 0x3E7F) )
  {
    v8 = 750;
  }
  *a2 = v8;
  return result;
}
