/*
 * XREFs of sub_140828B8C @ 0x140828B8C
 * Callers:
 *     sub_140B019D0 @ 0x140B019D0 (sub_140B019D0.c)
 * Callees:
 *     PoRegisterPowerSettingCallback @ 0x140762500 (PoRegisterPowerSettingCallback.c)
 */

NTSTATUS sub_140828B8C()
{
  return PoRegisterPowerSettingCallback(0LL, &stru_140011C18, sub_1409A15B0, 0LL, &qword_140C1C388);
}
