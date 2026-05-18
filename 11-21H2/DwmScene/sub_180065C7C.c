/*
 * XREFs of sub_180065C7C @ 0x180065C7C
 * Callers:
 *     sub_180063320 @ 0x180063320 (sub_180063320.c)
 *     sub_180066028 @ 0x180066028 (sub_180066028.c)
 *     sub_180071A08 @ 0x180071A08 (sub_180071A08.c)
 *     sub_180076154 @ 0x180076154 (sub_180076154.c)
 *     sub_180077414 @ 0x180077414 (sub_180077414.c)
 *     sub_1800A1EC0 @ 0x1800A1EC0 (sub_1800A1EC0.c)
 * Callees:
 *     sub_180063DA0 @ 0x180063DA0 (sub_180063DA0.c)
 *     sub_18006532C @ 0x18006532C (sub_18006532C.c)
 */

__int64 __fastcall sub_180065C7C(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // xmm4_8
  unsigned __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v5; // [rsp+28h] [rbp-20h]
  unsigned __int64 v6; // [rsp+2Ch] [rbp-1Ch]
  unsigned int v7; // [rsp+34h] [rbp-14h]

  if ( *(_BYTE *)(a1 + 336) && *(_BYTE *)(a1 + 1612) )
  {
    result = sub_180063DA0(a1, (__int64)&v4);
    v3 = _mm_sub_ps(_mm_movelh_ps((__m128)v6, (__m128)v7), _mm_movelh_ps((__m128)v4, (__m128)v5)).m128_u64[0];
    v4 = v3;
    if ( *((float *)&v3 + 1) != 0.0 )
    {
      result = sub_18006532C(a1, *(float *)&v4 / *((float *)&v3 + 1));
      *(_BYTE *)(a1 + 1612) = 0;
    }
  }
  return result;
}
