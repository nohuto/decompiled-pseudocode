/*
 * XREFs of sub_18005D90C @ 0x18005D90C
 * Callers:
 *     sub_18005B3E0 @ 0x18005B3E0 (sub_18005B3E0.c)
 *     sub_18005DCB8 @ 0x18005DCB8 (sub_18005DCB8.c)
 *     sub_180067EB0 @ 0x180067EB0 (sub_180067EB0.c)
 *     sub_18006BEB0 @ 0x18006BEB0 (sub_18006BEB0.c)
 *     sub_18006D0BC @ 0x18006D0BC (sub_18006D0BC.c)
 *     sub_180092200 @ 0x180092200 (sub_180092200.c)
 * Callees:
 *     sub_18005BC40 @ 0x18005BC40 (sub_18005BC40.c)
 *     sub_18005D050 @ 0x18005D050 (sub_18005D050.c)
 */

__int64 __fastcall sub_18005D90C(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // xmm4_8
  unsigned __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v5; // [rsp+28h] [rbp-20h]
  unsigned __int64 v6; // [rsp+2Ch] [rbp-1Ch]
  unsigned int v7; // [rsp+34h] [rbp-14h]

  if ( *(_BYTE *)(a1 + 336) && *(_BYTE *)(a1 + 1612) )
  {
    result = sub_18005BC40(a1, (__int64)&v4);
    v3 = _mm_sub_ps(_mm_movelh_ps((__m128)v6, (__m128)v7), _mm_movelh_ps((__m128)v4, (__m128)v5)).m128_u64[0];
    v4 = v3;
    if ( *((float *)&v3 + 1) != 0.0 )
    {
      result = sub_18005D050(a1, *(float *)&v4 / *((float *)&v3 + 1));
      *(_BYTE *)(a1 + 1612) = 0;
    }
  }
  return result;
}
