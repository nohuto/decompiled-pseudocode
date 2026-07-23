/*
 * XREFs of sub_140591814 @ 0x140591814
 * Callers:
 *     sub_140591A10 @ 0x140591A10 (sub_140591A10.c)
 * Callees:
 *     sub_140216544 @ 0x140216544 (sub_140216544.c)
 *     sub_1402165BC @ 0x1402165BC (sub_1402165BC.c)
 *     sub_14026A230 @ 0x14026A230 (sub_14026A230.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 */

__int64 __fastcall sub_140591814(__int64 a1)
{
  unsigned __int64 v1; // r14
  bool v2; // bl
  int v4; // r13d
  unsigned __int64 v5; // rdi
  int v6; // esi
  char v7; // r12
  unsigned __int64 v8; // rdi
  _QWORD *v9; // rdx
  bool i; // zf
  unsigned __int64 v11; // r9
  _QWORD *v12; // rax
  unsigned __int64 v13; // r8
  unsigned __int16 *v14; // rsi
  unsigned __int16 *v15; // r15
  unsigned __int16 v16; // ax
  __int64 v17; // rax
  _QWORD *v18; // rdx
  _QWORD *v19; // rax

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0;
  v4 = *(_DWORD *)(a1 + 40);
  v5 = *(_QWORD *)(a1 + 32) - v1;
  v6 = 0;
  v7 = 0;
  sub_1402165BC(6);
  v8 = v5 + 1;
  if ( !v8 )
  {
LABEL_28:
    v18 = (_QWORD *)qword_140C53158;
    if ( qword_140C53158 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(a1 + 32) >= v18[3] )
        {
          if ( *(_QWORD *)(a1 + 24) <= v18[4] )
          {
            ++dword_140C531A4;
            v6 = -1073741800;
            goto LABEL_32;
          }
          v19 = (_QWORD *)v18[1];
          if ( !v19 )
          {
            v2 = 1;
            break;
          }
        }
        else
        {
          v19 = (_QWORD *)*v18;
          if ( !*v18 )
            break;
        }
        v18 = v19;
      }
    }
    RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C53158, (unsigned __int64)v18, v2, (_QWORD *)a1);
    goto LABEL_32;
  }
  do
  {
    v9 = (_QWORD *)*((_QWORD *)&xmmword_140C53100 + 1);
    for ( i = *((_QWORD *)&xmmword_140C53100 + 1) == 0LL; ; i = v12 == 0LL )
    {
      if ( i )
      {
        v17 = v8;
        if ( 512 - (v1 & 0x1FF) <= v8 )
          v17 = 512 - (v1 & 0x1FF);
        v8 -= v17;
        v1 += v17;
        goto LABEL_24;
      }
      v11 = v9[3];
      if ( v1 < v11 )
      {
        v12 = (_QWORD *)*v9;
        goto LABEL_8;
      }
      if ( v1 < v11 + 512 )
        break;
      v12 = (_QWORD *)v9[1];
LABEL_8:
      v9 = v12;
    }
    v13 = (v1 & ((1LL << ((unsigned __int8)dword_140C50720 - 12)) - 1)) - v11;
    v14 = (unsigned __int16 *)v9 + v13 + 40;
    if ( v1 + v8 <= v11 + 512 )
      v15 = (unsigned __int16 *)v9 + v8 + v13 + 40;
    else
      v15 = (unsigned __int16 *)(v9 + 138);
    while ( v14 < v15 )
    {
      v16 = *v14;
      if ( *v14 >> 14 != v4 )
      {
        if ( (v16 & 0x3FFF) != 0 )
        {
          ++dword_140C531A0;
          v6 = -1073741800;
          goto LABEL_27;
        }
        if ( (v16 & 0xC000) != 0xC000 && !v7 )
        {
          sub_14026A230();
          v7 = 1;
        }
        *v14 = (_WORD)v4 << 14;
      }
      ++v14;
      ++v1;
      --v8;
    }
LABEL_24:
    v6 = 0;
  }
  while ( v8 );
LABEL_27:
  if ( v6 >= 0 )
    goto LABEL_28;
LABEL_32:
  sub_140216544(0x11u, 6);
  return (unsigned int)v6;
}
