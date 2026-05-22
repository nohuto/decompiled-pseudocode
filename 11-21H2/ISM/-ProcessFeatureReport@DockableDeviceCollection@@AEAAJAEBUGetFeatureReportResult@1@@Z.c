/*
 * XREFs of ?ProcessFeatureReport@DockableDeviceCollection@@AEAAJAEBUGetFeatureReportResult@1@@Z @ 0x1800CA774
 * Callers:
 *     ?OnFeatureReport@DockableDeviceCollection@@AEAAXAEBUGetFeatureReportResult@1@@Z @ 0x1800CA3B8 (-OnFeatureReport@DockableDeviceCollection@@AEAAXAEBUGetFeatureReportResult@1@@Z.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180014574 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800B4708 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x1800BBFE0 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ??0?$com_ptr_t@VDeviceDockServer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVDeviceDockServer@@@Z @ 0x1800C98EC (--0-$com_ptr_t@VDeviceDockServer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVDeviceDockServer@@@.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800CB010 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?OnDockableDeviceArrival@DeviceDockServer@@QEAAJPEAUDockableDeviceInfo@@@Z @ 0x18017DF24 (-OnDockableDeviceArrival@DeviceDockServer@@QEAAJPEAUDockableDeviceInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DockableDeviceCollection::ProcessFeatureReport(
        DockableDeviceCollection *this,
        const struct DockableDeviceCollection::GetFeatureReportResult *a2)
{
  unsigned __int64 v3; // r9
  __int64 v4; // rdx
  int Device; // eax
  unsigned int v7; // ebx
  __int64 v8; // rbx
  struct _HIDP_PREPARSED_DATA *PreparsedData; // rsi
  NTSTATUS SpecificValueCaps; // eax
  unsigned int v11; // r14d
  ULONG ReportLength; // ecx
  CHAR *Report; // r10
  NTSTATUS UsageValueArray; // eax
  __int64 v15; // rax
  NTSTATUS v16; // eax
  NTSTATUS v17; // eax
  char v18; // r14
  const char *v19; // rax
  __int64 v20; // rdx
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v22; // rax
  struct DockableDeviceInfo *v23; // rdx
  __int64 v24; // rbx
  const char *ValueCapsLength; // [rsp+28h] [rbp-71h]
  ULONG v26; // [rsp+50h] [rbp-49h] BYREF
  USHORT v27; // [rsp+54h] [rbp-45h] BYREF
  CHAR UsageValue[8]; // [rsp+58h] [rbp-41h] BYREF
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+60h] [rbp-39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v3 = *((unsigned int *)a2 + 3);
  if ( (v3 & 0x80000000) != 0LL )
  {
    v4 = 288LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v4,
             (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
             (const char *)v3);
  }
  *(_QWORD *)UsageValue = 0LL;
  Device = RIMDeviceCollection::FindDevice(this, *((_DWORD *)a2 + 2), 0LL, (struct RIMDevice **)UsageValue, 0LL);
  v7 = Device;
  if ( Device < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x126,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
      (const char *)(unsigned int)Device);
    return v7;
  }
  v8 = *(_QWORD *)(*(_QWORD *)UsageValue + 32LL);
  PreparsedData = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)UsageValue + 48LL);
  memset_0(&ValueCaps, 0, sizeof(ValueCaps));
  v27 = 1;
  SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Feature, 1u, 0, 0xD0u, &ValueCaps, &v27, PreparsedData);
  v11 = SpecificValueCaps;
  if ( SpecificValueCaps < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x138,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
      (const char *)(unsigned int)SpecificValueCaps);
    return v11;
  }
  v26 = 0;
  ReportLength = *((_DWORD *)a2 + 6);
  Report = (CHAR *)*((_QWORD *)a2 + 2);
  if ( ValueCaps.ReportCount <= 1u )
  {
    v16 = HidP_GetUsageValue(HidP_Feature, 1u, 0, 0xD0u, &v26, PreparsedData, Report, ReportLength);
    if ( v16 < 0 )
    {
      v3 = (unsigned int)v16;
      v4 = 345LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v4,
               (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
               (const char *)v3);
    }
    v15 = v26;
  }
  else
  {
    *(_QWORD *)UsageValue = 0LL;
    UsageValueArray = HidP_GetUsageValueArray(
                        HidP_Feature,
                        1u,
                        0,
                        0xD0u,
                        UsageValue,
                        8u,
                        PreparsedData,
                        Report,
                        ReportLength);
    if ( UsageValueArray < 0 )
    {
      v3 = (unsigned int)UsageValueArray;
      v4 = 331LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v4,
               (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
               (const char *)v3);
    }
    v15 = *(_QWORD *)UsageValue;
  }
  *(_QWORD *)(v8 + 1552) = v15;
  v17 = HidP_GetUsageValue(HidP_Feature, 1u, 0, 0xD1u, &v26, PreparsedData, *((PCHAR *)a2 + 2), *((_DWORD *)a2 + 6));
  if ( v17 < 0 )
  {
    v3 = (unsigned int)v17;
    v4 = 358LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v4,
             (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
             (const char *)v3);
  }
  *(_WORD *)(v8 + 1560) = v26;
  v18 = 0;
  if ( HidP_GetUsageValue(HidP_Feature, 1u, 0, 0xD6u, &v26, PreparsedData, *((PCHAR *)a2 + 2), *((_DWORD *)a2 + 6)) < 0
    || (v18 = 1, *(_DWORD *)(v8 + 1568) = v26, v26 == 1) )
  {
    if ( HidP_GetUsageValue(HidP_Feature, 1u, 0, 0xD2u, &v26, PreparsedData, *((PCHAR *)a2 + 2), *((_DWORD *)a2 + 6)) >= 0 )
      *(_WORD *)(v8 + 1572) = v26;
    if ( HidP_GetUsageValue(HidP_Feature, 1u, 0, 0xD3u, &v26, PreparsedData, *((PCHAR *)a2 + 2), *((_DWORD *)a2 + 6)) >= 0 )
      *(_WORD *)(v8 + 1574) = v26;
  }
  if ( *(_DWORD *)(v8 + 1568) == 1 )
  {
    if ( !*(_WORD *)(v8 + 1572) )
    {
      v19 = "Invalid Dockable Device Primary Usage Page.";
      v20 = 415LL;
LABEL_27:
      v7 = -2147467259;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)v20,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
        (const char *)0x80004005LL,
        (int)v19,
        ValueCapsLength);
      return v7;
    }
    if ( !*(_WORD *)(v8 + 1574) )
    {
      v19 = "Invalid Dockable Device Primary Usage ID.";
      v20 = 416LL;
      goto LABEL_27;
    }
  }
  if ( !v18 && *(_WORD *)(v8 + 1572) && *(_WORD *)(v8 + 1574) )
    *(_DWORD *)(v8 + 1568) = 1;
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 29) + 8LL) + 56LL))(*((_QWORD *)BamoServerConnection + 29) + 8LL);
  wil::com_ptr_t<DeviceDockServer,wil::err_returncode_policy>::com_ptr_t<DeviceDockServer,wil::err_returncode_policy>(
    UsageValue,
    v22);
  v23 = (struct DockableDeviceInfo *)v8;
  v24 = *(_QWORD *)UsageValue;
  DeviceDockServer::OnDockableDeviceArrival(*(DeviceDockServer **)UsageValue, v23);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v24 + 16) + 8LL))(v24 + 16);
  return 0LL;
}
