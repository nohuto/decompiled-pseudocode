/*
 * XREFs of ?get@?$static_lazy@VStartMenuExperienceLogging@@@details@wil@@QEAAPEAVStartMenuExperienceLogging@@P6AXXZ@Z @ 0x18007305C
 * Callers:
 *     ?PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@1@@Z @ 0x1800728C4 (-PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@.c)
 *     ?StopActivity@StartMenuReposition@StartMenuExperienceTelemetry@@MEAAXXZ @ 0x180072B50 (-StopActivity@StartMenuReposition@StartMenuExperienceTelemetry@@MEAAXXZ.c)
 *     ?ReportStopActivity@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180072CE0 (-ReportStopActivity@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_.c)
 *     ?StartActivity@StartMenuReposition@StartMenuExperienceTelemetry@@QEAAXXZ @ 0x180072D2C (-StartActivity@StartMenuReposition@StartMenuExperienceTelemetry@@QEAAXXZ.c)
 *     ??$ReportWindowPosition@AEAJAEAJJJAEAE_NAEAW4PositionMenuFlags@CStartExperienceManager@@@StartMenuReposition@StartMenuExperienceTelemetry@@QEAAXAEAJ0$$QEAJ1AEAE$$QEA_NAEAW4PositionMenuFlags@CStartExperienceManager@@@Z @ 0x180072EB8 (--$ReportWindowPosition@AEAJAEAJJJAEAE_NAEAW4PositionMenuFlags@CStartExperienceManager@@@StartMe.c)
 *     ?PendingCloakingStatus_@StartMenuExperienceTelemetry@@QEAAX_NGG@Z @ 0x1801509DC (-PendingCloakingStatus_@StartMenuExperienceTelemetry@@QEAAX_NGG@Z.c)
 *     ??1Completer@?$static_lazy@VStartMenuExperienceTelemetry@@@details@wil@@QEAA@XZ @ 0x180150BB0 (--1Completer@-$static_lazy@VStartMenuExperienceTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ??$InfraFailure@AEA_NAEAJ@StartMenuExperienceTelemetry@@SAXAEA_NAEAJ@Z @ 0x18036E128 (--$InfraFailure@AEA_NAEAJ@StartMenuExperienceTelemetry@@SAXAEA_NAEAJ@Z.c)
 *     ??1?$_TlgActivityBase@V?$ActivityData@VStartMenuExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0A@$04@@IEAA@XZ @ 0x18036E7F0 (--1-$_TlgActivityBase@V-$ActivityData@VStartMenuExperienceLogging@@U_TlgReflectorTag_Param0IsPro.c)
 *     ?NotifyFailure@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18036F6D0 (-NotifyFailure@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18018879C (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<StartMenuExperienceLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // rdx
  void (*v5)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  LPINIT_ONCE v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v9; // [rsp+50h] [rbp+18h] BYREF

  v8 = a1;
  v9 = 0LL;
  if ( __std_init_once_begin_initialize(
         &`StartMenuExperienceLogging::Instance'::`2'::wrapper,
         0,
         (PBOOL)&v8,
         (LPVOID *)&v9)
    && (_DWORD)v8 )
  {
    v6 = &`StartMenuExperienceLogging::Instance'::`2'::wrapper;
    v9 = &qword_1807B4E78;
    qword_1807B4E78 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_1807B4E90 = (__int64)&`StartMenuExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v7 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v6, v4, v5);
  }
  return v9;
}
