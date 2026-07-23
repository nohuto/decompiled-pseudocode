/*
 * XREFs of sub_1403477B0 @ 0x1403477B0
 * Callers:
 *     sub_14021A3A0 @ 0x14021A3A0 (sub_14021A3A0.c)
 *     sub_1402D7D00 @ 0x1402D7D00 (sub_1402D7D00.c)
 *     sub_14045EDD4 @ 0x14045EDD4 (sub_14045EDD4.c)
 *     sub_1405E4598 @ 0x1405E4598 (sub_1405E4598.c)
 *     sub_14065C57C @ 0x14065C57C (sub_14065C57C.c)
 *     RtlFindUnicodeSubstring @ 0x140678510 (RtlFindUnicodeSubstring.c)
 *     sub_1406811B0 @ 0x1406811B0 (sub_1406811B0.c)
 *     sub_14069498C @ 0x14069498C (sub_14069498C.c)
 *     sub_14069A7B0 @ 0x14069A7B0 (sub_14069A7B0.c)
 *     sub_14069B700 @ 0x14069B700 (sub_14069B700.c)
 *     sub_1406A97F0 @ 0x1406A97F0 (sub_1406A97F0.c)
 *     sub_1406A9B40 @ 0x1406A9B40 (sub_1406A9B40.c)
 *     sub_140717780 @ 0x140717780 (sub_140717780.c)
 *     sub_140718B68 @ 0x140718B68 (sub_140718B68.c)
 *     sub_14071BC04 @ 0x14071BC04 (sub_14071BC04.c)
 *     sub_140722280 @ 0x140722280 (sub_140722280.c)
 *     sub_1407350A0 @ 0x1407350A0 (sub_1407350A0.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 *     RtlHashUnicodeString @ 0x14078C240 (RtlHashUnicodeString.c)
 *     sub_1407A0EE0 @ 0x1407A0EE0 (sub_1407A0EE0.c)
 *     sub_1407C3E50 @ 0x1407C3E50 (sub_1407C3E50.c)
 *     sub_1407C4180 @ 0x1407C4180 (sub_1407C4180.c)
 *     sub_1407C45A0 @ 0x1407C45A0 (sub_1407C45A0.c)
 *     sub_1407C5F80 @ 0x1407C5F80 (sub_1407C5F80.c)
 *     sub_1407C8AE0 @ 0x1407C8AE0 (sub_1407C8AE0.c)
 *     sub_1407C94E0 @ 0x1407C94E0 (sub_1407C94E0.c)
 *     RtlCompareUnicodeString @ 0x1407CAA80 (RtlCompareUnicodeString.c)
 *     sub_1407CB6C0 @ 0x1407CB6C0 (sub_1407CB6C0.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x1407CD7A0 (RtlCompareUnicodeStrings.c)
 *     sub_140851068 @ 0x140851068 (sub_140851068.c)
 *     RtlSuffixUnicodeString @ 0x1409B57F0 (RtlSuffixUnicodeString.c)
 *     RtlUpcaseUnicodeToCustomCPN @ 0x1409B6890 (RtlUpcaseUnicodeToCustomCPN.c)
 *     RtlIsValidOemCharacter @ 0x1409BBB30 (RtlIsValidOemCharacter.c)
 *     sub_140A13308 @ 0x140A13308 (sub_140A13308.c)
 *     sub_140A17E60 @ 0x140A17E60 (sub_140A17E60.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall sub_1403477B0(__int64 a1, unsigned __int16 a2)
{
  if ( a2 < 0x61u )
    return a2;
  if ( a2 <= 0x7Au )
    return a2 - 32;
  if ( a1 && a2 >= 0xC0u )
    return a2
         + *(_WORD *)(a1
                    + 2LL
                    * ((a2 & 0xF)
                     + (unsigned int)*(unsigned __int16 *)(a1
                                                         + 2LL
                                                         * (((a2 >> 4) & 0xF)
                                                          + (unsigned int)*(unsigned __int16 *)(a1
                                                                                              + 2
                                                                                              * ((unsigned __int64)a2 >> 8))))));
  else
    return a2;
}
