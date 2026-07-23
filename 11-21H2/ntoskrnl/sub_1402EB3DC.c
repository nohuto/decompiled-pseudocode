/*
 * XREFs of sub_1402EB3DC @ 0x1402EB3DC
 * Callers:
 *     sub_14079D08C @ 0x14079D08C (sub_14079D08C.c)
 *     sub_1407BCB30 @ 0x1407BCB30 (sub_1407BCB30.c)
 *     sub_1407BD420 @ 0x1407BD420 (sub_1407BD420.c)
 *     sub_1407F1AF8 @ 0x1407F1AF8 (sub_1407F1AF8.c)
 *     sub_1407F8CF0 @ 0x1407F8CF0 (sub_1407F8CF0.c)
 *     sub_140829CBC @ 0x140829CBC (sub_140829CBC.c)
 *     sub_14097E8C8 @ 0x14097E8C8 (sub_14097E8C8.c)
 *     sub_140983680 @ 0x140983680 (sub_140983680.c)
 *     sub_1409839C0 @ 0x1409839C0 (sub_1409839C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402EB3DC(__int64 a1)
{
  return *(_DWORD *)(a1 + 12) | (unsigned int)_InterlockedExchangeAdd(*(volatile signed __int32 **)a1, 1u) & *(_DWORD *)(a1 + 8);
}
