/*
 * XREFs of ?StartActivity@StopDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z @ 0x1800D14A4
 * Callers:
 *     ?StopDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D2BD0 (-StopDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StopVirtualMonitorCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D2D60 (-StopVirtualMonitorCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x180007EF0 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ?zInternalRelatedId@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18005EC2C (-zInternalRelatedId@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Para.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x1800CFCD8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?zInternalStart@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800D5AF8 (-zInternalStart@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P.c)
 */

void __fastcall WindowFrameLoggingTelemetry::StopDisplayCapture::StartActivity(
        WindowFrameLoggingTelemetry::StopDisplayCapture *this,
        int a2,
        int a3)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  DWORD CurrentThreadId; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v10[4]; // [rsp+48h] [rbp-20h] BYREF
  int v11; // [rsp+70h] [rbp+8h] BYREF
  int v12; // [rsp+88h] [rbp+20h] BYREF

  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v7 = wil::details::static_lazy<WindowFrameLogging>::get(
         v6,
         (void (__cdecl *)())_lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v7 > 5u
    && (*(_QWORD *)(v7 + 16) & 0x200000000000LL) != 0
    && (*(_QWORD *)(v7 + 24) & 0x200000000000LL) == *(_QWORD *)(v7 + 24) )
  {
    v11 = a3;
    v12 = a2;
    v10[0] = 0LL;
    CurrentThreadId = GetCurrentThreadId();
    v8 = wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v7,
      byte_18012660F,
      *((_QWORD *)this + 6) + 8LL,
      v8,
      (__int64)v10,
      (__int64)&CurrentThreadId,
      (__int64)&v12,
      (__int64)&v11);
  }
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
