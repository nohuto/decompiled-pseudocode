/*
 * XREFs of ZwSetUuidSeed @ 0x14041E8F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetUuidSeed(PCHAR Seed)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Seed);
}
