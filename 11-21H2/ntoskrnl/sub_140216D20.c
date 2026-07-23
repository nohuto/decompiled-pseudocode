/*
 * XREFs of sub_140216D20 @ 0x140216D20
 * Callers:
 *     sub_140216C84 @ 0x140216C84 (sub_140216C84.c)
 *     sub_14059AEEC @ 0x14059AEEC (sub_14059AEEC.c)
 *     sub_14059B0B0 @ 0x14059B0B0 (sub_14059B0B0.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_140216D20(unsigned __int64 a1, unsigned __int64 a2)
{
  return a1 + 0x8000 < (((a2 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL) >> 64) & 0xFFFFFFFFFFFFFFF8uLL)
      && a1 + 0x8000 > a1;
}
