/*
 * XREFs of SSHSupportUnregisterPowerSettingCallback @ 0x1409A2694
 * Callers:
 *     SshInitialize @ 0x140B51B2C (SshInitialize.c)
 * Callees:
 *     PoUnregisterPowerSettingCallback @ 0x140987270 (PoUnregisterPowerSettingCallback.c)
 */

NTSTATUS SSHSupportUnregisterPowerSettingCallback()
{
  return PoUnregisterPowerSettingCallback(SshpPowerSettingHandle);
}
