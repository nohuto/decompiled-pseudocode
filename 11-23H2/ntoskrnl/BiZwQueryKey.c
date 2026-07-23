/*
 * XREFs of BiZwQueryKey @ 0x140373FE4
 * Callers:
 *     BiEnumerateSubKeys @ 0x140803DDC (BiEnumerateSubKeys.c)
 *     BiGetKeyName @ 0x140805A94 (BiGetKeyName.c)
 * Callees:
 *     ZwQueryKey @ 0x14041B3B0 (ZwQueryKey.c)
 */

NTSTATUS __fastcall BiZwQueryKey(void *a1, KEY_INFORMATION_CLASS a2, void *a3, ULONG a4, PULONG ResultLength)
{
  return ZwQueryKey(a1, a2, a3, a4, ResultLength);
}
