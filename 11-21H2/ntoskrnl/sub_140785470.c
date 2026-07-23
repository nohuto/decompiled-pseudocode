/*
 * XREFs of sub_140785470 @ 0x140785470
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402E02F0 @ 0x1402E02F0 (sub_1402E02F0.c)
 *     sub_1406CE8B8 @ 0x1406CE8B8 (sub_1406CE8B8.c)
 *     sub_14076A680 @ 0x14076A680 (sub_14076A680.c)
 *     sub_14077F150 @ 0x14077F150 (sub_14077F150.c)
 *     sub_140784B14 @ 0x140784B14 (sub_140784B14.c)
 *     sub_140785A3C @ 0x140785A3C (sub_140785A3C.c)
 *     sub_140861A78 @ 0x140861A78 (sub_140861A78.c)
 *     sub_140A237D0 @ 0x140A237D0 (sub_140A237D0.c)
 *     sub_140A2B08C @ 0x140A2B08C (sub_140A2B08C.c)
 *     sub_140A2B2B8 @ 0x140A2B2B8 (sub_140A2B2B8.c)
 */

__int64 __fastcall sub_140785470(__int64 a1, __int64 (__fastcall *a2)(), __int64 a3, int a4, __int64 a5)
{
  const WCHAR *v5; // r10
  __int128 *v6; // r8
  int v7; // r9d
  __int64 v8; // r9
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  unsigned int v15; // eax
  __int128 v17; // [rsp+50h] [rbp-18h] BYREF

  v5 = (const WCHAR *)a2;
  LODWORD(a2) = 0;
  LODWORD(v6) = 0;
  v17 = 0LL;
  v7 = a4 - 1;
  if ( v7 )
  {
    v8 = (unsigned int)(v7 - 1);
    if ( (_DWORD)v8 )
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
                    v15 = sub_1406CE8B8(
                            a1,
                            (__int64)v5,
                            *(_QWORD *)a5,
                            *(_QWORD *)(a5 + 8),
                            *(_QWORD *)(a5 + 16),
                            *(_DWORD *)(a5 + 24),
                            *(_QWORD *)(a5 + 32),
                            *(_DWORD *)(a5 + 40));
                  else
                    v15 = -1073741811;
                }
                else
                {
                  v15 = sub_140785A3C(
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
                v15 = sub_140A2B2B8(
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
              v15 = sub_140A2B08C(
                      a1,
                      (_DWORD)v5,
                      *(_QWORD *)a5,
                      0,
                      *(_QWORD *)(a5 + 24),
                      *(_DWORD *)(a5 + 32),
                      *(_QWORD *)(a5 + 40));
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
            v15 = sub_140861A78(
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
          v15 = sub_140A237D0(a1, v5, *(_DWORD *)a5 & 0xFFFF0000);
        }
      }
      else
      {
        v15 = sub_14076A680(
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
      v15 = sub_140784B14(
              a1,
              v5,
              0x30u,
              v8,
              *(_DWORD *)a5,
              *(_BYTE *)(a5 + 4),
              *(_QWORD *)(a5 + 8),
              (_DWORD *)(a5 + 16));
    }
  }
  else
  {
    v15 = sub_14077F150(a1, (__int64)v5);
  }
  return sub_1402E02F0(v15);
}
