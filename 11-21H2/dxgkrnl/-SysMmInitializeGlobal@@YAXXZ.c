/*
 * XREFs of ?SysMmInitializeGlobal@@YAXXZ @ 0x1C01F4F64
 * Callers:
 *     DriverEntry @ 0x1C03C7238 (DriverEntry.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     McGenEventRegister_EtwRegister @ 0x1C0025FC0 (McGenEventRegister_EtwRegister.c)
 *     ?SmmUseIommuV2Interface@@YA_NXZ @ 0x1C0025FEC (-SmmUseIommuV2Interface@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     SmmQueryRegistry @ 0x1C01F5030 (SmmQueryRegistry.c)
 */

void __fastcall SysMmInitializeGlobal(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  int IommuInterface; // eax
  int v5; // eax

  if ( McGenEventRegister_EtwRegister(&SysMmControlGuid, a2, SysMmControlGuid_Context, SysMmControlGuid_Context) < 0 )
  {
    WdLogSingleEntry1(1LL, 33LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"(((NTSTATUS)(Status)) >= 0)", 33LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !SysMmControlGuid_Context[0] )
  {
    WdLogSingleEntry1(1LL, 34LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(SysMmControlGuid_Context.RegistrationHandle) != 0",
      34LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  SmmQueryRegistry();
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_IommuInterfaceV2__private_reporting,
    0x1C0FBDFu,
    v2,
    v3,
    (const struct FEATURE_LOGGED_TRAITS *)Feature_DmaRemapping_logged_traits,
    1);
  dword_1C0130B08 |= 0x100u;
  IommuInterface = IoGetIommuInterfaceEx(2LL, 0LL, &SmmGlobal);
  if ( IommuInterface < 0 )
  {
    WdLogSingleEntry2(3LL, 2LL, IommuInterface);
    dword_1C0130A48 = 0;
  }
  if ( SmmUseIommuV2Interface() )
  {
    v5 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, __int64 *))qword_1C0130A50)(
           1LL,
           0LL,
           0LL,
           0LL,
           &qword_1C0130B00);
    if ( v5 < 0 )
    {
      WdLogSingleEntry1(3LL, v5);
      dword_1C0130A48 = 0;
    }
  }
}
