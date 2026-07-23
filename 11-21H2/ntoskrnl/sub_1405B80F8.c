/*
 * XREFs of sub_1405B80F8 @ 0x1405B80F8
 * Callers:
 *     sub_1403C4E98 @ 0x1403C4E98 (sub_1403C4E98.c)
 *     sub_1405B7B38 @ 0x1405B7B38 (sub_1405B7B38.c)
 * Callees:
 *     sub_14033C3A0 @ 0x14033C3A0 (sub_14033C3A0.c)
 */

unsigned __int64 __fastcall sub_1405B80F8(__int64 a1, int a2)
{
  if ( a2 && (*(_BYTE *)(a1 + 34) & 7) != 6 )
    _InterlockedIncrement(&dword_140C25540);
  return sub_14033C3A0((unsigned __int64 *)(a1 + 16), a2);
}
