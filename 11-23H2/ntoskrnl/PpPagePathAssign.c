/*
 * XREFs of PpPagePathAssign @ 0x140853C30
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B4B914 (IoInitSystemPreDrivers.c)
 * Callees:
 *     PiPagePathSetState @ 0x140853C48 (PiPagePathSetState.c)
 */

__int64 __fastcall PpPagePathAssign(void *a1)
{
  return PiPagePathSetState(a1);
}
