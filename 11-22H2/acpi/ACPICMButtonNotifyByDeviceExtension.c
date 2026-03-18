/*
 * XREFs of ACPICMButtonNotifyByDeviceExtension @ 0x1C0018BB0
 * Callers:
 *     <none>
 * Callees:
 *     ACPICMButtonNotify @ 0x1C0018AC8 (ACPICMButtonNotify.c)
 */

_QWORD *__fastcall ACPICMButtonNotifyByDeviceExtension(__int64 a1, unsigned int a2)
{
  return ACPICMButtonNotify(0LL, a1, a2);
}
