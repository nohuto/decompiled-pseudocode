/*
 * XREFs of ZwApphelpCacheControl @ 0x14041BA70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwApphelpCacheControl(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
