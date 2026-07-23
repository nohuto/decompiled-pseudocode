/*
 * XREFs of sub_1403BE3D0 @ 0x1403BE3D0
 * Callers:
 *     sub_1403BBAC8 @ 0x1403BBAC8 (sub_1403BBAC8.c)
 *     sub_1403BE0BC @ 0x1403BE0BC (sub_1403BE0BC.c)
 * Callees:
 *     sub_1403BE424 @ 0x1403BE424 (sub_1403BE424.c)
 */

__int64 __fastcall sub_1403BE3D0(__int64 a1, int a2, wchar_t *Dst)
{
  size_t SizeInWords; // [rsp+38h] [rbp-20h]

  LODWORD(SizeInWords) = a2;
  return sub_1403BE424(
           1413894989,
           0,
           16640,
           *(unsigned __int16 *)(a1 + 136),
           1,
           0,
           *(_DWORD *)(a1 + 140),
           SizeInWords,
           Dst);
}
