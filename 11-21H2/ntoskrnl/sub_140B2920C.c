/*
 * XREFs of sub_140B2920C @ 0x140B2920C
 * Callers:
 *     sub_140AF47DC @ 0x140AF47DC (sub_140AF47DC.c)
 * Callees:
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x14034E6B0 (RtlRbInsertNodeEx.c)
 *     sub_1403B7A10 @ 0x1403B7A10 (sub_1403B7A10.c)
 */

void __fastcall sub_140B2920C(__int64 a1)
{
  char v1; // dl
  __int64 v2; // rcx
  _QWORD *v3; // rbx
  unsigned __int64 v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rdx
  ULONG_PTR v7; // r14
  ULONG_PTR v8; // rsi
  unsigned int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // rdi
  unsigned __int64 v12; // rbp
  _QWORD *v13; // rcx
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  int v19; // eax
  ULONG_PTR v20; // r15
  __int64 v21; // rcx
  unsigned __int16 i; // dx
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // r14
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // r10
  _QWORD *v29; // r8
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rax
  __int64 v32; // rsi
  unsigned __int64 v33; // r9
  unsigned __int64 v34; // r11
  unsigned __int64 v35; // rdx
  __int64 v36; // r10
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 *v39; // r10
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rdx
  BOOLEAN v42; // r8
  _RTL_BALANCED_NODE *v43; // rax

  if ( !_bittest64(&qword_140D068D8, 0x25u) )
    return;
  v11 = a1 + 352;
  v4 = *(_QWORD *)(a1 + 352);
  v12 = 0LL;
  v3 = 0LL;
  if ( (*(_BYTE *)(a1 + 360) & 1) == 0 )
    goto LABEL_3;
  if ( v4 )
  {
    v4 ^= v11;
LABEL_3:
    if ( v4 )
    {
      v1 = *(_BYTE *)(a1 + 360) & 1;
      do
      {
        v2 = *(_QWORD *)(v4 + 8);
        v3 = (_QWORD *)v4;
        if ( v1 && v2 )
          v4 ^= v2;
        else
          v4 = *(_QWORD *)(v4 + 8);
      }
      while ( v4 );
    }
    while ( 1 )
    {
LABEL_8:
      if ( !v3 )
        goto LABEL_20;
      v5 = (_QWORD *)*v3;
      v13 = v3;
      v6 = v3;
      if ( *v3 )
      {
        while ( 1 )
        {
          v3 = v5;
          if ( !v5[1] )
            break;
          v5 = (_QWORD *)v5[1];
        }
      }
      else
      {
        while ( 1 )
        {
          v3 = (_QWORD *)(v3[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v3 || (_QWORD *)v3[1] == v6 )
            break;
          v6 = v3;
        }
      }
      v7 = v13[5];
      v8 = v13[4];
      if ( v7 < 0x200000 )
        break;
      if ( v8 < 0x100000 )
      {
        v7 += v8 - 0x100000;
        v8 = 0x100000LL;
      }
      v19 = *((_DWORD *)v13 + 6);
      if ( (v19 == 2 || v19 == 24) && v7 )
      {
        do
        {
          v20 = sub_1403B7A10(v8, v7);
          v21 = *((unsigned int *)sub_1402C1550(v8) + 2);
          qword_140D69AF0[3 * v21] += v20;
          if ( v20 >= 0x200000 && v20 > qword_140D69AE8[3 * v21] )
          {
            qword_140D69AE0[3 * v21] = v8;
            v12 = -1LL;
            qword_140D69AE8[3 * v21] = v20;
            for ( i = 0; i < 0x40u; ++i )
            {
              v23 = v12;
              v24 = qword_140D69AE8[3 * i];
              if ( v24 < v12 )
              {
                v12 = qword_140D69AE8[3 * i];
                if ( !v24 )
                  break;
              }
              v12 = qword_140D69AE8[3 * i];
              if ( v24 >= v23 )
                v12 = v23;
              if ( i == (unsigned __int16)word_140D05000 - 1 )
                break;
            }
          }
          v8 += v20;
          v7 -= v20;
        }
        while ( v7 );
      }
    }
    if ( v7 + v8 >= 0x300000 && v7 + v8 >= v12 )
    {
      v14 = v8 & 0xFFFFFFFFFFFC0000uLL;
      if ( v14 >= 0x100000 )
      {
        v15 = *(_QWORD *)v11;
        v16 = v14 - 0x40000;
        if ( (*(_BYTE *)(v11 + 8) & 1) != 0 )
        {
          if ( v15 )
            v15 ^= v11;
          else
            v15 = 0LL;
        }
        v3 = 0LL;
        while ( 1 )
        {
          if ( !v15 )
            goto LABEL_8;
          v17 = *(_QWORD *)(v15 + 32);
          if ( v16 >= v17 )
          {
            if ( v16 >= *(_QWORD *)(v15 + 40) + v17 )
            {
              v18 = *(_QWORD *)(v15 + 8);
              goto LABEL_41;
            }
            v3 = (_QWORD *)v15;
          }
          v18 = *(_QWORD *)v15;
LABEL_41:
          if ( (*(_BYTE *)(v11 + 8) & 1) != 0 && v18 )
            v15 ^= v18;
          else
            v15 = v18;
        }
      }
    }
  }
LABEL_20:
  v9 = 0;
  if ( !word_140D05000 )
    return;
  do
  {
    v10 = qword_140D69AE8[3 * v9];
    if ( !v10 )
      goto LABEL_22;
    v25 = qword_140D69AF0[3 * v9];
    if ( v25 < 0x300000 )
      goto LABEL_22;
    v26 = v25 - 0x100000;
    v27 = *(_QWORD *)v11;
    v28 = qword_140D69AE0[3 * v9];
    if ( (unsigned __int64)(qword_140D69AF0[3 * v9] - v10) >= 0x100000 )
      v26 = qword_140D69AE8[3 * v9];
    if ( (*(_BYTE *)(v11 + 8) & 1) != 0 )
    {
      if ( v27 )
        v27 ^= v11;
      else
        v27 = 0LL;
    }
    v29 = 0LL;
    while ( v27 )
    {
      v30 = *(_QWORD *)(v27 + 32);
      if ( v28 >= v30 )
      {
        if ( v28 >= *(_QWORD *)(v27 + 40) + v30 )
        {
          v31 = *(_QWORD *)(v27 + 8);
          goto LABEL_76;
        }
        v29 = (_QWORD *)v27;
      }
      v31 = *(_QWORD *)v27;
LABEL_76:
      if ( (*(_BYTE *)(v11 + 8) & 1) != 0 && v31 )
        v27 ^= v31;
      else
        v27 = v31;
    }
    v32 = 6LL * v9;
    v33 = (v26 + v28) & 0xFFFFFFFFFFFC0000uLL;
    v34 = (v28 + 0x3FFFF) & 0xFFFFFFFFFFFC0000uLL;
    LODWORD(qword_140D6C0F8[v32]) = *((_DWORD *)v29 + 6);
    v35 = v33 - v34;
    qword_140D6C0F8[v32 + 2] = v33 - v34;
    qword_140D6C0F8[v32 + 1] = v34;
    v36 = v29[4];
    v37 = v29[5];
    v38 = v37 + v36;
    if ( v34 == v36 )
    {
      if ( v33 == v38 )
      {
        RtlRbRemoveNode((PRTL_RB_TREE)v11, (PRTL_BALANCED_NODE)v29);
        goto LABEL_22;
      }
      v29[4] = v36 + v35;
LABEL_85:
      v29[5] = v37 - v35;
    }
    else
    {
      if ( v33 == v38 )
        goto LABEL_85;
      v39 = &qword_140D6DFC0[v32];
      *((_DWORD *)v39 + 6) = *((_DWORD *)v29 + 6);
      v39[4] = v29[4];
      v39[5] = v34 - v29[4];
      v40 = v29[4] - v34;
      v29[4] = v33;
      v29[5] += v40 - v35;
      v41 = *(_QWORD *)v11;
      if ( (*(_BYTE *)(v11 + 8) & 1) != 0 )
      {
        if ( v41 )
          v41 ^= v11;
        else
          v41 = 0LL;
      }
      v42 = 0;
      if ( v41 )
      {
        while ( 1 )
        {
          if ( (unsigned __int64)v39[4] >= *(_QWORD *)(v41 + 32) )
          {
            v43 = *(_RTL_BALANCED_NODE **)(v41 + 8);
            if ( (*(_BYTE *)(v11 + 8) & 1) != 0 )
            {
              if ( !v43 )
                goto LABEL_103;
              v43 = (_RTL_BALANCED_NODE *)(v41 ^ (unsigned __int64)v43);
            }
            if ( !v43 )
            {
LABEL_103:
              v42 = 1;
              break;
            }
          }
          else
          {
            v43 = *(_RTL_BALANCED_NODE **)v41;
            if ( (*(_BYTE *)(v11 + 8) & 1) != 0 )
            {
              if ( !v43 )
                goto LABEL_97;
              v43 = (_RTL_BALANCED_NODE *)(v41 ^ (unsigned __int64)v43);
            }
            if ( !v43 )
            {
LABEL_97:
              v42 = 0;
              break;
            }
          }
          v41 = (unsigned __int64)v43;
        }
      }
      RtlRbInsertNodeEx((PRTL_RB_TREE)v11, (PRTL_BALANCED_NODE)v41, v42, (PRTL_BALANCED_NODE)&qword_140D6DFC0[v32]);
    }
LABEL_22:
    ++v9;
  }
  while ( v9 < (unsigned __int16)word_140D05000 );
}
