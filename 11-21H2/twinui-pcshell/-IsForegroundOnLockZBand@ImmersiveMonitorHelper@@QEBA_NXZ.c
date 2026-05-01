/*
 * XREFs of ?IsForegroundOnLockZBand@ImmersiveMonitorHelper@@QEBA_NXZ @ 0x1800276C8
 * Callers:
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180027340 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall ImmersiveMonitorHelper::IsForegroundOnLockZBand(ImmersiveMonitorHelper *this)
{
  HWND ForegroundWindow; // rax
  ImmersiveMonitorHelper *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  ForegroundWindow = GetForegroundWindow();
  return (unsigned int)GetWindowBand(ForegroundWindow, &v3) && (_DWORD)v3 == 17;
}
