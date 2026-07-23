/*
 * XREFs of sub_14037FA00 @ 0x14037FA00
 * Callers:
 *     sub_140238330 @ 0x140238330 (sub_140238330.c)
 *     sub_14037E958 @ 0x14037E958 (sub_14037E958.c)
 * Callees:
 *     sub_14023807C @ 0x14023807C (sub_14023807C.c)
 *     sub_1402380FC @ 0x1402380FC (sub_1402380FC.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     sub_14035F464 @ 0x14035F464 (sub_14035F464.c)
 *     sub_14035F5E8 @ 0x14035F5E8 (sub_14035F5E8.c)
 *     sub_14037EEA8 @ 0x14037EEA8 (sub_14037EEA8.c)
 *     sub_14037FC24 @ 0x14037FC24 (sub_14037FC24.c)
 *     sub_14037FC84 @ 0x14037FC84 (sub_14037FC84.c)
 *     sub_1403812F8 @ 0x1403812F8 (sub_1403812F8.c)
 *     sub_14038217C @ 0x14038217C (sub_14038217C.c)
 *     sub_14038F8FC @ 0x14038F8FC (sub_14038F8FC.c)
 *     sub_14038F99C @ 0x14038F99C (sub_14038F99C.c)
 *     sub_140390A50 @ 0x140390A50 (sub_140390A50.c)
 *     sub_140391D3C @ 0x140391D3C (sub_140391D3C.c)
 *     sub_14045F42A @ 0x14045F42A (sub_14045F42A.c)
 *     sub_1405F7EEC @ 0x1405F7EEC (sub_1405F7EEC.c)
 *     sub_1405F80DC @ 0x1405F80DC (sub_1405F80DC.c)
 *     sub_1405F8978 @ 0x1405F8978 (sub_1405F8978.c)
 *     sub_1405F8ED4 @ 0x1405F8ED4 (sub_1405F8ED4.c)
 *     sub_1405F9824 @ 0x1405F9824 (sub_1405F9824.c)
 *     sub_1405FA31C @ 0x1405FA31C (sub_1405FA31C.c)
 *     sub_1405FA3A4 @ 0x1405FA3A4 (sub_1405FA3A4.c)
 *     sub_1405FA434 @ 0x1405FA434 (sub_1405FA434.c)
 *     sub_1405FA9D8 @ 0x1405FA9D8 (sub_1405FA9D8.c)
 */

__int64 __fastcall sub_14037FA00(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rsi
  unsigned int v4; // ebp
  int v5; // r15d
  unsigned __int64 v6; // r14
  int v7; // ebx
  unsigned int v8; // eax
  unsigned int v9; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // eax
  struct _EX_RUNDOWN_REF *v18; // rax
  int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // rcx
  int v22; // eax
  unsigned int v23; // eax
  char v24; // bl
  int v25; // eax

  v3 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (a2 & 1) == 0 )
    v3 = a2;
  v4 = -1;
  v5 = 0;
  v6 = 0LL;
  v7 = *(_DWORD *)v3 & 7;
  if ( (a2 & 1) == 0 )
    sub_14037FC24(a1 + 718);
  if ( !v7 )
  {
    v8 = sub_14037FC84(a1 + 10, v3);
LABEL_7:
    v9 = v8;
    goto LABEL_8;
  }
  v12 = v7 - 1;
  if ( !v12 )
  {
    v8 = sub_14037EEA8((__int64)(a1 + 10), v3);
    goto LABEL_7;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v8 = sub_140391D3C(a1 + 10, a1 + 124, v3);
    goto LABEL_7;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    v8 = sub_1405FA3A4(a1, v3);
    goto LABEL_7;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    if ( (*(_DWORD *)(v3 + 8) & 7) == 0 )
    {
      sub_1405FA31C(a1, 0LL);
      v9 = 0;
LABEL_8:
      if ( v9 == -1073741818 )
        sub_1405FA31C(a1, 0LL);
      goto LABEL_10;
    }
    if ( (*(_DWORD *)(v3 + 8) & 7u) - 4 <= 1 )
    {
      v8 = sub_1405F7EEC(a1, v3);
      v4 = 0;
      goto LABEL_7;
    }
LABEL_66:
    v9 = -1073741811;
    goto LABEL_8;
  }
  v16 = v15 - 1;
  if ( v16 )
  {
    v9 = v16 - 1;
    if ( v9 )
    {
      if ( v9 == 1 )
      {
        sub_1405F8978((char *)a1 + ((*(_DWORD *)(v3 + 28) & 2) != 0 ? 2016LL : 80LL), v3);
        return 259;
      }
      else
      {
        return (unsigned int)-1073741822;
      }
    }
    v4 = 259;
    if ( *(_DWORD *)(v3 + 8) != 1 )
      v6 = v3;
    if ( !sub_14035F464((__int64)&unk_140D31A00, *(_DWORD *)(a1[3] + 6016LL)) )
    {
      v9 = -1073741431;
      goto LABEL_10;
    }
    v17 = *(_DWORD *)(v3 + 8);
    v5 = 1;
    switch ( v17 )
    {
      case 1:
        v19 = *(_DWORD *)(v3 + 16);
        if ( v19 < 0 )
          goto LABEL_10;
        if ( v19 <= 1 )
        {
          v8 = sub_14038F8FC((char *)a1 + (v19 != 0 ? 2016LL : 80LL));
        }
        else
        {
          if ( v19 == 4 )
          {
            sub_14023807C((__int64)(a1 + 34), 0, 0);
            goto LABEL_10;
          }
          if ( v19 == 3 )
          {
            sub_1402380FC((__int64)(a1 + 10));
            goto LABEL_10;
          }
          if ( v19 != 2 )
          {
            if ( v19 == 5 )
            {
              sub_14045F42A(a1 + 10);
            }
            else if ( v19 == 6 )
            {
              v9 = -1073741811;
            }
LABEL_10:
            if ( v6 )
              sub_1405FA9D8(a1, v6);
            if ( !v5 )
              goto LABEL_13;
            goto LABEL_33;
          }
          v8 = sub_1405F9824(a1 + 10, 0LL, a1 + 118);
        }
        goto LABEL_7;
      case 2:
        v8 = sub_1405F8ED4(a1 + 10);
        goto LABEL_7;
      case 3:
        v8 = sub_1405FA434(a1, v3);
        v6 = 0LL;
        goto LABEL_7;
      case 4:
        sub_1403812F8(
          a1[249],
          2LL,
          (*(_WORD *)(v3 + 14) & 1) != 0 ? 200 : 2000,
          (*(_WORD *)(v3 + 14) & 1) != 0 ? 2000 : 30000);
        goto LABEL_33;
      case 5:
        _InterlockedAnd16((volatile signed __int16 *)(v3 + 12), 0xFFFEu);
LABEL_33:
        v18 = (struct _EX_RUNDOWN_REF *)sub_14035F5E8((__int64)&unk_140D31A00, *(_DWORD *)(a1[3] + 6016LL) & 0x3FF);
        sub_1402AD030(v18 + 1);
LABEL_13:
        if ( v4 != -1 )
          return v4;
        return v9;
      case 6:
        _InterlockedAnd16((volatile signed __int16 *)(v3 + 12), 0xFFFEu);
        if ( (unsigned __int64)(sub_1402F5718() - a1[751]) >= 0x989680 && (unsigned int)sub_14038217C(a1 + 10, 2LL) == 2 )
        {
          sub_1405F80DC(a1 + 10);
          a1[751] = sub_1402F5718();
        }
        goto LABEL_33;
    }
    goto LABEL_66;
  }
  v20 = (__int64)(a1 + 10);
  v21 = v20;
  v22 = *(_DWORD *)(v3 + 8) & 7;
  if ( v22 )
  {
    if ( v22 == 1 )
    {
      sub_1402380FC(v20);
    }
    else if ( v22 == 3 )
    {
      v23 = sub_14038217C(v20, 0LL);
      if ( v23 )
        sub_140390A50(v20, v23);
    }
    else
    {
      while ( (unsigned int)sub_14038217C(v21, 1LL) == 2 )
      {
        v24 = *(_BYTE *)(v20 + 1904);
        *(_BYTE *)(v20 + 1904) = v24 | 3;
        v25 = sub_14038F99C(v20, 0LL);
        *(_BYTE *)(v20 + 1904) ^= (*(_BYTE *)(v20 + 1904) ^ v24) & 3;
        if ( v25 < 0 )
          break;
        v21 = v20;
      }
    }
  }
  else
  {
    sub_1405F8ED4(v20);
  }
  return 0;
}
