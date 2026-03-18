/*
 * XREFs of BiZwSetValueKey @ 0x140373D60
 * Callers:
 *     BiSetRegistryValue @ 0x140803A1C (BiSetRegistryValue.c)
 * Callees:
 *     ZwSetValueKey @ 0x14041B960 (ZwSetValueKey.c)
 */

NTSTATUS __fastcall BiZwSetValueKey(void *a1, UNICODE_STRING *a2, __int64 a3, ULONG a4, PVOID Data, ULONG DataSize)
{
  return ZwSetValueKey(a1, a2, 0, a4, Data, DataSize);
}
