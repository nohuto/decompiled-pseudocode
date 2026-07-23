/*
 * XREFs of sub_140273AAC @ 0x140273AAC
 * Callers:
 *     sub_140243208 @ 0x140243208 (sub_140243208.c)
 *     sub_1402450AC @ 0x1402450AC (sub_1402450AC.c)
 *     sub_14025592C @ 0x14025592C (sub_14025592C.c)
 *     sub_14025AD28 @ 0x14025AD28 (sub_14025AD28.c)
 *     sub_1402715A0 @ 0x1402715A0 (sub_1402715A0.c)
 *     sub_1402BE8E0 @ 0x1402BE8E0 (sub_1402BE8E0.c)
 *     sub_1402E4474 @ 0x1402E4474 (sub_1402E4474.c)
 *     sub_140328690 @ 0x140328690 (sub_140328690.c)
 *     sub_140582D7C @ 0x140582D7C (sub_140582D7C.c)
 *     sub_14059E3E8 @ 0x14059E3E8 (sub_14059E3E8.c)
 *     sub_14059E660 @ 0x14059E660 (sub_14059E660.c)
 *     sub_14059E7F0 @ 0x14059E7F0 (sub_14059E7F0.c)
 *     sub_1405C4A48 @ 0x1405C4A48 (sub_1405C4A48.c)
 * Callees:
 *     sub_140273AF0 @ 0x140273AF0 (sub_140273AF0.c)
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 */

__int64 __fastcall sub_140273AAC(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  __int64 result; // rax

  while ( 1 )
  {
    result = sub_140273AF0(BugCheckParameter1, a2);
    if ( result )
      break;
    sub_14031C860(2uLL, BugCheckParameter1);
  }
  return result;
}
