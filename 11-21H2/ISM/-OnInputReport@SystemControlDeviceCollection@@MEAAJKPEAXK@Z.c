/*
 * XREFs of ?OnInputReport@SystemControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800C6FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800B4708 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x1800BBFE0 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800BC034 (-GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800BE564 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?CreateButtonInfo@SystemControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x1800C6C60 (-CreateButtonInfo@SystemControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x1800CC26C (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
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
  __int64 InputReportByteLength; // rax
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
  __int64 v26; // rdx
  ULONG UsageLength; // [rsp+40h] [rbp-C0h] BYREF
  struct RIMDevice *v28; // [rsp+48h] [rbp-B8h] BYREF
  struct _HIDP_CAPS *v29; // [rsp+50h] [rbp-B0h] BYREF
  int v30; // [rsp+58h] [rbp-A8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+60h] [rbp-A0h] BYREF
  struct DeviceInfo *v32; // [rsp+68h] [rbp-98h] BYREF
  union _LARGE_INTEGER v33[3]; // [rsp+70h] [rbp-90h] BYREF
  int v34; // [rsp+88h] [rbp-78h]
  _USAGE_AND_PAGE ButtonList; // [rsp+C30h] [rbp+B30h] BYREF
  USHORT CurrentUsageList[8]; // [rsp+C80h] [rbp+B80h] BYREF
  __int128 v37; // [rsp+C90h] [rbp+B90h]
  __int64 v38; // [rsp+CA0h] [rbp+BA0h]
  USHORT BreakUsageList[8]; // [rsp+CA8h] [rbp+BA8h] BYREF
  __int128 v40; // [rsp+CB8h] [rbp+BB8h]
  __int64 v41; // [rsp+CC8h] [rbp+BC8h]
  USHORT MakeUsageList[8]; // [rsp+CD0h] [rbp+BD0h] BYREF
  __int128 v43; // [rsp+CE0h] [rbp+BE0h]
  __int64 v44; // [rsp+CF0h] [rbp+BF0h]
  wil::details::in1diag3 *retaddr; // [rsp+D38h] [rbp+C38h]

  v30 = a2;
  v28 = 0LL;
  v29 = 0LL;
  v38 = 0LL;
  *(_OWORD *)CurrentUsageList = 0LL;
  v37 = 0LL;
  memset_0(&ButtonList, 0, 0x50uLL);
  UsageLength = 20;
  v44 = 0LL;
  v41 = 0LL;
  *(_OWORD *)MakeUsageList = 0LL;
  v43 = 0LL;
  *(_OWORD *)BreakUsageList = 0LL;
  v40 = 0LL;
  memset_0(v33, 0, 0xBC0uLL);
  v34 = 3008;
  DeviceInfo = RIMDeviceCollection::GetDeviceInfo(this, a2, &v32);
  if ( DeviceInfo < 0 )
  {
    v10 = 170LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\systemcontroldevicecollection.cpp",
      (const char *)(unsigned int)DeviceInfo);
    return (unsigned int)DeviceInfo;
  }
  DeviceInfo = RIMDeviceCollection::FindDevice(this, v8, 0LL, &v28, 0LL);
  if ( DeviceInfo < 0 )
  {
    v10 = 174LL;
    goto LABEL_3;
  }
  v12 = v28;
  PreparsedData = (struct RIMDevice *)*((_QWORD *)v28 + 6);
  v28 = PreparsedData;
  DeviceInfo = HIDDevice::GetHIDCapabilities(v12, &v29);
  if ( DeviceInfo < 0 )
  {
    v10 = 176LL;
    goto LABEL_3;
  }
  v14 = v29;
  LODWORD(InputReportByteLength) = v29->InputReportByteLength;
  if ( a4 >= (unsigned int)InputReportByteLength )
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
        v26 = 200LL;
        return wil::details::in1diag3::Return_NtStatus(
                 retaddr,
                 (void *)v26,
                 (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\systemcontroldevicecollection.cpp",
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
        &v29,
        (const unsigned __int8 *)&v30);
      if ( v29 == *((struct _HIDP_CAPS **)this + 346) )
      {
        DeviceInfo = -2147467259;
        v10 = 211LL;
        goto LABEL_3;
      }
      v21 = &v29->Reserved[5];
      Usages = HidP_UsageListDifference(&v29->Reserved[5], CurrentUsageList, BreakUsageList, MakeUsageList, 0x14u);
      if ( Usages < 0 )
      {
        v26 = 220LL;
        return wil::details::in1diag3::Return_NtStatus(
                 retaddr,
                 (void *)v26,
                 (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\systemcontroldevicecollection.cpp",
                 (const char *)(unsigned int)Usages);
      }
      v22 = BreakUsageList;
      *(_OWORD *)v21 = *(_OWORD *)CurrentUsageList;
      *((_OWORD *)v21 + 1) = v37;
      *((_QWORD *)v21 + 4) = v38;
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
                      v33) >= 0 )
          {
            DeviceInfo = (*(__int64 (__fastcall **)(_QWORD, union _LARGE_INTEGER *))(**((_QWORD **)this + 2) + 24LL))(
                           *((_QWORD *)this + 2),
                           v33);
            if ( DeviceInfo < 0 )
              break;
          }
          if ( !*++v24 )
            goto LABEL_25;
        }
        v10 = 295LL;
        goto LABEL_3;
      }
LABEL_25:
      InputReportByteLength = v14->InputReportByteLength;
      a4 -= InputReportByteLength;
      Report += InputReportByteLength;
      if ( a4 < (unsigned int)InputReportByteLength )
        return 0LL;
      PreparsedData = v28;
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
                  v33) >= 0 )
      {
        DeviceInfo = (*(__int64 (__fastcall **)(_QWORD, union _LARGE_INTEGER *))(**((_QWORD **)this + 2) + 24LL))(
                       *((_QWORD *)this + 2),
                       v33);
        if ( DeviceInfo < 0 )
          break;
      }
      if ( !*++v22 )
        goto LABEL_20;
    }
    v10 = 256LL;
    goto LABEL_3;
  }
  return 0LL;
}
