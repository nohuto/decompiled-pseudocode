/*
 * XREFs of ??$Allocated@AEAPEBG@DelayAllocateTLSTelemetry@@SAXAEAPEBG@Z @ 0x18002403C
 * Callers:
 *     ?DelayAllocateTLS_AllocateInternal@@YAXPEAKPEBG@Z @ 0x1800318E4 (-DelayAllocateTLS_AllocateInternal@@YAXPEAKPEBG@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800011F0 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     atexit @ 0x180022154 (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800409FC (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 */

__int64 __fastcall DelayAllocateTLSTelemetry::Allocated<unsigned short const * &>(__int64 *a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp-18h] BYREF
  WINBOOL fPending; // [rsp+58h] [rbp+10h] BYREF
  LPVOID Context; // [rsp+60h] [rbp+18h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`DelayAllocateTLSLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1801AF438;
    qword_1801AF438[0] = &CreativeFramework::Logging::ShellPlacementLogging::`vftable';
    qword_1801AF450 = (struct _tlgProvider_t *)&`DelayAllocateTLSLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_16ed5f466cc0787f20e3c084b27e3df3_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801AF438, qword_1801AF450, v4);
    InitOnceComplete(&`DelayAllocateTLSLogging::Instance'::`2'::wrapper, 0, qword_1801AF438);
  }
  result = (__int64)Context;
  v6 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v6 > 5u && (*(_QWORD *)(v6 + 16) & 0x400000000000LL) != 0 )
  {
    result = *(_QWORD *)(v6 + 24) & 0x400000000000LL;
    if ( result == *(_QWORD *)(v6 + 24) )
    {
      v7 = *a1;
      v10 = 50331648LL;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
               v6,
               (int)&dword_180190001,
               v2,
               v3,
               (const WCHAR **)&v7,
               (__int64)&v10);
    }
  }
  return result;
}
