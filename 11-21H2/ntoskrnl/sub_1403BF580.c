/*
 * XREFs of sub_1403BF580 @ 0x1403BF580
 * Callers:
 *     sub_1403BEC78 @ 0x1403BEC78 (sub_1403BEC78.c)
 *     sub_1403BF3B8 @ 0x1403BF3B8 (sub_1403BF3B8.c)
 *     sub_140AF9C84 @ 0x140AF9C84 (sub_140AF9C84.c)
 * Callees:
 *     sub_1403BF1EC @ 0x1403BF1EC (sub_1403BF1EC.c)
 */

__int64 __fastcall sub_1403BF580(unsigned __int64 a1)
{
  unsigned __int64 *v2; // rcx
  unsigned __int64 *v3; // rcx
  unsigned __int64 *v4; // rcx

  v2 = (unsigned __int64 *)(8 * ((a1 >> 39) & 0x1FF) - 0x90482413000LL);
  if ( ((*(_BYTE *)v2 & 1) != 0 || sub_1403BF1EC(v2))
    && ((v3 = (unsigned __int64 *)(8 * ((a1 >> 30) & 0x3FFFF) - 0x90482600000LL), (*(_BYTE *)v3 & 1) != 0)
     || sub_1403BF1EC(v3))
    && ((v4 = (unsigned __int64 *)(8 * ((a1 >> 21) & 0x7FFFFFF) - 0x904C0000000LL), (*(_BYTE *)v4 & 1) != 0)
     || sub_1403BF1EC(v4)) )
  {
    return 8 * ((a1 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL;
  }
  else
  {
    return 0LL;
  }
}
