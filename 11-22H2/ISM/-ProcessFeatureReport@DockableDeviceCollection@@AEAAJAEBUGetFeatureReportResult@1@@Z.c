/*
 * XREFs of ?ProcessFeatureReport@DockableDeviceCollection@@AEAAJAEBUGetFeatureReportResult@1@@Z @ 0x1800F2D64
 * Callers:
 *     ?OnFeatureReport@DockableDeviceCollection@@AEAAXAEBUGetFeatureReportResult@1@@Z @ 0x1800F29A4 (-OnFeatureReport@DockableDeviceCollection@@AEAAXAEBUGetFeatureReportResult@1@@Z.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800254AC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800DCA78 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x1800E3F9C (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ??0?$com_ptr_t@VDeviceDockServer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVDeviceDockServer@@@Z @ 0x1800F1EDC (--0-$com_ptr_t@VDeviceDockServer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVDeviceDockServer@@@.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800F3600 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?OnDockableDeviceArrival@DeviceDockServer@@QEAAJPEAUDockableDeviceInfo@@@Z @ 0x1801AB0C0 (-OnDockableDeviceArrival@DeviceDockServer@@QEAAJPEAUDockableDeviceInfo@@@Z.c)
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
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r14
  NTSTATUS SpecificValueCaps; // eax
  unsigned int v11; // edi
  ULONG ReportLength; // ecx
  CHAR *Report; // r10
  NTSTATUS UsageValueArray; // eax
  __int64 v15; // rax
  NTSTATUS v16; // eax
  NTSTATUS v17; // eax
  char v18; // r15
  ULONG *v19; // rdi
  const char *v20; // rax
  __int64 v21; // rdx
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v23; // rax
  struct DockableDeviceInfo *v24; // rdx
  __int64 v25; // rbx
  const char *ValueCapsLength; // [rsp+28h] [rbp-71h]
  ULONG v27; // [rsp+50h] [rbp-49h] BYREF
  USHORT v28; // [rsp+54h] [rbp-45h] BYREF
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
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
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
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
      (const char *)(unsigned int)Device);
    return v7;
  }
  v8 = *(_QWORD *)(*(_QWORD *)UsageValue + 32LL);
  PreparsedData = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)UsageValue + 48LL);
  memset_0(&ValueCaps, 0, sizeof(ValueCaps));
  v28 = 1;
  SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Feature, 1u, 0, 0xD0u, &ValueCaps, &v28, PreparsedData);
  v11 = SpecificValueCaps;
  if ( SpecificValueCaps < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x138,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
      (const char *)(unsigned int)SpecificValueCaps);
    return v11;
  }
  v27 = 0;
  ReportLength = *((_DWORD *)a2 + 6);
  Report = (CHAR *)*((_QWORD *)a2 + 2);
  if ( ValueCaps.ReportCount <= 1u )
  {
    v16 = HidP_GetUsageValue(HidP_Feature, 1u, 0, 0xD0u, &v27, PreparsedData, Report, ReportLength);
    if ( v16 < 0 )
    {
      v3 = (unsigned int)v16;
      v4 = 345LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v4,
               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
               (const char *)v3);
    }
    v15 = v27;
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
               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
               (const char *)v3);
    }
    v15 = *(_QWORD *)UsageValue;
  }
  *(_QWORD *)(v8 + 1552) = v15;
  v17 = HidP_GetUsageValue(HidP_Feature, 1u, 0, 0xD1u, &v27, PreparsedData, *((PCHAR *)a2 + 2), *((_DWORD *)a2 + 6));
  if ( v17 < 0 )
  {
    v3 = (unsigned int)v17;
    v4 = 358LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v4,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
             (const char *)v3);
  }
  *(_WORD *)(v8 + 1560) = v27;
  v18 = 0;
  v19 = (ULONG *)(v8 + 1568);
  if ( HidP_GetUsageValue(HidP_Feature, 1u, 0, 0xD6u, &v27, PreparsedData, *((PCHAR *)a2 + 2), *((_DWORD *)a2 + 6)) < 0
    || (v18 = 1, *v19 = v27, v27 == 1) )
  {
    if ( HidP_GetUsageValue(HidP_Feature, 1u, 0, 0xD2u, &v27, PreparsedData, *((PCHAR *)a2 + 2), *((_DWORD *)a2 + 6)) >= 0 )
      *(_WORD *)(v8 + 1572) = v27;
    if ( HidP_GetUsageValue(HidP_Feature, 1u, 0, 0xD3u, &v27, PreparsedData, *((PCHAR *)a2 + 2), *((_DWORD *)a2 + 6)) >= 0 )
      *(_WORD *)(v8 + 1574) = v27;
  }
  if ( *v19 == 1 )
  {
    if ( !*(_WORD *)(v8 + 1572) )
    {
      v20 = "Invalid Dockable Device Primary Usage Page.";
      v21 = 415LL;
LABEL_27:
      v7 = -2147467259;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)v21,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
        (const char *)0x80004005LL,
        (int)v20,
        ValueCapsLength);
      return v7;
    }
    if ( !*(_WORD *)(v8 + 1574) )
    {
      v20 = "Invalid Dockable Device Primary Usage ID.";
      v21 = 416LL;
      goto LABEL_27;
    }
  }
  if ( !v18 && *(_WORD *)(v8 + 1572) && *(_WORD *)(v8 + 1574) )
    *v19 = 1;
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 56LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
  wil::com_ptr_t<DeviceDockServer,wil::err_returncode_policy>::com_ptr_t<DeviceDockServer,wil::err_returncode_policy>(
    UsageValue,
    v23);
  v24 = (struct DockableDeviceInfo *)v8;
  v25 = *(_QWORD *)UsageValue;
  DeviceDockServer::OnDockableDeviceArrival(*(DeviceDockServer **)UsageValue, v24);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v25 + 16) + 8LL))(v25 + 16);
  return 0LL;
}
