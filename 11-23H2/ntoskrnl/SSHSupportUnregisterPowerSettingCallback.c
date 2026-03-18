/*
 * XREFs of SSHSupportUnregisterPowerSettingCallback @ 0x1409A2494
 * Callers:
 *     SshInitialize @ 0x140B51B2C (SshInitialize.c)
 * Callees:
 *     PoUnregisterPowerSettingCallback @ 0x140987070 (PoUnregisterPowerSettingCallback.c)
 */

NTSTATUS SSHSupportUnregisterPowerSettingCallback()
{
  return PoUnregisterPowerSettingCallback(SshpPowerSettingHandle);
}
