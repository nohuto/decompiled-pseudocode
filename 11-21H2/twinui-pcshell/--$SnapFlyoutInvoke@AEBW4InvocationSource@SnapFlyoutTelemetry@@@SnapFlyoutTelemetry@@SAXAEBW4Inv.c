/*
 * XREFs of ??$SnapFlyoutInvoke@AEBW4InvocationSource@SnapFlyoutTelemetry@@@SnapFlyoutTelemetry@@SAXAEBW4InvocationSource@0@@Z @ 0x1805AD734
 * Callers:
 *     ?InternalShow@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805AF4BC (-InternalShow@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV-$unique_any_t@V-$unique_storag.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ @ 0x1800C50A0 (--1Completer@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     ?IsEnabled@SnapFlyoutTelemetry@@SA_NE_K@Z @ 0x1805AFAB0 (-IsEnabled@SnapFlyoutTelemetry@@SA_NE_K@Z.c)
 *     ?SnapFlyoutInvoke_@SnapFlyoutTelemetry@@QEBAXW4InvocationSource@1@@Z @ 0x1805B0548 (-SnapFlyoutInvoke_@SnapFlyoutTelemetry@@QEBAXW4InvocationSource@1@@Z.c)
 */

char __fastcall SnapFlyoutTelemetry::SnapFlyoutInvoke<enum SnapFlyoutTelemetry::InvocationSource const &>(
        unsigned int *a1,
        unsigned __int64 a2)
{
  char result; // al
  __int64 v4; // rcx
  union _RTL_RUN_ONCE *v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+48h] [rbp+10h] BYREF
  LPVOID Context; // [rsp+50h] [rbp+18h] BYREF

  result = SnapFlyoutTelemetry::IsEnabled((unsigned __int8)a1, a2);
  if ( result )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`SnapFlyoutTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v5 = &`SnapFlyoutTelemetry::Instance'::`2'::wrapper;
        Context = &qword_1807B4728;
        qword_1807B4728 = (__int64)&IamTraceLogging::`vftable';
        atexit(_lambda_9927b359eceb7275e94a8a7346ff996f_::_lambda_invoker_cdecl_);
        v6 = 0;
        wil::details::static_lazy<TabletModeTelemetry>::Completer::~Completer((__int64)&v5);
      }
    }
    return SnapFlyoutTelemetry::SnapFlyoutInvoke_(v4, *a1);
  }
  return result;
}
