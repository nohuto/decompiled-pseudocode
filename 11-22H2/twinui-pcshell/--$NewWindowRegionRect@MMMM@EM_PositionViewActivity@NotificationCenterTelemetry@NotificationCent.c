/*
 * XREFs of ??$NewWindowRegionRect@MMMM@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAX$$QEAM000@Z @ 0x18001A5A4
 * Callers:
 *     ?PositionView@CActionCenterExperienceManager@@AEAAJXZ @ 0x180019278 (-PositionView@CActionCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x1800E4524 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?get@?$static_lazy@VNotificationCenterLogging@@@details@wil@@QEAAPEAVNotificationCenterLogging@@P6AXXZ@Z @ 0x180183F88 (-get@-$static_lazy@VNotificationCenterLogging@@@details@wil@@QEAAPEAVNotificationCenterLogging@@.c)
 */

__int64 __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::NewWindowRegionRect<float,float,float,float>(
        int *a1,
        int *a2,
        int *a3,
        int *a4)
{
  __int64 result; // rax
  int v9; // r9d
  _DWORD *v10; // rcx
  int v11; // xmm1_4
  int v12; // xmm0_4
  int v13; // xmm1_4
  int v14; // [rsp+40h] [rbp-18h] BYREF
  int v15; // [rsp+44h] [rbp-14h] BYREF
  int v16; // [rsp+48h] [rbp-10h] BYREF
  _DWORD v17[3]; // [rsp+4Ch] [rbp-Ch] BYREF

  result = wil::details::static_lazy<NotificationCenterLogging>::get(
             a1,
             _lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_);
  v10 = *(_DWORD **)(result + 8);
  if ( *v10 > 5u )
  {
    v11 = *a3;
    v14 = *a4;
    v12 = *a2;
    v15 = v11;
    v13 = *a1;
    v16 = v12;
    v17[0] = v13;
    return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
             (_DWORD)v10,
             (unsigned int)&unk_180848C29,
             0,
             v9,
             (__int64)v17,
             (__int64)&v16,
             (__int64)&v15,
             (__int64)&v14);
  }
  return result;
}
