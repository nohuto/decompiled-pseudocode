/*
 * XREFs of sub_140960A00 @ 0x140960A00
 * Callers:
 *     sub_140569910 @ 0x140569910 (sub_140569910.c)
 * Callees:
 *     sub_140759008 @ 0x140759008 (sub_140759008.c)
 *     sub_1409BFE14 @ 0x1409BFE14 (sub_1409BFE14.c)
 */

bool __fastcall sub_140960A00(__int64 a1, unsigned __int64 a2)
{
  char v4; // bl
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+60h] [rbp+18h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  v8 = 0LL;
  v7 = 0;
  v6[0] = 0LL;
  v4 = 1;
  if ( (int)sub_140759008(a2, &v8, v6, &v7) < 0 || !v8 || !v6[0] || (v7 & 1) == 0 && v8 != *(_QWORD *)(a1 + 1312) )
    return (unsigned __int8)sub_1409BFE14(a1 + 2856, a2) != 0;
  return v4;
}
