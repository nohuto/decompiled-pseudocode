/*
 * XREFs of ?OnConnected@ActivationControllerBamoProxy@@MEAAJXZ @ 0x18000BEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x18000BFFC (-GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ.c)
 *     ?TryUpdateApplicationActivationState@ActivationWatcherBamoPrincipal@@QEAAX_K@Z @ 0x18001B760 (-TryUpdateApplicationActivationState@ActivationWatcherBamoPrincipal@@QEAAX_K@Z.c)
 *     ??1Completer@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAA@XZ @ 0x180048394 (--1Completer@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18004A308 (atexit.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputForegroundManager@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004C410 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputForegroundManager@@@details@wil@@QEA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333@Z @ 0x18008940C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 */

__int64 __fastcall ActivationControllerBamoProxy::OnConnected(
        ActivationControllerBamoProxy *this,
        __int64 a2,
        __int64 a3)
{
  struct ForegroundManager *ForegroundManager; // r13
  __int64 v5; // r14
  unsigned __int64 v6; // rsi
  __int64 *v7; // r15
  __int64 v8; // rax
  union _RTL_RUN_ONCE *v9; // rbx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rcx
  ActivationWatcherBamoPrincipal *v13; // rbx
  __int64 v14; // rax
  unsigned __int64 v16; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+48h] [rbp-18h] BYREF
  union _RTL_RUN_ONCE *v18; // [rsp+50h] [rbp-10h] BYREF
  int v19; // [rsp+58h] [rbp-8h]
  WINBOOL fPending; // [rsp+A8h] [rbp+48h] BYREF
  LPVOID Context; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v22; // [rsp+B8h] [rbp+58h] BYREF

  LOBYTE(a3) = 3;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputForegroundManager>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_InputForegroundManager>::GetImpl'::`2'::impl,
    a2,
    a3);
  ForegroundManager = ISMStatics::GetForegroundManager();
  v5 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 56LL))((char *)this + 8);
  v6 = *((unsigned int *)this + 10)
     + ((unsigned __int64)*(unsigned int *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 4)
                                                                                            + 16LL)
                                                                              + 8LL))(*(_QWORD *)(*((_QWORD *)this + 4)
                                                                                                + 16LL))
                                          + 36) << 32);
  v7 = (__int64 *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 48LL))((char *)this + 8);
  v8 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 40LL))((char *)this + 8);
  Context = 0LL;
  v9 = (union _RTL_RUN_ONCE *)v8;
  if ( __std_init_once_begin_initialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    v18 = &`InputTraceLogging::Instance'::`2'::wrapper;
    Context = &qword_180242A58;
    qword_180242A58 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180242A70 = (__int64)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
    v19 = 0;
    wil::details::static_lazy<InputTraceLogging>::Completer::~Completer(&v18);
  }
  v12 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v12 > 4u
    && (*(_DWORD *)(v12 + 16) & 0x8000LL) != 0
    && (*(_QWORD *)(v12 + 24) & 0x8000LL) == *(_QWORD *)(v12 + 24) )
  {
    v17 = *v7;
    v22 = v5;
    v16 = v6;
    v18 = v9;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v12,
      (unsigned int)&unk_1801FF5F2,
      v10,
      v11,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v22);
  }
  v13 = (ActivationWatcherBamoPrincipal *)*((_QWORD *)ForegroundManager + 67);
  v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 4) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)this + 4) + 16LL));
  ActivationWatcherBamoPrincipal::TryUpdateApplicationActivationState(
    v13,
    *((unsigned int *)this + 10) + ((unsigned __int64)*(unsigned int *)(v14 + 36) << 32));
  return 0LL;
}
