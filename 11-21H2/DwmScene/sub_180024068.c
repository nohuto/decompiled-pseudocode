/*
 * XREFs of sub_180024068 @ 0x180024068
 * Callers:
 *     sub_180023DE0 @ 0x180023DE0 (sub_180023DE0.c)
 *     sub_1800246C0 @ 0x1800246C0 (sub_1800246C0.c)
 *     sub_180024E00 @ 0x180024E00 (sub_180024E00.c)
 *     sub_1800257C0 @ 0x1800257C0 (sub_1800257C0.c)
 * Callees:
 *     sub_180022E18 @ 0x180022E18 (sub_180022E18.c)
 *     sub_180022EC0 @ 0x180022EC0 (sub_180022EC0.c)
 *     sub_180026110 @ 0x180026110 (sub_180026110.c)
 */

_QWORD *__fastcall sub_180024068(__int64 a1, __int64 a2)
{
  char v3; // al
  unsigned __int64 v4; // r8
  __int64 v5; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  _QWORD *result; // rax

  LOBYTE(a2) = 1;
  v3 = sub_180026110(a1, a2);
  if ( !v3 )
    return 0LL;
  v4 = 129LL;
  if ( v3 == 1 )
    v4 = 64LL;
  v5 = -1LL;
  do
    ++v5;
  while ( *(_BYTE *)(a1 + v5) );
  if ( v5 + 3 > v4 )
    return 0LL;
  if ( v3 == 1 )
  {
    v8 = (_QWORD *)o__aligned_malloc(160LL, 8LL);
    if ( v8 )
    {
      v7 = sub_180022E18(v8);
      goto LABEL_13;
    }
  }
  else
  {
    if ( v3 != 2 )
      return 0LL;
    v6 = (_QWORD *)o__aligned_malloc(160LL, 8LL);
    if ( v6 )
    {
      v7 = sub_180022EC0(v6);
LABEL_13:
      v9 = v7;
      goto LABEL_15;
    }
  }
  v9 = 0LL;
LABEL_15:
  if ( v9 )
  {
    o_strncpy_s(v9, 129LL, a1, v5);
    *((_BYTE *)v9 + v5) = 46;
    v9[17] = v5 + 1;
    result = v9;
    v9[18] = (v5 + 3) << 32;
    *((_BYTE *)v9 + v9[17]) = 0;
    return result;
  }
  return 0LL;
}
