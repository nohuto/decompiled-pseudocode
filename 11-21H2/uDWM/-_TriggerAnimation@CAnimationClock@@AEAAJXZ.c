/*
 * XREFs of ?_TriggerAnimation@CAnimationClock@@AEAAJXZ @ 0x1800A42BC
 * Callers:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x1800A3DF8 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180037414 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800A1798 (--0-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??1TriggerClock@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x1800A1B2C (--1TriggerClock@AnimationClockLoggingTelemetry@@QEAA@XZ.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800A2864 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?StartActivity@TriggerClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z @ 0x1800A2E00 (-StartActivity@TriggerClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z.c)
 *     ?Stop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800A2EB4 (-Stop@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$CreateProxyFromSharedHandle@VCAnimationTriggerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCAnimationTriggerProxy@@@Z @ 0x1800A9330 (--$CreateProxyFromSharedHandle@VCAnimationTriggerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCAnimation.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAnimationClock::_TriggerAnimation(CAnimationClock *this)
{
  int v2; // edi
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rdx
  CBaseObject *v6; // rbx
  CBaseObject *v8; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD hObject[3]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v10[40]; // [rsp+48h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A0h] [rbp+98h]

  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v10,
    (__int64)"TriggerClock");
  v10[0] = &AnimationClockLoggingTelemetry::TriggerClock::`vftable';
  *(_OWORD *)&hObject[1] = *(_OWORD *)((char *)this + 120);
  AnimationClockLoggingTelemetry::TriggerClock::StartActivity(
    (AnimationClockLoggingTelemetry::TriggerClock *)v10,
    (struct _GUID *)&hObject[1]);
  v2 = 0;
  v3 = *((_QWORD *)this + 14);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v4 = NtDCompositionCommitSynchronizationObject(v3);
    if ( v4 < 0 )
    {
      v2 = wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0xDA,
             (int)"clientcore\\windows\\dwm\\udwm\\animationclock.cpp",
             (const char *)(unsigned int)v4);
      goto LABEL_12;
    }
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)this + 14,
      0LL);
  }
  v5 = *((_QWORD *)this + 13);
  if ( v5 )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                              + 5)
                                                                            + 24LL)
                                                              + 224LL))(
           *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 24LL),
           v5,
           &hObject[1]);
    if ( v2 >= 0 )
    {
      v8 = 0LL;
      v2 = CCompositor::CreateProxyFromSharedHandle<CAnimationTriggerProxy>(
             *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
             hObject[1],
             &v8);
      v6 = v8;
      if ( v2 >= 0 )
        v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)v8 + 2) + 16LL) + 848LL))(
               *(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL),
               *(unsigned int *)(*((_QWORD *)v8 + 2) + 24LL),
               *((_QWORD *)this + 11));
      CloseHandle((HANDLE)hObject[1]);
      if ( v6 )
        CBaseObject::Release(v6);
    }
  }
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v10, v2);
LABEL_12:
  AnimationClockLoggingTelemetry::TriggerClock::~TriggerClock((AnimationClockLoggingTelemetry::TriggerClock *)v10);
  return (unsigned int)v2;
}
