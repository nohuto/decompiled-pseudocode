/*
 * XREFs of sub_14025D8EC @ 0x14025D8EC
 * Callers:
 *     sub_140296FC0 @ 0x140296FC0 (sub_140296FC0.c)
 * Callees:
 *     sub_14025DAA8 @ 0x14025DAA8 (sub_14025DAA8.c)
 *     sub_14025DAE4 @ 0x14025DAE4 (sub_14025DAE4.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_14025D8EC(__int64 a1, unsigned __int64 a2, unsigned int a3, _BYTE *a4, __int64 a5, __int64 a6)
{
  int v7; // r14d
  _BYTE *v8; // rsi
  unsigned int v9; // r12d
  unsigned int i; // edi
  char v11; // al
  unsigned int v12; // r8d
  unsigned __int64 v13; // r14
  unsigned int v14; // r11d
  unsigned __int64 v15; // rdx
  int v17; // ecx
  __int64 v18; // r9
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r8
  __int16 v23; // [rsp+90h] [rbp+8h]
  unsigned __int64 v24; // [rsp+98h] [rbp+10h]

  v24 = a2;
  v7 = 0;
  while ( 1 )
  {
    v8 = (_BYTE *)(a1 + *((unsigned int *)a4 + 2));
    if ( a2 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v8 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (unsigned __int8)v8[2];
    for ( i = 0; ; i += sub_14025DAA8() )
    {
      if ( i >= v9 )
        goto LABEL_25;
      v11 = HIBYTE(*(_WORD *)&v8[2 * i + 4]) & 0xF;
      if ( !v11 || v11 == 10 )
        break;
    }
    if ( i < v9 )
    {
LABEL_9:
      v12 = 0;
      v13 = v24;
      while ( 1 )
      {
        if ( i >= v9 )
          goto LABEL_14;
        v23 = *(_WORD *)&v8[2 * i + 4];
        v14 = HIBYTE(v23) >> 4;
        if ( (v23 & 0xF00) != 0 )
          break;
        if ( v12 >= a3 )
        {
          v19 = *(_QWORD *)(a5 + 152);
          if ( v13 <= 0x7FFFFFFEFFFFLL && (v19 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( *(_QWORD *)a6 && (v19 < **(_QWORD **)a6 || v19 > **(_QWORD **)(a6 + 8) - 8LL) )
            return 3221225512LL;
          *(_QWORD *)(a5 + 152) += 8LL;
          *(_QWORD *)(a5 + 120 + 8LL * v14) = *(_QWORD *)v19;
          v20 = *(_QWORD *)(a6 + 16);
          v13 = v24;
          if ( v20 )
            *(_QWORD *)(v20 + 8LL * v14 + 128) = v19;
        }
        ++i;
        v12 += 2 - (v14 < 8);
      }
      if ( i >= v9 )
        goto LABEL_14;
      if ( (HIBYTE(v23) & 0xF) == 2 && !v14 )
      {
        if ( v12 >= a3 )
          *(_QWORD *)(a5 + 152) += 8LL;
        ++i;
      }
      if ( i < v9 && (v8[2 * i + 5] & 0xF) == 0xA )
      {
        v21 = *(_QWORD *)(a5 + 152);
        v22 = v21 + 24;
        if ( v13 <= 0x7FFFFFFEFFFFLL && (v21 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( !*(_QWORD *)a6 || v21 >= **(_QWORD **)a6 && v21 <= **(_QWORD **)(a6 + 8) - 8LL )
        {
          if ( v13 <= 0x7FFFFFFEFFFFLL && (v22 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( !*(_QWORD *)a6 || v22 >= **(_QWORD **)a6 && v22 <= **(_QWORD **)(a6 + 8) - 8LL )
          {
            *(_QWORD *)(a5 + 248) = *(_QWORD *)v21;
            *(_QWORD *)(a5 + 152) = *(_QWORD *)v22;
            return 0LL;
          }
        }
      }
      else
      {
LABEL_14:
        v15 = *(_QWORD *)(a5 + 152);
        if ( v13 <= 0x7FFFFFFEFFFFLL && (v15 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( !*(_QWORD *)a6 || v15 >= **(_QWORD **)a6 && v15 <= **(_QWORD **)(a6 + 8) - 8LL )
        {
          *(_QWORD *)(a5 + 248) = *(_QWORD *)v15;
          *(_QWORD *)(a5 + 152) += 8LL;
          sub_14025DAE4(a5, 1LL, 1LL);
          return 0LL;
        }
      }
      return 3221225512LL;
    }
LABEL_25:
    if ( (*v8 & 0x20) == 0 )
      goto LABEL_9;
    if ( (unsigned int)++v7 > 0x20 )
      return 3221225727LL;
    v17 = (unsigned __int8)v8[2];
    v18 = (unsigned int)(v17 + 1);
    if ( (v17 & 1) == 0 )
      v18 = (unsigned __int8)v8[2];
    a4 = &v8[2 * v18 + 4];
    a2 = v24;
  }
}
