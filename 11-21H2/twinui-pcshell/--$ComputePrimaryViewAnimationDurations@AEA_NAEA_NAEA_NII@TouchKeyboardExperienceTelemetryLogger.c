/*
 * XREFs of ??$ComputePrimaryViewAnimationDurations@AEA_NAEA_NAEA_NII@TouchKeyboardExperienceTelemetryLogger@@SAXAEA_N00$$QEAI1@Z @ 0x18047EA54
 * Callers:
 *     ?ComputePrimaryViewAnimationDurations@AnimationCoordinationHelper@KeyboardHosting@@SA?AV?$tuple@II@std@@_N0AEBUtagRECT@@@Z @ 0x18047ED7C (-ComputePrimaryViewAnimationDurations@AnimationCoordinationHelper@KeyboardHosting@@SA-AV-$tuple@.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C1340 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::ComputePrimaryViewAnimationDurations<bool &,bool &,bool &,unsigned int,unsigned int>(
        char *a1,
        char *a2,
        char *a3,
        int *a4,
        int *a5)
{
  __int64 *v9; // rax
  __int64 v10; // r10
  int v11; // ecx
  char v13; // [rsp+38h] [rbp-41h] BYREF
  char v14; // [rsp+39h] [rbp-40h] BYREF
  char v15; // [rsp+3Ah] [rbp-3Fh] BYREF
  int v16; // [rsp+3Ch] [rbp-3Dh] BYREF
  int v17; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+48h] [rbp-31h] BYREF
  char *v19; // [rsp+68h] [rbp-11h]
  __int64 v20; // [rsp+70h] [rbp-9h]
  char *v21; // [rsp+78h] [rbp-1h]
  __int64 v22; // [rsp+80h] [rbp+7h]
  char *v23; // [rsp+88h] [rbp+Fh]
  __int64 v24; // [rsp+90h] [rbp+17h]
  int *v25; // [rsp+98h] [rbp+1Fh]
  __int64 v26; // [rsp+A0h] [rbp+27h]
  int *v27; // [rsp+A8h] [rbp+2Fh]
  __int64 v28; // [rsp+B0h] [rbp+37h]

  v9 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
         (__int64)a1,
         _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v9[1] > 5u )
  {
    LOBYTE(v9) = tlgKeywordOn(v9[1], 16LL);
    if ( (_BYTE)v9 )
    {
      v28 = 4LL;
      v26 = 4LL;
      v24 = 1LL;
      v11 = *a5;
      v17 = *a4;
      v13 = *a3;
      v14 = *a2;
      v15 = *a1;
      v27 = &v16;
      v25 = &v17;
      v23 = &v13;
      v21 = &v14;
      v19 = &v15;
      v16 = v11;
      v22 = 1LL;
      v20 = 1LL;
      LOBYTE(v9) = tlgWriteTransfer_EventWriteTransfer(v10, (unsigned __int8 *)dword_1806BCA36, 0LL, 0LL, 7u, &v18);
    }
  }
  return (char)v9;
}
