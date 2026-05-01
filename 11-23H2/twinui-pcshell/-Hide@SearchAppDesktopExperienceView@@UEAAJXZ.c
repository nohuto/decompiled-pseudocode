/*
 * XREFs of ?Hide@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x180479A20
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18014D168 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18042955C (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     ??1CortanaExperienceManager_Hide@CortanaProactiveTelemetry@@QEAA@XZ @ 0x180476DB4 (--1CortanaExperienceManager_Hide@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@CortanaExperienceManager_Hide@CortanaProactiveTelemetry@@QEAAXXZ @ 0x18047D018 (-StartActivity@CortanaExperienceManager_Hide@CortanaProactiveTelemetry@@QEAAXXZ.c)
 *     ?UnregisterGlobalBackButton@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x18047E0B4 (-UnregisterGlobalBackButton@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchAppDesktopExperienceView::Hide(SearchAppDesktopExperienceView *this)
{
  __int64 v2; // rcx
  DWORD v3; // edx
  _QWORD v5[40]; // [rsp+20h] [rbp-158h] BYREF

  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v5,
    (__int64)"CortanaExperienceManager_Hide");
  v5[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_Hide::`vftable';
  CortanaProactiveTelemetry::CortanaExperienceManager_Hide::StartActivity((CortanaProactiveTelemetry::CortanaExperienceManager_Hide *)v5);
  *((_BYTE *)this + 176) = 0;
  v2 = *((_QWORD *)this + 15);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 96LL))(v2);
  SearchAppDesktopExperienceView::UnregisterGlobalBackButton((SearchAppDesktopExperienceView *)((char *)this - 24));
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
    (__int64)v5,
    v3);
  CortanaProactiveTelemetry::CortanaExperienceManager_Hide::~CortanaExperienceManager_Hide((CortanaProactiveTelemetry::CortanaExperienceManager_Hide *)v5);
  return 0LL;
}
