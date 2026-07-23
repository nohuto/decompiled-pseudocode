/*
 * XREFs of sub_140A54E70 @ 0x140A54E70
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403B607C @ 0x1403B607C (sub_1403B607C.c)
 *     sub_1403BAD80 @ 0x1403BAD80 (sub_1403BAD80.c)
 *     sub_1403BAEE8 @ 0x1403BAEE8 (sub_1403BAEE8.c)
 *     sub_14051E084 @ 0x14051E084 (sub_14051E084.c)
 *     sub_14082481C @ 0x14082481C (sub_14082481C.c)
 *     sub_140AF8908 @ 0x140AF8908 (sub_140AF8908.c)
 *     sub_140AF8974 @ 0x140AF8974 (sub_140AF8974.c)
 */

__int64 __fastcall sub_140A54E70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx

  switch ( (_DWORD)a1 )
  {
    case 4:
      sub_1403B607C(a1, a2);
      return 0LL;
    case 0x13:
      dword_140C4C44C &= sub_1403BAD80();
      return 0LL;
    case 0xC:
      sub_140AF8908(a3);
      v4 = 12LL;
      goto LABEL_10;
  }
  if ( (_DWORD)a1 != 17 )
  {
    if ( (_DWORD)a1 != 21 )
      return 0LL;
    sub_1403BAEE8();
    v4 = 21LL;
LABEL_10:
    sub_140AF8974(v4);
    return 0LL;
  }
  sub_14082481C(a3, 0LL);
  if ( dword_140C4ADAC )
    sub_14051E084(0);
  return 0LL;
}
