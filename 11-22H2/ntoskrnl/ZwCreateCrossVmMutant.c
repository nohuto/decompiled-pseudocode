/*
 * XREFs of ZwCreateCrossVmMutant @ 0x14041BBA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateCrossVmMutant(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
