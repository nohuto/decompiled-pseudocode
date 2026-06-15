/*
 * XREFs of ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x140019820
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140001FF0 (-reset@-$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Stop@DurationTracker@CAudioDeviceGraph@@QEAA?AUDurationInformation@2@XZ @ 0x1400034EC (-Stop@DurationTracker@CAudioDeviceGraph@@QEAA-AUDurationInformation@2@XZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Stop@CPipeInstance@@QEAAJXZ @ 0x140007778 (-Stop@CPipeInstance@@QEAAJXZ.c)
 *     ?GetStreamingResourceManagerInternal@CAudioDeviceGraph@@AEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140007E14 (-GetStreamingResourceManagerInternal@CAudioDeviceGraph@@AEAAJPEAPEAUIAudioStreamingResourceRegis.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?GetNext@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAAEAPEAVCPipeInstance@@AEAPEAU__POSITION@@@Z @ 0x140019A28 (-GetNext@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAAEAP.c)
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x140019CB0 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ?ResetAPOs@CPipeInstance@@QEBAXXZ @ 0x14002464C (-ResetAPOs@CPipeInstance@@QEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400265D0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@55@Z @ 0x14005B2D0 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U3@U3@@-$_tlgWriteTe.c)
 */

__int64 __fastcall CAudioDeviceGraph::Stop(CAudioDeviceGraph *this)
{
  char *v1; // rbx
  bool v3; // zf
  struct IAudioStreamingResourceRegistration *v4; // rbx
  int v5; // r14d
  __int64 v6; // rcx
  __int64 v7; // rax
  CPipeInstance **Next; // rax
  int v9; // eax
  int v10; // edi
  int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // r9d
  int v18; // [rsp+20h] [rbp-39h]
  __int64 v19; // [rsp+50h] [rbp-9h] BYREF
  __int64 v20; // [rsp+58h] [rbp-1h] BYREF
  __int64 v21; // [rsp+60h] [rbp+7h] BYREF
  char *v22; // [rsp+68h] [rbp+Fh] BYREF
  int v23; // [rsp+70h] [rbp+17h] BYREF
  __int64 v24; // [rsp+78h] [rbp+1Fh]
  __int64 v25; // [rsp+80h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  __int64 v27; // [rsp+C0h] [rbp+67h] BYREF
  struct IAudioStreamingResourceRegistration *v28; // [rsp+C8h] [rbp+6Fh] BYREF
  char *v29; // [rsp+D0h] [rbp+77h] BYREF
  char *v30; // [rsp+D8h] [rbp+7Fh] BYREF

  v1 = (char *)this + 264;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  v3 = *((_DWORD *)this + 64) == 0;
  v22 = v1;
  if ( v3 )
  {
    v12 = -2005139437;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x303,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)0x887C0013LL,
      v18);
  }
  else
  {
    v28 = 0LL;
    wil::com_ptr_t<IAudioEndpointRT,wil::err_returncode_policy>::reset((__int64 *)&v28);
    CAudioDeviceGraph::GetStreamingResourceManagerInternal(this, &v28);
    v4 = v28;
    if ( *((_QWORD *)this + 47) && v28 )
    {
      (*(void (__fastcall **)(struct IAudioStreamingResourceRegistration *))(*(_QWORD *)v28 + 64LL))(v28);
      *((_QWORD *)this + 47) = 0LL;
    }
    v5 = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
    v7 = *((_QWORD *)this + 21);
    v30 = (char *)this + 216;
    v27 = v7;
    while ( v27 )
    {
      Next = (CPipeInstance **)ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::GetNext(v6, &v27);
      v9 = CPipeInstance::Stop(*Next);
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x319,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
          (const char *)(unsigned int)v9,
          v18);
        v5 = v10;
      }
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v30);
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 40LL))(*((_QWORD *)this + 19));
    v12 = -2005139433;
    if ( v11 < 0 )
    {
      v5 = v11;
      if ( v11 != -2005139433 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x329,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
          (const char *)(unsigned int)v11,
          v18);
    }
    CPipeInstance::ResetAPOs(*((CPipeInstance **)this + 20));
    if ( v4 )
      (*(void (__fastcall **)(struct IAudioStreamingResourceRegistration *))(*(_QWORD *)v4 + 80LL))(v4);
    if ( v5 != -2005139433 )
    {
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x335,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
          (const char *)(unsigned int)v5,
          v18);
        v12 = v5;
      }
      else
      {
        CAudioDeviceGraph::DurationTracker::Stop((__int64)this + 80, (__int64)&v23);
        v13 = *((_QWORD *)this + 19);
        v29 = 0LL;
        (*(void (__fastcall **)(__int64, char **))(*(_QWORD *)v13 + 96LL))(v13, &v29);
        v15 = *(_QWORD *)(wil::details::static_lazy<AudioDgTelemetryProvider>::get(
                            v14,
                            _lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)
                        + 8);
        if ( *(_DWORD *)v15 > 4u
          && (*(_QWORD *)(v15 + 16) & 0x400000000001LL) != 0
          && (*(_QWORD *)(v15 + 24) & 0x400000000001LL) == *(_QWORD *)(v15 + 24) )
        {
          v30 = v29;
          v19 = v25;
          v20 = v24;
          LODWORD(v27) = v23;
          v21 = *((_QWORD *)this + 49);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            v15,
            (unsigned int)&unk_1400A65FE,
            (_DWORD)this + 352,
            v16,
            (__int64)&v21,
            (__int64)&v27,
            (__int64)&v20,
            (__int64)&v19,
            (__int64)&v30);
        }
        v12 = 0;
      }
    }
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v28);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v22);
  return v12;
}
