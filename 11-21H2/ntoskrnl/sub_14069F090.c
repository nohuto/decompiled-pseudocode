/*
 * XREFs of sub_14069F090 @ 0x14069F090
 * Callers:
 *     sub_14065BC50 @ 0x14065BC50 (sub_14065BC50.c)
 *     sub_14069F024 @ 0x14069F024 (sub_14069F024.c)
 * Callees:
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 */

__int64 __fastcall sub_14069F090(_QWORD *a1)
{
  _QWORD *v2; // rdx
  __int64 v3; // rcx
  __int64 result; // rax
  _QWORD *v5; // rsi
  __int64 v6; // rbp
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  __int64 v10; // rcx

  if ( a1[1] )
  {
    v2 = a1 + 2;
    v3 = *a1;
    if ( (*(_BYTE *)(v3 + 140) & 1) != 0 )
      result = sub_1406BF450(v3, v2);
    else
      result = sub_1407C97C0(v3, v2);
  }
  v5 = a1 + 10;
  v6 = 2LL;
  v7 = a1 + 12;
  do
  {
    if ( *(v5 - 5) )
    {
      v8 = *a1;
      v9 = v7 - 5;
      if ( (*(_BYTE *)(*a1 + 140LL) & 1) != 0 )
        result = sub_1406BF450(v8, v9);
      else
        result = sub_1407C97C0(v8, v9);
    }
    if ( *v5 )
    {
      v10 = *a1;
      if ( (*(_BYTE *)(*a1 + 140LL) & 1) != 0 )
        result = sub_1406BF450(v10, v7);
      else
        result = sub_1407C97C0(v10, v7);
    }
    ++v7;
    ++v5;
    --v6;
  }
  while ( v6 );
  return result;
}
