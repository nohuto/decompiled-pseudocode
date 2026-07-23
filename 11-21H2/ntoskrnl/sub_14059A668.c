/*
 * XREFs of sub_14059A668 @ 0x14059A668
 * Callers:
 *     sub_14059A6AC @ 0x14059A6AC (sub_14059A6AC.c)
 *     sub_140753C58 @ 0x140753C58 (sub_140753C58.c)
 *     sub_14096EC0C @ 0x14096EC0C (sub_14096EC0C.c)
 *     sub_14097F73C @ 0x14097F73C (sub_14097F73C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14059A668(unsigned __int64 a1, const signed __int64 *a2)
{
  return _bittest64(a2, 2 * (a1 >> 4)) | (2 * (unsigned int)_bittest64(a2, 2 * (a1 >> 4) + 1));
}
