/*
 * XREFs of ??0VirtualDesktopGestureContext@@QEAA@UtagSIZE@@PEAUIVirtualDesktopManagerInternal@@PEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@PEAUIImmersiveMonitorManager@@@Z @ 0x18054EF18
 * Callers:
 *     ??$make_unique_nothrow@VVirtualDesktopGestureContext@@AEAUtagSIZE@@PEAUIVirtualDesktopManagerInternal@@PEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@PEAUIImmersiveMonitorManager@@@wil@@YA?AV?$unique_ptr@VVirtualDesktopGestureContext@@U?$default_delete@VVirtualDesktopGestureContext@@@wistd@@@wistd@@AEAUtagSIZE@@$$QEAPEAUIVirtualDesktopManagerInternal@@$$QEAPEAUISwitchThumbnailDeviceManager@@$$QEAPEAUIApplicationViewCollection@@$$QEAPEAUIImmersiveSettingsCache@@$$QEAPEAUIImmersiveMonitorManager@@@Z @ 0x18054E980 (--$make_unique_nothrow@VVirtualDesktopGestureContext@@AEAUtagSIZE@@PEAUIVirtualDesktopManagerInt.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

VirtualDesktopGestureContext *__fastcall VirtualDesktopGestureContext::VirtualDesktopGestureContext(
        VirtualDesktopGestureContext *this,
        struct tagSIZE a2,
        struct IVirtualDesktopManagerInternal *a3,
        struct ISwitchThumbnailDeviceManager *a4,
        struct IApplicationViewCollection *a5,
        struct IImmersiveSettingsCache *a6,
        struct IImmersiveMonitorManager *a7)
{
  VirtualDesktopGestureContext *result; // rax

  *(_QWORD *)this = a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this);
  *((_QWORD *)this + 1) = a4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 1);
  *((_QWORD *)this + 2) = a5;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 2);
  *((_QWORD *)this + 4) = a7;
  *((_QWORD *)this + 3) = 0LL;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 4);
  *((_QWORD *)this + 5) = a6;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 5);
  *((struct tagSIZE *)this + 7) = a2;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_WORD *)this + 36) = 0;
  *((_BYTE *)this + 74) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 43) = 0;
  *((_QWORD *)this + 22) = GetTickCount64();
  result = this;
  *((_DWORD *)this + 47) = 0;
  *((_QWORD *)this + 24) = 0LL;
  return result;
}
