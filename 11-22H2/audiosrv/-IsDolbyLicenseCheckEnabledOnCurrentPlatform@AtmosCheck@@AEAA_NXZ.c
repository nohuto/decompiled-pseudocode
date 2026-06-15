/*
 * XREFs of ?IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ @ 0x18005DBEC
 * Callers:
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x18005D69C (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x18005DBAC (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 * Callees:
 *     ?IsRunningOnXbox@AtmosCheck@@AEBA_NXZ @ 0x18015C314 (-IsRunningOnXbox@AtmosCheck@@AEBA_NXZ.c)
 */

bool __fastcall AtmosCheck::IsDolbyLicenseCheckEnabledOnCurrentPlatform(AtmosCheck *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 48);
  return v1 == 3 || v1 == 16 || AtmosCheck::IsRunningOnXbox(this);
}
