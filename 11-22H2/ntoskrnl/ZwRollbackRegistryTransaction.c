/*
 * XREFs of ZwRollbackRegistryTransaction @ 0x14041D820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwRollbackRegistryTransaction(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
