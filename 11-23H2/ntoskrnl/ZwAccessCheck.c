/*
 * XREFs of ZwAccessCheck @ 0x14041AD60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwAccessCheck()
{
  _disable();
  __readeflags();
  return KiServiceInternal();
}
