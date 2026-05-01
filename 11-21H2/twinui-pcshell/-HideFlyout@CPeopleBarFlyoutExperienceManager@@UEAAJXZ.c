/*
 * XREFs of ?HideFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJXZ @ 0x180368AE0
 * Callers:
 *     ?OnDismiss@CPeopleBarFlyoutExperienceManager@@UEAAJXZ @ 0x1803690F0 (-OnDismiss@CPeopleBarFlyoutExperienceManager@@UEAAJXZ.c)
 *     ?OnEventQueued@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180369140 (-OnEventQueued@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRI.c)
 * Callees:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18000CAF8 (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800FFF60 (--0-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Para.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??1HidePeopleBarFlyout@CommonPeopleTelemetry@@QEAA@XZ @ 0x180367CF8 (--1HidePeopleBarFlyout@CommonPeopleTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@HidePeopleBarFlyout@CommonPeopleTelemetry@@QEAAXW4PeopleFlyoutAction@@@Z @ 0x180369E50 (-StartActivity@HidePeopleBarFlyout@CommonPeopleTelemetry@@QEAAXW4PeopleFlyoutAction@@@Z.c)
 *     ?Stop@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180369FEC (-Stop@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPeopleBarFlyoutExperienceManager::HideFlyout(CPeopleBarFlyoutExperienceManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5[2]; // [rsp+20h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  if ( *((_DWORD *)this + 38) == 2 )
  {
    if ( !*((_DWORD *)this + 176) )
      *((_DWORD *)this + 176) = 1;
    wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v5,
      (__int64)"HidePeopleBarFlyout");
    *(_QWORD *)v5 = &CommonPeopleTelemetry::HidePeopleBarFlyout::`vftable';
    CommonPeopleTelemetry::HidePeopleBarFlyout::StartActivity(v5, *((unsigned int *)this + 176));
    *((_DWORD *)this + 176) = 0;
    v2 = CSingleViewShellExperience::Hide((__int64)this + 112, 0LL);
    v3 = v2;
    if ( v2 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE7,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
      CommonPeopleTelemetry::HidePeopleBarFlyout::~HidePeopleBarFlyout((CommonPeopleTelemetry::HidePeopleBarFlyout *)v5);
      return v3;
    }
    wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v5,
      0LL);
    CommonPeopleTelemetry::HidePeopleBarFlyout::~HidePeopleBarFlyout((CommonPeopleTelemetry::HidePeopleBarFlyout *)v5);
  }
  return 0LL;
}
