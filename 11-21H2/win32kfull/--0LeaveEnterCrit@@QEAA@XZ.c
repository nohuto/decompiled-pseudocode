/*
 * XREFs of ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C0159AD4
 * Callers:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0052EC0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxDesktopThreadWaiter @ 0x1C00A4844 (xxxDesktopThreadWaiter.c)
 *     xxxCreateDesktopEx @ 0x1C00CFDF4 (xxxCreateDesktopEx.c)
 *     xxxRemoteReconnect @ 0x1C01528E0 (xxxRemoteReconnect.c)
 *     xxxUserModeCallback @ 0x1C022D320 (xxxUserModeCallback.c)
 * Callees:
 *     <none>
 */

LeaveEnterCrit *__fastcall LeaveEnterCrit::LeaveEnterCrit(LeaveEnterCrit *this)
{
  UserSessionSwitchLeaveCrit(this);
  return this;
}
