/*
 * XREFs of sub_140AB4080 @ 0x140AB4080
 * Callers:
 *     sub_140925A8C @ 0x140925A8C (sub_140925A8C.c)
 *     sub_140925ED0 @ 0x140925ED0 (sub_140925ED0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140AB4080(__m128i *a1, __m128i *a2, __m128i *a3)
{
  __int64 result; // rax
  __m128i v6; // xmm1
  __m128i v7; // xmm0
  __int64 v8; // rcx
  int v9; // edx
  __int16 v10; // cx
  __m128i v11; // [rsp+0h] [rbp-28h]
  __m128i v12; // [rsp+10h] [rbp-18h]

  if ( !a1->m128i_i16[0] )
  {
    v6 = 0LL;
LABEL_3:
    v7 = 0LL;
    goto LABEL_4;
  }
  v6 = *a1;
  result = (unsigned int)_mm_cvtsi128_si32(*a1);
  v11.m128i_i32[1] = HIDWORD(a1->m128i_i64[0]);
  v8 = ((unsigned __int16)result >> 1) - 1;
  v12 = v6;
  if ( (int)v8 < 0 )
    goto LABEL_3;
  result = v6.m128i_i64[1];
  while ( 1 )
  {
    v9 = v8;
    if ( *(_WORD *)(v6.m128i_i64[1] + 2 * v8) == 92 )
      break;
    v8 = (unsigned int)(v8 - 1);
    if ( (int)v8 < 0 )
      goto LABEL_3;
  }
  v10 = 2 * v8;
  if ( 2 * (_WORD)v9 )
  {
    v12.m128i_i16[1] = 2 * v9;
    v12.m128i_i16[0] = 2 * v9;
    v7 = v12;
  }
  else
  {
    v7 = 0LL;
  }
  result = a1->m128i_i64[1];
  if ( -2 - v10 + v6.m128i_i16[0] )
  {
    v11.m128i_i16[1] = -2 - v10 + v6.m128i_i16[0];
    v11.m128i_i64[1] = result + 2LL * (v9 + 1);
    v11.m128i_i16[0] = v11.m128i_i16[1];
    v6 = v11;
  }
  else
  {
    v6 = 0LL;
  }
LABEL_4:
  *a2 = v7;
  *a3 = v6;
  return result;
}
