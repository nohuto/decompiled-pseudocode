/*
 * XREFs of ?InitEditionOnceCallback@@YAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x1800275D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InitEditionOnceCallback(PINIT_ONCE InitOnce, PVOID Parameter, PVOID *Context)
{
  bool v3; // zf
  int v4; // eax
  DWORD Type; // [rsp+30h] [rbp-10h] BYREF
  BYTE Data[4]; // [rsp+34h] [rbp-Ch] BYREF
  HKEY hKey; // [rsp+38h] [rbp-8h] BYREF
  DWORD cbData; // [rsp+68h] [rbp+28h] BYREF

  RtlGetDeviceFamilyInfoEnum(0LL, &gdwDeviceFamily, 0LL);
  v3 = (unsigned __int8)RtlIsMultiSessionSku() == 0;
  v4 = gdwDeviceFamily;
  if ( gdwDeviceFamily == 6 )
  {
    if ( v3 )
      v4 = 16;
    gdwDeviceFamily = v4;
  }
  hKey = 0LL;
  if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Windows\\DWM", 0, 1u, &hKey) )
  {
    if ( hKey )
    {
      cbData = 4;
      RegQueryValueExW(hKey, L"OneCoreNoBootDWM", 0LL, &Type, Data, &cbData);
      cbData = 4;
      if ( !RegQueryValueExW(hKey, L"OneCoreNoDWMRawGameController", 0LL, &Type, Data, &cbData)
        && Type == 4
        && cbData == 4 )
      {
        gbIsDWMNoRawGameController = *(_DWORD *)Data == 1;
      }
    }
  }
  return 1LL;
}
