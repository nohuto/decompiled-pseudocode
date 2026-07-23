/*
 * XREFs of sub_140569768 @ 0x140569768
 * Callers:
 *     sub_140569910 @ 0x140569910 (sub_140569910.c)
 * Callees:
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 *     sub_140960B34 @ 0x140960B34 (sub_140960B34.c)
 *     sub_1409E6BB0 @ 0x1409E6BB0 (sub_1409E6BB0.c)
 */

__int64 __fastcall sub_140569768(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi

  v5 = *((_QWORD *)KeGetCurrentThread() + 68);
  if ( (unsigned __int8)sub_140960B34(v5, a1, *(_QWORD *)(a3 + 8)) )
    sub_1409E6BB0(a1, v5, a3);
  return sub_1402D6B0C((__int64)&unk_140D01158, 0x178806Fu, 0, 0, (__int64)&qword_14003ABC8, 0);
}
