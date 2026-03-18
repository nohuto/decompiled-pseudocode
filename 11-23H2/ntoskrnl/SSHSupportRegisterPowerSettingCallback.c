/*
 * XREFs of SSHSupportRegisterPowerSettingCallback @ 0x140824F70
 * Callers:
 *     SshpSubscribeCallbacks @ 0x140B55460 (SshpSubscribeCallbacks.c)
 * Callees:
 *     PoRegisterPowerSettingCallback @ 0x1407A7060 (PoRegisterPowerSettingCallback.c)
 */

NTSTATUS SSHSupportRegisterPowerSettingCallback()
{
  return PoRegisterPowerSettingCallback(
           0LL,
           &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
           SshpPowerSettingCallback,
           0LL,
           &SshpPowerSettingHandle);
}
