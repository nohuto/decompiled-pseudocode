/*
 * XREFs of ?get@?$static_lazy@VAAMTraceProvider@@@details@wil@@QEAAPEAVAAMTraceProvider@@P6AXXZ@Z @ 0x180633730
 * Callers:
 *     ??1?$_TlgActivityBase@V?$ActivityData@VAAMTraceProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAAMTraceProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0A@$04@@IEAA@XZ @ 0x18062F324 (--1-$_TlgActivityBase@V-$ActivityData@VAAMTraceProvider@@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?NotifyFailure@?$ActivityBase@VAAMTraceProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180631130 (-NotifyFailure@-$ActivityBase@VAAMTraceProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?StartActivity@ActivateApplicationInContainer@AAMTraceProvider@@QEAAXU_GUID@@PEBG1K@Z @ 0x180632380 (-StartActivity@ActivateApplicationInContainer@AAMTraceProvider@@QEAAXU_GUID@@PEBG1K@Z.c)
 *     ?StartActivity@ActivateRemotePathInContainer@AAMTraceProvider@@QEAAXU_GUID@@PEBG1@Z @ 0x180632470 (-StartActivity@ActivateRemotePathInContainer@AAMTraceProvider@@QEAAXU_GUID@@PEBG1@Z.c)
 *     ?StartActivity@ModifyUnpackagedAppInContainer@AAMTraceProvider@@QEAAXU_GUID@@PEBG1@Z @ 0x18063254C (-StartActivity@ModifyUnpackagedAppInContainer@AAMTraceProvider@@QEAAXU_GUID@@PEBG1@Z.c)
 *     ?Stop@ActivateApplicationInContainer@AAMTraceProvider@@QEAAXU_GUID@@J@Z @ 0x1806326C8 (-Stop@ActivateApplicationInContainer@AAMTraceProvider@@QEAAXU_GUID@@J@Z.c)
 *     ?Stop@ActivateRemotePathInContainer@AAMTraceProvider@@QEAAXU_GUID@@J@Z @ 0x18063295C (-Stop@ActivateRemotePathInContainer@AAMTraceProvider@@QEAAXU_GUID@@J@Z.c)
 *     ?Stop@ModifyUnpackagedAppInContainer@AAMTraceProvider@@QEAAXU_GUID@@J@Z @ 0x180632BF0 (-Stop@ModifyUnpackagedAppInContainer@AAMTraceProvider@@QEAAXU_GUID@@J@Z.c)
 *     ?StopActivity@ActivateApplicationInContainer@AAMTraceProvider@@MEAAXXZ @ 0x180632E90 (-StopActivity@ActivateApplicationInContainer@AAMTraceProvider@@MEAAXXZ.c)
 *     ?StopActivity@ActivateRemotePathInContainer@AAMTraceProvider@@MEAAXXZ @ 0x1806330D0 (-StopActivity@ActivateRemotePathInContainer@AAMTraceProvider@@MEAAXXZ.c)
 *     ?StopActivity@ModifyUnpackagedAppInContainer@AAMTraceProvider@@MEAAXXZ @ 0x180633310 (-StopActivity@ModifyUnpackagedAppInContainer@AAMTraceProvider@@MEAAXXZ.c)
 *     ?zInternalStart@?$ActivityBase@VAAMTraceProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180633890 (-zInternalStart@-$ActivityBase@VAAMTraceProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<AAMTraceProvider>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v3; // rdx
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  union _RTL_RUN_ONCE *v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v9; // [rsp+50h] [rbp+18h] BYREF

  v8 = a1;
  v9 = 0LL;
  if ( __std_init_once_begin_initialize(&`AAMTraceProvider::Instance'::`2'::wrapper, 0, (PBOOL)&v8, (LPVOID *)&v9)
    && (_DWORD)v8 )
  {
    v6 = &`AAMTraceProvider::Instance'::`2'::wrapper;
    v9 = &qword_18098FE38;
    qword_18098FE38 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_18098FE50 = (__int64)&`AAMTraceProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v7 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v6, v3, v4);
  }
  return v9;
}
