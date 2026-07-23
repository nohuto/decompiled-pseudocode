/*
 * XREFs of sub_140AF8ACC @ 0x140AF8ACC
 * Callers:
 *     sub_140A554B0 @ 0x140A554B0 (sub_140A554B0.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_140AF8ACC()
{
  __int64 v0; // rbp
  _OWORD **v1; // rax
  _OWORD *v2; // rdi
  _OWORD **v3; // rax
  _OWORD *v4; // rdi
  __int64 Pool2; // rax
  _QWORD *v7; // rbx
  __int64 v8; // r14
  _OWORD *i; // rsi
  __int64 v10; // rax
  __int64 *v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rbx
  __int64 v15; // r14
  _OWORD *j; // rsi
  __int64 v17; // rax
  __int64 *v18; // rcx
  _QWORD *v19; // rax

  v0 = qword_140C4BF38;
  if ( !byte_140C54950 )
  {
    qword_140CE2208 = (__int64)&qword_140CE2200;
    qword_140CE2200 = (__int64)&qword_140CE2200;
    v1 = (_OWORD **)(*(_QWORD *)(qword_140C4BF38 + 240) + 2600LL);
    v2 = *v1;
    while ( v2 != (_OWORD *)v1 )
    {
      Pool2 = ExAllocatePool2(64LL, 0x60uLL, 0x416C6148u);
      v7 = (_QWORD *)Pool2;
      if ( !Pool2 )
        return 3221225495LL;
      v8 = Pool2 + 80;
      *(_OWORD *)Pool2 = *v2;
      *(_OWORD *)(Pool2 + 16) = v2[1];
      *(_OWORD *)(Pool2 + 32) = v2[2];
      *(_OWORD *)(Pool2 + 48) = v2[3];
      *(_OWORD *)(Pool2 + 64) = v2[4];
      *(_OWORD *)(Pool2 + 80) = v2[5];
      *(_QWORD *)(Pool2 + 88) = Pool2 + 80;
      *(_QWORD *)(Pool2 + 80) = Pool2 + 80;
      for ( i = (_OWORD *)*((_QWORD *)v2 + 10); i != v2 + 5; i = *(_OWORD **)i )
      {
        v10 = ExAllocatePool2(64LL, 0x50uLL, 0x416C6148u);
        if ( !v10 )
          return 3221225495LL;
        *(_OWORD *)v10 = *i;
        *(_OWORD *)(v10 + 16) = i[1];
        *(_OWORD *)(v10 + 32) = i[2];
        *(_OWORD *)(v10 + 48) = i[3];
        *(_OWORD *)(v10 + 64) = i[4];
        v11 = *(__int64 **)(v8 + 8);
        if ( *v11 != v8 )
          goto LABEL_24;
        *(_QWORD *)v10 = v8;
        *(_QWORD *)(v10 + 8) = v11;
        *v11 = v10;
        *(_QWORD *)(v8 + 8) = v10;
      }
      v12 = (_QWORD *)qword_140CE2208;
      if ( *(__int64 **)qword_140CE2208 != &qword_140CE2200 )
LABEL_24:
        __fastfail(3u);
      v7[1] = qword_140CE2208;
      *v7 = &qword_140CE2200;
      *v12 = v7;
      qword_140CE2208 = (__int64)v7;
      v2 = *(_OWORD **)v2;
      v1 = (_OWORD **)(*(_QWORD *)(v0 + 240) + 2600LL);
    }
    qword_140CE2228 = (__int64)&qword_140CE2220;
    qword_140CE2220 = (__int64)&qword_140CE2220;
    v3 = (_OWORD **)(*(_QWORD *)(v0 + 240) + 2616LL);
    v4 = *v3;
    while ( v4 != (_OWORD *)v3 )
    {
      v13 = ExAllocatePool2(64LL, 0x60uLL, 0x416C6148u);
      v14 = (_QWORD *)v13;
      if ( !v13 )
        return 3221225495LL;
      v15 = v13 + 80;
      *(_OWORD *)v13 = *v4;
      *(_OWORD *)(v13 + 16) = v4[1];
      *(_OWORD *)(v13 + 32) = v4[2];
      *(_OWORD *)(v13 + 48) = v4[3];
      *(_OWORD *)(v13 + 64) = v4[4];
      *(_OWORD *)(v13 + 80) = v4[5];
      *(_QWORD *)(v13 + 88) = v13 + 80;
      *(_QWORD *)(v13 + 80) = v13 + 80;
      for ( j = (_OWORD *)*((_QWORD *)v4 + 10); j != v4 + 5; j = *(_OWORD **)j )
      {
        v17 = ExAllocatePool2(64LL, 0x50uLL, 0x416C6148u);
        if ( !v17 )
          return 3221225495LL;
        *(_OWORD *)v17 = *j;
        *(_OWORD *)(v17 + 16) = j[1];
        *(_OWORD *)(v17 + 32) = j[2];
        *(_OWORD *)(v17 + 48) = j[3];
        *(_OWORD *)(v17 + 64) = j[4];
        v18 = *(__int64 **)(v15 + 8);
        if ( *v18 != v15 )
          goto LABEL_24;
        *(_QWORD *)v17 = v15;
        *(_QWORD *)(v17 + 8) = v18;
        *v18 = v17;
        *(_QWORD *)(v15 + 8) = v17;
      }
      v19 = (_QWORD *)qword_140CE2228;
      if ( *(__int64 **)qword_140CE2228 != &qword_140CE2220 )
        goto LABEL_24;
      v14[1] = qword_140CE2228;
      *v14 = &qword_140CE2220;
      *v19 = v14;
      qword_140CE2228 = (__int64)v14;
      v4 = *(_OWORD **)v4;
      v3 = (_OWORD **)(*(_QWORD *)(v0 + 240) + 2616LL);
    }
    byte_140C54950 = 1;
  }
  return 0LL;
}
