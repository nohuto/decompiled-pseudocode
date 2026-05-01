/*
 * XREFs of ?IsDeviceConvertible@TabletModeHelpers@@YA_NXZ @ 0x1805131F8
 * Callers:
 *     ?InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800A5144 (-InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x18017F720 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 *     ?HasConvertibleSlateModeChanged@TabletModeHelpers@@YA_NXZ @ 0x1801BC128 (-HasConvertibleSlateModeChanged@TabletModeHelpers@@YA_NXZ.c)
 */

bool __fastcall TabletModeHelpers::IsDeviceConvertible(
        TabletModeHelpers *this,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  TabletModeHelpers *v4; // rcx
  unsigned int v5; // r9d
  int v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0;
  if ( (int)SHRegGetBOOLWithREGSAM(
              HKEY_CURRENT_USER,
              L"System\\CurrentControlSet\\Control\\PriorityControl",
              L"ConvertibleChassis",
              a4,
              &v7) >= 0
    && v7
    || TabletModeHelpers::HasConvertibleSlateModeChanged(v4) )
  {
    return 1;
  }
  if ( (int)SHRegGetBOOLWithREGSAM(
              HKEY_CURRENT_USER,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell",
              L"DeviceConvertible",
              v5,
              &v7) < 0 )
    return 0;
  return v7 != 0;
}
