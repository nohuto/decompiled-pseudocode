/*
 * XREFs of sub_1402DB738 @ 0x1402DB738
 * Callers:
 *     sub_140A7C248 @ 0x140A7C248 (sub_140A7C248.c)
 * Callees:
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     sub_1402D81DC @ 0x1402D81DC (sub_1402D81DC.c)
 *     sub_1402D8518 @ 0x1402D8518 (sub_1402D8518.c)
 *     sub_1402DB870 @ 0x1402DB870 (sub_1402DB870.c)
 *     sub_1402DB8D8 @ 0x1402DB8D8 (sub_1402DB8D8.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140A7C2C4 @ 0x140A7C2C4 (sub_140A7C2C4.c)
 *     sub_140A8B320 @ 0x140A8B320 (sub_140A8B320.c)
 *     sub_140A8B39C @ 0x140A8B39C (sub_140A8B39C.c)
 *     sub_140A9A25C @ 0x140A9A25C (sub_140A9A25C.c)
 */

char __fastcall sub_1402DB738(__int64 a1)
{
  char result; // al
  unsigned __int64 v3; // r14
  _SLIST_ENTRY *v4; // rbx
  __m128i *v5; // rax
  __m128i *v6; // rdi
  ULONG_PTR v7; // rbx
  __m128i v8; // xmm0
  __m128i v9; // xmm1
  __m128i v10; // xmm0
  __int64 v11; // r8
  __int128 v12; // [rsp+20h] [rbp-50h] BYREF
  _OWORD v13[4]; // [rsp+30h] [rbp-40h] BYREF

  result = (unsigned __int8)memset(v13, 0, sizeof(v13));
  if ( !dword_140C1ACBC )
  {
    result = dword_140C1B200;
    if ( dword_140C1B200 )
    {
      v3 = *(_QWORD *)(a1 + 48);
      v12 = 0LL;
      v4 = 0LL;
      BYTE9(v12) = 4;
      v5 = (__m128i *)sub_1402D8518((__int64 *)&unk_140C1B220, (__int64)&v12, v3, 1LL);
      v6 = v5;
      if ( v5 )
      {
        v7 = v5[3].m128i_u64[1];
        if ( v7 )
        {
          qword_140C1A8C8 = v5[3].m128i_i64[1];
          sub_140A8B39C(v7, v3);
          sub_140A9A25C(v7);
          sub_140A8B320(v7);
          qword_140C1A8C8 = 0LL;
        }
        v8 = *v6;
        v13[1] = v6[1];
        v9 = v6[3];
        v13[0] = v8;
        v10 = v6[2];
        v13[3] = v9;
        v13[2] = v10;
        if ( _mm_srli_si128(v9, 8).m128i_u64[0] )
          --dword_140C1B248;
        v4 = (_SLIST_ENTRY *)sub_1402DB8D8(&unk_140C1B220, &v12, v3, 1LL);
      }
      result = sub_1402D81DC((__int64)&v12);
      if ( v4 )
      {
        sub_140A7C2C4(v13);
        if ( *((_QWORD *)&v13[3] + 1) )
          ExFreePoolWithTag(*((PVOID *)&v13[3] + 1), 0x44566656u);
        if ( dword_140C1B240 == 1 )
          return (unsigned __int8)sub_140203D88((__int64)&unk_140CF9340, v4, v11);
        else
          return sub_1402DB870(v4);
      }
    }
  }
  return result;
}
