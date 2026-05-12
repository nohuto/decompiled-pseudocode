/*
 * XREFs of sub_1C0023058 @ 0x1C0023058
 * Callers:
 *     sub_1C0008694 @ 0x1C0008694 (sub_1C0008694.c)
 * Callees:
 *     sub_1C0023090 @ 0x1C0023090 (sub_1C0023090.c)
 */

__int64 sub_1C0023058()
{
  if ( (dword_1C0093B28 & 0x10) != 0 )
    return dword_1C0093B28 & 1;
  else
    return sub_1C0023090((unsigned int)dword_1C0093B28, 3LL);
}
