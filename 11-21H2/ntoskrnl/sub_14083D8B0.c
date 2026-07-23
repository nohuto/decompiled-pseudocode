/*
 * XREFs of sub_14083D8B0 @ 0x14083D8B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14083D944 @ 0x14083D944 (sub_14083D944.c)
 *     sub_140A28A64 @ 0x140A28A64 (sub_140A28A64.c)
 *     sub_140A28B84 @ 0x140A28B84 (sub_140A28B84.c)
 *     sub_140A28C14 @ 0x140A28C14 (sub_140A28C14.c)
 *     sub_140A28E58 @ 0x140A28E58 (sub_140A28E58.c)
 *     sub_140A29598 @ 0x140A29598 (sub_140A29598.c)
 *     sub_140A29BBC @ 0x140A29BBC (sub_140A29BBC.c)
 */

__int64 __fastcall sub_14083D8B0(__int64 a1, __int64 (__fastcall *a2)(), __int64 a3, int a4, __int64 a5)
{
  __int64 (__fastcall *v5)(); // r8
  __int128 *v6; // r10
  int v7; // r9d
  int v8; // r9d
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  int v13; // r9d
  int v14; // r9d
  int v15; // r9d
  __int128 v16; // [rsp+50h] [rbp-18h] BYREF

  v5 = a2;
  LODWORD(a2) = 0;
  LODWORD(v6) = 0;
  v16 = 0LL;
  v7 = a4 - 1;
  if ( !v7 )
    return sub_140A29BBC(a1, v5);
  v8 = v7 - 1;
  if ( !v8 )
    return sub_140A28E58(a1, (_DWORD)v5, (_DWORD)v5, 0, *(_DWORD *)a5, *(_BYTE *)(a5 + 4), *(_QWORD *)(a5 + 8), a5 + 16);
  v9 = v8 - 1;
  if ( !v9 )
    return 3221225474LL;
  v10 = v9 - 1;
  if ( !v10 )
    return 3221225474LL;
  v11 = v10 - 1;
  if ( v11 )
  {
    v13 = v11 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          if ( v15 == 1 )
            return sub_140A29598(a1, 0, (_DWORD)v5, *(_QWORD *)(a5 + 8), *(_QWORD *)(a5 + 16));
          else
            return 3221225485LL;
        }
        else
        {
          return sub_140A28A64(
                   a1,
                   v5,
                   v5,
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
        return sub_140A28C14(
                 a1,
                 0,
                 (_DWORD)v5,
                 *(_QWORD *)(a5 + 8),
                 *(_QWORD *)(a5 + 16),
                 *(_DWORD *)(a5 + 24),
                 *(_QWORD *)(a5 + 32));
      }
    }
    else
    {
      return sub_140A28B84(a5, 0, (_DWORD)v5, 0, *(_QWORD *)(a5 + 24), *(_DWORD *)(a5 + 32), *(_QWORD *)(a5 + 40));
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
    return sub_14083D944(
             a1,
             (_DWORD)a2,
             (_DWORD)v6,
             *(_QWORD *)(a5 + 16),
             *(_DWORD *)(a5 + 24),
             *(_QWORD *)(a5 + 32),
             *(_DWORD *)(a5 + 40) & 0xFFFF0000);
  }
}
