/*
 * XREFs of IsSpatialComboEndpointDeterminationDisabled @ 0x180049F84
 * Callers:
 *     ?DetectComboEndpoint@SpatialPolicy@@SAJPEBU_tlgProvider_t@@PEAUIMMDevice@@@Z @ 0x18002032C (-DetectComboEndpoint@SpatialPolicy@@SAJPEBU_tlgProvider_t@@PEAUIMMDevice@@@Z.c)
 * Callees:
 *     IsGetDefaultSpatialRenderingModePresent @ 0x18006A07C (IsGetDefaultSpatialRenderingModePresent.c)
 */

bool __fastcall IsSpatialComboEndpointDeterminationDisabled(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  DWORD pcbData; // [rsp+50h] [rbp+8h] BYREF

  if ( dword_1801CEA84 == -1 )
  {
    dword_1801CEA84 = 1;
    if ( !(unsigned __int8)IsGetDefaultSpatialRenderingModePresent(a1, a2, a3, a4)
      || (unsigned int)IsSpatialSpeakerProtectionCheckRequired() )
    {
      pcbData = 4;
      RegGetValueW(
        HKEY_LOCAL_MACHINE,
        L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
        L"DisableSpatialOnComboEndpoints",
        0x18u,
        0LL,
        &dword_1801CEA84,
        &pcbData);
    }
  }
  return dword_1801CEA84 != 0;
}
