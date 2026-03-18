/*
 * XREFs of SSHSupportRegisterPowerSettingCallback @ 0x140825ED0
 * Callers:
 *     SshpSubscribeCallbacks @ 0x140B5A6E8 (SshpSubscribeCallbacks.c)
 * Callees:
 *     PoRegisterPowerSettingCallback @ 0x1407A7570 (PoRegisterPowerSettingCallback.c)
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
