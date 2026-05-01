/*
 * XREFs of ?TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x18051B7D8
 * Callers:
 *     _lambda_0cfa17de80a192d7104afc8a843b7ae2_::operator() @ 0x180206BB4 (_lambda_0cfa17de80a192d7104afc8a843b7ae2_--operator().c)
 *     _lambda_24fd02bbee7f1f39dc6b2f1b639aabc2_::operator() @ 0x180206E60 (_lambda_24fd02bbee7f1f39dc6b2f1b639aabc2_--operator().c)
 *     _lambda_259a1410ba958232e2f70f54c5d031d1_::operator() @ 0x180207090 (_lambda_259a1410ba958232e2f70f54c5d031d1_--operator().c)
 *     _lambda_31c7893660c14ce258f6c87fb5d11c82_::operator() @ 0x18020732C (_lambda_31c7893660c14ce258f6c87fb5d11c82_--operator().c)
 *     _lambda_4b0775d64c2392808fe7dff402e255dc_::operator() @ 0x180207574 (_lambda_4b0775d64c2392808fe7dff402e255dc_--operator().c)
 *     _lambda_58f4954a35e6992b2fe1d34b610efbe6_::operator() @ 0x180207A7C (_lambda_58f4954a35e6992b2fe1d34b610efbe6_--operator().c)
 *     _lambda_5a9ec3bdba9975d084688ff203e80696_::operator() @ 0x180207BEC (_lambda_5a9ec3bdba9975d084688ff203e80696_--operator().c)
 *     _lambda_825306615c33696f43f5a813d6c29089_::operator() @ 0x180208004 (_lambda_825306615c33696f43f5a813d6c29089_--operator().c)
 *     _lambda_a09f288fb701b6a3bb133eb64dd6b836_::operator() @ 0x180208118 (_lambda_a09f288fb701b6a3bb133eb64dd6b836_--operator().c)
 *     _lambda_d5c88dcaa14c8e92d4b27569fe675d9e_::operator() @ 0x180208DAC (_lambda_d5c88dcaa14c8e92d4b27569fe675d9e_--operator().c)
 * Callees:
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C388C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
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
      tlgWriteTransfer_EventWriteTransfer(v2, (unsigned __int8 *)dword_18085F3E8, 0LL, 0LL, 3u, &v4);
    }
  }
}
