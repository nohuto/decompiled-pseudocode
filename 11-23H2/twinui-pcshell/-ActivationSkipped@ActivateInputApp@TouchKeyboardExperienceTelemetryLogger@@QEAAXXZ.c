/*
 * XREFs of ?ActivationSkipped@ActivateInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x18050D814
 * Callers:
 *     ?ActivateInputApp@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18050D570 (-ActivateInputApp@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C388C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::ActivateInputApp::ActivationSkipped(
        TouchKeyboardExperienceTelemetryLogger::ActivateInputApp *this)
{
  _DWORD *v2; // rcx
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-38h] BYREF

  v2 = (_DWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                   (__int64)this,
                   _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
  if ( *v2 > 5u )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)v2,
      (unsigned __int8 *)dword_18085FF66,
      (const GUID *)(*((_QWORD *)this + 6) + 8LL),
      0LL,
      2u,
      &v3);
}
