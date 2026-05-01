/*
 * XREFs of ?DisplaySettingsChange@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180035DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsVisible@SnapFlyoutHost@@QEAA_NXZ @ 0x180035E28 (-IsVisible@SnapFlyoutHost@@QEAA_NXZ.c)
 *     ?HideAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@_N@Z @ 0x1801C0560 (-HideAsync@SnapFlyoutHost@@QEAA-AUfire_and_forget@winrt@@_N@Z.c)
 */

__int64 __fastcall CShellSnapComponent::DisplaySettingsChange(__int64 a1)
{
  SnapFlyoutHost *v2; // rcx
  __int64 v3; // r8
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(SnapFlyoutHost **)(a1 + 784);
  if ( v2 && SnapFlyoutHost::IsVisible(v2) )
  {
    LOBYTE(v3) = 1;
    SnapFlyoutHost::HideAsync(*(_QWORD *)(a1 + 784), &v5, v3);
  }
  return 0LL;
}
