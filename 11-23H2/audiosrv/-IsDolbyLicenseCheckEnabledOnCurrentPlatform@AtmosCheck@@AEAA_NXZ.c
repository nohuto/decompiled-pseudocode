/*
 * XREFs of ?IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ @ 0x18005DBFC
 * Callers:
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x18005D6AC (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x18005DBBC (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 * Callees:
 *     ?IsRunningOnXbox@AtmosCheck@@AEBA_NXZ @ 0x18015C2C4 (-IsRunningOnXbox@AtmosCheck@@AEBA_NXZ.c)
 */

bool __fastcall AtmosCheck::IsDolbyLicenseCheckEnabledOnCurrentPlatform(AtmosCheck *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 48);
  return v1 == 3 || v1 == 16 || AtmosCheck::IsRunningOnXbox(this);
}
