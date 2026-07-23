/*
 * XREFs of sub_140A5072C @ 0x140A5072C
 * Callers:
 *     sub_140390D20 @ 0x140390D20 (sub_140390D20.c)
 * Callees:
 *     sub_140391764 @ 0x140391764 (sub_140391764.c)
 *     KeSynchronizeTimeToQpc @ 0x1403917D0 (KeSynchronizeTimeToQpc.c)
 *     sub_140391800 @ 0x140391800 (sub_140391800.c)
 *     sub_14039188C @ 0x14039188C (sub_14039188C.c)
 *     sub_14039190C @ 0x14039190C (sub_14039190C.c)
 *     sub_140391998 @ 0x140391998 (sub_140391998.c)
 *     sub_1403B2B00 @ 0x1403B2B00 (sub_1403B2B00.c)
 *     sub_1403B2F00 @ 0x1403B2F00 (sub_1403B2F00.c)
 *     sub_1403B41A0 @ 0x1403B41A0 (sub_1403B41A0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A508C0 @ 0x140A508C0 (sub_140A508C0.c)
 */

void *__fastcall sub_140A5072C(int a1)
{
  __int16 v1; // bx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int16 v8; // bx
  __int16 v9; // bx
  void *result; // rax
  __int16 v11; // [rsp+50h] [rbp+20h] BYREF
  __int16 v12; // [rsp+58h] [rbp+28h] BYREF

  v1 = a1;
  dword_140C4C00C = a1;
  v11 = 0;
  v12 = 0;
  sub_140391998(1);
  sub_14039190C();
  if ( (dword_140C0C60C & 4) != 0 )
    sub_14039188C(v3, v2, v4);
  v5 = sub_140391800();
  KeSynchronizeTimeToQpc((LARGE_INTEGER)v5);
  byte_140C4C448 = 1;
  if ( (v1 & 0x4000) != 0 )
    sub_140A508C0();
  if ( (int)sub_1403B2F00(0) >= 0 )
  {
    sub_1403B41A0(0, (unsigned __int8)byte_140C4C078 >> 1, (__int64)&v12, 2u, 0LL);
    v8 = v12;
    v11 = v12;
    if ( (int)sub_1403B2F00(3) >= 0 )
    {
      sub_1403B41A0(3, (unsigned __int8)byte_140C4C078 >> 1, (__int64)&v12, 2u, 0LL);
      v8 = v12 | v11;
      v11 |= v12;
    }
    if ( (dword_140C4C090 & 0x40) == 0 )
    {
      if ( HIBYTE(word_140C4A7A0) )
        v9 = v8 | 0x400;
      else
        v9 = v8 & 0xFBFF;
      v11 = v9;
    }
    sub_1403B2B00(0, (unsigned __int8)byte_140C4C078 >> 1, (__int64)&v11, 2u, 0LL);
    if ( (int)sub_1403B2F00(3) >= 0 )
      sub_1403B2B00(3, (unsigned __int8)byte_140C4C078 >> 1, (__int64)&v11, 2u, 0LL);
    sub_1403B41A0(0, 0, (__int64)&v12, 2u, 0LL);
    v11 = v12;
    if ( (int)sub_1403B2F00(3) >= 0 )
    {
      sub_1403B41A0(3, 0, (__int64)&v12, 2u, 0LL);
      v11 |= v12;
    }
    sub_1403B2B00(0, 0, (__int64)&v11, 2u, 0LL);
    if ( (int)sub_1403B2F00(3) >= 0 )
      sub_1403B2B00(3, 0, (__int64)&v11, 2u, 0LL);
  }
  if ( (_BYTE)word_140C4A7A0 )
    sub_14042A5E0(v7, v6);
  else
    sub_14042A5E0(0LL, v6);
  result = sub_140391764();
  dword_140C4BFCC = 2;
  return result;
}
