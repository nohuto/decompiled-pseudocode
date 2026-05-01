/*
 * XREFs of ??$ShowRequestReceived@AEAIAEAIIAEA_NAEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAI0$$QEAIAEA_N22@Z @ 0x18046C6AC
 * Callers:
 *     ?OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z @ 0x1804773C0 (-OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C1340 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::ShowRequestReceived<unsigned int &,unsigned int &,unsigned int,bool &,bool &,bool &>(
        int *a1,
        int *a2,
        int *a3,
        char *a4,
        char *a5,
        char *a6)
{
  __int64 *v10; // rax
  __int64 v11; // r10
  char v12; // cl
  char v14; // [rsp+38h] [rbp-59h] BYREF
  char v15; // [rsp+39h] [rbp-58h] BYREF
  char v16; // [rsp+3Ah] [rbp-57h] BYREF
  int v17; // [rsp+3Ch] [rbp-55h] BYREF
  int v18; // [rsp+40h] [rbp-51h] BYREF
  int v19; // [rsp+44h] [rbp-4Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+48h] [rbp-49h] BYREF
  int *v21; // [rsp+68h] [rbp-29h]
  __int64 v22; // [rsp+70h] [rbp-21h]
  int *v23; // [rsp+78h] [rbp-19h]
  __int64 v24; // [rsp+80h] [rbp-11h]
  int *v25; // [rsp+88h] [rbp-9h]
  __int64 v26; // [rsp+90h] [rbp-1h]
  char *v27; // [rsp+98h] [rbp+7h]
  __int64 v28; // [rsp+A0h] [rbp+Fh]
  char *v29; // [rsp+A8h] [rbp+17h]
  __int64 v30; // [rsp+B0h] [rbp+1Fh]
  char *v31; // [rsp+B8h] [rbp+27h]
  __int64 v32; // [rsp+C0h] [rbp+2Fh]

  v10 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
          (__int64)a1,
          _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v10[1] > 5u )
  {
    LOBYTE(v10) = tlgKeywordOn(v10[1], 16LL);
    if ( (_BYTE)v10 )
    {
      v32 = 1LL;
      v30 = 1LL;
      v28 = 1LL;
      v14 = *a6;
      v26 = 4LL;
      v24 = 4LL;
      v12 = *a5;
      v16 = *a4;
      v17 = *a3;
      v18 = *a2;
      v19 = *a1;
      v31 = &v14;
      v29 = &v15;
      v27 = &v16;
      v25 = &v17;
      v23 = &v18;
      v21 = &v19;
      v15 = v12;
      v22 = 4LL;
      LOBYTE(v10) = tlgWriteTransfer_EventWriteTransfer(v11, (unsigned __int8 *)dword_1806BA273, 0LL, 0LL, 8u, &v20);
    }
  }
  return (char)v10;
}
