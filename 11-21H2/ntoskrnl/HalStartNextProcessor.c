/*
 * XREFs of HalStartNextProcessor @ 0x1403B2F30
 * Callers:
 *     sub_140A505D4 @ 0x140A505D4 (sub_140A505D4.c)
 *     sub_140B03C68 @ 0x140B03C68 (sub_140B03C68.c)
 * Callees:
 *     sub_14036FA84 @ 0x14036FA84 (sub_14036FA84.c)
 *     sub_1403B3BA0 @ 0x1403B3BA0 (sub_1403B3BA0.c)
 *     sub_14051E084 @ 0x14051E084 (sub_14051E084.c)
 *     sub_140A53F54 @ 0x140A53F54 (sub_140A53F54.c)
 */

__int64 __fastcall HalStartNextProcessor(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // edi

  if ( (unsigned int)sub_14036FA84() - 1 > 3 || a2 >= (unsigned int)sub_1403B3BA0() )
    return 2LL;
  v6 = sub_140A53F54(a2, a3, 0LL, a1);
  if ( dword_140C4ADAC )
  {
    if ( v6 == 4 )
      sub_14051E084(a2);
  }
  return v6;
}
