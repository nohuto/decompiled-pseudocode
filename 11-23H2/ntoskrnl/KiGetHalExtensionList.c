/*
 * XREFs of KiGetHalExtensionList @ 0x140B95914
 * Callers:
 *     sub_140B19730 @ 0x140B19730 (sub_140B19730.c)
 * Callees:
 *     <none>
 */

__int64 KiGetHalExtensionList()
{
  return *(_QWORD *)(KeLoaderBlock_0 + 240) + 2584LL;
}
