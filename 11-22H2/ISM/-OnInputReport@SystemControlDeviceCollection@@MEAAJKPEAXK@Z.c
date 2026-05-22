/*
 * XREFs of ?OnInputReport@SystemControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800EF1C0
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
 *     ?CreateButtonInfo@SystemControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x1800EEE40 (-CreateButtonInfo@SystemControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x1800F47DC (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 */

__int64 __fastcall SystemControlDeviceCollection::OnInputReport(
        SystemControlDeviceCollection *this,
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
  USHORT *v17; // rcx
  __int64 v18; // r8
  _USAGE_AND_PAGE *p_ButtonList; // rdx
  USAGE Usage; // ax
  USHORT *v21; // rbx
  unsigned __int16 *v22; // rdi
  DWORD v23; // ebx
  unsigned __int16 *v24; // rdi
  DWORD TickCount; // ebx
  __int64 v26; // rax
  __int64 v27; // rdx
  ULONG UsageLength; // [rsp+40h] [rbp-C0h] BYREF
  struct RIMDevice *v29; // [rsp+48h] [rbp-B8h] BYREF
  struct _HIDP_CAPS *v30; // [rsp+50h] [rbp-B0h] BYREF
  int v31; // [rsp+58h] [rbp-A8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+60h] [rbp-A0h] BYREF
  struct DeviceInfo *v33; // [rsp+68h] [rbp-98h] BYREF
  union _LARGE_INTEGER v34[3]; // [rsp+70h] [rbp-90h] BYREF
  int v35; // [rsp+88h] [rbp-78h]
  _USAGE_AND_PAGE ButtonList; // [rsp+C30h] [rbp+B30h] BYREF
  USHORT CurrentUsageList[8]; // [rsp+C80h] [rbp+B80h] BYREF
  __int128 v38; // [rsp+C90h] [rbp+B90h]
  __int64 v39; // [rsp+CA0h] [rbp+BA0h]
  USHORT BreakUsageList[8]; // [rsp+CA8h] [rbp+BA8h] BYREF
  __int128 v41; // [rsp+CB8h] [rbp+BB8h]
  __int64 v42; // [rsp+CC8h] [rbp+BC8h]
  USHORT MakeUsageList[8]; // [rsp+CD0h] [rbp+BD0h] BYREF
  __int128 v44; // [rsp+CE0h] [rbp+BE0h]
  __int64 v45; // [rsp+CF0h] [rbp+BF0h]
  wil::details::in1diag3 *retaddr; // [rsp+D38h] [rbp+C38h]

  v31 = a2;
  v29 = 0LL;
  v30 = 0LL;
  v39 = 0LL;
  *(_OWORD *)CurrentUsageList = 0LL;
  v38 = 0LL;
  memset_0(&ButtonList, 0, 0x50uLL);
  UsageLength = 20;
  v45 = 0LL;
  v42 = 0LL;
  *(_OWORD *)MakeUsageList = 0LL;
  v44 = 0LL;
  *(_OWORD *)BreakUsageList = 0LL;
  v41 = 0LL;
  memset_0(v34, 0, 0xBC0uLL);
  v35 = 3008;
  DeviceInfo = RIMDeviceCollection::GetDeviceInfo(this, a2, &v33);
  if ( DeviceInfo < 0 )
  {
    v10 = 169LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\systemcontroldevicecollection.cpp",
      (const char *)(unsigned int)DeviceInfo);
    return (unsigned int)DeviceInfo;
  }
  DeviceInfo = RIMDeviceCollection::FindDevice(this, v8, 0LL, &v29, 0LL);
  if ( DeviceInfo < 0 )
  {
    v10 = 173LL;
    goto LABEL_3;
  }
  v12 = v29;
  PreparsedData = (struct RIMDevice *)*((_QWORD *)v29 + 6);
  v29 = PreparsedData;
  DeviceInfo = HIDDevice::GetHIDCapabilities(v12, &v30);
  if ( DeviceInfo < 0 )
  {
    v10 = 175LL;
    goto LABEL_3;
  }
  v14 = v30;
  InputReportByteLength = v30->InputReportByteLength;
  if ( a4 >= InputReportByteLength )
  {
    while ( 1 )
    {
      Usages = HidP_GetUsagesEx(
                 HidP_Input,
                 0,
                 &ButtonList,
                 &UsageLength,
                 PreparsedData,
                 Report,
                 (unsigned __int16)InputReportByteLength);
      if ( Usages < 0 )
      {
        v27 = 199LL;
        return wil::details::in1diag3::Return_NtStatus(
                 retaddr,
                 (void *)v27,
                 (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\systemcontroldevicecollection.cpp",
                 (const char *)(unsigned int)Usages);
      }
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
        &v30,
        (const unsigned __int8 *)&v31);
      if ( v30 == *((struct _HIDP_CAPS **)this + 346) )
      {
        DeviceInfo = -2147467259;
        v10 = 210LL;
        goto LABEL_3;
      }
      v21 = &v30->Reserved[5];
      Usages = HidP_UsageListDifference(&v30->Reserved[5], CurrentUsageList, BreakUsageList, MakeUsageList, 0x14u);
      if ( Usages < 0 )
      {
        v27 = 219LL;
        return wil::details::in1diag3::Return_NtStatus(
                 retaddr,
                 (void *)v27,
                 (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\systemcontroldevicecollection.cpp",
                 (const char *)(unsigned int)Usages);
      }
      v22 = BreakUsageList;
      *(_OWORD *)v21 = *(_OWORD *)CurrentUsageList;
      *((_OWORD *)v21 + 1) = v38;
      *((_QWORD *)v21 + 4) = v39;
      if ( BreakUsageList[0] )
        break;
LABEL_20:
      v24 = MakeUsageList;
      if ( MakeUsageList[0] )
      {
        while ( 1 )
        {
          TickCount = GetTickCount();
          QueryPerformanceCounter(&PerformanceCount);
          if ( (int)SystemControlDeviceCollection::CreateButtonInfo(
                      (SystemControlDeviceCollection *)*v24,
                      a2,
                      TickCount,
                      PerformanceCount,
                      *v24,
                      1,
                      v34) >= 0 )
          {
            DeviceInfo = (*(__int64 (__fastcall **)(_QWORD, union _LARGE_INTEGER *))(**((_QWORD **)this + 2) + 24LL))(
                           *((_QWORD *)this + 2),
                           v34);
            if ( DeviceInfo < 0 )
              break;
          }
          if ( !*++v24 )
            goto LABEL_25;
        }
        v10 = 294LL;
        goto LABEL_3;
      }
LABEL_25:
      v26 = v14->InputReportByteLength;
      a4 -= v26;
      Report += v26;
      LOWORD(InputReportByteLength) = v14->InputReportByteLength;
      if ( a4 < (unsigned int)v26 )
        return 0LL;
      PreparsedData = v29;
    }
    while ( 1 )
    {
      v23 = GetTickCount();
      QueryPerformanceCounter(&PerformanceCount);
      if ( (int)SystemControlDeviceCollection::CreateButtonInfo(
                  (SystemControlDeviceCollection *)*v22,
                  a2,
                  v23,
                  PerformanceCount,
                  *v22,
                  0,
                  v34) >= 0 )
      {
        DeviceInfo = (*(__int64 (__fastcall **)(_QWORD, union _LARGE_INTEGER *))(**((_QWORD **)this + 2) + 24LL))(
                       *((_QWORD *)this + 2),
                       v34);
        if ( DeviceInfo < 0 )
          break;
      }
      if ( !*++v22 )
        goto LABEL_20;
    }
    v10 = 255LL;
    goto LABEL_3;
  }
  return 0LL;
}
