/*
 * XREFs of ??0ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA@XZ @ 0x1800FFF30
 * Callers:
 *     ??0CPeopleBarFlyoutExperienceManager@@QEAA@XZ @ 0x1800FFDD0 (--0CPeopleBarFlyoutExperienceManager@@QEAA@XZ.c)
 *     ?ShowFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJUPoint@Foundation@Windows@@@Z @ 0x180369BC0 (-ShowFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJUPoint@Foundation@Windows@@@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800FFF60 (--0-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Para.c)
 */

CommonPeopleTelemetry::ShowPeopleBarFlyout *__fastcall CommonPeopleTelemetry::ShowPeopleBarFlyout::ShowPeopleBarFlyout(
        CommonPeopleTelemetry::ShowPeopleBarFlyout *this)
{
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
  *(_QWORD *)this = &CommonPeopleTelemetry::ShowPeopleBarFlyout::`vftable';
  return this;
}
