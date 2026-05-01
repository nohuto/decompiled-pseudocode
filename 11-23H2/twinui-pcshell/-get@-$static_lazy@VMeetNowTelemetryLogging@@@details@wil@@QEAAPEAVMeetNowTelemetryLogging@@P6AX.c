/*
 * XREFs of ?get@?$static_lazy@VMeetNowTelemetryLogging@@@details@wil@@QEAAPEAVMeetNowTelemetryLogging@@P6AXXZ@Z @ 0x180475F70
 * Callers:
 *     ??$FailedToShowInSpecifiedTime@K@ShowFlyoutActivity@MeetNowTelemetry@@QEAAX$$QEAK@Z @ 0x180470C58 (--$FailedToShowInSpecifiedTime@K@ShowFlyoutActivity@MeetNowTelemetry@@QEAAX$$QEAK@Z.c)
 *     ??1?$_TlgActivityBase@V?$ActivityData@VMeetNowTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0EAAAAAAAAAAA@$04@@IEAA@XZ @ 0x18047144C (--1-$_TlgActivityBase@V-$ActivityData@VMeetNowTelemetryLogging@@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?CancelledByAnotherInvoke@ShowFlyoutActivity@MeetNowTelemetry@@QEAAXXZ @ 0x180471C98 (-CancelledByAnotherInvoke@ShowFlyoutActivity@MeetNowTelemetry@@QEAAXXZ.c)
 *     ?CancelledDueToForeground@ShowFlyoutActivity@MeetNowTelemetry@@QEAAXXZ @ 0x180471D3C (-CancelledDueToForeground@ShowFlyoutActivity@MeetNowTelemetry@@QEAAXXZ.c)
 *     ?CancelledDueToLock@ShowFlyoutActivity@MeetNowTelemetry@@QEAAXXZ @ 0x180471DE0 (-CancelledDueToLock@ShowFlyoutActivity@MeetNowTelemetry@@QEAAXXZ.c)
 *     ?NotifyFailure@?$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1804727F0 (-NotifyFailure@-$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgRefl.c)
 *     ?OnViewHidden@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180473DC0 (-OnViewHidden@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?StartActivity@ShowFlyoutActivity@MeetNowTelemetry@@QEAAX_N@Z @ 0x1804755F8 (-StartActivity@ShowFlyoutActivity@MeetNowTelemetry@@QEAAX_N@Z.c)
 *     ?Stop@?$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180475720 (-Stop@-$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_.c)
 *     ?StopActivity@ShowFlyoutActivity@MeetNowTelemetry@@MEAAXXZ @ 0x180475830 (-StopActivity@ShowFlyoutActivity@MeetNowTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<MeetNowTelemetryLogging>::get(__int64 a1, void (__cdecl *a2)())
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
         &`MeetNowTelemetryLogging::Instance'::`2'::wrapper,
         0,
         (PBOOL)&v8,
         (LPVOID *)&v9)
    && (_DWORD)v8 )
  {
    v6 = &`MeetNowTelemetryLogging::Instance'::`2'::wrapper;
    v9 = &qword_18098F798;
    qword_18098F798 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_18098F7B0 = (__int64)&`MeetNowTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v7 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v6, v3, v4);
  }
  return v9;
}
