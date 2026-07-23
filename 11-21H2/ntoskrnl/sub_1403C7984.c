/*
 * XREFs of sub_1403C7984 @ 0x1403C7984
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x1403C7820 (RtlQueryFeatureConfiguration.c)
 *     sub_140832E84 @ 0x140832E84 (sub_140832E84.c)
 *     sub_140922DB4 @ 0x140922DB4 (sub_140922DB4.c)
 *     sub_14092317C @ 0x14092317C (sub_14092317C.c)
 *     RtlQueryAllFeatureConfigurations @ 0x1409B5E70 (RtlQueryAllFeatureConfigurations.c)
 *     sub_140B156F8 @ 0x140B156F8 (sub_140B156F8.c)
 * Callees:
 *     sub_1403C79D4 @ 0x1403C79D4 (sub_1403C79D4.c)
 *     sub_1408330F8 @ 0x1408330F8 (sub_1408330F8.c)
 */

__int64 __fastcall sub_1403C7984(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // r10
  __int64 result; // rax
  _QWORD *v7; // r11

  sub_1408330F8();
  v5 = (unsigned int)sub_1403C79D4();
  result = *(_QWORD *)(a1 + 8 * v5 + 168);
  *v7 = result;
  *a3 = a1 + 8 * (v5 + 8 * v5 + 3);
  return result;
}
