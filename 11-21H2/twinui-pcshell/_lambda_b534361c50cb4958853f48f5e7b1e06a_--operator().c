/*
 * XREFs of _lambda_b534361c50cb4958853f48f5e7b1e06a_::operator() @ 0x18002D740
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b534361c50cb4958853f48f5e7b1e06a___::Run @ 0x18002D730 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b534361c50cb4958853f48f5e7b1e06a___--Run.c)
 * Callees:
 *     ?SetStopResult@?$ActivityData@VLockScreenServiceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x18002F9D0 (-SetStopResult@-$ActivityData@VLockScreenServiceLogging@@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?LockExclusive@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180046DD0 (-LockExclusive@-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflector.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180072674 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800765C4 (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800C5DC8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x180137594 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x1801414A0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_b534361c50cb4958853f48f5e7b1e06a_::operator()(__int64 a1)
{
  __int64 v2; // rdi
  _DWORD *v3; // r8
  int v4; // ebx
  int v5; // eax
  char v6; // bl
  __int64 v7; // rcx
  int v9; // eax
  __int64 v10; // rdx
  _DWORD *v11; // rbx
  int v12; // [rsp+20h] [rbp-49h]
  __int64 v13; // [rsp+40h] [rbp-29h] BYREF
  _OWORD v14[2]; // [rsp+50h] [rbp-19h] BYREF
  __int128 v15; // [rsp+70h] [rbp+7h] BYREF
  __int64 v16; // [rsp+80h] [rbp+17h]
  int v17; // [rsp+88h] [rbp+1Fh]
  __int64 v18; // [rsp+90h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  DWORD CurrentThreadId; // [rsp+D0h] [rbp+67h] BYREF
  int v21; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v22; // [rsp+E0h] [rbp+77h] BYREF
  void *v23; // [rsp+E8h] [rbp+7Fh] BYREF

  v2 = a1 + 40;
  v3 = *(_DWORD **)(a1 + 88);
  if ( *v3 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      (wil::ActivityThreadWatcher *)v14,
      (struct wil::details::IFailureCallback *)(a1 + 40),
      (const struct wil::details::StoredCallContextInfo *)(v3 + 10));
  }
  else
  {
    memset(v14, 0, sizeof(v14));
    v15 = 0LL;
    v16 = 0LL;
    v17 = 0;
    v18 = 0LL;
  }
  v4 = *(_DWORD *)(a1 + 16);
  if ( v4 >= 0 )
  {
    v23 = 0LL;
    if ( *(_QWORD *)(a1 + 32) )
    {
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
      v9 = CMarshaledInterface::_Unmarshal(
             (CMarshaledInterface *)(a1 + 32),
             &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
             &v23,
             1);
      v4 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC3,
          (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
          (const char *)(unsigned int)v9,
          v12);
        goto LABEL_13;
      }
    }
    v22 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
    v5 = CoreQueryWindowService(
           *(_QWORD *)a1,
           &GUID_db37659c_5741_4985_a443_dda995e92f5f,
           &GUID_c1635471_1417_4750_811f_a6122953c5a3,
           &v22);
    v4 = v5;
    if ( v5 < 0 )
    {
      v10 = 199LL;
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, void *))(*(_QWORD *)v22 + 48LL))(
             v22,
             *(_QWORD *)(a1 + 8),
             *(_QWORD *)(a1 + 24),
             v23);
      v4 = v5;
      if ( v5 >= 0 )
      {
        wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
          v2,
          &v21);
        v6 = wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LockScreenServiceLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
               *(_QWORD *)(v2 + 48),
               0LL,
               &CurrentThreadId);
        wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v21);
        if ( v6 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
        }
        else
        {
          v11 = *(_DWORD **)(wil::details::static_lazy<SingleViewExperienceLogging>::get(
                               v7,
                               _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)
                           + 8);
          if ( *v11 > 5u )
          {
            CurrentThreadId = GetCurrentThreadId();
            v21 = 0;
            v13 = 0x1000000LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              (_DWORD)v11,
              (unsigned int)&unk_18069D52E,
              *(_DWORD *)(v2 + 48) + 8,
              0,
              (__int64)&v13,
              (__int64)&v21,
              (__int64)&CurrentThreadId);
          }
        }
        if ( *(_DWORD *)(v2 + 32) )
          wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(v2 + 8));
        v4 = 0;
        goto LABEL_12;
      }
      v10 = 200LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)(unsigned int)v5,
      v12);
LABEL_12:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
LABEL_13:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBD,
    (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
    (const char *)(unsigned int)v4,
    v12);
LABEL_14:
  if ( v17 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)&v15);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v14);
  return (unsigned int)v4;
}
