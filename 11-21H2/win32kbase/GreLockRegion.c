/*
 * XREFs of GreLockRegion @ 0x1C00BA430
 * Callers:
 *     <none>
 * Callees:
 *     HmgLockEx @ 0x1C00226A0 (HmgLockEx.c)
 */

_BOOL8 __fastcall GreLockRegion(unsigned int a1, __int64 a2)
{
  LOBYTE(a2) = 4;
  return HmgLockEx(a1, a2, 0LL) != 0;
}
