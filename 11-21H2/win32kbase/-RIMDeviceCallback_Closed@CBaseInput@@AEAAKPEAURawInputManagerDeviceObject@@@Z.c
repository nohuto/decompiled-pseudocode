/*
 * XREFs of ?RIMDeviceCallback_Closed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C01DC8C0
 * Callers:
 *     <none>
 * Callees:
 *     isRootPartition @ 0x1C00384A0 (isRootPartition.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00384DC (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C01F51D4 (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x1C01F6520 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Closed(
        CBaseInput *this,
        struct RawInputManagerDeviceObject *a2,
        __int64 a3)
{
  __int64 v3; // rax
  const struct CONTAINER_ID *v6; // r9
  unsigned int v8; // [rsp+50h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 157);
  if ( !v3 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
    v3 = *((_QWORD *)this + 157);
  }
  *((_QWORD *)this + 157) = v3 - 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_InputVirtualization__private_reporting,
    16291462LL,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_KeyboardInputVirtualization_logged_traits,
    1,
    3);
  if ( isRootPartition() && CIVChannel::ContainerConnected(*((_DWORD *)this + 318)) )
  {
    v8 = 0;
    IVRootDeliver::PnP::SendRootPnp(
      (struct RawInputManagerDeviceObject *)((char *)a2 + 88),
      (struct DEVICEINFO *)3,
      (unsigned int)&v8,
      v6);
  }
  return (*(__int64 (__fastcall **)(CBaseInput *, char *))(*(_QWORD *)this + 96LL))(this, (char *)a2 + 88);
}
