/*
 * XREFs of sub_1403BE068 @ 0x1403BE068
 * Callers:
 *     sub_1403BDD00 @ 0x1403BDD00 (sub_1403BDD00.c)
 * Callees:
 *     sub_1403BE424 @ 0x1403BE424 (sub_1403BE424.c)
 */

__int64 __fastcall sub_1403BE068(__int64 a1, __int64 a2, wchar_t *Dst)
{
  size_t SizeInWords; // [rsp+38h] [rbp-20h]

  LODWORD(SizeInWords) = 75;
  return sub_1403BE424(
           1413894989,
           0,
           0x4000,
           *(unsigned __int16 *)(a1 + 212),
           1,
           0,
           *(_DWORD *)(a1 + 216),
           SizeInWords,
           Dst);
}
