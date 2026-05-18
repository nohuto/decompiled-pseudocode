/*
 * XREFs of sub_1800142E4 @ 0x1800142E4
 * Callers:
 *     sub_180017AAC @ 0x180017AAC (sub_180017AAC.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_1800142E4(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  int v5; // eax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  v2 = a2[1];
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = a2[1];
  }
  v7 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = *a2;
  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v2;
  v8 = v4;
  sub_180010910((__int64)&v7);
  LODWORD(v8) = 0;
  *(_QWORD *)(a1 + 32) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *(_DWORD *)(a1 + 40) = 0;
  v5 = v8;
  *(_QWORD *)(a1 + 44) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *(_DWORD *)(a1 + 52) = v5;
  return 0LL;
}
