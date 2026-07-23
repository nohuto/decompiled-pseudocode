/*
 * XREFs of PoFxActivateDeviceForSystemTransition @ 0x140587B44
 * Callers:
 *     PopNotifyDevice @ 0x140AA713C (PopNotifyDevice.c)
 * Callees:
 *     PopFxActivateDevice @ 0x140322EF0 (PopFxActivateDevice.c)
 */

void __fastcall PoFxActivateDeviceForSystemTransition(__int64 a1, char a2)
{
  PopFxActivateDevice(a1, 1, a2);
}
