/*
 * XREFs of ?LogGamepadTaskSwitcherUnexpectedState@ControllerProcessorTelemetry@@SAXI@Z @ 0x18017B708
 * Callers:
 *     ?ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GameInputGamepadButtons@@PEA_N@Z @ 0x18017B060 (-ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GameInputGamepadButtons@@PEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007F788 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VControllerProcessorTelemetry@@@details@wil@@QEAAPEAVControllerProcessorTelemetry@@P6AXXZ@Z @ 0x18017BA24 (-get@-$static_lazy@VControllerProcessorTelemetry@@@details@wil@@QEAAPEAVControllerProcessorTelem.c)
 */

void __fastcall ControllerProcessorTelemetry::LogGamepadTaskSwitcherUnexpectedState(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rcx
  int v3; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  int *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  v1 = a1;
  v2 = *(_QWORD *)(wil::details::static_lazy<ControllerProcessorTelemetry>::get(
                     a1,
                     _lambda_eeadc07ead9c453f2bc1ae732b24d90f_::_lambda_invoker_cdecl_)
                 + 8);
  if ( *(_DWORD *)v2 > 5u
    && (*(_QWORD *)(v2 + 16) & 0x400000000000LL) != 0
    && (*(_QWORD *)(v2 + 24) & 0x400000000000LL) == *(_QWORD *)(v2 + 24) )
  {
    v7 = 0;
    v5 = &v3;
    v3 = v1;
    v6 = 4;
    tlgWriteTransfer_EventWriteTransfer(v2, (unsigned __int8 *)dword_180205FD8, 0LL, 0LL, 3u, &v4);
  }
}
