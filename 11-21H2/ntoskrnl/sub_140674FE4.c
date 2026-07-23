/*
 * XREFs of sub_140674FE4 @ 0x140674FE4
 * Callers:
 *     sub_140673C3C @ 0x140673C3C (sub_140673C3C.c)
 *     sub_140674F0C @ 0x140674F0C (sub_140674F0C.c)
 *     sub_1407E0DC4 @ 0x1407E0DC4 (sub_1407E0DC4.c)
 * Callees:
 *     sub_140675014 @ 0x140675014 (sub_140675014.c)
 */

__int64 __fastcall sub_140674FE4(__int64 a1)
{
  __int64 result; // rax

  if ( *(_WORD *)(a1 + 24) )
    return sub_140675014(qword_140C5AE28 + 56);
  return result;
}
