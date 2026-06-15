/*
 * XREFs of ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x14001D2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140001FF0 (-reset@-$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Start@DurationTracker@CAudioDeviceGraph@@QEAAXXZ @ 0x140002F10 (-Start@DurationTracker@CAudioDeviceGraph@@QEAAXXZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Start@CPipeInstance@@QEAAJXZ @ 0x140007688 (-Start@CPipeInstance@@QEAAJXZ.c)
 *     ?GetStreamingResourceManagerInternal@CAudioDeviceGraph@@AEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140007E14 (-GetStreamingResourceManagerInternal@CAudioDeviceGraph@@AEAAJPEAPEAUIAudioStreamingResourceRegis.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?GetNext@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAAEAPEAVCPipeInstance@@AEAPEAU__POSITION@@@Z @ 0x140019A28 (-GetNext@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAAEAP.c)
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x140019CB0 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400265D0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x14002B3A4 (-GetTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x140051A78 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDeviceGraph::Start(CAudioDeviceGraph *this, struct ISaDeviceCallback *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  char v5; // r15
  int StreamingResourceManagerInternal; // eax
  struct IAudioStreamingResourceRegistration *v7; // rbx
  void (__fastcall *v8)(struct IAudioStreamingResourceRegistration *, __int64); // rdi
  __int64 v9; // rax
  _QWORD *v10; // rax
  int v11; // eax
  int v12; // eax
  int v13; // edi
  int v14; // eax
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rcx
  CPipeInstance **Next; // rax
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v23; // [rsp+20h] [rbp-60h]
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+30h] [rbp-50h] BYREF
  _QWORD *v25; // [rsp+38h] [rbp-48h] BYREF
  struct IAudioStreamingResourceRegistration *v26; // [rsp+40h] [rbp-40h] BYREF
  __int64 v27; // [rsp+48h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v28; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v29[32]; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  v28 = v4;
  if ( *((_DWORD *)this + 64) )
  {
    v5 = 1;
    v26 = 0LL;
    wil::com_ptr_t<IAudioEndpointRT,wil::err_returncode_policy>::reset((__int64 *)&v26);
    StreamingResourceManagerInternal = CAudioDeviceGraph::GetStreamingResourceManagerInternal(this, &v26);
    if ( StreamingResourceManagerInternal < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2A5,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
        (const char *)(unsigned int)StreamingResourceManagerInternal,
        v23);
    v7 = v26;
    if ( v26 )
    {
      v8 = *(void (__fastcall **)(struct IAudioStreamingResourceRegistration *, __int64))(*(_QWORD *)v26 + 72LL);
      v9 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 56LL))((char *)this + 16);
      v8(v7, v9);
    }
    v10 = *(_QWORD **)(*(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetTail(*((_QWORD *)this + 20) + 16LL)
                     + 32LL);
    v25 = 0LL;
    v11 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD **))*v10)(
            *v10,
            &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
            &v25);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2BA,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
        (const char *)(unsigned int)v11,
        v23);
    if ( v25 && v7 )
    {
      v24 = 0LL;
      v12 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, struct _RTL_CRITICAL_SECTION **))*v25)(
              v25,
              &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
              &v24);
      v13 = v12;
      if ( v12 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4E8,
          (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\com.h",
          (const char *)(unsigned int)v12,
          v23);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2C1,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
          (const char *)(unsigned int)v13,
          v23);
      if ( v24 )
      {
        v14 = (*(__int64 (__fastcall **)(struct IAudioStreamingResourceRegistration *, struct _RTL_CRITICAL_SECTION *, char *))(*(_QWORD *)v7 + 56LL))(
                v7,
                v24,
                (char *)this + 376);
        if ( v14 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x2C5,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
            (const char *)(unsigned int)v14,
            v23);
      }
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v24);
    }
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v25);
    v27 = 0LL;
    v15 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, struct ISaDeviceCallback *, struct IAudioStreamingResourceRegistration *))(**((_QWORD **)this + 19) + 32LL))(
            *((_QWORD *)this + 19),
            &v27,
            a2,
            v7);
    v16 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2CD,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
        (const char *)(unsigned int)v15,
        v23);
    }
    else
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
      v24 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 216);
      v25 = (_QWORD *)*((_QWORD *)this + 21);
      if ( v25 )
      {
        while ( 1 )
        {
          Next = (CPipeInstance **)ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::GetNext(
                                     v17,
                                     &v25);
          v19 = CPipeInstance::Start(*Next);
          v16 = v19;
          if ( v19 < 0 )
            break;
          if ( !v25 )
            goto LABEL_22;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2D5,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
          (const char *)(unsigned int)v19,
          v23);
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v24);
      }
      else
      {
LABEL_22:
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v24);
        v5 = 0;
        CAudioDeviceGraph::DurationTracker::Start((LARGE_INTEGER *)this + 10);
        v21 = wil::details::static_lazy<AudioDgTelemetryProvider>::get(
                v20,
                _lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)[1];
        if ( *(_DWORD *)v21 > 4u
          && (*(_BYTE *)(v21 + 16) & 1) != 0
          && (*(_QWORD *)(v21 + 24) & 1LL) == *(_QWORD *)(v21 + 24) )
        {
          tlgWriteTransfer_EtwEventWriteTransfer(
            v21,
            (unsigned int)&unk_1400A65BC,
            (_DWORD)this + 352,
            0,
            2,
            (__int64)v29);
        }
        v16 = 0;
      }
    }
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v26);
    if ( v5 )
      (*(void (__fastcall **)(CAudioDeviceGraph *))(*(_QWORD *)this + 112LL))(this);
  }
  else
  {
    v16 = -2005139437;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29F,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)0x887C0013LL,
      v23);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v28);
  return v16;
}
