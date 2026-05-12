/*
 * XREFs of sub_1C00793B0 @ 0x1C00793B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __fastcall sub_1C00793B0(__int64 a1, struct _KEVENT *a2)
{
  return KeSetEvent(a2, 0, 0);
}
