/*
 * XREFs of sub_14084192C @ 0x14084192C
 * Callers:
 *     sub_140841610 @ 0x140841610 (sub_140841610.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140841A58 @ 0x140841A58 (sub_140841A58.c)
 *     sub_140841AE8 @ 0x140841AE8 (sub_140841AE8.c)
 *     sub_140A18724 @ 0x140A18724 (sub_140A18724.c)
 *     sub_140A18AA0 @ 0x140A18AA0 (sub_140A18AA0.c)
 *     sub_140A18F30 @ 0x140A18F30 (sub_140A18F30.c)
 *     sub_140A18FB4 @ 0x140A18FB4 (sub_140A18FB4.c)
 *     sub_140A19154 @ 0x140A19154 (sub_140A19154.c)
 *     sub_140A19614 @ 0x140A19614 (sub_140A19614.c)
 *     sub_140A19DE8 @ 0x140A19DE8 (sub_140A19DE8.c)
 */

__int64 __fastcall sub_14084192C(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v5; // eax
  int v6; // ebx
  unsigned int v7; // edi
  __int64 j; // r13
  int v10; // eax
  int v11; // edx
  int *i; // rcx
  int v13; // eax
  int v14; // eax
  unsigned int v15; // eax
  _DWORD *v16; // rcx
  __int64 v17; // rax
  bool v18; // zf
  __int64 v19; // rax

  if ( !a3 )
    return 0;
  if ( *(_DWORD *)(a2 + 64) == 1 )
  {
    v11 = 0;
    for ( i = (int *)(a1 + 24); ; i += 8 )
    {
      v13 = *i;
      if ( !v11 || v11 == 17 )
        break;
      if ( v11 == 28 )
      {
        *((_QWORD *)i - 1) = 1LL;
LABEL_30:
        *(i - 6) = 2;
        v14 = v13 | 1;
        *((_QWORD *)i - 2) = 4LL;
        goto LABEL_31;
      }
      v14 = v13 | 2;
LABEL_31:
      *i = v14;
      if ( ++v11 >= 34 )
        return 0;
    }
    *((_QWORD *)i - 1) = 0LL;
    goto LABEL_30;
  }
  if ( *(_DWORD *)(a2 + 80) )
  {
    v15 = 0;
    v16 = (_DWORD *)(a1 + 24);
    do
    {
      if ( v15 != 1 && (v15 <= 0x10 || v15 > 0x13 && v15 != 22 && (v15 <= 0x1B || v15 > 0x1F && v15 != 33)) )
        *v16 |= 2u;
      ++v15;
      v16 += 8;
    }
    while ( (int)v15 < 34 );
  }
  v5 = sub_140841A58(a2);
  v6 = v5;
  if ( v5 == -1073741801 )
  {
    if ( !*(_DWORD *)(a2 + 80) )
    {
      v6 = sub_140A19DE8(a1, a2);
      if ( v6 >= 0 )
        goto LABEL_6;
    }
LABEL_46:
    sub_1406E0C3C(1LL, (__int64)"AslFileAllocAndGetAttributes");
    return (unsigned int)v6;
  }
  if ( v5 < 0 )
    goto LABEL_46;
LABEL_6:
  v7 = 0;
  for ( j = 0LL; ; j += 32LL )
  {
    if ( ((a3 >> v7) & 1) == 0 || (*(_DWORD *)(a1 + j + 24) & 3) != 0 )
      goto LABEL_8;
    if ( v7 <= 0x17 )
      break;
    switch ( v7 )
    {
      case 0x18u:
        goto LABEL_19;
      case 0x19u:
LABEL_78:
        v6 = sub_140A19614(a1, a2);
        if ( v6 < 0 )
          goto LABEL_46;
        goto LABEL_8;
      case 0x1Au:
LABEL_76:
        v6 = sub_140A18724(a1, a2);
        if ( v6 < 0 )
          goto LABEL_46;
        goto LABEL_8;
      case 0x1Bu:
        v6 = sub_140A18AA0(a1, a2);
        if ( v6 < 0 )
          goto LABEL_46;
        goto LABEL_8;
      case 0x1Cu:
        v6 = sub_140A18F30(a1, a2);
        if ( v6 < 0 )
          goto LABEL_46;
        goto LABEL_8;
    }
    if ( v7 <= 0x1F )
      goto LABEL_60;
    if ( v7 != 32 )
    {
      v18 = v7 == 33;
      goto LABEL_59;
    }
LABEL_71:
    v19 = *(_QWORD *)(a2 + 24);
    *(_DWORD *)(a1 + 1048) |= 1u;
    *(_DWORD *)(a1 + 24) |= 1u;
    *(_QWORD *)(a1 + 16) = (unsigned int)v19;
    *(_DWORD *)(a1 + 1024) = 3;
    *(_QWORD *)(a1 + 1032) = 8LL;
    *(_QWORD *)(a1 + 1040) = v19;
    *(_DWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = 4LL;
LABEL_8:
    if ( (int)++v7 >= 34 )
      return 0;
  }
  if ( v7 == 23 )
    goto LABEL_78;
  if ( v7 <= 0x11 )
  {
    if ( v7 == 17 )
    {
      switch ( *(_DWORD *)(a2 + 64) )
      {
        case 4:
          v17 = 1LL;
          break;
        case 5:
          v17 = 2LL;
          break;
        case 6:
          v17 = 3LL;
          break;
        default:
          v17 = 0LL;
          break;
      }
      *(_DWORD *)(a1 + 568) |= 1u;
      *(_DWORD *)(a1 + 544) = 2;
      *(_QWORD *)(a1 + 552) = 4LL;
      *(_QWORD *)(a1 + 560) = v17;
      goto LABEL_8;
    }
    if ( v7 )
    {
      if ( v7 == 1 )
        goto LABEL_60;
      if ( v7 == 2 )
        goto LABEL_76;
LABEL_19:
      v10 = sub_140841AE8(a1, a2);
      if ( (unsigned int)(v10 + 1073741684) <= 0x3FFFFF73 || v10 <= -1073741688 )
        sub_1406E0C3C(1LL, (__int64)"AslFileAllocAndGetAttributes");
      goto LABEL_8;
    }
    goto LABEL_71;
  }
  if ( v7 <= 0x13 )
    goto LABEL_60;
  if ( v7 <= 0x15 )
  {
    v6 = sub_140A18FB4(a1, a2);
    if ( v6 < 0 )
      goto LABEL_46;
    goto LABEL_8;
  }
  v18 = v7 == 22;
LABEL_59:
  if ( v18 )
  {
LABEL_60:
    v6 = sub_140A19154(a1, a2);
    if ( v6 < 0 )
      goto LABEL_46;
    goto LABEL_8;
  }
  return (unsigned int)-1073741595;
}
