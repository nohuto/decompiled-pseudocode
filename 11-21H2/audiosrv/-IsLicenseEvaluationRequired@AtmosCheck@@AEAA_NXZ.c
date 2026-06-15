/*
 * XREFs of ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180040D48
 * Callers:
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180040818 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x180057E7C (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 *     _lambda_02cf54438168803f227ee4e991ef3551_::operator() @ 0x180152EF0 (_lambda_02cf54438168803f227ee4e991ef3551_--operator().c)
 *     _lambda_584c7311ea728c54c4a47fc057f19078_::operator() @ 0x18015306C (_lambda_584c7311ea728c54c4a47fc057f19078_--operator().c)
 * Callees:
 *     ?TraceResult@AtmosCheck@@AEAAXJ_N@Z @ 0x180040A80 (-TraceResult@AtmosCheck@@AEAAXJ_N@Z.c)
 *     ?IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ @ 0x180040D88 (-IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180061D9C (IsGetDefaultSpatialRenderingModePresent.c)
 *     ?EnableAllSpatialCapabilities@AtmosCheck@@AEAAXXZ @ 0x180153BB8 (-EnableAllSpatialCapabilities@AtmosCheck@@AEAAXXZ.c)
 *     ?IsLogLicenseResult@AtmosCheck@@AEAA_NPEAUSpatialLicenseResult@@@Z @ 0x180154FDC (-IsLogLicenseResult@AtmosCheck@@AEAA_NPEAUSpatialLicenseResult@@@Z.c)
 */

char __fastcall AtmosCheck::IsLicenseEvaluationRequired(AtmosCheck *this)
{
  __int64 v3; // r8
  bool IsLogLicenseResult; // bl
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]
  int v7; // [rsp+38h] [rbp-10h]

  if ( AtmosCheck::IsDolbyLicenseCheckEnabledOnCurrentPlatform(this) )
  {
    if ( !(unsigned __int8)IsGetDefaultSpatialRenderingModePresent()
      || !(unsigned int)IsDolbyLicenseCheckSkippedOnCurrentPlatform() )
    {
      return 1;
    }
    *((_DWORD *)this + 47) = 2;
    v6 = 0LL;
    v7 = 0;
    v5 = 0LL;
    IsLogLicenseResult = AtmosCheck::IsLogLicenseResult(this, (struct SpatialLicenseResult *)&v5);
    AtmosCheck::EnableAllSpatialCapabilities(this);
    LOBYTE(v3) = IsLogLicenseResult;
  }
  else
  {
    *((_DWORD *)this + 47) = 1;
    v3 = 0LL;
  }
  AtmosCheck::TraceResult(this, 0, v3);
  return 0;
}
