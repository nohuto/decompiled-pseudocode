/*
 * XREFs of ZwAcquireCrossVmMutant @ 0x14041BDD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAcquireCrossVmMutant(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
