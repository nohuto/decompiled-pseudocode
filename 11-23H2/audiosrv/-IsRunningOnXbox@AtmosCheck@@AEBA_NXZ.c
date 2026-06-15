/*
 * XREFs of ?IsRunningOnXbox@AtmosCheck@@AEBA_NXZ @ 0x18015C2C4
 * Callers:
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180034C90 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     _lambda_306411e1888b4c6b6a6c7d2021597688_::operator() @ 0x18005D874 (_lambda_306411e1888b4c6b6a6c7d2021597688_--operator().c)
 *     ?IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ @ 0x18005DBFC (-IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ.c)
 *     ?UnregisterFromUserWatcherNotifications@AtmosCheck@@AEAAXXZ @ 0x18015DF9C (-UnregisterFromUserWatcherNotifications@AtmosCheck@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall AtmosCheck::IsRunningOnXbox(AtmosCheck *this)
{
  int v1; // eax
  char v2; // cl

  v1 = *((_DWORD *)this + 48);
  v2 = 1;
  if ( v1 != 5 )
    return (unsigned int)(v1 - 11) <= 1;
  return v2;
}
