/*
 * XREFs of PoFxActivateDeviceForSystemTransition @ 0x140587654
 * Callers:
 *     PopNotifyDevice @ 0x140AA72CC (PopNotifyDevice.c)
 * Callees:
 *     PopFxActivateDevice @ 0x140322C60 (PopFxActivateDevice.c)
 */

void __fastcall PoFxActivateDeviceForSystemTransition(__int64 a1, char a2)
{
  PopFxActivateDevice(a1, 1, a2);
}
