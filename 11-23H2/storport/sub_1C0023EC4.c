/*
 * XREFs of sub_1C0023EC4 @ 0x1C0023EC4
 * Callers:
 *     sub_1C0001770 @ 0x1C0001770 (sub_1C0001770.c)
 * Callees:
 *     sub_1C0023EFC @ 0x1C0023EFC (sub_1C0023EFC.c)
 */

__int64 sub_1C0023EC4()
{
  if ( (dword_1C0093B48 & 0x10) != 0 )
    return dword_1C0093B48 & 1;
  else
    return sub_1C0023EFC((unsigned int)dword_1C0093B48, 3LL);
}
