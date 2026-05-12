/*
 * XREFs of sub_1C0048030 @ 0x1C0048030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __fastcall sub_1C0048030(LONG a1, struct _KEVENT *a2)
{
  a2[2].Header.LockNV = a1;
  return KeSetEvent(a2 + 1, 0, 0);
}
