/*
 * XREFs of ?ViewCreationTaskFailed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x18051C0FC
 * Callers:
 *     wil::details::ScopeExitFn__lambda_9880aa7e5b34af4ec8b662ea8f84cd48___::_ScopeExitFn__lambda_9880aa7e5b34af4ec8b662ea8f84cd48___ @ 0x1802069B0 (wil--details--ScopeExitFn__lambda_9880aa7e5b34af4ec8b662ea8f84cd48___--_ScopeExitFn__lambda_9880.c)
 *     _lambda_0cfa17de80a192d7104afc8a843b7ae2_::operator() @ 0x180206BB4 (_lambda_0cfa17de80a192d7104afc8a843b7ae2_--operator().c)
 * Callees:
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C388C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::ViewCreationTaskFailed(__int64 a1)
{
  _DWORD *v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  v1 = (_DWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                   a1,
                   _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
  if ( *v1 > 5u )
  {
    if ( tlgKeywordOn((__int64)v1, 0x400000000000LL) )
    {
      v7 = 0;
      v5 = &v3;
      v3 = 0x1000000LL;
      v6 = 8;
      tlgWriteTransfer_EventWriteTransfer(v2, (unsigned __int8 *)dword_18085F461, 0LL, 0LL, 3u, &v4);
    }
  }
}
