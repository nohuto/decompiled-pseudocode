/*
 * XREFs of sub_140778100 @ 0x140778100
 * Callers:
 *     sub_140777D40 @ 0x140777D40 (sub_140777D40.c)
 * Callees:
 *     sub_140698510 @ 0x140698510 (sub_140698510.c)
 *     sub_140699E6C @ 0x140699E6C (sub_140699E6C.c)
 *     sub_140776EE8 @ 0x140776EE8 (sub_140776EE8.c)
 *     sub_140777298 @ 0x140777298 (sub_140777298.c)
 *     sub_140778370 @ 0x140778370 (sub_140778370.c)
 *     sub_14077DE70 @ 0x14077DE70 (sub_14077DE70.c)
 *     sub_14094A034 @ 0x14094A034 (sub_14094A034.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140778100(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v4; // ebx
  _QWORD *v7; // r14
  _DWORD *Pool2; // rax
  _DWORD *v9; // rdi
  __int64 *v10; // r13
  int v11; // r8d
  unsigned int v12; // r10d
  int v13; // r14d
  int v14; // eax
  char v15; // r9
  bool v16; // zf
  __int64 v17; // r8
  int v18; // eax
  __int64 v20; // r9
  int v21; // eax
  unsigned int v22[18]; // [rsp+50h] [rbp-48h] BYREF

  v4 = 0;
  v22[0] = 0;
  *a4 = 0LL;
  v7 = a4;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, 40LL, 1483763280LL);
  v9 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  if ( *(_QWORD *)(a3 + 16) )
  {
    v10 = (__int64 *)(Pool2 + 4);
    *Pool2 = *(_DWORD *)(a3 + 32);
    Pool2[2] = *(_DWORD *)(a1 + 16);
    v4 = sub_14077DE70(*(_QWORD *)(*(_QWORD *)(a3 + 16) + 16LL), 0x7FFFFFFFLL, 1483763280LL, Pool2 + 4);
    if ( v4 < 0 )
      goto LABEL_31;
    if ( (*(_DWORD *)(a1 + 64) || (*(_DWORD *)(a1 + 40) & 2) != 0) && (unsigned int)(*v9 - 1) <= 1 )
    {
      v13 = sub_140777298(*(_DWORD *)(a1 + 16));
      v14 = *(_DWORD *)(a1 + 40);
      if ( (v14 & 2) != 0 )
      {
        if ( v11 == 1 )
        {
          v20 = *v10;
          if ( (v14 & 4) != 0 )
          {
            v4 = sub_14094A034(
                   a2,
                   0,
                   v13,
                   v20,
                   *(_QWORD *)(a1 + 56),
                   (__int64)(v9 + 8),
                   (__int64)(v9 + 6),
                   (__int64)v22);
            if ( v4 < 0 )
              goto LABEL_31;
            v21 = sub_14094A034(
                    a2,
                    1,
                    v13,
                    *v10,
                    *(_QWORD *)(a1 + 56),
                    (__int64)(v9 + 8),
                    (__int64)(v9 + 6),
                    (__int64)v22);
          }
          else
          {
            v4 = sub_140698510(a2, 0, v13, v20, (_QWORD *)v9 + 4, v9 + 6, v22);
            if ( v4 < 0 )
              goto LABEL_31;
            v21 = sub_140698510(a2, 1, v13, *v10, (_QWORD *)v9 + 4, v9 + 6, v22);
          }
          v7 = a4;
          v4 = v21;
          if ( v21 == -1073741772 )
            v4 = 0;
          goto LABEL_10;
        }
        v18 = sub_140699E6C(
                a2,
                v13,
                *v10,
                v14 & 4,
                *(_QWORD *)(a1 + 56),
                0LL,
                0,
                *(_QWORD *)(a3 + 24),
                (__int64 *)v9 + 4,
                v9 + 6);
      }
      else
      {
        v15 = v14 & 4;
        v16 = v11 == 1;
        v17 = *v10;
        if ( v16 )
          v18 = sub_140776EE8(
                  a2,
                  v13,
                  v17,
                  v15,
                  *(_QWORD *)(a1 + 56),
                  *(_QWORD *)(a1 + 72),
                  v12,
                  (__int64 *)v9 + 4,
                  v9 + 6);
        else
          v18 = sub_140699E6C(
                  a2,
                  v13,
                  v17,
                  v15,
                  *(_QWORD *)(a1 + 56),
                  *(_QWORD *)(a1 + 72),
                  v12,
                  *(_QWORD *)(a3 + 24),
                  (__int64 *)v9 + 4,
                  v9 + 6);
      }
      v7 = a4;
      v4 = v18;
    }
LABEL_10:
    if ( v4 >= 0 )
      goto LABEL_11;
LABEL_31:
    sub_140778370(v9);
    return (unsigned int)v4;
  }
  *Pool2 = 0;
  Pool2[2] = 1;
LABEL_11:
  if ( *v9 == 2 && !v9[6] )
    goto LABEL_31;
  *v7 = v9;
  return (unsigned int)v4;
}
