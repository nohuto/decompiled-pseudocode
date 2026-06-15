/*
 * XREFs of ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x140060320
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetStreamingResourceManagerInternal@CAudioDeviceGraph@@AEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x1400070F8 (-GetStreamingResourceManagerInternal@CAudioDeviceGraph@@AEAAJPEAPEAUIAudioStreamingResourceRegis.c)
 *     ?Stop@DurationTracker@CAudioDeviceGraph@@QEAA?AUDurationInformation@2@XZ @ 0x1400098BC (-Stop@DurationTracker@CAudioDeviceGraph@@QEAA-AUDurationInformation@2@XZ.c)
 *     ?GetNext@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAAEAPEAVCPipeInstance@@AEAPEAU__POSITION@@@Z @ 0x140009BE0 (-GetNext@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAAEAP.c)
 *     ?ResetAPOs@CPipeInstance@@QEBAXXZ @ 0x140012494 (-ResetAPOs@CPipeInstance@@QEBAXXZ.c)
 *     atexit @ 0x140028478 (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140038160 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x140050464 (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ?Stop@CPipeInstance@@QEAAJXZ @ 0x14005CEB4 (-Stop@CPipeInstance@@QEAAJXZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@55@Z @ 0x14005E700 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U3@U3@@-$_tlgWriteTe.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDeviceGraph::Stop(CAudioDeviceGraph *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  struct IAudioStreamingResourceRegistration *v4; // rbx
  int v5; // r14d
  __int64 v6; // rcx
  CPipeInstance **Next; // rax
  int v8; // eax
  int v9; // r12d
  int v10; // eax
  __int64 v11; // r9
  __int64 v12; // rdx
  void (*v13)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v14; // rcx
  __int64 v15; // [rsp+50h] [rbp-29h] BYREF
  __int64 v16; // [rsp+58h] [rbp-21h] BYREF
  __int64 v17; // [rsp+60h] [rbp-19h] BYREF
  __int64 v18; // [rsp+68h] [rbp-11h] BYREF
  union _RTL_RUN_ONCE *v19; // [rsp+70h] [rbp-9h] BYREF
  int v20; // [rsp+78h] [rbp-1h]
  int v21; // [rsp+80h] [rbp+7h] BYREF
  __int64 v22; // [rsp+88h] [rbp+Fh]
  __int64 v23; // [rsp+90h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  _QWORD *fPending; // [rsp+E0h] [rbp+67h] BYREF
  int v26; // [rsp+E8h] [rbp+6Fh] BYREF
  struct IAudioStreamingResourceRegistration *v27; // [rsp+F0h] [rbp+77h] BYREF
  LPVOID Context; // [rsp+F8h] [rbp+7Fh] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  if ( *((_DWORD *)this + 64) )
  {
    v27 = 0LL;
    CAudioDeviceGraph::GetStreamingResourceManagerInternal(this, &v27);
    v4 = v27;
    if ( *((_QWORD *)this + 46) && v27 )
    {
      (*(void (__fastcall **)(struct IAudioStreamingResourceRegistration *))(*(_QWORD *)v27 + 64LL))(v27);
      *((_QWORD *)this + 46) = 0LL;
    }
    v5 = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
    fPending = (_QWORD *)*((_QWORD *)this + 21);
    while ( fPending )
    {
      Next = (CPipeInstance **)ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::GetNext(
                                 v6,
                                 &fPending);
      v8 = CPipeInstance::Stop(*Next);
      v9 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x31C,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
          (const char *)(unsigned int)v8);
        v5 = v9;
      }
    }
    if ( this != (CAudioDeviceGraph *)-216LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 40LL))(*((_QWORD *)this + 19));
    if ( v10 < 0 )
    {
      v5 = v10;
      if ( v10 != -2005139433 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x32C,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
          (const char *)(unsigned int)v10);
    }
    CPipeInstance::ResetAPOs(*((CPipeInstance **)this + 20));
    if ( v4 )
      (*(void (__fastcall **)(struct IAudioStreamingResourceRegistration *))(*(_QWORD *)v4 + 80LL))(v4);
    if ( v5 == -2005139433 )
    {
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v27);
      if ( v2 )
        LeaveCriticalSection(v2);
      return 2289827863LL;
    }
    else if ( v5 >= 0 )
    {
      CAudioDeviceGraph::DurationTracker::Stop((__int64)this + 80, (__int64)&v21);
      v15 = 0LL;
      (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 19) + 96LL))(*((_QWORD *)this + 19), &v15);
      Context = 0LL;
      if ( __std_init_once_begin_initialize(
             &`AudioDgTelemetryProvider::Instance'::`2'::wrapper,
             0,
             (PBOOL)&fPending,
             &Context)
        && (_DWORD)fPending )
      {
        v19 = &`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
        Context = &qword_1400CF680;
        qword_1400CF680 = (__int64)&AudioDgTelemetryProvider::`vftable';
        qword_1400CF698 = (__int64)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
        v20 = 0;
        wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&v19, v12, v13);
      }
      v14 = *((_QWORD *)Context + 1);
      if ( *(_DWORD *)v14 > 4u
        && (*(_QWORD *)(v14 + 16) & 0x400000000001LL) != 0
        && (*(_QWORD *)(v14 + 24) & 0x400000000001LL) == *(_QWORD *)(v14 + 24) )
      {
        v16 = v15;
        v17 = v23;
        v18 = v22;
        v26 = v21;
        v19 = (union _RTL_RUN_ONCE *)*((_QWORD *)this + 48);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          v14,
          byte_1400B30CE,
          (__int64)this + 344,
          v11,
          (void **)&v19,
          (__int64)&v26,
          (__int64)&v18,
          (__int64)&v17,
          (__int64)&v16);
      }
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v27);
      if ( v2 )
        LeaveCriticalSection(v2);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x338,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
        (const char *)(unsigned int)v5);
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v27);
      if ( v2 )
        LeaveCriticalSection(v2);
      return (unsigned int)v5;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x306,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)0x887C0013LL);
    if ( v2 )
      LeaveCriticalSection(v2);
    return 2289827859LL;
  }
}
