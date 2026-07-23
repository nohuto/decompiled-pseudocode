/*
 * XREFs of sub_14050BF60 @ 0x14050BF60
 * Callers:
 *     sub_1403A5440 @ 0x1403A5440 (sub_1403A5440.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 sub_14050BF60()
{
  return sub_14042A5E0(
           BYTE2(dword_140C54B64),
           (dword_140C54B64 & 0x700 | ((unsigned int)dword_140C54B64 >> 8) & 0xF8) >> 3);
}
