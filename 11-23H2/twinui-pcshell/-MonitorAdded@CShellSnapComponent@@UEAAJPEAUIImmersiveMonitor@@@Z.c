/*
 * XREFs of ?MonitorAdded@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x180661AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAnySnapFlyoutInstanceVisible@SnapFlyoutHost@@QEAA_NXZ @ 0x18006C428 (-IsAnySnapFlyoutInstanceVisible@SnapFlyoutHost@@QEAA_NXZ.c)
 *     ?HideAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@_N@Z @ 0x1802274E4 (-HideAsync@SnapFlyoutHost@@QEAA-AUfire_and_forget@winrt@@_N@Z.c)
 */

__int64 __fastcall CShellSnapComponent::MonitorAdded(CShellSnapComponent *this, struct IImmersiveMonitor *a2)
{
  RTL_SRWLOCK *v3; // rcx
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = (RTL_SRWLOCK *)*((_QWORD *)this + 90);
  if ( v3 && SnapFlyoutHost::IsAnySnapFlyoutInstanceVisible(v3) )
  {
    try
    {
      SnapFlyoutHost::HideAsync(*((_QWORD *)this + 90), &v7, 1);
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x7D5,
                             (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                             v4);
    }
  }
  return 0LL;
}
