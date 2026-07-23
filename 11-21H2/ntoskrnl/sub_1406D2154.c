/*
 * XREFs of sub_1406D2154 @ 0x1406D2154
 * Callers:
 *     sub_14065B81C @ 0x14065B81C (sub_14065B81C.c)
 *     sub_1407C8AE0 @ 0x1407C8AE0 (sub_1407C8AE0.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 *     sub_1409224D4 @ 0x1409224D4 (sub_1409224D4.c)
 * Callees:
 *     sub_140717780 @ 0x140717780 (sub_140717780.c)
 *     sub_1407C45A0 @ 0x1407C45A0 (sub_1407C45A0.c)
 */

__int64 __fastcall sub_1406D2154(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  __int64 i; // rdi
  __int64 v9; // rcx
  int v10; // eax
  __int16 v12; // ax
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]
  __int64 v15; // [rsp+38h] [rbp-10h]

  v13 = 0LL;
  v6 = 0LL;
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 1648)
                      + 24
                      * ((unsigned int)(*(_DWORD *)(a1 + 1656) - 1) & ((101027 * (a2 ^ (a2 >> 9))) ^ ((unsigned __int64)(101027 * (a2 ^ (a2 >> 9))) >> 9)))
                      + 16); i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_DWORD *)i == a2 && *(_QWORD *)(i + 56) == a3 )
    {
      v9 = *(_QWORD *)(i + 64);
      if ( (*(_DWORD *)v9 & 1) != 0 )
      {
        v10 = sub_1407C45A0(a4, v9 + 26, *(unsigned __int16 *)(v9 + 24), 2LL, v13, *((_QWORD *)&v13 + 1), v14, v15);
      }
      else
      {
        v12 = *(_WORD *)(v9 + 24);
        *((_QWORD *)&v13 + 1) = v9 + 26;
        LOWORD(v13) = v12;
        WORD1(v13) = v12;
        v10 = sub_140717780(a4, &v13, 2LL);
      }
      if ( !v10 )
        return i - 16;
    }
  }
  return v6;
}
