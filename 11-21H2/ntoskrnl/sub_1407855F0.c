/*
 * XREFs of sub_1407855F0 @ 0x1407855F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402E02F0 @ 0x1402E02F0 (sub_1402E02F0.c)
 *     sub_1406C72AC @ 0x1406C72AC (sub_1406C72AC.c)
 *     sub_1406DA264 @ 0x1406DA264 (sub_1406DA264.c)
 *     sub_140768AF8 @ 0x140768AF8 (sub_140768AF8.c)
 *     sub_14077F2EC @ 0x14077F2EC (sub_14077F2EC.c)
 *     sub_14077FAC0 @ 0x14077FAC0 (sub_14077FAC0.c)
 *     sub_1407857F0 @ 0x1407857F0 (sub_1407857F0.c)
 *     sub_1407894A8 @ 0x1407894A8 (sub_1407894A8.c)
 *     sub_14083D790 @ 0x14083D790 (sub_14083D790.c)
 *     sub_140A236A4 @ 0x140A236A4 (sub_140A236A4.c)
 */

__int64 __fastcall sub_1407855F0(__int64 a1, __int64 (__fastcall *a2)(), __int64 a3, int a4, __int64 a5)
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
  unsigned int v15; // eax
  __int128 v17; // [rsp+50h] [rbp-18h] BYREF

  v5 = a2;
  LODWORD(a2) = 0;
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
                    v15 = sub_1407894A8(
                            a1,
                            (int)v5,
                            *(_QWORD *)(a5 + 16),
                            *(_DWORD *)(a5 + 24),
                            *(PLARGE_INTEGER *)(a5 + 32),
                            *(_DWORD *)(a5 + 40));
                  else
                    v15 = -1073741811;
                }
                else
                {
                  v15 = sub_1407857F0(
                          a1,
                          (_DWORD)v5,
                          *(_QWORD *)a5,
                          *(_QWORD *)(a5 + 8),
                          *(_QWORD *)(a5 + 16),
                          *(_QWORD *)(a5 + 24),
                          *(_QWORD *)(a5 + 32),
                          *(_DWORD *)(a5 + 40),
                          *(_QWORD *)(a5 + 48),
                          *(_DWORD *)(a5 + 56) & 0xFFFF0000);
                }
              }
              else
              {
                v15 = sub_1406C72AC(
                        a1,
                        0LL,
                        0LL,
                        *(_QWORD *)(a5 + 8),
                        *(_WORD **)(a5 + 16),
                        *(_DWORD *)(a5 + 24),
                        *(_DWORD **)(a5 + 32));
              }
            }
            else
            {
              v15 = sub_1406DA264(
                      a1,
                      (__int64)v5,
                      *(_QWORD *)a5,
                      0,
                      *(_QWORD *)(a5 + 24),
                      *(_DWORD *)(a5 + 32),
                      *(unsigned int **)(a5 + 40));
            }
          }
          else
          {
            if ( *(_QWORD *)a5 )
            {
              *(_QWORD *)&v17 = *(_QWORD *)a5;
              a2 = sub_140A2CED0;
              v6 = &v17;
              *((_QWORD *)&v17 + 1) = *(_QWORD *)(a5 + 8);
            }
            v15 = sub_14083D790(
                    a1,
                    (_DWORD)a2,
                    (_DWORD)v6,
                    *(_QWORD *)(a5 + 16),
                    *(_DWORD *)(a5 + 24),
                    *(_QWORD *)(a5 + 32),
                    *(_DWORD *)(a5 + 40) & 0xFFFF0000);
          }
        }
        else
        {
          v15 = sub_140A236A4(a1);
        }
      }
      else
      {
        v15 = sub_140768AF8(
                a1,
                (__int64)v5,
                *(_DWORD *)a5,
                (HANDLE *)(a5 + 8),
                (_BYTE *)(a5 + 16),
                *(_DWORD *)(a5 + 20) & 0xFFFF0000);
      }
    }
    else
    {
      v15 = sub_14077F2EC(
              a1,
              (__int64)v5,
              16,
              0,
              *(_DWORD *)a5,
              *(_BYTE *)(a5 + 4),
              *(_QWORD *)(a5 + 8),
              (_DWORD *)(a5 + 16));
    }
  }
  else
  {
    v15 = sub_14077FAC0(a1, v5);
  }
  return sub_1402E02F0(v15);
}
