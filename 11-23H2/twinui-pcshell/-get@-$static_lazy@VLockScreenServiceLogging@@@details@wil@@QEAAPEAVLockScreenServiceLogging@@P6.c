/*
 * XREFs of ?get@?$static_lazy@VLockScreenServiceLogging@@@details@wil@@QEAAPEAVLockScreenServiceLogging@@P6AXXZ@Z @ 0x18016A288
 * Callers:
 *     ?EnsureChildServices@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z @ 0x180040B2C (-EnsureChildServices@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z.c)
 *     ?GetLockScreenDirector@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z @ 0x180040D68 (-GetLockScreenDirector@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@.c)
 *     ?StartDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAJXZ @ 0x180040EF0 (-StartDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAJXZ.c)
 *     ?StopActivity@LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity@LockScreenServiceTelemetry@@MEAAXXZ @ 0x18005B460 (-StopActivity@LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity@LockScreenSer.c)
 *     ?StopActivity@LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity@LockScreenServiceTelemetry@@MEAAXXZ @ 0x18005CF20 (-StopActivity@LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity@LockScreenServi.c)
 *     ?StopActivity@LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity@LockScreenServiceTelemetry@@MEAAXXZ @ 0x18006E2E0 (-StopActivity@LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity@LockScreenServi.c)
 *     ?PerformDelayedInitialization@LockScreenDirectorServiceProviderImpl@@UEAAJXZ @ 0x1800ACD00 (-PerformDelayedInitialization@LockScreenDirectorServiceProviderImpl@@UEAAJXZ.c)
 *     ??1?$_TlgActivityBase@V?$ActivityData@VLockScreenServiceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0A@$04@@IEAA@XZ @ 0x1800AD2C0 (--1-$_TlgActivityBase@V-$ActivityData@VLockScreenServiceLogging@@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?StopActivity@LockScreenDirectorServiceProviderImpl_PerformDelayedInitialization_Activity@LockScreenServiceTelemetry@@MEAAXXZ @ 0x180169FE0 (-StopActivity@LockScreenDirectorServiceProviderImpl_PerformDelayedInitialization_Activity@LockSc.c)
 *     ?StopDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAXXZ @ 0x18016A09C (-StopDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAXXZ.c)
 *     ?zInternalStart@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18016A164 (-zInternalStart@-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ?Stop@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18016A1D0 (-Stop@-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?ReportStopActivity@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x18016A23C (-ReportStopActivity@-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?NotifyFailure@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18048B7C0 (-NotifyFailure@-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0I.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<LockScreenServiceLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // rdx
  void (*v5)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  union _RTL_RUN_ONCE *v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v9; // [rsp+50h] [rbp+18h] BYREF

  v8 = a1;
  v9 = 0LL;
  if ( __std_init_once_begin_initialize(
         &`LockScreenServiceLogging::Instance'::`2'::wrapper,
         0,
         (PBOOL)&v8,
         (LPVOID *)&v9)
    && (_DWORD)v8 )
  {
    v6 = &`LockScreenServiceLogging::Instance'::`2'::wrapper;
    v9 = &qword_18098F838;
    qword_18098F838 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_18098F850 = (__int64)&`LockScreenServiceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v7 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v6, v4, v5);
  }
  return v9;
}
