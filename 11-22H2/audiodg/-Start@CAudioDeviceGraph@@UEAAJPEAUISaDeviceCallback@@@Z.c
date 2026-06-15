/*
 * XREFs of ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x14001E010
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetStreamingResourceManagerInternal@CAudioDeviceGraph@@AEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x1400070F8 (-GetStreamingResourceManagerInternal@CAudioDeviceGraph@@AEAAJPEAPEAUIAudioStreamingResourceRegis.c)
 *     ?Start@DurationTracker@CAudioDeviceGraph@@QEAAXXZ @ 0x140008258 (-Start@DurationTracker@CAudioDeviceGraph@@QEAAXXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x140008288 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?GetNext@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAAEAPEAVCPipeInstance@@AEAPEAU__POSITION@@@Z @ 0x140009BE0 (-GetNext@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAAEAP.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x14000EE2C (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ?GetTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x14001B69C (-GetTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?Start@CPipeInstance@@QEAAJXZ @ 0x14001E41C (-Start@CPipeInstance@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     atexit @ 0x140028478 (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400381A0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1400504A4 (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     wil::details::lambda_call__lambda_7347583372e92e8d0f625d09ac8b025c___::_lambda_call__lambda_7347583372e92e8d0f625d09ac8b025c___ @ 0x14005EB4C (wil--details--lambda_call__lambda_7347583372e92e8d0f625d09ac8b025c___--_lambda_call__lambda_7347.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDeviceGraph::Start(CAudioDeviceGraph *this, struct ISaDeviceCallback *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r15
  unsigned int v5; // ebx
  int StreamingResourceManagerInternal; // eax
  struct IAudioStreamingResourceRegistration *v8; // rbx
  void (__fastcall *v9)(struct IAudioStreamingResourceRegistration *, __int64); // rdi
  __int64 v10; // rax
  _QWORD *v11; // rax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  CPipeInstance **Next; // rax
  int v18; // eax
  unsigned int v19; // edi
  __int64 v20; // rcx
  int v21; // [rsp+20h] [rbp-60h]
  LPVOID Context; // [rsp+30h] [rbp-50h] BYREF
  WINBOOL fPending[2]; // [rsp+38h] [rbp-48h] BYREF
  struct IAudioStreamingResourceRegistration *v24; // [rsp+40h] [rbp-40h] BYREF
  __int64 v25; // [rsp+48h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v26; // [rsp+50h] [rbp-30h] BYREF
  union _RTL_RUN_ONCE *v27; // [rsp+58h] [rbp-28h] BYREF
  int v28; // [rsp+60h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  v26 = v4;
  if ( !*((_DWORD *)this + 64) )
  {
    v5 = -2005139437;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A2,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)0x887C0013LL,
      v21);
    if ( v4 )
      LeaveCriticalSection(v4);
    return v5;
  }
  v27 = (union _RTL_RUN_ONCE *)this;
  LOBYTE(v28) = 1;
  v24 = 0LL;
  StreamingResourceManagerInternal = CAudioDeviceGraph::GetStreamingResourceManagerInternal(this, &v24);
  if ( StreamingResourceManagerInternal < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2A8,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)StreamingResourceManagerInternal,
      v21);
  v8 = v24;
  if ( v24 )
  {
    v9 = *(void (__fastcall **)(struct IAudioStreamingResourceRegistration *, __int64))(*(_QWORD *)v24 + 72LL);
    v10 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 56LL))((char *)this + 16);
    v9(v8, v10);
  }
  v11 = *(_QWORD **)(*(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetTail(*((_QWORD *)this + 20) + 16LL)
                   + 32LL);
  Context = 0LL;
  v12 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, LPVOID *))*v11)(
          *v11,
          &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
          &Context);
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2BD,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v12,
      v21);
  if ( Context && v8 )
  {
    *(_QWORD *)fPending = 0LL;
    v13 = (**(__int64 (__fastcall ***)(LPVOID, GUID *, WINBOOL *))Context)(
            Context,
            &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
            fPending);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2C4,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
        (const char *)(unsigned int)v13,
        v21);
    if ( *(_QWORD *)fPending )
    {
      v14 = (*(__int64 (__fastcall **)(struct IAudioStreamingResourceRegistration *, _QWORD, char *))(*(_QWORD *)v8 + 56LL))(
              v8,
              *(_QWORD *)fPending,
              (char *)this + 368);
      if ( v14 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2C8,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
          (const char *)(unsigned int)v14,
          v21);
    }
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)fPending);
  }
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&Context);
  v25 = 0LL;
  v15 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, struct ISaDeviceCallback *, struct IAudioStreamingResourceRegistration *))(**((_QWORD **)this + 19) + 32LL))(
          *((_QWORD *)this + 19),
          &v25,
          a2,
          v8);
  v5 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D0,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v15,
      v21);
LABEL_39:
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v24);
    wil::details::lambda_call__lambda_7347583372e92e8d0f625d09ac8b025c___::_lambda_call__lambda_7347583372e92e8d0f625d09ac8b025c___(&v27);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v26);
    return v5;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
  Context = (LPVOID)*((_QWORD *)this + 21);
  if ( Context )
  {
    while ( 1 )
    {
      Next = (CPipeInstance **)ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::GetNext(
                                 v16,
                                 (_QWORD **)&Context);
      v18 = CPipeInstance::Start(*Next);
      v19 = v18;
      if ( v18 < 0 )
        break;
      if ( !Context )
        goto LABEL_24;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D8,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v18,
      v21);
    if ( this != (CAudioDeviceGraph *)-216LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
    v5 = v19;
    goto LABEL_39;
  }
LABEL_24:
  if ( this != (CAudioDeviceGraph *)-216LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
  CAudioDeviceGraph::DurationTracker::Start((LARGE_INTEGER *)this + 10);
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, &Context)
    && fPending[0] )
  {
    v27 = &`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1400CF680;
    qword_1400CF680 = (__int64)&AudioDgTelemetryProvider::`vftable';
    qword_1400CF698 = (__int64)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
    v28 = 0;
    wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&v27);
  }
  v20 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v20 > 4u && (*(_BYTE *)(v20 + 16) & 1) != 0 && (*(_QWORD *)(v20 + 24) & 1LL) == *(_QWORD *)(v20 + 24) )
    tlgWriteTransfer_EtwEventWriteTransfer(v20, byte_1400B308C, (__int64)this + 344, 0LL, 2, (__int64)&v27);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v24);
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
