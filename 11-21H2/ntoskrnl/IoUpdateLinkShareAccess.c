/*
 * XREFs of IoUpdateLinkShareAccess @ 0x1409367C0
 * Callers:
 *     <none>
 * Callees:
 *     IoUpdateLinkShareAccessEx @ 0x1406B45F0 (IoUpdateLinkShareAccessEx.c)
 */

char __fastcall IoUpdateLinkShareAccess(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  return IoUpdateLinkShareAccessEx(a1, a2, a3, 0);
}
