/*
 * XREFs of sub_1406C01F4 @ 0x1406C01F4
 * Callers:
 *     sub_14065AED8 @ 0x14065AED8 (sub_14065AED8.c)
 *     sub_140714E58 @ 0x140714E58 (sub_140714E58.c)
 *     sub_140720260 @ 0x140720260 (sub_140720260.c)
 *     sub_14091210C @ 0x14091210C (sub_14091210C.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1406C01F4(__int64 a1, __int64 a2)
{
  return (*(_DWORD *)(a1 + 160) & 0x80000) != 0 && (*(_BYTE *)(a2 + 16) & 2) != 0;
}
