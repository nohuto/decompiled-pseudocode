/*
 * XREFs of ?get@?$static_lazy@VTouchpadControllerExperienceManagerLogging@@@details@wil@@QEAAPEAVTouchpadControllerExperienceManagerLogging@@P6AXXZ@Z @ 0x18045554C
 * Callers:
 *     ??1?$_TlgActivityBase@V?$ActivityData@VTouchpadControllerExperienceManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0EAAAAAAAAAAA@$04@@IEAA@XZ @ 0x18012CB64 (--1-$_TlgActivityBase@V-$ActivityData@VTouchpadControllerExperienceManagerLogging@@U_TlgReflecto.c)
 *     ??$ControllerMoved@AEAJAEAJAEBU_GUID@@@TouchpadControllerExperienceManagerTelemetry@@SAXAEAJ0AEBU_GUID@@@Z @ 0x180451938 (--$ControllerMoved@AEAJAEAJAEBU_GUID@@@TouchpadControllerExperienceManagerTelemetry@@SAXAEAJ0AEB.c)
 *     ?Hide@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAXXZ @ 0x180453190 (-Hide@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAXXZ.c)
 *     ?NotifyFailure@?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180453680 (-NotifyFailure@-$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04.c)
 *     ?StartActivity@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAXXZ @ 0x180454974 (-StartActivity@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180454A8C (-Stop@-$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_Tlg.c)
 *     ?StopActivity@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@MEAAXXZ @ 0x180454B90 (-StopActivity@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@MEAAXXZ.c)
 *     ?Uncloack@CVirtualTouchpadExperienceManager@@AEAAJAEAVTouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@@Z @ 0x180454E08 (-Uncloack@CVirtualTouchpadExperienceManager@@AEAAJAEAVTouchpadLaunched@TouchpadControllerExperie.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<TouchpadControllerExperienceManagerLogging>::get(
        __int64 a1,
        void (__cdecl *a2)())
{
  __int64 v3; // rdx
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  union _RTL_RUN_ONCE *v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v9; // [rsp+50h] [rbp+18h] BYREF

  v8 = a1;
  v9 = 0LL;
  if ( __std_init_once_begin_initialize(
         &`TouchpadControllerExperienceManagerLogging::Instance'::`2'::wrapper,
         0,
         (PBOOL)&v8,
         (LPVOID *)&v9)
    && (_DWORD)v8 )
  {
    v6 = &`TouchpadControllerExperienceManagerLogging::Instance'::`2'::wrapper;
    v9 = &qword_18098F6D8;
    qword_18098F6D8 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_18098F6F0 = (__int64)&`TouchpadControllerExperienceManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v7 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v6, v3, v4);
  }
  return v9;
}
