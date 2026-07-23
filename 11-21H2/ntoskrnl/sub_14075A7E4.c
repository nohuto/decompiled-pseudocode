/*
 * XREFs of sub_14075A7E4 @ 0x14075A7E4
 * Callers:
 *     RtlUnicodeToOemN @ 0x1407592A0 (RtlUnicodeToOemN.c)
 *     RtlMultiByteToUnicodeN @ 0x14075A6A0 (RtlMultiByteToUnicodeN.c)
 *     RtlOemToUnicodeN @ 0x1407F9C40 (RtlOemToUnicodeN.c)
 * Callees:
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_1407CDA20 @ 0x1407CDA20 (sub_1407CDA20.c)
 */

_CPTABLEINFO *sub_14075A7E4()
{
  signed __int32 v1[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( (unsigned __int8)sub_1407CDA20(0LL) )
    return &CustomCP;
  _InterlockedOr(v1, 0);
  return (_CPTABLEINFO *)((char *)sub_140347DB0() + 1064);
}
