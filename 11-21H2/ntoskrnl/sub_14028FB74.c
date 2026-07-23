/*
 * XREFs of sub_14028FB74 @ 0x14028FB74
 * Callers:
 *     sub_140213558 @ 0x140213558 (sub_140213558.c)
 *     sub_140257F64 @ 0x140257F64 (sub_140257F64.c)
 *     sub_14028E238 @ 0x14028E238 (sub_14028E238.c)
 *     sub_1402CB710 @ 0x1402CB710 (sub_1402CB710.c)
 *     sub_1402CE240 @ 0x1402CE240 (sub_1402CE240.c)
 *     sub_14032C1B0 @ 0x14032C1B0 (sub_14032C1B0.c)
 *     sub_14032EA60 @ 0x14032EA60 (sub_14032EA60.c)
 *     sub_14033B190 @ 0x14033B190 (sub_14033B190.c)
 *     sub_140353230 @ 0x140353230 (sub_140353230.c)
 *     sub_140593E88 @ 0x140593E88 (sub_140593E88.c)
 *     sub_1405A3418 @ 0x1405A3418 (sub_1405A3418.c)
 *     sub_1405AC9A0 @ 0x1405AC9A0 (sub_1405AC9A0.c)
 *     sub_1405B88D8 @ 0x1405B88D8 (sub_1405B88D8.c)
 *     sub_1405BBD5C @ 0x1405BBD5C (sub_1405BBD5C.c)
 *     sub_1405C2898 @ 0x1405C2898 (sub_1405C2898.c)
 * Callees:
 *     sub_14028FBF0 @ 0x14028FBF0 (sub_14028FBF0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 */

__int64 __fastcall sub_14028FB74(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      sub_1402F32E0(&v5);
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(a1 + 16) ^= ((unsigned int)*(_QWORD *)(a1 + 16) ^ ((unsigned int)*(_QWORD *)(a1 + 16)
                                                               + ((unsigned __int16)a2 << 16))) & 0x3FF0000;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a2 <= 1 )
    return sub_14028FBF0(*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL);
  return result;
}
