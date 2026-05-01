/*
 * XREFs of ?GetDesktopSwitchPreference@DelayedTileActivationCallSite@@UEAAJPEAW4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x180185670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DelayedTileActivationCallSite::GetDesktopSwitchPreference(
        DelayedTileActivationCallSite *this,
        enum IAM_DESKTOP_SWITCH_OPTION *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 8);
  return 0LL;
}
