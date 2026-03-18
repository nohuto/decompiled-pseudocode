/*
 * XREFs of AmlisuppCompletePassive @ 0x1C000B5B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __fastcall AmlisuppCompletePassive(__int64 a1, int a2, __int64 a3, struct _KEVENT *a4)
{
  a4[1].Header.LockNV = a2;
  return KeSetEvent(a4, 0, 0);
}
