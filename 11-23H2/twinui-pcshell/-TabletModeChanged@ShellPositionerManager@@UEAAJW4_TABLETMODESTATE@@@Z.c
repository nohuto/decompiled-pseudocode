/*
 * XREFs of ?TabletModeChanged@ShellPositionerManager@@UEAAJW4_TABLETMODESTATE@@@Z @ 0x1805A4C80
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180109938 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803F0F08 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ??1TMChangeHandler@ShellPositionerTelemetry@@QEAA@XZ @ 0x1805A2738 (--1TMChangeHandler@ShellPositionerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@TMChangeHandler@ShellPositionerTelemetry@@QEAAXPEBG@Z @ 0x1805A3F0C (-StartActivity@TMChangeHandler@ShellPositionerTelemetry@@QEAAXPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellPositionerManager::TabletModeChanged(__int64 a1, int a2)
{
  DWORD v4; // edx
  int v5; // eax
  int v7[2]; // [rsp+20h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v7,
    (__int64)"TMChangeHandler");
  *(_QWORD *)v7 = &ShellPositionerTelemetry::TMChangeHandler::`vftable';
  ShellPositionerTelemetry::TMChangeHandler::StartActivity(
    (ShellPositionerTelemetry::TMChangeHandler *)v7,
    L"ShellPositionerManager");
  if ( a2 != *(_DWORD *)(a1 + 40) )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, bool, bool))(*(_QWORD *)(a1 - 16) + 40LL))(
           a1 - 16,
           *(_DWORD *)(a1 + 40) == 1,
           a2 == 1);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1EB,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v5);
    *(_DWORD *)(a1 + 40) = a2;
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
    (__int64 *)v7,
    v4);
  ShellPositionerTelemetry::TMChangeHandler::~TMChangeHandler((ShellPositionerTelemetry::TMChangeHandler *)v7);
  return 0LL;
}
