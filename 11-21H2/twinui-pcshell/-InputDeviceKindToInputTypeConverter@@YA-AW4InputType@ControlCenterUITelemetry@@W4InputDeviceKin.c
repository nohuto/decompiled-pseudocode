/*
 * XREFs of ?InputDeviceKindToInputTypeConverter@@YA?AW4InputType@ControlCenterUITelemetry@@W4InputDeviceKind@Shell@UI@WindowsUdk@winrt@@@Z @ 0x180353E88
 * Callers:
 *     CControlCenterExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x180194C00 (CControlCenterExperienceManager--DismissRequested$_ResumeCoro$1.c)
 *     CControlCenterExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x1801958E0 (CControlCenterExperienceManager--ShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InputDeviceKindToInputTypeConverter(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return 2LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 1LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 5LL;
  if ( v3 == 1 )
    return 3LL;
  return 0LL;
}
