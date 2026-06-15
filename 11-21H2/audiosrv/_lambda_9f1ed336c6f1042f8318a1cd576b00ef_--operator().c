/*
 * XREFs of _lambda_9f1ed336c6f1042f8318a1cd576b00ef_::operator() @ 0x180065930
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_b2f72c50110305d9aa06d2931c2147e0__void_::_Do_call @ 0x1800FB040 (std--_Func_impl_no_alloc__lambda_b2f72c50110305d9aa06d2931c2147e0__void_--_Do_call.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800029FC (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C58 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180002CD8 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EFC8 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180025560 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002B484 (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@AudioSrvTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x1800C13F4 (-Provider@AudioSrvTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3@Z @ 0x1800FDB64 (--$Write@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEA.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_9f1ed336c6f1042f8318a1cd576b00ef_::operator()(_QWORD **a1)
{
  unsigned int v2; // edi
  const unsigned __int16 *v3; // r14
  RTL_SRWLOCK *v4; // rcx
  int EndpointStore; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  __int64 (__fastcall *v9)(struct IDeviceGraphManager *, __int64, __int64, bool); // rbx
  char v10; // al
  int v11; // eax
  const struct _tlgProvider_t *v12; // rax
  int v13; // r8d
  int v14; // r9d
  int v16; // [rsp+20h] [rbp-30h]
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+38h] [rbp-18h] BYREF
  const unsigned __int16 *v19; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v21; // [rsp+80h] [rbp+30h] BYREF
  __int64 v22; // [rsp+88h] [rbp+38h] BYREF
  struct CEndpointStore *v23; // [rsp+90h] [rbp+40h] BYREF
  __int64 (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // [rsp+98h] [rbp+48h] BYREF

  v2 = 0;
  v24 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(*a1, &v24) >= 0 && v24 )
  {
    v21 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v24, &v21) >= 0
      && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v21 + 376LL))(v21, *a1[1]) )
    {
      v3 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 128LL))(v21);
      v23 = 0LL;
      EndpointStore = CEndpointStoreCache::GetEndpointStore(v4, v3, &v23);
      v6 = EndpointStore;
      if ( EndpointStore >= 0 )
      {
        (*(void (__fastcall **)(_QWORD, struct _RTL_CRITICAL_SECTION **))(**((_QWORD **)v23 + 13) + 120LL))(
          *((_QWORD *)v23 + 13),
          &v17);
        v22 = 0LL;
        v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 192LL))(v21, &v22);
        v6 = v7;
        if ( v7 >= 0 )
        {
          if ( v22 )
          {
            v8 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64))(*(_QWORD *)g_DeviceGraphManager
                                                                                  + 40LL))(
                   g_DeviceGraphManager,
                   v21);
            if ( v8 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0xA55,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                (const char *)(unsigned int)v8,
                v16);
          }
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 280LL))(v21);
          if ( v22 )
          {
            v9 = *(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, __int64, bool))(*(_QWORD *)g_DeviceGraphManager
                                                                                                + 32LL);
            v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 208LL))(v21);
            v11 = v9(g_DeviceGraphManager, v21, v22, v10 == 0);
            if ( v11 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0xA5F,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                (const char *)(unsigned int)v11,
                0);
          }
          v12 = AudioSrvTelemetryProvider::Provider();
          if ( *(_DWORD *)v12 > 4u )
          {
            v18 = *a1[1];
            v19 = v3;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
              (_DWORD)v12,
              (unsigned int)&unk_18018A523,
              v13,
              v14,
              (__int64)&v19,
              (__int64)&v18);
          }
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v22);
          wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v17);
          wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((__int64 *)&v23);
          goto LABEL_19;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA51,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v7,
          v16);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v22);
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v17);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA49,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)EndpointStore,
          v16);
      }
      wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((__int64 *)&v23);
      v2 = v6;
    }
LABEL_19:
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v21);
  }
  Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease((__int64 *)&v24);
  return v2;
}
