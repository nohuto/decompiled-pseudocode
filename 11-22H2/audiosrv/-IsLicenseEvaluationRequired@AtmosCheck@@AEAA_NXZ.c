/*
 * XREFs of ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x18005DBAC
 * Callers:
 *     _lambda_1df835b24497147b2d93aade403b0d0c_::operator() @ 0x18004A6F0 (_lambda_1df835b24497147b2d93aade403b0d0c_--operator().c)
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x18005D69C (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 *     _lambda_aa5001744ce94bbd4d4a1356ce3da641_::operator() @ 0x18015A4AC (_lambda_aa5001744ce94bbd4d4a1356ce3da641_--operator().c)
 * Callees:
 *     ?IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ @ 0x18005DBEC (-IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x18006A07C (IsGetDefaultSpatialRenderingModePresent.c)
 *     ?EnableAllSpatialCapabilities@AtmosCheck@@AEAAXXZ @ 0x18015AD78 (-EnableAllSpatialCapabilities@AtmosCheck@@AEAAXXZ.c)
 *     ?IsLogLicenseResult@AtmosCheck@@AEAA_NPEAUSpatialLicenseResult@@@Z @ 0x18015C06C (-IsLogLicenseResult@AtmosCheck@@AEAA_NPEAUSpatialLicenseResult@@@Z.c)
 *     ?TraceResult@AtmosCheck@@AEAAXJ_N@Z @ 0x18015DA84 (-TraceResult@AtmosCheck@@AEAAXJ_N@Z.c)
 */

char __fastcall AtmosCheck::IsLicenseEvaluationRequired(AtmosCheck *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  bool v7; // r8
  bool IsLogLicenseResult; // bl
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+38h] [rbp-10h]

  if ( AtmosCheck::IsDolbyLicenseCheckEnabledOnCurrentPlatform(this) )
  {
    if ( !(unsigned __int8)IsGetDefaultSpatialRenderingModePresent(v3, v2, v4, v5)
      || !(unsigned int)IsDolbyLicenseCheckSkippedOnCurrentPlatform() )
    {
      return 1;
    }
    *((_DWORD *)this + 47) = 2;
    v10 = 0LL;
    v11 = 0;
    v9 = 0LL;
    IsLogLicenseResult = AtmosCheck::IsLogLicenseResult(this, (struct SpatialLicenseResult *)&v9);
    AtmosCheck::EnableAllSpatialCapabilities(this);
    v7 = IsLogLicenseResult;
  }
  else
  {
    *((_DWORD *)this + 47) = 1;
    v7 = 0;
  }
  AtmosCheck::TraceResult(this, 0, v7);
  return 0;
}
