/*
 * XREFs of ?Split@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA?AV12@XZ @ 0x180369DE0
 * Callers:
 *     ?ShowFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJUPoint@Foundation@Windows@@@Z @ 0x180369BC0 (-ShowFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJUPoint@Foundation@Windows@@@Z.c)
 * Callees:
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1802D9BA8 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ??0?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1803679E8 (--0-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgRefl_ea_1803679E8.c)
 *     ?IncrementExpectedStopCount@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180368BD4 (-IncrementExpectedStopCount@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$.c)
 */

_QWORD *__fastcall CommonPeopleTelemetry::ShowPeopleBarFlyout::Split(__int64 a1, _QWORD *a2)
{
  const struct wil::FailureInfo *v4; // rdx
  _BYTE v6[168]; // [rsp+20h] [rbp-A8h] BYREF

  if ( **(_DWORD **)(a1 + 48) != 1 )
  {
    memset_0(v6, 0, 0x98uLL);
    wil::details::WilFailFast((wil::details *)v6, v4);
  }
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::IncrementExpectedStopCount(a1);
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)a2,
    a1);
  *a2 = &CommonPeopleTelemetry::ShowPeopleBarFlyout::`vftable';
  return a2;
}
