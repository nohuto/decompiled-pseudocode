/*
 * XREFs of sub_1403C78DC @ 0x1403C78DC
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x1403C7820 (RtlQueryFeatureConfiguration.c)
 *     sub_140832E84 @ 0x140832E84 (sub_140832E84.c)
 *     sub_140922DB4 @ 0x140922DB4 (sub_140922DB4.c)
 *     sub_14092317C @ 0x14092317C (sub_14092317C.c)
 *     RtlQueryAllFeatureConfigurations @ 0x1409B5E70 (RtlQueryAllFeatureConfigurations.c)
 *     sub_140B156F8 @ 0x140B156F8 (sub_140B156F8.c)
 * Callees:
 *     sub_1403C7918 @ 0x1403C7918 (sub_1403C7918.c)
 *     sub_140832F50 @ 0x140832F50 (sub_140832F50.c)
 */

__int64 __fastcall sub_1403C78DC(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx

  v2 = (__int64)((unsigned __int128)((a2 - a1 - 24) * (__int128)0xE38E38E38E38E39LL) >> 64) >> 2;
  sub_1403C7918(a1, (v2 >> 63) + v2);
  return sub_140832F50();
}
