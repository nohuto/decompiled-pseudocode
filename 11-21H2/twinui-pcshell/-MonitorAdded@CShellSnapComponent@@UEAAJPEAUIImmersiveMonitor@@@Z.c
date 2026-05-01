/*
 * XREFs of ?MonitorAdded@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x180594240
 * Callers:
 *     <none>
 * Callees:
 *     ?IsVisible@SnapFlyoutHost@@QEAA_NXZ @ 0x180035E28 (-IsVisible@SnapFlyoutHost@@QEAA_NXZ.c)
 *     ?HideAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@_N@Z @ 0x1801C0560 (-HideAsync@SnapFlyoutHost@@QEAA-AUfire_and_forget@winrt@@_N@Z.c)
 */

__int64 __fastcall CShellSnapComponent::MonitorAdded(CShellSnapComponent *this, struct IImmersiveMonitor *a2)
{
  SnapFlyoutHost *v3; // rcx
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = (SnapFlyoutHost *)*((_QWORD *)this + 98);
  if ( v3 && SnapFlyoutHost::IsVisible(v3) )
  {
    try
    {
      SnapFlyoutHost::HideAsync(*((_QWORD *)this + 98), &v7, 1);
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x70C,
                             (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                             v4);
    }
  }
  return 0LL;
}
