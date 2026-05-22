/*
 * XREFs of ?PopulateDeviceInfo@DockableDeviceCollection@@AEAAJPEAVHIDDevice@@PEAUDockableDeviceInfo@@@Z @ 0x1800CA4B4
 * Callers:
 *     ?OnDeviceAttach@DockableDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800CA0E0 (-OnDeviceAttach@DockableDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800074C4 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002BBF0 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCBB0 (-_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     winrt::Windows::System::Threading::WorkItemHandler::WorkItemHandler__lambda_d47f631da3751d72c8a8e135519addbc___ @ 0x1800C9150 (winrt--Windows--System--Threading--WorkItemHandler--WorkItemHandler__lambda_d47f631da3751d72c8a8.c)
 *     ??$call@AEAV_lambda_4e2f6834dae5c2d9676db4968b0ab11c_@@@?$factory_cache_entry@UThreadPool@Threading@System@Windows@winrt@@UIThreadPoolStatics@2345@@impl@winrt@@QEAA?AUIAsyncAction@Foundation@Windows@2@AEAV_lambda_4e2f6834dae5c2d9676db4968b0ab11c_@@@Z @ 0x1800C93C0 (--$call@AEAV_lambda_4e2f6834dae5c2d9676db4968b0ab11c_@@@-$factory_cache_entry@UThreadPool@Thread.c)
 *     ?RunAsync@?$consume_Windows_System_Threading_IThreadPoolStatics@UIThreadPoolStatics@Threading@System@Windows@winrt@@@impl@winrt@@QEBA?AUIAsyncAction@Foundation@Windows@3@AEBUWorkItemHandler@Threading@System@63@@Z @ 0x1800CB048 (-RunAsync@-$consume_Windows_System_Threading_IThreadPoolStatics@UIThreadPoolStatics@Threading@Sy.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x1800CC26C (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DockableDeviceCollection::PopulateDeviceInfo(
        DockableDeviceCollection *this,
        struct HIDDevice *a2,
        struct DockableDeviceInfo *a3)
{
  __int64 v6; // r15
  int v7; // eax
  int v8; // eax
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r14
  NTSTATUS HIDCapabilities; // ebx
  __int64 v11; // rdx
  int FeatureReportByteLength; // ebx
  int v14; // esi
  __int64 v15; // rax
  __int64 v16; // r9
  USHORT ValueCapsLength; // [rsp+40h] [rbp-C0h] BYREF
  struct _HIDP_CAPS *v18; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v22; // [rsp+68h] [rbp-98h] BYREF
  __int128 v23; // [rsp+78h] [rbp-88h]
  __int64 v24; // [rsp+88h] [rbp-78h]
  __int64 *v25; // [rsp+90h] [rbp-70h]
  DockableDeviceCollection *v26; // [rsp+98h] [rbp-68h] BYREF
  int v27; // [rsp+A0h] [rbp-60h]
  int v28; // [rsp+A4h] [rbp-5Ch]
  struct _HIDP_VALUE_CAPS v29; // [rsp+A8h] [rbp-58h]
  __int64 v30; // [rsp+F0h] [rbp-10h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+100h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  LODWORD(v22) = 4;
  v6 = *((_QWORD *)a2 + 2);
  v7 = RIMGetDeviceProperties(*((_QWORD *)this + 10), v6, &v22);
  if ( v7 >= 0 )
  {
    if ( DWORD2(v22) <= 0x104 )
    {
      *((_DWORD *)a3 + 18) = DWORD2(v22);
      *(_QWORD *)&v23 = (char *)a3 + 76;
      v8 = RIMGetDeviceProperties(*((_QWORD *)this + 10), v6, &v22);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          175LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
          (const char *)(unsigned int)v8);
    }
  }
  else
  {
    wil::details::in1diag3::_Log_NtStatus(
      retaddr,
      (void *)0xA5,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
      (const char *)(unsigned int)v7);
  }
  PreparsedData = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)a2 + 6);
  v18 = 0LL;
  HIDCapabilities = HIDDevice::GetHIDCapabilities(a2, &v18);
  if ( HIDCapabilities < 0 )
  {
    v11 = 185LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
      (const char *)(unsigned int)HIDCapabilities);
    return (unsigned int)HIDCapabilities;
  }
  memset_0(&ValueCaps, 0, sizeof(ValueCaps));
  ValueCapsLength = 1;
  HIDCapabilities = HidP_GetSpecificValueCaps(HidP_Feature, 1u, 0, 0xD0u, &ValueCaps, &ValueCapsLength, PreparsedData);
  if ( HIDCapabilities < 0 )
  {
    v11 = 197LL;
    goto LABEL_8;
  }
  FeatureReportByteLength = v18->FeatureReportByteLength;
  v14 = *(_DWORD *)a3;
  if ( this )
    (*(void (__fastcall **)(DockableDeviceCollection *))(*(_QWORD *)this + 8LL))(this);
  v20 = 0LL;
  v26 = this;
  v27 = v14;
  v28 = FeatureReportByteLength;
  v29 = ValueCaps;
  v30 = v6;
  v15 = winrt::Windows::System::Threading::WorkItemHandler::WorkItemHandler__lambda_d47f631da3751d72c8a8e135519addbc___(
          (__int64)&v19,
          (__int64 *)&v26);
  v21 = v15;
  v25 = &qword_1802434E8;
  _InterlockedIncrement64(&qword_1802434E8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::System::Threading::ThreadPool,winrt::Windows::System::Threading::IThreadPoolStatics> )
  {
    winrt::impl::consume_Windows_System_Threading_IThreadPoolStatics<winrt::Windows::System::Threading::IThreadPoolStatics>::RunAsync(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::System::Threading::ThreadPool,winrt::Windows::System::Threading::IThreadPoolStatics>,
      &v18,
      v15);
    _InterlockedDecrement64(&qword_1802434E8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1802434E8);
    winrt::impl::factory_cache_entry<winrt::Windows::System::Threading::ThreadPool,winrt::Windows::System::Threading::IThreadPoolStatics>::call<_lambda_4e2f6834dae5c2d9676db4968b0ab11c_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))&qword_1802434E8,
      (__int64)&v18,
      &v21,
      v16);
  }
  if ( v18 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v18);
  if ( v19 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v19);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v20);
  return 0LL;
}
