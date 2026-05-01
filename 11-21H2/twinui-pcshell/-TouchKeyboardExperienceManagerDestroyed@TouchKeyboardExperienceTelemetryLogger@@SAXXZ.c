/*
 * XREFs of ?TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x180469948
 * Callers:
 *     _lambda_09eec0bbc0ade630acfbce7628848781_::operator() @ 0x1801AF758 (_lambda_09eec0bbc0ade630acfbce7628848781_--operator().c)
 *     _lambda_3f7c4ca579c2955647d5fca56c9af8c5_::operator() @ 0x1801AF8E8 (_lambda_3f7c4ca579c2955647d5fca56c9af8c5_--operator().c)
 *     _lambda_41fdec79629b933043b6dd44cc33a98f_::operator() @ 0x1801AFDF8 (_lambda_41fdec79629b933043b6dd44cc33a98f_--operator().c)
 *     _lambda_666d22edc2a9b06a02075e2b448fb99f_::operator() @ 0x1801B02D8 (_lambda_666d22edc2a9b06a02075e2b448fb99f_--operator().c)
 *     _lambda_78d65514523b09204dbef74fe9d00fb5_::operator() @ 0x1801B0448 (_lambda_78d65514523b09204dbef74fe9d00fb5_--operator().c)
 *     _lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5_::operator() @ 0x1801B0638 (_lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5_--operator().c)
 *     _lambda_a8dc140887cec83d93fc1ab35d00b62d_::operator() @ 0x1801B07A8 (_lambda_a8dc140887cec83d93fc1ab35d00b62d_--operator().c)
 *     _lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0_::operator() @ 0x1801B09E4 (_lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0_--operator().c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C1340 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDestroyed(__int64 a1)
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
      tlgWriteTransfer_EventWriteTransfer(v2, (unsigned __int8 *)dword_1806B81AD, 0LL, 0LL, 3u, &v4);
    }
  }
}
