/*
 * XREFs of ZwDisableLastKnownGood @ 0x14041D360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDisableLastKnownGood(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
