/*
 * XREFs of sub_140796D80 @ 0x140796D80
 * Callers:
 *     sub_140790030 @ 0x140790030 (sub_140790030.c)
 *     sub_140794F30 @ 0x140794F30 (sub_140794F30.c)
 *     sub_140796040 @ 0x140796040 (sub_140796040.c)
 * Callees:
 *     sub_1409F4B98 @ 0x1409F4B98 (sub_1409F4B98.c)
 *     sub_1409F4CD8 @ 0x1409F4CD8 (sub_1409F4CD8.c)
 *     sub_1409F4DA0 @ 0x1409F4DA0 (sub_1409F4DA0.c)
 */

void __fastcall sub_140796D80(__int64 a1, char a2, char a3, char a4, _BYTE *a5)
{
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  char v11; // cl
  __int64 v12; // rsi
  int v13; // edx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rdx
  _DWORD *v17; // r10
  __int64 v18; // rcx

  if ( (*(_BYTE *)(a1 + 98) & 1) == 0 )
  {
    *a5 = 0;
    if ( a3 )
      v8 = *(_QWORD *)(a1 + 40);
    else
      v8 = *(_QWORD *)(a1 + 32);
    if ( a4 )
      v8 = *(_QWORD *)(v8 + 400);
    v9 = 0LL;
    do
    {
      if ( !*(_DWORD *)(32 * (v9 + 4) + v8)
        || a4 && (*(_DWORD *)(32LL * (unsigned int)v9 + v8 + 136) & 0x400) == 0
        || a2 && *(_WORD *)(32LL * (unsigned int)v9 + v8 + 134) != *(_WORD *)(v8 + 88) )
      {
        goto LABEL_8;
      }
      v10 = *(_QWORD *)(v8 + 384);
      v11 = 1;
      if ( !v10 )
      {
LABEL_13:
        *a5 |= 1 << v9;
        goto LABEL_14;
      }
      v12 = 104LL * (unsigned int)v9;
      v13 = *(_DWORD *)(v12 + v10);
      v14 = v12 + v10;
      if ( (v13 & 0x80000004) == 0x80000004 )
      {
        v17 = *(_DWORD **)(v14 + 8);
        v18 = 0LL;
        if ( !*v17 )
          goto LABEL_14;
        while ( v17[v18 + 1] != *(_DWORD *)(*(_QWORD *)(a1 + 80) + 1088LL) )
        {
          v18 = (unsigned int)(v18 + 1);
          if ( (unsigned int)v18 >= *v17 )
            goto LABEL_14;
        }
        v11 = 1;
      }
      if ( (v13 & 0x80000008) == 0x80000008 )
        v11 = sub_1409F4CD8(a1, *(_QWORD *)(v14 + 16));
      if ( v11 )
      {
        if ( (v15 = *(_QWORD *)(v8 + 384), (*(_DWORD *)(v15 + 104LL * (unsigned int)v9) & 0x80000010) != 0x80000010)
          && (*(_DWORD *)(v15 + 104LL * (unsigned int)v9) & 0x80000020) != 0x80000020
          || (unsigned __int8)sub_1409F4DA0(a1, *(_QWORD *)(v15 + v12 + 24), *(_QWORD *)(v15 + v12 + 32)) )
        {
          v16 = *(_QWORD *)(v8 + 384);
          if ( (*(_DWORD *)(v16 + 104LL * (unsigned int)v9) & 0x80008000) != 0x80008000
            || (unsigned __int8)sub_1409F4B98(a1, *(_QWORD *)(v16 + v12 + 40), v14) )
          {
            goto LABEL_13;
          }
        }
      }
LABEL_14:
      if ( a2 )
        return;
LABEL_8:
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < 8 );
  }
}
