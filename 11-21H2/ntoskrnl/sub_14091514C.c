/*
 * XREFs of sub_14091514C @ 0x14091514C
 * Callers:
 *     sub_14065B81C @ 0x14065B81C (sub_14065B81C.c)
 *     sub_1409224D4 @ 0x1409224D4 (sub_1409224D4.c)
 * Callees:
 *     sub_14065C57C @ 0x14065C57C (sub_14065C57C.c)
 *     sub_1407C45A0 @ 0x1407C45A0 (sub_1407C45A0.c)
 */

__int64 __fastcall sub_14091514C(__int64 a1, unsigned int a2, __int64 a3, unsigned __int8 *a4, unsigned __int16 a5)
{
  __int64 v7; // rsi
  __int64 i; // rdi
  __int64 v10; // rcx
  int v11; // eax
  __int16 v12; // ax
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF

  v14 = 0LL;
  v7 = 0LL;
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 1648)
                      + 24
                      * ((unsigned int)(*(_DWORD *)(a1 + 1656) - 1) & ((101027 * (a2 ^ (a2 >> 9))) ^ ((unsigned __int64)(101027 * (a2 ^ (a2 >> 9))) >> 9)))
                      + 16); i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_DWORD *)i == a2 && *(_QWORD *)(i + 56) == a3 )
    {
      v10 = *(_QWORD *)(i + 64);
      if ( (*(_DWORD *)v10 & 1) != 0 )
      {
        v11 = sub_14065C57C(a4, a5, (unsigned __int8 *)(v10 + 26), *(_WORD *)(v10 + 24));
      }
      else
      {
        v12 = *(_WORD *)(v10 + 24);
        *((_QWORD *)&v14 + 1) = v10 + 26;
        LOWORD(v14) = v12;
        WORD1(v14) = v12;
        v11 = sub_1407C45A0((__int64)&v14, a4, a5, 1);
      }
      if ( !v11 )
        return i - 16;
    }
  }
  return v7;
}
