/*
 * XREFs of ?ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUHWND__@@UtagPOINT@@@Z @ 0x18044C8AC
 * Callers:
 *     XamlLauncher::LauncherShowRequested$_ResumeCoro$1 @ 0x1801AB3D0 (XamlLauncher--LauncherShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z @ 0x1800D4FC0 (-ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall ImmersiveMonitorHelper::ConnectToMonitor(
        ImmersiveMonitorHelper *this,
        HWND hWndFrom,
        struct tagPOINT a3)
{
  __int64 (*v4)(void); // rbx
  int v5; // eax
  bool v6; // bl
  bool result; // al
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IImmersiveMonitor *v9; // [rsp+40h] [rbp+8h] BYREF
  struct tagPOINT v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  MapWindowPoints(hWndFrom, 0LL, &v10, 1u);
  v9 = 0LL;
  v4 = *(__int64 (**)(void))(**((_QWORD **)this + 9) + 96LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
  try
  {
    v5 = v4();
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x163,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
        (const char *)(unsigned int)v5,
        (int)&v9);
    v6 = ImmersiveMonitorHelper::ConnectToMonitor(this, (struct IUnknown *)v9);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
    result = v6;
  }
  catch ( ... )
  {
    return 0;
  }
  return result;
}
