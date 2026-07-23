/*
 * XREFs of sub_140788A80 @ 0x140788A80
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406C1FDC @ 0x1406C1FDC (sub_1406C1FDC.c)
 *     sub_1406C2248 @ 0x1406C2248 (sub_1406C2248.c)
 *     sub_1407882D4 @ 0x1407882D4 (sub_1407882D4.c)
 *     sub_140788BD4 @ 0x140788BD4 (sub_140788BD4.c)
 *     sub_14081D0F0 @ 0x14081D0F0 (sub_14081D0F0.c)
 *     sub_140859460 @ 0x140859460 (sub_140859460.c)
 *     sub_140A2E2C4 @ 0x140A2E2C4 (sub_140A2E2C4.c)
 *     sub_140A303F4 @ 0x140A303F4 (sub_140A303F4.c)
 *     sub_140A30510 @ 0x140A30510 (sub_140A30510.c)
 */

__int64 __fastcall sub_140788A80(__int64 a1, __int64 a2, int a3, __int64 a4, unsigned int *a5)
{
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // r9
  int v8; // r10d
  const wchar_t *v9; // r11
  unsigned int v10; // r8d
  int v11; // r10d
  int v12; // r10d
  int v13; // r10d
  int v14; // r10d
  int v15; // r10d
  int v18; // r10d
  int v19; // r10d
  int v20; // eax
  const UNICODE_STRING *v21; // [rsp+40h] [rbp-10h] BYREF
  __int64 v22; // [rsp+48h] [rbp-8h] BYREF

  v22 = 0LL;
  v5 = sub_1407882D4(a1, a3, &v22);
  v10 = v5;
  if ( v5 < 0 )
    return v10;
  v11 = v8 - 1;
  if ( !v11 )
    return (unsigned int)sub_140A303F4(v6, v9, (unsigned int)v5);
  v12 = v11 - 1;
  if ( !v12 )
  {
    LOBYTE(v7) = *((_BYTE *)a5 + 4);
    return (unsigned int)sub_140859460(v22, v9, *a5, v7, *((_QWORD *)a5 + 1), a5 + 4);
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        v18 = v15 - 1;
        if ( v18 )
        {
          v19 = v18 - 2;
          if ( v19 )
          {
            if ( v19 != 1 )
              return (unsigned int)-1073741811;
            return (unsigned int)sub_14081D0F0(
                                   v22,
                                   v9,
                                   *(_QWORD *)a5,
                                   *((_QWORD *)a5 + 2),
                                   a5[6],
                                   *((_QWORD *)a5 + 4),
                                   a5[10]);
          }
          else
          {
            return (unsigned int)sub_1406C1FDC(
                                   v22,
                                   v9,
                                   *(void **)a5,
                                   *((_QWORD *)a5 + 2),
                                   *((_DWORD **)a5 + 3),
                                   *((_BYTE **)a5 + 4),
                                   a5[10],
                                   *((unsigned int **)a5 + 6));
          }
        }
        else
        {
          return (unsigned int)sub_140A2E2C4(
                                 v22,
                                 (_DWORD)v9,
                                 *(_QWORD *)a5,
                                 *((_QWORD *)a5 + 3),
                                 a5[8],
                                 *((_QWORD *)a5 + 5));
        }
      }
      else
      {
        return (unsigned int)sub_140788BD4(
                               v22,
                               *(_QWORD *)a5,
                               *((_QWORD *)a5 + 1),
                               *((_QWORD *)a5 + 2),
                               a5[6],
                               *((_QWORD *)a5 + 4));
      }
    }
    else
    {
      v21 = 0LL;
      v20 = sub_1406C2248(v22, v9, &v21);
      v10 = v20;
      if ( v20 < 0 )
        return v10;
      if ( (*(_DWORD *)&v21[4].Length & 0x10) == 0 )
        return (unsigned int)-1073741790;
      return (unsigned int)sub_140A30510(v22, v21, (unsigned int)v20);
    }
  }
  LODWORD(v21) = 0;
  LOBYTE(v7) = 1;
  v10 = sub_140859460(v22, v9, *a5, v7, a5 + 2, &v21);
  if ( (v10 & 0x80000000) == 0 )
    *((_BYTE *)a5 + 16) = (_DWORD)v21 == 1;
  return v10;
}
