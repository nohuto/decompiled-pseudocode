/*
 * XREFs of ??$TaskbarOutOfSpaceForPin@AEBQEBG@TaskbarContentDeliveryPinningTelemetry@@SAXAEBQEBG@Z @ 0x180025DD8
 * Callers:
 *     ??R_lambda_ce3eaa413337f6bd175b4ae2c9280e26_@@QEBAXXZ @ 0x18002DFC8 (--R_lambda_ce3eaa413337f6bd175b4ae2c9280e26_@@QEBAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800011F0 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     atexit @ 0x180022154 (atexit.c)
 *     ??1Completer@?$static_lazy@VTaskbarContentDeliveryPinningTelemetry@@@details@wil@@QEAA@XZ @ 0x18002905C (--1Completer@-$static_lazy@VTaskbarContentDeliveryPinningTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ?Provider@TaskbarLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18003C0DC (-Provider@TaskbarLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 */

const struct _tlgProvider_t *__fastcall TaskbarContentDeliveryPinningTelemetry::TaskbarOutOfSpaceForPin<unsigned short const * const &>(
        __int64 a1)
{
  const struct _tlgProvider_t *result; // rax
  _DWORD *v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  union _RTL_RUN_ONCE *v5; // [rsp+30h] [rbp-10h] BYREF
  int v6; // [rsp+38h] [rbp-8h]
  __int64 fPending; // [rsp+60h] [rbp+20h] BYREF
  LPVOID Context; // [rsp+68h] [rbp+28h] BYREF

  fPending = a1;
  Context = 0LL;
  if ( InitOnceBeginInitialize(
         &`TaskbarContentDeliveryPinningTelemetry::Instance'::`2'::wrapper,
         0,
         (PBOOL)&fPending,
         &Context)
    && (_DWORD)fPending )
  {
    v5 = &`TaskbarContentDeliveryPinningTelemetry::Instance'::`2'::wrapper;
    Context = &qword_1801AF400;
    qword_1801AF400 = (__int64)&CreativeFramework::Logging::ShellPlacementLogging::`vftable';
    atexit(_lambda_8df9595ef2b54e9d87dd50e21e23ed4b_::_lambda_invoker_cdecl_);
    v6 = 0;
    wil::details::static_lazy<TaskbarContentDeliveryPinningTelemetry>::Completer::~Completer(&v5);
  }
  result = (const struct _tlgProvider_t *)Context;
  v2 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( v2 && *v2 )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(
           &`TaskbarContentDeliveryPinningTelemetry::Instance'::`2'::wrapper,
           0,
           (PBOOL)&fPending,
           &Context)
      && (_DWORD)fPending )
    {
      v5 = &`TaskbarContentDeliveryPinningTelemetry::Instance'::`2'::wrapper;
      Context = &qword_1801AF400;
      qword_1801AF400 = (__int64)&CreativeFramework::Logging::ShellPlacementLogging::`vftable';
      atexit(_lambda_8df9595ef2b54e9d87dd50e21e23ed4b_::_lambda_invoker_cdecl_);
      v6 = 0;
      wil::details::static_lazy<TaskbarContentDeliveryPinningTelemetry>::Completer::~Completer(&v5);
    }
    result = TaskbarLogging::Provider();
    if ( *(_DWORD *)result > 5u
      && (*((_QWORD *)result + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)result + 3) & 0x400000000000LL) == *((_QWORD *)result + 3) )
    {
      fPending = 0x1000000LL;
      Context = L"Microsoft.YourPhone_8wekyb3d8bbwe!App";
      return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                                              (int)result,
                                              (int)&dword_18019021B,
                                              v3,
                                              v4,
                                              (const WCHAR **)&Context,
                                              (__int64)&fPending);
    }
  }
  return result;
}
