/*
 * XREFs of sub_140276D2C @ 0x140276D2C
 * Callers:
 *     sub_140231A68 @ 0x140231A68 (sub_140231A68.c)
 *     sub_14026F180 @ 0x14026F180 (sub_14026F180.c)
 *     sub_1402BF640 @ 0x1402BF640 (sub_1402BF640.c)
 *     sub_1402C8FD0 @ 0x1402C8FD0 (sub_1402C8FD0.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 * Callees:
 *     sub_140276C78 @ 0x140276C78 (sub_140276C78.c)
 *     sub_140276DE4 @ 0x140276DE4 (sub_140276DE4.c)
 *     sub_140338500 @ 0x140338500 (sub_140338500.c)
 *     sub_140338660 @ 0x140338660 (sub_140338660.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140276D2C(__int64 a1, __int64 a2)
{
  __int64 v4; // r10
  _OWORD v6[7]; // [rsp+20h] [rbp-78h] BYREF

  memset(v6, 0, 0x68uLL);
  if ( !(unsigned int)sub_140276DE4(a1, a2) )
    return sub_140338500(a2, v4);
  DWORD2(v6[0]) = 0;
  v6[1] = _mm_load_si128((const __m128i *)&xmmword_140015DF0);
  LODWORD(v6[6]) = 3;
  *((_QWORD *)&v6[5] + 1) = a1;
  sub_140276C78((__int64 *)v6, 0LL, v4);
  return sub_140338660(v6, 0LL);
}
