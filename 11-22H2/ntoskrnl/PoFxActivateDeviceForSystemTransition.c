/*
 * XREFs of PoFxActivateDeviceForSystemTransition @ 0x1405876E4
 * Callers:
 *     PopNotifyDevice @ 0x140AA738C (PopNotifyDevice.c)
 * Callees:
 *     PopFxActivateDevice @ 0x140322A80 (PopFxActivateDevice.c)
 */

void __fastcall PoFxActivateDeviceForSystemTransition(__int64 a1, char a2)
{
  PopFxActivateDevice(a1, 1, a2);
}
