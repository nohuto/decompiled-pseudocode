/*
 * XREFs of ?OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800EE670
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800DCA78 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x1800E3F9C (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800E3FF0 (-GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800E6314 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?CreateButtonInfo@ConsumerControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x1800EE0B0 (-CreateButtonInfo@ConsumerControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x1800F47DC (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 */

__int64 __fastcall ConsumerControlDeviceCollection::OnInputReport(
        ConsumerControlDeviceCollection *this,
        int a2,
        PCHAR Report,
        unsigned int a4)
{
  int v8; // edx
  int DeviceInfo; // ebx
  __int64 v10; // rdx
  struct RIMDevice *v12; // rcx
  struct RIMDevice *PreparsedData; // rdi
  struct _HIDP_CAPS *v14; // r15
  unsigned int InputReportByteLength; // ecx
  NTSTATUS Usages; // eax
  ULONG v17; // eax
  PUSAGE v18; // rbx
  unsigned __int16 *v19; // rdi
  DWORD v20; // ebx
  unsigned __int16 *v21; // rdi
  DWORD TickCount; // ebx
  __int64 v23; // rax
  __int64 v24; // rdx
  struct RIMDevice *v25; // [rsp+40h] [rbp-C0h] BYREF
  struct _HIDP_CAPS *v26; // [rsp+48h] [rbp-B8h] BYREF
  ULONG UsageLength; // [rsp+50h] [rbp-B0h] BYREF
  int v28; // [rsp+58h] [rbp-A8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+60h] [rbp-A0h] BYREF
  PUSAGE PreviousUsageList[3]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v31[24]; // [rsp+80h] [rbp-80h] BYREF
  int v32; // [rsp+98h] [rbp-68h]
  USHORT UsageList[8]; // [rsp+C40h] [rbp+B40h] BYREF
  __int128 v34; // [rsp+C50h] [rbp+B50h]
  __int64 v35; // [rsp+C60h] [rbp+B60h]
  USHORT BreakUsageList[8]; // [rsp+C68h] [rbp+B68h] BYREF
  __int128 v37; // [rsp+C78h] [rbp+B78h]
  __int64 v38; // [rsp+C88h] [rbp+B88h]
  USHORT MakeUsageList[8]; // [rsp+C90h] [rbp+B90h] BYREF
  __int128 v40; // [rsp+CA0h] [rbp+BA0h]
  __int64 v41; // [rsp+CB0h] [rbp+BB0h]
  wil::details::in1diag3 *retaddr; // [rsp+CF8h] [rbp+BF8h]

  v28 = a2;
  UsageLength = 20;
  v35 = 0LL;
  v41 = 0LL;
  v38 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  *(_OWORD *)UsageList = 0LL;
  v34 = 0LL;
  *(_OWORD *)MakeUsageList = 0LL;
  v40 = 0LL;
  *(_OWORD *)BreakUsageList = 0LL;
  v37 = 0LL;
  memset_0(v31, 0, 0xBC0uLL);
  v32 = 3008;
  DeviceInfo = RIMDeviceCollection::GetDeviceInfo(this, a2, (struct DeviceInfo **)PreviousUsageList);
  if ( DeviceInfo < 0 )
  {
    v10 = 194LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\consumercontroldevicecollection.cpp",
      (const char *)(unsigned int)DeviceInfo);
    return (unsigned int)DeviceInfo;
  }
  DeviceInfo = RIMDeviceCollection::FindDevice(this, v8, 0LL, &v25, 0LL);
  if ( DeviceInfo < 0 )
  {
    v10 = 198LL;
    goto LABEL_3;
  }
  v12 = v25;
  PreparsedData = (struct RIMDevice *)*((_QWORD *)v25 + 6);
  v25 = PreparsedData;
  DeviceInfo = HIDDevice::GetHIDCapabilities(v12, &v26);
  if ( DeviceInfo < 0 )
  {
    v10 = 200LL;
    goto LABEL_3;
  }
  v14 = v26;
  InputReportByteLength = v26->InputReportByteLength;
  if ( a4 >= InputReportByteLength )
  {
    while ( 1 )
    {
      Usages = HidP_GetUsages(
                 HidP_Input,
                 0xCu,
                 0,
                 UsageList,
                 &UsageLength,
                 PreparsedData,
                 Report,
                 (unsigned __int16)InputReportByteLength);
      if ( Usages < 0 )
      {
        v24 = 228LL;
        return wil::details::in1diag3::Return_NtStatus(
                 retaddr,
                 (void *)v24,
                 (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\consumercontroldevicecollection.cpp",
                 (const char *)(unsigned int)Usages);
      }
      std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
        (_QWORD *)this + 345,
        &v26,
        (const unsigned __int8 *)&v28);
      if ( v26 == *((struct _HIDP_CAPS **)this + 346) )
      {
        DeviceInfo = -2147467259;
        v10 = 234LL;
        goto LABEL_3;
      }
      *(_OWORD *)PreviousUsageList = *(_OWORD *)&v26->Reserved[7];
      v17 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)PreviousUsageList, 8));
      if ( v17 > 0x14 )
      {
        DeviceInfo = -2147467259;
        v10 = 244LL;
        goto LABEL_3;
      }
      v18 = PreviousUsageList[0];
      Usages = HidP_UsageListDifference(PreviousUsageList[0], UsageList, BreakUsageList, MakeUsageList, v17);
      if ( Usages < 0 )
      {
        v24 = 252LL;
        return wil::details::in1diag3::Return_NtStatus(
                 retaddr,
                 (void *)v24,
                 (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\consumercontroldevicecollection.cpp",
                 (const char *)(unsigned int)Usages);
      }
      v19 = BreakUsageList;
      *(_OWORD *)v18 = *(_OWORD *)UsageList;
      *((_OWORD *)v18 + 1) = v34;
      *((_QWORD *)v18 + 4) = v35;
      if ( BreakUsageList[0] )
        break;
LABEL_17:
      v21 = MakeUsageList;
      if ( MakeUsageList[0] )
      {
        while ( 1 )
        {
          TickCount = GetTickCount();
          QueryPerformanceCounter(&PerformanceCount);
          if ( (int)ConsumerControlDeviceCollection::CreateButtonInfo(
                      (ConsumerControlDeviceCollection *)*v21,
                      a2,
                      TickCount,
                      PerformanceCount,
                      *v21,
                      1,
                      (struct InputInfo *)v31) >= 0 )
          {
            DeviceInfo = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(
                           *((_QWORD *)this + 2),
                           v31);
            if ( DeviceInfo < 0 )
              break;
          }
          if ( !*++v21 )
            goto LABEL_22;
        }
        v10 = 327LL;
        goto LABEL_3;
      }
LABEL_22:
      v23 = v14->InputReportByteLength;
      a4 -= v23;
      Report += v23;
      LOWORD(InputReportByteLength) = v14->InputReportByteLength;
      if ( a4 < (unsigned int)v23 )
        return 0LL;
      PreparsedData = v25;
    }
    while ( 1 )
    {
      v20 = GetTickCount();
      QueryPerformanceCounter(&PerformanceCount);
      if ( (int)ConsumerControlDeviceCollection::CreateButtonInfo(
                  (ConsumerControlDeviceCollection *)*v19,
                  a2,
                  v20,
                  PerformanceCount,
                  *v19,
                  0,
                  (struct InputInfo *)v31) >= 0 )
      {
        DeviceInfo = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(
                       *((_QWORD *)this + 2),
                       v31);
        if ( DeviceInfo < 0 )
          break;
      }
      if ( !*++v19 )
        goto LABEL_17;
    }
    v10 = 288LL;
    goto LABEL_3;
  }
  return 0LL;
}
