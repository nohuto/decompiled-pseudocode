/*
 * XREFs of ?OnConnected@ActivationControllerBamoProxy@@MEAAJXZ @ 0x18001D690
 * Callers:
 *     <none>
 * Callees:
 *     ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x18001D79C (-GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180020370 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ?TryUpdateApplicationActivationState@ActivationWatcherBamoPrincipal@@QEAAX_K@Z @ 0x1800279C4 (-TryUpdateApplicationActivationState@ActivationWatcherBamoPrincipal@@QEAAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333@Z @ 0x1800B2C9C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 */

__int64 __fastcall ActivationControllerBamoProxy::OnConnected(ActivationControllerBamoProxy *this)
{
  struct ForegroundManager *ForegroundManager; // r15
  __int64 v3; // rbp
  unsigned __int64 v4; // rsi
  __int64 *v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r9d
  ActivationWatcherBamoPrincipal *v10; // rbx
  __int64 v11; // rax
  __int64 v13; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v14; // [rsp+88h] [rbp+10h] BYREF
  __int64 v15; // [rsp+90h] [rbp+18h] BYREF
  __int64 v16; // [rsp+98h] [rbp+20h] BYREF

  ForegroundManager = ISMStatics::GetForegroundManager();
  v3 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 56LL))((char *)this + 8);
  v4 = *((unsigned int *)this + 10)
     + ((unsigned __int64)*(unsigned int *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 4)
                                                                                            + 16LL)
                                                                              + 8LL))(*(_QWORD *)(*((_QWORD *)this + 4)
                                                                                                + 16LL))
                                          + 36) << 32);
  v5 = (__int64 *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 48LL))((char *)this + 8);
  v6 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 40LL))((char *)this + 8);
  v8 = *(_QWORD *)(wil::details::static_lazy<InputTraceLogging>::get(
                     v7,
                     _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
                 + 8);
  if ( *(_DWORD *)v8 > 4u
    && (*(_DWORD *)(v8 + 16) & 0x8000LL) != 0
    && (*(_QWORD *)(v8 + 24) & 0x8000LL) == *(_QWORD *)(v8 + 24) )
  {
    v15 = *v5;
    v13 = v3;
    v14 = v4;
    v16 = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v8,
      (unsigned int)&unk_18022FAC9,
      v8,
      v9,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13);
  }
  v10 = (ActivationWatcherBamoPrincipal *)*((_QWORD *)ForegroundManager + 67);
  v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 4) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)this + 4) + 16LL));
  ActivationWatcherBamoPrincipal::TryUpdateApplicationActivationState(
    v10,
    *((unsigned int *)this + 10) + ((unsigned __int64)*(unsigned int *)(v11 + 36) << 32));
  return 0LL;
}
