/*
 * XREFs of sub_14076D160 @ 0x14076D160
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406E7A78 @ 0x1406E7A78 (sub_1406E7A78.c)
 *     sub_14076D2BC @ 0x14076D2BC (sub_14076D2BC.c)
 *     sub_14076D390 @ 0x14076D390 (sub_14076D390.c)
 *     sub_14076D788 @ 0x14076D788 (sub_14076D788.c)
 *     sub_14083DD34 @ 0x14083DD34 (sub_14083DD34.c)
 *     sub_140A263D8 @ 0x140A263D8 (sub_140A263D8.c)
 *     sub_140A26464 @ 0x140A26464 (sub_140A26464.c)
 */

__int64 __fastcall sub_14076D160(__int64 a1, __int64 (__fastcall *a2)(), __int64 a3, int a4, __int64 a5)
{
  __int64 (__fastcall *v5)(); // r10
  __int128 *v6; // r8
  int v7; // r9d
  int v8; // r9d
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  __int128 v16; // [rsp+50h] [rbp-18h] BYREF

  v5 = a2;
  LODWORD(a2) = 0;
  LODWORD(v6) = 0;
  v16 = 0LL;
  v7 = a4 - 1;
  if ( !v7 )
    return sub_14076D788(a1, v5);
  v8 = v7 - 1;
  if ( !v8 )
    return sub_14076D390(a1, (_DWORD)v5, 0, 0, *(_DWORD *)a5, *(_BYTE *)(a5 + 4), *(_QWORD *)(a5 + 8), a5 + 16);
  v9 = v8 - 1;
  if ( !v9 )
    return 3221225474LL;
  v10 = v9 - 1;
  if ( !v10 )
    return 3221225474LL;
  v11 = v10 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          if ( v14 == 1 )
            return sub_1406E7A78(a1, 0LL, 0LL, *(_QWORD *)(a5 + 8), *(_QWORD *)(a5 + 16));
          else
            return 3221225485LL;
        }
        else
        {
          return sub_14076D2BC(
                   a1,
                   (_DWORD)v5,
                   *(_QWORD *)a5,
                   *(_QWORD *)(a5 + 8),
                   *(_QWORD *)(a5 + 16),
                   *(_QWORD *)(a5 + 24),
                   *(_QWORD *)(a5 + 32),
                   *(_DWORD *)(a5 + 40),
                   *(_QWORD *)(a5 + 48));
        }
      }
      else
      {
        return sub_140A26464(
                 a1,
                 0,
                 0,
                 *(_QWORD *)(a5 + 8),
                 *(_QWORD *)(a5 + 16),
                 *(_DWORD *)(a5 + 24),
                 *(_QWORD *)(a5 + 32));
      }
    }
    else
    {
      return sub_140A263D8(a5, 0, 0, 0, *(_QWORD *)(a5 + 24), *(_DWORD *)(a5 + 32), *(_QWORD *)(a5 + 40));
    }
  }
  else
  {
    if ( *(_QWORD *)a5 )
    {
      *(_QWORD *)&v16 = *(_QWORD *)a5;
      a2 = sub_140A2CED0;
      v6 = &v16;
      *((_QWORD *)&v16 + 1) = *(_QWORD *)(a5 + 8);
    }
    return sub_14083DD34(
             a1,
             (_DWORD)a2,
             (_DWORD)v6,
             *(_QWORD *)(a5 + 16),
             *(_DWORD *)(a5 + 24),
             *(_QWORD *)(a5 + 32),
             *(_DWORD *)(a5 + 40) & 0xFFFF0000);
  }
}
