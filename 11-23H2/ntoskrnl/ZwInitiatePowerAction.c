/*
 * XREFs of ZwInitiatePowerAction @ 0x14041CE60
 * Callers:
 *     PoShutdownBugCheck @ 0x1409895B0 (PoShutdownBugCheck.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwInitiatePowerAction(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
