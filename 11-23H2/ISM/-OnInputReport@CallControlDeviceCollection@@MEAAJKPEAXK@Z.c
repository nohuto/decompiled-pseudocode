/*
 * XREFs of ?OnInputReport@CallControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800E09C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ??$OnButtonRelease@W4_Button@@@ButtonDeviceTelemetry@@SAX$$QEAW4_Button@@@Z @ 0x18005966C (--$OnButtonRelease@W4_Button@@@ButtonDeviceTelemetry@@SAX$$QEAW4_Button@@@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800CD748 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x1800D50AC (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800D5100 (-GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800D74E8 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?SendMuteMicrophoneInputReport@CallControlDeviceCollection@@AEAAJK_N@Z @ 0x1800E0C80 (-SendMuteMicrophoneInputReport@CallControlDeviceCollection@@AEAAJK_N@Z.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x1800E587C (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 */

__int64 __fastcall CallControlDeviceCollection::OnInputReport(
        CallControlDeviceCollection *this,
        unsigned int a2,
        PCHAR Report,
        unsigned int a4)
{
  int v8; // edx
  int DeviceInfo; // ebx
  __int64 v10; // rdx
  struct _HIDP_CAPS *v12; // rcx
  struct DeviceInfo *PreparsedData; // rdi
  struct _HIDP_CAPS *v14; // r12
  unsigned int InputReportByteLength; // ecx
  NTSTATUS Usages; // eax
  USHORT *v17; // rcx
  __int64 v18; // r8
  struct _USAGE_AND_PAGE *p_ButtonList; // rdx
  USAGE Usage; // ax
  __int64 v21; // rbx
  USHORT *v22; // rdi
  struct _USAGE_AND_PAGE *v23; // rbx
  int v24; // eax
  unsigned int v25; // edi
  __int64 v26; // rax
  __int64 v27; // rdx
  struct _HIDP_CAPS *v28; // [rsp+40h] [rbp-C0h] BYREF
  ULONG UsageLength; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v30; // [rsp+50h] [rbp-B0h] BYREF
  struct DeviceInfo *v31; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+60h] [rbp-A0h] BYREF
  USHORT CurrentUsageList[8]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v34; // [rsp+78h] [rbp-88h]
  __int64 v35; // [rsp+88h] [rbp-78h]
  USHORT BreakUsageList[20]; // [rsp+90h] [rbp-70h] BYREF
  USHORT MakeUsageList[20]; // [rsp+B8h] [rbp-48h] BYREF
  struct _USAGE_AND_PAGE ButtonList; // [rsp+E0h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  v30 = a2;
  DeviceInfo = RIMDeviceCollection::GetDeviceInfo(this, a2, &v31);
  if ( DeviceInfo < 0 )
  {
    v10 = 128LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\callcontroldevicecollection.cpp",
      (const char *)(unsigned int)DeviceInfo);
    return (unsigned int)DeviceInfo;
  }
  v28 = 0LL;
  DeviceInfo = RIMDeviceCollection::FindDevice(this, v8, 0LL, (struct RIMDevice **)&v28, 0LL);
  if ( DeviceInfo < 0 )
  {
    v10 = 134LL;
    goto LABEL_3;
  }
  v12 = v28;
  v28 = 0LL;
  PreparsedData = *(struct DeviceInfo **)&v12->NumberInputValueCaps;
  v31 = PreparsedData;
  DeviceInfo = HIDDevice::GetHIDCapabilities((HIDDevice *)v12, &v28);
  if ( DeviceInfo < 0 )
  {
    v10 = 140LL;
    goto LABEL_3;
  }
  v14 = v28;
  InputReportByteLength = v28->InputReportByteLength;
  if ( a4 < InputReportByteLength )
    return 0LL;
  while ( 1 )
  {
    UsageLength = 20;
    Usages = HidP_GetUsagesEx(
               HidP_Input,
               0,
               &ButtonList,
               &UsageLength,
               PreparsedData,
               Report,
               (unsigned __int16)InputReportByteLength);
    if ( Usages < 0 )
      break;
    if ( UsageLength )
    {
      v17 = CurrentUsageList;
      v18 = UsageLength;
      p_ButtonList = &ButtonList;
      do
      {
        Usage = p_ButtonList->Usage;
        ++p_ButtonList;
        *v17++ = Usage;
        --v18;
      }
      while ( v18 );
    }
    std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
      (_QWORD *)this + 345,
      &v32,
      (const unsigned __int8 *)&v30);
    if ( v32 == *((_QWORD *)this + 346) )
    {
      DeviceInfo = -2147467259;
      v10 = 181LL;
      goto LABEL_3;
    }
    v21 = v32 + 20;
    Usages = HidP_UsageListDifference((PUSAGE)(v32 + 20), CurrentUsageList, BreakUsageList, MakeUsageList, 0x14u);
    if ( Usages < 0 )
    {
      v27 = 190LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v27,
               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\callcontroldevicecollection.cpp",
               (const char *)(unsigned int)Usages);
    }
    v22 = BreakUsageList;
    *(_OWORD *)v21 = *(_OWORD *)CurrentUsageList;
    *(_OWORD *)(v21 + 16) = v34;
    *(_QWORD *)(v21 + 32) = v35;
    do
    {
      if ( *v22 == 225 )
      {
        DeviceInfo = CallControlDeviceCollection::SendMuteMicrophoneInputReport(this, a2, 0);
        if ( DeviceInfo < 0 )
        {
          v10 = 201LL;
          goto LABEL_3;
        }
        LODWORD(v28) = 304;
        ButtonDeviceTelemetry::OnButtonRelease<enum _Button>((int *)&v28);
      }
      ++v22;
    }
    while ( v22 != MakeUsageList );
    v23 = (struct _USAGE_AND_PAGE *)MakeUsageList;
    do
    {
      if ( v23->Usage == 225 )
      {
        v24 = CallControlDeviceCollection::SendMuteMicrophoneInputReport(this, a2, 1);
        v25 = v24;
        if ( v24 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xD7,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\callcontroldevicecollection.cpp",
            (const char *)(unsigned int)v24);
          return v25;
        }
      }
      v23 = (struct _USAGE_AND_PAGE *)((char *)v23 + 2);
    }
    while ( v23 != &ButtonList );
    v26 = v14->InputReportByteLength;
    a4 -= v26;
    Report += v26;
    LOWORD(InputReportByteLength) = v14->InputReportByteLength;
    if ( a4 < (unsigned int)v26 )
      return 0LL;
    PreparsedData = v31;
  }
  v27 = 170LL;
  return wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)v27,
           (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\callcontroldevicecollection.cpp",
           (const char *)(unsigned int)Usages);
}
