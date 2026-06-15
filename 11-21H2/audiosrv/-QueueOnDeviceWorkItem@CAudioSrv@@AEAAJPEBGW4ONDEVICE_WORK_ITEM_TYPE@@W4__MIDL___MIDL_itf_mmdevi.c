/*
 * XREFs of ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@@Z @ 0x1800C4BD8
 * Callers:
 *     ?OnDefaultDeviceChanged@CAudioSrv@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x1800C3F10 (-OnDefaultDeviceChanged@CAudioSrv@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ??0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z @ 0x180059C50 (--0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x1800C1704 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     ?AddTail@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCOnDeviceWorkItem@@@Z @ 0x1800C30CC (-AddTail@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSrv::QueueOnDeviceWorkItem(__int64 a1, _WORD *a2, int a3, int a4, int a5)
{
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  LPVOID v11; // rax
  __int64 v12; // rdi
  unsigned int v13; // ebx
  ATL::CAtlException *v15; // rbx
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+40h] [rbp-48h] BYREF
  void (__fastcall ***v17)(_QWORD, __int64); // [rsp+48h] [rbp-40h] BYREF
  int v18[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v19; // [rsp+58h] [rbp-30h]
  ATL::CAtlException *v20; // [rsp+60h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  char *v23; // [rsp+A0h] [rbp+18h] BYREF

  LODWORD(v23) = a3;
  v7 = a1;
  v8 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v8 > 4u
    && (*(_BYTE *)(v8 + 16) & 0x20) != 0
    && (*(_QWORD *)(v8 + 24) & 0x20LL) == *(_QWORD *)(v8 + 24) )
  {
    LODWORD(v23) = a5;
    LODWORD(v16) = a4;
    LODWORD(v17) = 5;
    *(_QWORD *)v18 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v8,
      byte_180188080,
      v9,
      v10,
      (void **)v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v23);
  }
  v11 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v19 = (__int64)v11;
  if ( v11 )
    v12 = COnDeviceWorkItem::COnDeviceWorkItem((__int64)v11, a2, 5);
  else
    v12 = 0LL;
  v17 = (void (__fastcall ***)(_QWORD, __int64))v12;
  v19 = v12;
  if ( !v12 )
  {
    v13 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6B7,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
      (const char *)0x8007000ELL);
    return v13;
  }
  if ( a2 && !*(_DWORD *)(*(_QWORD *)(v12 + 8) - 16LL) )
  {
    v13 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6B8,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
      (const char *)0x8007000ELL);
    (**(void (__fastcall ***)(__int64, __int64))v12)(v12, 1LL);
    return v13;
  }
  *(_DWORD *)(v12 + 20) = a5;
  *(_DWORD *)(v12 + 24) = a4;
  EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 112));
  try
  {
    v16 = (struct _RTL_CRITICAL_SECTION *)(v7 + 112);
    *(_QWORD *)v18 = v12;
    ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::AddTail(
      (__int64 *)(v7 + 152),
      (__int64)v18);
  }
  catch ( ATL::CAtlException *v20 )
  {
    v15 = v20;
    if ( *(_DWORD *)v20 == -1073741571 )
      _o__resetstkoflw();
    LODWORD(v23) = *(_DWORD *)v15;
    v13 = (unsigned int)v23;
    if ( (int)v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6C2,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
        (const char *)(unsigned int)v23);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v16);
      (**v17)(v17, 1LL);
      return v13;
    }
    v7 = a1;
  }
  v19 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v16);
  (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 72LL))(
    ThreadPool,
    *(_QWORD *)(v7 + 200));
  return 0LL;
}
