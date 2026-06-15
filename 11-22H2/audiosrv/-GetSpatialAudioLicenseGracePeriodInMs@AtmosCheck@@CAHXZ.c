/*
 * XREFs of ?GetSpatialAudioLicenseGracePeriodInMs@AtmosCheck@@CAHXZ @ 0x18015BC7C
 * Callers:
 *     ?ScheduleGracePeriodTimer@AtmosCheck@@AEAAXXZ @ 0x18015D5F0 (-ScheduleGracePeriodTimer@AtmosCheck@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 AtmosCheck::GetSpatialAudioLicenseGracePeriodInMs(void)
{
  unsigned int v0; // ebx
  unsigned int v2; // [rsp+50h] [rbp+8h] BYREF
  DWORD v3; // [rsp+58h] [rbp+10h] BYREF

  v0 = 0;
  v3 = 4;
  v2 = 0;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Policy\\Spatial",
          L"SpatialAudioLicenseCheckStartDelay",
          0x18u,
          0LL,
          &v2,
          &v3)
    && v2 <= 0xDBBA0 )
  {
    return v2;
  }
  return v0;
}
