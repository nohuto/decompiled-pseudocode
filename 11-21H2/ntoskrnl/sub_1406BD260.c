/*
 * XREFs of sub_1406BD260 @ 0x1406BD260
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402E02F0 @ 0x1402E02F0 (sub_1402E02F0.c)
 *     sub_1406BD3A8 @ 0x1406BD3A8 (sub_1406BD3A8.c)
 *     sub_1407871A0 @ 0x1407871A0 (sub_1407871A0.c)
 *     sub_140789460 @ 0x140789460 (sub_140789460.c)
 *     sub_14083E1A0 @ 0x14083E1A0 (sub_14083E1A0.c)
 *     sub_140A22FC4 @ 0x140A22FC4 (sub_140A22FC4.c)
 *     sub_140A24C40 @ 0x140A24C40 (sub_140A24C40.c)
 *     sub_140A2B950 @ 0x140A2B950 (sub_140A2B950.c)
 *     sub_140A2BC48 @ 0x140A2BC48 (sub_140A2BC48.c)
 *     sub_140A2C51C @ 0x140A2C51C (sub_140A2C51C.c)
 */

__int64 __fastcall sub_1406BD260(__int64 a1, __int64 a2, __int64 a3, int a4, _DWORD *a5)
{
  __int64 (__fastcall *v5)(); // r8
  __int128 *v6; // rbx
  int v7; // r9d
  int v8; // r9d
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  unsigned int v15; // eax
  __int128 v17; // [rsp+50h] [rbp-18h] BYREF

  LODWORD(v5) = 0;
  LODWORD(v6) = 0;
  v17 = 0LL;
  v7 = a4 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
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
                    v15 = sub_140A2C51C(a1, a2, *((_QWORD *)a5 + 2), a5[6], *((_QWORD *)a5 + 4), a5[10]);
                  else
                    v15 = -1073741811;
                }
                else
                {
                  v15 = sub_1406BD3A8(
                          a1,
                          a2,
                          *(_QWORD *)a5,
                          *((_QWORD *)a5 + 1),
                          *((_QWORD *)a5 + 2),
                          *((_QWORD *)a5 + 3),
                          *((_QWORD *)a5 + 4),
                          a5[10],
                          *((_QWORD *)a5 + 6));
                }
              }
              else
              {
                v15 = sub_140A2BC48(a1, a2, 0, *((_QWORD *)a5 + 1), *((_QWORD *)a5 + 2), a5[6], *((_QWORD *)a5 + 4));
              }
            }
            else
            {
              v15 = sub_140A2B950(a1, a2, *(_QWORD *)a5, 0, *((_QWORD *)a5 + 3), a5[8], *((_QWORD *)a5 + 5));
            }
          }
          else
          {
            if ( *(_QWORD *)a5 )
            {
              *(_QWORD *)&v17 = *(_QWORD *)a5;
              v5 = sub_140A2CED0;
              v6 = &v17;
              *((_QWORD *)&v17 + 1) = *((_QWORD *)a5 + 1);
            }
            v15 = sub_14083E1A0(
                    a1,
                    2,
                    (_DWORD)v5,
                    (_DWORD)v6,
                    *((_QWORD *)a5 + 2),
                    a5[6],
                    *((_QWORD *)a5 + 4),
                    a5[10] & 0xFFFF0000);
          }
        }
        else
        {
          v15 = sub_140A24C40(a1, a2, *a5 & 0xFFFF0000);
        }
      }
      else
      {
        v15 = sub_140A22FC4(a1, a2, *a5, (int)a5 + 8, (__int64)(a5 + 4), a5[5] & 0xFFFF0000);
      }
    }
    else
    {
      v15 = sub_140789460(a1, a2, 0, 0, *a5, *((_BYTE *)a5 + 4), *((_QWORD *)a5 + 1), (__int64)(a5 + 4));
    }
  }
  else
  {
    v15 = sub_1407871A0();
  }
  return sub_1402E02F0(v15);
}
