/*
 * XREFs of IsSpatialComboEndpointDeterminationDisabled @ 0x180051AE0
 * Callers:
 *     ?DetectComboEndpoint@SpatialPolicy@@SAJPEBU_tlgProvider_t@@PEAUIMMDevice@@@Z @ 0x1800524A4 (-DetectComboEndpoint@SpatialPolicy@@SAJPEBU_tlgProvider_t@@PEAUIMMDevice@@@Z.c)
 * Callees:
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180061D9C (IsGetDefaultSpatialRenderingModePresent.c)
 */

bool IsSpatialComboEndpointDeterminationDisabled()
{
  DWORD pcbData; // [rsp+50h] [rbp+8h] BYREF

  if ( dword_1801C1770 == -1 )
  {
    dword_1801C1770 = 1;
    if ( !(unsigned __int8)IsGetDefaultSpatialRenderingModePresent()
      || (unsigned int)IsSpatialSpeakerProtectionCheckRequired() )
    {
      pcbData = 4;
      RegGetValueW(
        HKEY_LOCAL_MACHINE,
        L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
        L"DisableSpatialOnComboEndpoints",
        0x18u,
        0LL,
        &dword_1801C1770,
        &pcbData);
    }
  }
  return dword_1801C1770 != 0;
}
