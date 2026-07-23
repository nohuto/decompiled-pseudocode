/*
 * XREFs of sub_1405B5EB8 @ 0x1405B5EB8
 * Callers:
 *     sub_1407F8CF0 @ 0x1407F8CF0 (sub_1407F8CF0.c)
 * Callees:
 *     sub_1402365F4 @ 0x1402365F4 (sub_1402365F4.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_14030CF90 @ 0x14030CF90 (sub_14030CF90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14069A6F4 @ 0x14069A6F4 (sub_14069A6F4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1405B5EB8(__int64 a1)
{
  __int64 v2; // r14
  unsigned int v3; // ebx
  int v4; // r13d
  void *v5; // rsi
  __int64 v6; // rdi
  int v7; // r12d
  __int64 v8; // rax
  SIZE_T v9; // rdi
  PVOID v10; // rax
  __int128 v12; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v13; // [rsp+38h] [rbp-D0h]
  PVOID v14; // [rsp+48h] [rbp-C0h]
  __m128i v15[11]; // [rsp+58h] [rbp-B0h] BYREF

  v14 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  memset(v15, 0, sizeof(v15));
  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 60);
  v5 = 0LL;
  v6 = v2 - 1664;
  v7 = 4;
  if ( (*(_BYTE *)(v2 + 184) & 7) != 0 )
    v6 = 0LL;
  v15[0].m128i_i8[7] = sub_1402CF4F0(v2);
  if ( !v6 || (*(_DWORD *)(v6 + 1124) & 0xC00u) >= 0xC00 && !*(_QWORD *)(v2 + 104) && !(unsigned int)sub_1402365F4(v6) )
  {
    v8 = *(_QWORD *)(v2 + 152);
    if ( v8 )
    {
      v9 = (40 * v8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      while ( 1 )
      {
        v10 = sub_1402828F0(64, v9, 0x6D75534Du);
        v5 = v10;
        if ( v10 )
          break;
        v9 >>= 1;
        if ( v9 < 0x10000 )
          goto LABEL_13;
      }
      v15[2].m128i_i64[1] = -1LL;
      *((_QWORD *)&v13 + 1) = a1;
      v14 = v10;
      v15[10].m128i_i64[1] = (__int64)&v12;
      v15[9].m128i_i64[1] = (__int64)sub_1405B5BA0;
      *(_QWORD *)&v13 = v9 / 0x28;
      LODWORD(v12) = v4;
      v15[1].m128i_i64[1] = v2;
      v15[10].m128i_i64[0] = (__int64)sub_1405B60A0;
      v15[0].m128i_i32[0] = 6;
      v15[0].m128i_i8[6] = 7;
      v7 = sub_14030CF90(v15);
    }
  }
LABEL_13:
  sub_1402B0CE0(v2, v15[0].m128i_u8[7]);
  sub_14069A6F4(a1);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v7 == 5 )
    return (unsigned int)-1073741248;
  return v3;
}
