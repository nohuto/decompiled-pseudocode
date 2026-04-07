/*
 * XREFs of ?_TriggerAnimation@CAnimationClock@@AEAAJXZ @ 0x18000400C
 * Callers:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x180006004 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 * Callees:
 *     ??1TriggerClock@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x1800040E0 (--1TriggerClock@AnimationClockLoggingTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@TriggerClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z @ 0x18000483C (-StartActivity@TriggerClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z.c)
 *     ?Stop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180005D64 (-Stop@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??0?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800066F4 (--0-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800402D4 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800AA2A8 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$CreateProxyFromSharedHandle@VCAnimationTriggerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCAnimationTriggerProxy@@@Z @ 0x1800AE374 (--$CreateProxyFromSharedHandle@VCAnimationTriggerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCAnimation.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAnimationClock::_TriggerAnimation(CAnimationClock *this)
{
  int v2; // edi
  __int64 v3; // rdx
  int v5; // eax
  CBaseObject *v6; // rbx
  CBaseObject *v7; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD hObject[3]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v9[40]; // [rsp+48h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A0h] [rbp+98h]

  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v9);
  v9[0] = &AnimationClockLoggingTelemetry::TriggerClock::`vftable';
  *(_OWORD *)&hObject[1] = *(_OWORD *)((char *)this + 120);
  AnimationClockLoggingTelemetry::TriggerClock::StartActivity(
    (AnimationClockLoggingTelemetry::TriggerClock *)v9,
    (struct _GUID *)&hObject[1]);
  v2 = 0;
  if ( (unsigned __int64)(*((_QWORD *)this + 14) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v5 = NtDCompositionCommitSynchronizationObject();
    if ( v5 < 0 )
    {
      v2 = wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0xDA,
             (unsigned int)"clientcore\\windows\\dwm\\udwm\\animationclock.cpp",
             (const char *)(unsigned int)v5,
             (int)v7);
      goto LABEL_4;
    }
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (char *)this + 112,
      0LL);
  }
  v3 = *((_QWORD *)this + 13);
  if ( v3 )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                              + 6)
                                                                            + 32LL)
                                                              + 224LL))(
           *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 32LL),
           v3,
           &hObject[1]);
    if ( v2 >= 0 )
    {
      v7 = 0LL;
      v2 = CCompositor::CreateProxyFromSharedHandle<CAnimationTriggerProxy>(
             *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
             hObject[1],
             &v7);
      v6 = v7;
      if ( v2 >= 0 )
        v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)v7 + 2) + 16LL) + 768LL))(
               *(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL),
               *(unsigned int *)(*((_QWORD *)v7 + 2) + 24LL),
               *((_QWORD *)this + 11));
      CloseHandle((HANDLE)hObject[1]);
      if ( v6 )
        CBaseObject::Release(v6);
    }
  }
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v9, (unsigned int)v2);
LABEL_4:
  AnimationClockLoggingTelemetry::TriggerClock::~TriggerClock((AnimationClockLoggingTelemetry::TriggerClock *)v9);
  return (unsigned int)v2;
}
