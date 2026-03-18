/*
 * XREFs of BiZwSetValueKey @ 0x1403A774C
 * Callers:
 *     BiSetRegistryValue @ 0x1408123B4 (BiSetRegistryValue.c)
 * Callees:
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 */

NTSTATUS __fastcall BiZwSetValueKey(void *a1, UNICODE_STRING *a2, __int64 a3, ULONG a4, PVOID Data, ULONG DataSize)
{
  return ZwSetValueKey(a1, a2, 0, a4, Data, DataSize);
}
