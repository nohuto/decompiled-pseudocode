/*
 * XREFs of ??$InputSwitch_PostForwardedInputMessage@_NAEAIAEA_KAEA_J@ControlCenterTelemetry@ControlCenterUITelemetry@@SAX$$QEA_NAEAIAEA_KAEA_J@Z @ 0x180352368
 * Callers:
 *     ?ForwardWindowMessage@CControlCenterExperienceManager@@UEAAJI_K_JPEAH@Z @ 0x1803538E0 (-ForwardWindowMessage@CControlCenterExperienceManager@@UEAAJI_K_JPEAH@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VControlCenterLogging@@@details@wil@@QEAAPEAVControlCenterLogging@@P6AXXZ@Z @ 0x18035537C (-get@-$static_lazy@VControlCenterLogging@@@details@wil@@QEAAPEAVControlCenterLogging@@P6AXXZ@Z.c)
 */

int __fastcall ControlCenterUITelemetry::ControlCenterTelemetry::InputSwitch_PostForwardedInputMessage<bool,unsigned int &,unsigned __int64 &,__int64 &>(
        char *a1,
        int *a2,
        int *a3,
        int *a4)
{
  __int64 v8; // rax
  _DWORD *v9; // rcx
  char v11; // [rsp+38h] [rbp-29h] BYREF
  int v12; // [rsp+3Ch] [rbp-25h] BYREF
  int v13; // [rsp+40h] [rbp-21h] BYREF
  int v14; // [rsp+44h] [rbp-1Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+48h] [rbp-19h] BYREF
  char *v16; // [rsp+68h] [rbp+7h]
  __int64 v17; // [rsp+70h] [rbp+Fh]
  int *v18; // [rsp+78h] [rbp+17h]
  __int64 v19; // [rsp+80h] [rbp+1Fh]
  int *v20; // [rsp+88h] [rbp+27h]
  __int64 v21; // [rsp+90h] [rbp+2Fh]
  int *v22; // [rsp+98h] [rbp+37h]
  __int64 v23; // [rsp+A0h] [rbp+3Fh]

  v8 = wil::details::static_lazy<ControlCenterLogging>::get(
         a1,
         _lambda_7497dc87b220aaed4d14ef0ec7d62e5e_::_lambda_invoker_cdecl_);
  v9 = *(_DWORD **)(v8 + 8);
  if ( *v9 > 5u )
  {
    v12 = *a4;
    v13 = *a3;
    v14 = *a2;
    v11 = *a1;
    v22 = &v12;
    v20 = &v13;
    v18 = &v14;
    v16 = &v11;
    v23 = 4LL;
    v21 = 4LL;
    v19 = 4LL;
    v17 = 1LL;
    LODWORD(v8) = tlgWriteTransfer_EventWriteTransfer(
                    (__int64)v9,
                    (unsigned __int8 *)dword_1806A3CC1,
                    0LL,
                    0LL,
                    6u,
                    &v15);
  }
  return v8;
}
