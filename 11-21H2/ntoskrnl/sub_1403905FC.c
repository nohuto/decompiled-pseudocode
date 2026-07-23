/*
 * XREFs of sub_1403905FC @ 0x1403905FC
 * Callers:
 *     sub_14039050C @ 0x14039050C (sub_14039050C.c)
 *     sub_1405F9824 @ 0x1405F9824 (sub_1405F9824.c)
 * Callees:
 *     sub_1403795D4 @ 0x1403795D4 (sub_1403795D4.c)
 *     sub_14038770C @ 0x14038770C (sub_14038770C.c)
 *     sub_140390724 @ 0x140390724 (sub_140390724.c)
 *     sub_140395958 @ 0x140395958 (sub_140395958.c)
 */

__int64 __fastcall sub_1403905FC(__int64 a1, unsigned int a2, char a3, __int64 a4)
{
  __int64 v4; // r12
  _QWORD *v7; // rbx
  __int64 v8; // rbp
  int v9; // esi
  int v10; // edi
  __int64 v11; // r15
  __int64 result; // rax
  __int128 v13; // [rsp+20h] [rbp-58h] BYREF
  __int128 v14; // [rsp+30h] [rbp-48h]
  __int128 v15; // [rsp+40h] [rbp-38h]

  v4 = *(unsigned int *)(a1 + 6208);
  v7 = (_QWORD *)(*(_QWORD *)(a1 + 6216) + 8LL * a2);
  v8 = *v7 & 0x7FFFFFFFFFFF0000LL;
  if ( (a3 & 2) != 0 && !v8 )
    return 1075380276LL;
  v9 = 1;
  if ( (*(_WORD *)v7 & 0x4000) != 0 )
  {
    *(_WORD *)v7 &= ~0x4000u;
    v10 = a3 & 1;
  }
  else
  {
    v10 = a3 & 1;
    sub_140390724(a1, *(_QWORD *)(a1 + 6216) + 8LL * a2, a3 & 1, a4);
  }
  if ( sub_14038770C(a1, a2) )
    return 3221225646LL;
  if ( (__int64)*v7 >= 0 )
  {
    v9 = 0;
    sub_140395958(v8, v4);
  }
  if ( *(__int16 *)v7 < 0 )
    return 3221225646LL;
  v11 = *v7;
  *v7 = 0LL;
  *(_QWORD *)&v13 = v8;
  v14 = 0LL;
  *((_QWORD *)&v13 + 1) = v4;
  LODWORD(v14) = v9 | _mm_cvtsi128_si32((__m128i)0LL) & 0xFFFFFFFE;
  v15 = 0LL;
  result = sub_1403795D4(a1, 3, &v13, v10 != 0 ? 11 : 8);
  if ( (_DWORD)result != -1073741650 )
    return 0LL;
  *v7 = v11;
  return result;
}
