/*
 * XREFs of ?ndisReadRegistry@@YAXXZ @ 0x1C0155F70
 * Callers:
 *     DriverEntry @ 0x1C0153778 (DriverEntry.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00328B4 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ?Feature_3583068475__private_IsEnabled@@YAHXZ @ 0x1C003470C (-Feature_3583068475__private_IsEnabled@@YAHXZ.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x1C0115810 (-ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 */

void ndisReadRegistry(void)
{
  unsigned __int8 (*v0)(void *, const struct KnobDescriptor *, unsigned __int64 *); // r8
  unsigned int v1; // eax
  unsigned int v2; // edx
  enum wil_ReportingKind v3; // [rsp+30h] [rbp-D0h]
  _DWORD VersionInformation[72]; // [rsp+40h] [rbp-C0h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+160h] [rbp+60h] BYREF
  __int64 (__fastcall *v6)(wchar_t *, unsigned int, void *, unsigned int, void *, void *); // [rsp+198h] [rbp+98h]
  int v7; // [rsp+1A0h] [rbp+A0h]
  __int64 v8; // [rsp+1A8h] [rbp+A8h]
  __int64 v9; // [rsp+1B0h] [rbp+B0h]
  int v10; // [rsp+1B8h] [rbp+B8h]
  void *v11; // [rsp+1C0h] [rbp+C0h]
  int v12; // [rsp+1C8h] [rbp+C8h]
  __int128 v13; // [rsp+1D0h] [rbp+D0h]
  __int128 v14; // [rsp+1E0h] [rbp+E0h]
  __int128 v15; // [rsp+1F0h] [rbp+F0h]
  __int64 v16; // [rsp+200h] [rbp+100h]

  memset(&VersionInformation[1], 0, 0x118uLL);
  QueryTable.QueryRoutine = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v12 = 0;
  QueryTable.Name = L"MediaTypes";
  QueryTable.Flags = 1;
  v6 = ndisAddMediaTypeToArray;
  v7 = 20;
  v11 = &unk_1C00EE210;
  v10 = 4;
  v16 = 0LL;
  memset(&QueryTable.EntryContext, 0, 32);
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  RtlQueryRegistryValuesEx(1u, L"NDIS", &QueryTable, 0LL, 0LL);
  ndisRegisterKnobs(&stru_1C00CE2E0, 33LL, v0, 0LL);
  if ( ndisAoAcTestOverride == 1 )
    ndisAoAcTest = 1;
  VersionInformation[0] = 284;
  RtlGetVersion((PRTL_OSVERSIONINFOW)VersionInformation);
  if ( ndisNoPauseOnSuspend == 0xFFFFFF )
    ndisNoPauseOnSuspend = BYTE2(VersionInformation[70]) == 1;
  if ( LODWORD(WPP_MAIN_CB.Dpc.DeferredContext) >= 3 )
    LODWORD(WPP_MAIN_CB.Dpc.DeferredContext) = 0;
  if ( !(_BYTE)KdDebuggerEnabled )
    ndisAllowFlowControl = 1;
  v1 = ndisMaxNumRssCpus;
  if ( !ndisMaxNumRssCpus )
  {
    v1 = 1;
    ndisMaxNumRssCpus = 1;
  }
  if ( v1 > ndisNumberOfActiveProcessorsAtBoot )
  {
    v1 = ndisNumberOfActiveProcessorsAtBoot;
    ndisMaxNumRssCpus = ndisNumberOfActiveProcessorsAtBoot;
  }
  if ( v1 > 0x800 )
  {
    v1 = 2048;
    ndisMaxNumRssCpus = 2048;
  }
  v2 = ndisRssBaseCpu;
  if ( ndisRssBaseCpu >= ndisNumberOfActiveProcessorsAtBoot )
  {
    v2 = ndisNumberOfActiveProcessorsAtBoot - 1;
    ndisRssBaseCpu = ndisNumberOfActiveProcessorsAtBoot - 1;
  }
  if ( v2 + v1 > ndisNumberOfActiveProcessorsAtBoot )
    ndisMaxNumRssCpus = ndisNumberOfActiveProcessorsAtBoot - v2;
  if ( (unsigned int)(dword_1C00EC248 - 1) > 0x1E )
    dword_1C00EC248 = 8;
  if ( ndisDatapathVerifierMode > 2u )
  {
    if ( ndisDatapathVerifierMode == 3 )
    {
      wil_details_FeatureReporting_ReportUsageToService(
        &Feature_NdisDatapathVerifier__private_reporting,
        0xFB7BF4u,
        0,
        0,
        &Feature_NdisDatapathVerifier_logged_traits,
        1,
        v3);
      ndisDatapathVerifierMode = 1;
    }
    else
    {
      ndisDatapathVerifierMode = 0;
    }
  }
  if ( (unsigned int)Feature_3583068475__private_IsEnabled() )
    ndisMDLNullCheckPresent = 1;
}
