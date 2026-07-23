/*
 * XREFs of sub_140853BB8 @ 0x140853BB8
 * Callers:
 *     sub_1407350A0 @ 0x1407350A0 (sub_1407350A0.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_140718B68 @ 0x140718B68 (sub_140718B68.c)
 */

char __fastcall sub_140853BB8(__m128i *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __m128i v4; // xmm0
  char v5; // di
  __int16 v7; // cx
  _WORD *v8; // r8
  unsigned __int16 v9; // dx
  unsigned int v10; // esi
  int v11; // eax
  unsigned __int16 v12; // cx
  __int64 v13; // rbp
  __int64 v15; // rbx
  __int64 v16; // rcx
  bool v17; // zf
  __m128i v18; // [rsp+20h] [rbp-28h] BYREF

  v4 = *a1;
  v5 = 0;
  v7 = _mm_cvtsi128_si32(*a1);
  v18 = v4;
  v18.m128i_i16[0] = v7;
  if ( !v7 )
    goto LABEL_18;
  v8 = (_WORD *)v18.m128i_i64[1];
  do
  {
    if ( *v8 != 92 )
      break;
    ++v8;
    v17 = v7 == 2;
    v7 -= 2;
    v18.m128i_i16[0] = v7;
  }
  while ( !v17 );
  v18.m128i_i64[1] = (__int64)v8;
  if ( v7 )
  {
    v9 = 0;
    v10 = 1;
    do
    {
      if ( v8[v9] == 92 )
        break;
      ++v9;
      v7 -= 2;
    }
    while ( v7 );
    v18.m128i_i16[0] = 2 * v9;
    v11 = sub_140718B68(&v18);
    v12 = 0;
    while ( 1 )
    {
      v13 = 3LL * v12;
      if ( dword_140C02AFC[6 * v12] == v11 )
        break;
      if ( ++v12 >= 8u )
      {
        _interlockedbittestandset(dword_140C02B00, 2u);
        return 0;
      }
    }
    _interlockedbittestandset(&dword_140C02B00[6 * v12], 3u);
    _InterlockedAdd(&dword_140C02B04[6 * v12], 1u);
    v15 = 3LL * v12;
    KeSetEvent((struct _KEVENT *)((char *)&stru_140C02570 + 184 * (unsigned int)dword_140C02AF8[6 * v12]), 0, 0);
    v16 = (unsigned int)dword_140C02AF8[2 * v15];
    if ( !*((_DWORD *)&unk_140C025A4 + 46 * v16) )
    {
      v5 = 1;
      *a4 = v16;
      v10 = 5;
    }
    _interlockedbittestandset(&dword_140C02B00[2 * v13], v10);
    return v5;
  }
  else
  {
LABEL_18:
    _interlockedbittestandset(dword_140C02B00, 0);
    return 0;
  }
}
