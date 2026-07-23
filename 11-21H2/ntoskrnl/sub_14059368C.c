/*
 * XREFs of sub_14059368C @ 0x14059368C
 * Callers:
 *     sub_140593388 @ 0x140593388 (sub_140593388.c)
 *     sub_140A678E0 @ 0x140A678E0 (sub_140A678E0.c)
 * Callees:
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_14030CF90 @ 0x14030CF90 (sub_14030CF90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14059368C(__int64 a1)
{
  __int64 v2; // rbx
  _QWORD v4[2]; // [rsp+20h] [rbp-79h] BYREF
  __m128i v5[11]; // [rsp+30h] [rbp-69h] BYREF

  memset(v5, 0, sizeof(v5));
  v4[1] = 0LL;
  v5[9].m128i_i64[1] = (__int64)sub_140592CD0;
  v5[10].m128i_i64[1] = (__int64)v4;
  v5[2] = _mm_load_si128((const __m128i *)&xmmword_140024EF0);
  v4[0] = a1;
  if ( !(_DWORD)dword_140C4E560
    || (dword_140C31E20 & 3) != 0
    || (struct _KTHREAD *)qword_140C52A08 == KeGetCurrentThread() )
  {
    v5[0].m128i_i32[0] = 67584;
    return sub_14030CF90(v5);
  }
  else
  {
    v5[1].m128i_i64[1] = (__int64)sub_14026DFC0(0);
    v2 = v5[1].m128i_i64[1];
    v5[0].m128i_i32[0] = 6;
    v5[0].m128i_i8[7] = sub_1402CF4F0(v5[1].m128i_i64[1]);
    sub_14030CF90(v5);
    return sub_1402B0CE0(v2, v5[0].m128i_u8[7]);
  }
}
