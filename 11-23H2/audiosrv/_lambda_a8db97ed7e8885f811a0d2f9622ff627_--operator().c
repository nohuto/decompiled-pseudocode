/*
 * XREFs of _lambda_a8db97ed7e8885f811a0d2f9622ff627_::operator() @ 0x18006B764
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_0a934de8e0ca018258fd518f6b914e8b__void_::_Do_call @ 0x18010ACA0 (std--_Func_impl_no_alloc__lambda_0a934de8e0ca018258fd518f6b914e8b__void_--_Do_call.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@AudioSrvTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x180024898 (-Provider@AudioSrvTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180027120 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18002D580 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800303E4 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004BB14 (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800D789C (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3@Z @ 0x1800D7B98 (--$Write@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEA.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_a8db97ed7e8885f811a0d2f9622ff627_::operator()(_QWORD **a1)
{
  unsigned int v2; // edi
  const unsigned __int16 *v3; // r14
  CEndpointStoreCache *v4; // rcx
  int EndpointStore; // eax
  int v6; // ebx
  int v7; // eax
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  __int64 (__fastcall *v11)(struct IDeviceGraphManager *, __int64, __int64, bool, _QWORD); // rbx
  char v12; // al
  int v13; // eax
  const struct _tlgProvider_t *v14; // rax
  int v15; // r8d
  int v16; // r9d
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+38h] [rbp-18h] BYREF
  const unsigned __int16 *v19; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v21; // [rsp+80h] [rbp+30h] BYREF
  __int64 v22; // [rsp+88h] [rbp+38h] BYREF
  __int64 v23; // [rsp+90h] [rbp+40h] BYREF
  struct CEndpointStore *v24; // [rsp+98h] [rbp+48h] BYREF

  v2 = 0;
  v23 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(*a1, &v23) >= 0 && v23 )
  {
    v21 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v23, &v21) < 0 )
    {
LABEL_10:
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v21);
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v23);
      return v2;
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v21 + 408LL))(v21, *a1[1]) )
    {
      v3 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 168LL))(v21);
      v24 = 0LL;
      EndpointStore = CEndpointStoreCache::GetEndpointStore(v4, v3, &v24);
      v6 = EndpointStore;
      if ( EndpointStore < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xAC1,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)EndpointStore);
LABEL_9:
        wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v24);
        v2 = v6;
        goto LABEL_10;
      }
      (*(void (__fastcall **)(_QWORD, struct _RTL_CRITICAL_SECTION **))(**((_QWORD **)v24 + 13) + 120LL))(
        *((_QWORD *)v24 + 13),
        &v17);
      v22 = 0LL;
      v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 232LL))(v21, &v22);
      v6 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xAC9,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v7);
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v22);
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v17);
        goto LABEL_9;
      }
      if ( v22 )
      {
        v9 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64))(*(_QWORD *)g_DeviceGraphManager + 40LL))(
               g_DeviceGraphManager,
               v21);
        if ( v9 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xACD,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)v9);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 312LL))(v21);
      if ( v22 )
      {
        v11 = *(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, __int64, bool, _QWORD))(*(_QWORD *)g_DeviceGraphManager + 32LL);
        v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 248LL))(v21);
        v13 = v11(g_DeviceGraphManager, v21, v22, v12 == 0, 0LL);
        v10 = retaddr;
        if ( v13 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xAD7,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)v13);
      }
      v14 = AudioSrvTelemetryProvider::Provider((__int64)v10);
      if ( *(_DWORD *)v14 > 4u )
      {
        v18 = *a1[1];
        v19 = v3;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
          (_DWORD)v14,
          (unsigned int)&unk_1801908D1,
          v15,
          v16,
          (__int64)&v19,
          (__int64)&v18);
      }
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v22);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v17);
      wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v24);
    }
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v21);
  }
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v23);
  return 0LL;
}
