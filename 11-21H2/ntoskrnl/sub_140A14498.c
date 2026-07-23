/*
 * XREFs of sub_140A14498 @ 0x140A14498
 * Callers:
 *     sub_140A108BC @ 0x140A108BC (sub_140A108BC.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406E0BB8 @ 0x1406E0BB8 (sub_1406E0BB8.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_14075B444 @ 0x14075B444 (sub_14075B444.c)
 *     sub_140797F3C @ 0x140797F3C (sub_140797F3C.c)
 *     sub_1407ED0C8 @ 0x1407ED0C8 (sub_1407ED0C8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A14498(_QWORD **a1, void *a2, unsigned int a3)
{
  __int64 v3; // rbp
  unsigned int v4; // esi
  _DWORD *v5; // rbx
  __m128i *v9; // rax
  SIZE_T v10; // rcx
  PVOID v11; // rdi
  _DWORD *v13; // rax
  int v14; // [rsp+80h] [rbp+8h] BYREF

  v3 = (__int64)*a1;
  v4 = 0;
  v14 = 0;
  v5 = 0LL;
  if ( !qword_140C0E8F0
    || *(_DWORD *)(v3 + 20) < 0x14u
    || (v9 = *(__m128i **)(v3 + 8), v10 = v9[1].m128i_u32[0], _mm_cvtsi128_si32(_mm_srli_si128(*v9, 8)) != 1717724282)
    || HIDWORD(*(unsigned __int128 *)v9) != dword_140C0E8F8
    || (v14 = v9[1].m128i_i32[0], (v11 = sub_14075B444(v10, v10)) == 0LL) )
  {
    sub_1406E0C3C(1LL, (__int64)"SdbpOpenCompressedDatabase");
    goto LABEL_11;
  }
  if ( !(unsigned int)sub_14042A5E0(v11, &v14) )
    goto LABEL_8;
  v13 = sub_1407ED0C8((__int64)v11, v14, a3);
  v5 = v13;
  if ( v13 )
  {
    v13[6] |= 4u;
    if ( !a2 || (unsigned int)sub_140797F3C((__int64)v13, 0, a2, 0xCu) )
    {
      v5[6] |= 8u;
      v4 = 1;
      v14 = 0;
      goto LABEL_11;
    }
LABEL_8:
    sub_1406E0C3C(1LL, (__int64)"SdbpOpenCompressedDatabase");
  }
  ExFreePoolWithTag(v11, 0x74705041u);
  v14 = 0;
  if ( v5 )
  {
    *((_QWORD *)v5 + 1) = 0LL;
    sub_1406E0BB8(v5);
    v5 = 0LL;
  }
LABEL_11:
  sub_1406E0BB8(*a1);
  *a1 = v5;
  return v4;
}
