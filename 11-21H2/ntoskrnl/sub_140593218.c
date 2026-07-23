/*
 * XREFs of sub_140593218 @ 0x140593218
 * Callers:
 *     sub_14055CF88 @ 0x14055CF88 (sub_14055CF88.c)
 *     sub_14055D2EC @ 0x14055D2EC (sub_14055D2EC.c)
 *     sub_14055D470 @ 0x14055D470 (sub_14055D470.c)
 *     sub_14055D808 @ 0x14055D808 (sub_14055D808.c)
 *     sub_14055D868 @ 0x14055D868 (sub_14055D868.c)
 *     sub_14055DC8C @ 0x14055DC8C (sub_14055DC8C.c)
 *     sub_14055DD48 @ 0x14055DD48 (sub_14055DD48.c)
 *     sub_14055DEF4 @ 0x14055DEF4 (sub_14055DEF4.c)
 *     sub_140592758 @ 0x140592758 (sub_140592758.c)
 *     sub_140592964 @ 0x140592964 (sub_140592964.c)
 *     sub_140592C5C @ 0x140592C5C (sub_140592C5C.c)
 *     sub_1405930C8 @ 0x1405930C8 (sub_1405930C8.c)
 *     sub_1405932F8 @ 0x1405932F8 (sub_1405932F8.c)
 *     sub_140593388 @ 0x140593388 (sub_140593388.c)
 *     sub_14063A4B0 @ 0x14063A4B0 (sub_14063A4B0.c)
 *     sub_140A656A0 @ 0x140A656A0 (sub_140A656A0.c)
 *     sub_140A66E54 @ 0x140A66E54 (sub_140A66E54.c)
 *     sub_140A66EB4 @ 0x140A66EB4 (sub_140A66EB4.c)
 *     sub_140A67078 @ 0x140A67078 (sub_140A67078.c)
 *     sub_140A67134 @ 0x140A67134 (sub_140A67134.c)
 *     sub_140A67248 @ 0x140A67248 (sub_140A67248.c)
 * Callees:
 *     sub_14024C9A8 @ 0x14024C9A8 (sub_14024C9A8.c)
 *     sub_14030CF90 @ 0x14030CF90 (sub_14030CF90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140593218(__int64 a1, __int64 a2, __int64 a3)
{
  BOOL v7; // eax
  int v8; // ecx
  __int64 v9; // [rsp+20h] [rbp-89h] BYREF
  __int64 v10; // [rsp+28h] [rbp-81h]
  __m128i v11[11]; // [rsp+30h] [rbp-79h] BYREF

  memset(v11, 0, sizeof(v11));
  v10 = 0LL;
  if ( !a3 )
    return 0LL;
  v11[0].m128i_i32[0] = 67584;
  v11[2].m128i_i64[0] = a2;
  v11[2].m128i_i64[1] = a3 + a2 - 1;
  v11[9].m128i_i64[1] = (__int64)sub_140592D90;
  v9 = a1;
  if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
  {
    v7 = sub_14024C9A8();
    v8 = HIDWORD(v10);
    if ( !v7 )
      v8 = 1;
    HIDWORD(v10) = v8;
  }
  v11[10].m128i_i64[1] = (__int64)&v9;
  sub_14030CF90(v11);
  return (unsigned int)v10;
}
