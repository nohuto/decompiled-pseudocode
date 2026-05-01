/*
 * XREFs of ?RegisterSessionIdleDetector@DesktopSingleViewShellExperiencePersonality@@AEAAJXZ @ 0x1800FC7FC
 * Callers:
 *     ?EnableSessionIdleNotifications@DesktopSingleViewShellExperiencePersonality@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800FC770 (-EnableSessionIdleNotifications@DesktopSingleViewShellExperiencePersonality@@UEAAJPEAUIServicePr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIVirtualDesktopHotkeyHandlerPrivate@@UIVirtualDesktopHotkeyHandler@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EE220 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$C_ea_1800EE220.c)
 *     Microsoft::WRL::Details::Make_SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea_____lambda_d01d769641b0a3ac426af1e1f82876ea__&_ @ 0x1800FC8E4 (Microsoft--WRL--Details--Make_SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea_____l.c)
 *     ?OnSessionIdleStateChanged@CSingleViewShellExperience@@QEAAJH@Z @ 0x1800FCA18 (-OnSessionIdleStateChanged@CSingleViewShellExperience@@QEAAJH@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DesktopSingleViewShellExperiencePersonality::RegisterSessionIdleDetector(
        DesktopSingleViewShellExperiencePersonality *this)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // esi
  int v5; // eax
  volatile int *v6; // rdx
  int v8[2]; // [rsp+20h] [rbp-18h] BYREF
  DesktopSingleViewShellExperiencePersonality *v9; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this + 1) + 96LL);
  *(_QWORD *)v8 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v9 = this;
  Microsoft::WRL::Details::Make_SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea_____lambda_d01d769641b0a3ac426af1e1f82876ea____(
    &v12,
    v8);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v8);
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 3) + 32LL))(
         *((_QWORD *)this + 3),
         v12,
         (char *)this + 32);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x58,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\desktopsingleviewshellexperiencepersonality.cpp",
      (const char *)(unsigned int)v3);
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3), &v11);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5E,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\desktopsingleviewshellexperiencepersonality.cpp",
        (const char *)(unsigned int)v5);
    else
      CSingleViewShellExperience::OnSessionIdleStateChanged(*((CSingleViewShellExperience **)this + 1), v11);
    v4 = 0;
  }
  if ( v12 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IVirtualDesktopHotkeyHandlerPrivate,IVirtualDesktopHotkeyHandler,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::Release(
      v12,
      v6);
  return v4;
}
