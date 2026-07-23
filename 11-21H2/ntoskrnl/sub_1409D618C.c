/*
 * XREFs of sub_1409D618C @ 0x1409D618C
 * Callers:
 *     sub_1409D7A90 @ 0x1409D7A90 (sub_1409D7A90.c)
 * Callees:
 *     sub_140260C2C @ 0x140260C2C (sub_140260C2C.c)
 *     sub_1405FB148 @ 0x1405FB148 (sub_1405FB148.c)
 */

__int64 __fastcall sub_1409D618C(__int64 a1, unsigned __int16 *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rbp
  _WORD *v6; // rax
  _WORD *v7; // rsi
  __int64 v8; // r8
  _WORD *i; // rdx
  __int16 v10; // ax

  v2 = 0;
  if ( a2 )
  {
    v5 = *a2;
    v6 = sub_140260C2C(v5 + 2, 0x474B6D73u);
    v7 = v6;
    if ( v6 )
    {
      sub_1405FB148(v6, v5 + 2, (__int64)a2);
      v8 = 0x7FFFLL;
      *(_OWORD *)(a1 + 24) = 0LL;
      for ( i = v7; *i; ++i )
      {
        if ( !--v8 )
          return v2;
      }
      if ( a1 != -24 )
      {
        v10 = 2 * (0x7FFF - v8);
        *(_QWORD *)(a1 + 32) = v7;
        *(_WORD *)(a1 + 24) = v10;
        *(_WORD *)(a1 + 26) = v10 + 2;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v2;
}
