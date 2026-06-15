/*
 * XREFs of ?StateCheckExpiredCallback@CAudioSession@@AEAAXXZ @ 0x180024360
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_c25bfbbe3eff8159fd381be65f1c93f0__void_::_Do_call @ 0x180024350 (std--_Func_impl_no_alloc__lambda_c25bfbbe3eff8159fd381be65f1c93f0__void_--_Do_call.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?StateCheckExpired@CAudioSession@@AEAA?AW4StateCheckExpirationResult@1@XZ @ 0x180024CF8 (-StateCheckExpired@CAudioSession@@AEAA-AW4StateCheckExpirationResult@1@XZ.c)
 *     ?PruneTerminatedOwningProcesses@CAudioSession@@QEAAXXZ @ 0x180024E70 (-PruneTerminatedOwningProcesses@CAudioSession@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180080F3A (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

void __fastcall CAudioSession::StateCheckExpiredCallback(CAudioSession *this)
{
  int v2; // esi
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // r9d
  int v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  CAudioSession::PruneTerminatedOwningProcesses(this);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 544));
  v2 = CAudioSession::StateCheckExpired(this);
  v4 = *(_QWORD *)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                     v3,
                     _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                 + 8);
  if ( *(_DWORD *)v4 > 4u
    && (*(_DWORD *)(v4 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v4 + 24) & 0x200LL) == *(_QWORD *)(v4 + 24) )
  {
    v7 = *((_QWORD *)this + 82);
    v6 = v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      v4,
      (unsigned int)&unk_180191536,
      v4,
      v5,
      (__int64)&v7,
      (__int64)&v6);
  }
  if ( this != (CAudioSession *)-544LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 544));
}
