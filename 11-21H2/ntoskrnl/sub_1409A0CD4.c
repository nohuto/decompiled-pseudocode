/*
 * XREFs of sub_1409A0CD4 @ 0x1409A0CD4
 * Callers:
 *     sub_140B03360 @ 0x140B03360 (sub_140B03360.c)
 * Callees:
 *     PoUnregisterPowerSettingCallback @ 0x1407FC690 (PoUnregisterPowerSettingCallback.c)
 */

NTSTATUS sub_1409A0CD4()
{
  return PoUnregisterPowerSettingCallback(qword_140C1C388);
}
