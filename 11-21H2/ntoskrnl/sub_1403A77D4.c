/*
 * XREFs of sub_1403A77D4 @ 0x1403A77D4
 * Callers:
 *     sub_14081287C @ 0x14081287C (sub_14081287C.c)
 * Callees:
 *     ZwEnumerateKey @ 0x14041BDA0 (ZwEnumerateKey.c)
 */

NTSTATUS __fastcall sub_1403A77D4(void *a1, ULONG a2, __int64 a3, void *a4, ULONG Length, PULONG ResultLength)
{
  return ZwEnumerateKey(a1, a2, KeyBasicInformation, a4, Length, ResultLength);
}
