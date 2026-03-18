/*
 * XREFs of BiAreBootEntriesEqual @ 0x140A5DA00
 * Callers:
 *     BiUpdateBcdObject @ 0x140804304 (BiUpdateBcdObject.c)
 *     BiUpdateEfiEntry @ 0x140A5EEEC (BiUpdateEfiEntry.c)
 * Callees:
 *     memcmp @ 0x1403DA350 (memcmp.c)
 */

bool __fastcall BiAreBootEntriesEqual(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // eax

  v2 = a1[1];
  return v2 == a2[1] && !memcmp(a1, a2, v2);
}
