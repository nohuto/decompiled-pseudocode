/*
 * XREFs of MiRemoveLargeFreeLoaderDescriptors @ 0x140B6CE0C
 * Callers:
 *     MiInitNucleus @ 0x140B41888 (MiInitNucleus.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14024BA00 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x14024CD90 (RtlRbInsertNodeEx.c)
 *     MiSearchNumaNodeTable @ 0x14026ED60 (MiSearchNumaNodeTable.c)
 *     MiRestrictRangeToNode @ 0x1403758B4 (MiRestrictRangeToNode.c)
 */

void __fastcall MiRemoveLargeFreeLoaderDescriptors(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // r12
  _QWORD *v4; // rbx
  char v5; // dl
  __int64 v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  _QWORD *v9; // rcx
  ULONG_PTR v10; // r14
  ULONG_PTR v11; // rsi
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned int v17; // ebx
  __int64 *v18; // rdx
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r11
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r15
  ULONG_PTR v25; // rbp
  __int64 *v26; // rdx
  __int64 v27; // rcx
  unsigned __int16 i; // dx
  unsigned __int64 v29; // r8
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  _QWORD *v32; // r8
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // r9
  unsigned __int64 v37; // r10
  unsigned __int64 v38; // rcx
  __int64 v39; // rsi
  __int64 v40; // r11
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 *v43; // r11
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rdx
  BOOLEAN v46; // r8
  unsigned __int64 v47; // rax
  __int64 v48; // [rsp+58h] [rbp+10h]

  if ( !_bittest64(&KeFeatureBits, 0x25u) )
    return;
  v1 = a1 + 352;
  v2 = *(_QWORD *)(a1 + 352);
  v3 = 0LL;
  v48 = a1 + 352;
  v4 = 0LL;
  if ( (*(_BYTE *)(a1 + 360) & 1) != 0 )
  {
    if ( !v2 )
      goto LABEL_39;
    v2 ^= v1;
  }
  if ( v2 )
  {
    v5 = *(_BYTE *)(a1 + 360) & 1;
    do
    {
      v6 = *(_QWORD *)(v2 + 8);
      v4 = (_QWORD *)v2;
      if ( v5 && v6 )
        v2 ^= v6;
      else
        v2 = *(_QWORD *)(v2 + 8);
    }
    while ( v2 );
  }
  while ( 1 )
  {
LABEL_38:
    if ( !v4 )
      goto LABEL_39;
    v7 = (_QWORD *)*v4;
    v8 = v4;
    v9 = v4;
    if ( *v4 )
    {
      do
      {
        v4 = v7;
        v7 = (_QWORD *)v7[1];
      }
      while ( v7 );
    }
    else
    {
      while ( 1 )
      {
        v4 = (_QWORD *)(v4[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v4 || (_QWORD *)v4[1] == v9 )
          break;
        v9 = v4;
      }
    }
    v10 = v8[5];
    v11 = v8[4];
    if ( v10 < 0x200000 )
      break;
    if ( v11 < 0x100000 )
    {
      v10 += v11 - 0x100000;
      v11 = 0x100000LL;
    }
    v24 = *((int *)v8 + 6);
    if ( v10 )
    {
      while ( 1 )
      {
        v25 = MiRestrictRangeToNode(v11, v10);
        v26 = &MxBootDeferDescriptors[4 * *((unsigned int *)MiSearchNumaNodeTable(v11) + 2)];
        if ( (unsigned int)(v24 - 30) > 2 && (_DWORD)v24 != 6 )
        {
          if ( (unsigned int)v24 <= 0x2A )
          {
            v27 = 0x5C400C00008LL;
            if ( _bittest64(&v27, v24) )
              goto LABEL_68;
          }
          v26[2] += v25;
          if ( (_DWORD)v24 == 2 )
            goto LABEL_59;
        }
        if ( (_DWORD)v24 == 24 )
        {
LABEL_59:
          v26[3] += v25;
          if ( v25 >= 0x200000 && v25 > v26[1] )
          {
            *v26 = v11;
            v3 = -1LL;
            v26[1] = v25;
            for ( i = 0; i < 0x40u; ++i )
            {
              v29 = v3;
              v30 = 4LL * i;
              v31 = MxBootDeferDescriptors[v30 + 1];
              if ( v31 < v3 )
              {
                v3 = MxBootDeferDescriptors[v30 + 1];
                if ( !v31 )
                  break;
              }
              v3 = MxBootDeferDescriptors[v30 + 1];
              if ( v31 >= v29 )
                v3 = v29;
              if ( i == (unsigned __int16)KeNumberNodes - 1 )
                break;
            }
          }
        }
LABEL_68:
        v11 += v25;
        v10 -= v25;
        if ( !v10 )
        {
          v1 = v48;
          goto LABEL_38;
        }
      }
    }
  }
  if ( v10 + v11 >= 0x300000 && v10 + v11 >= v3 )
  {
    v12 = v11 & 0xFFFFFFFFFFFC0000uLL;
    if ( v12 >= 0x100000 )
    {
      v13 = *(_QWORD *)v1;
      v14 = v12 - 0x40000;
      if ( (*(_BYTE *)(v1 + 8) & 1) != 0 )
      {
        if ( v13 )
          v13 ^= v1;
        else
          v13 = 0LL;
      }
      v4 = 0LL;
      while ( 1 )
      {
        if ( !v13 )
          goto LABEL_38;
        v15 = *(_QWORD *)(v13 + 32);
        if ( v14 >= v15 )
        {
          if ( v14 >= *(_QWORD *)(v13 + 40) + v15 )
          {
            v16 = *(_QWORD *)(v13 + 8);
            goto LABEL_33;
          }
          v4 = (_QWORD *)v13;
        }
        v16 = *(_QWORD *)v13;
LABEL_33:
        if ( (*(_BYTE *)(v1 + 8) & 1) != 0 && v16 )
          v13 ^= v16;
        else
          v13 = v16;
      }
    }
  }
LABEL_39:
  v17 = 0;
  if ( !KeNumberNodes )
    return;
  do
  {
    v18 = &MxBootDeferDescriptors[4 * v17];
    v19 = v18[1];
    if ( !v19 )
      goto LABEL_110;
    v20 = v18[3];
    if ( v20 < 0x300000 )
      goto LABEL_110;
    v21 = ((unsigned __int64)(48 * v18[2]) >> 10) & 0x3FFFFFFFFFFFFCLL;
    if ( v21 < 0x100000 )
      v21 = 0x100000LL;
    if ( v20 - v19 < v21 )
    {
      if ( v20 <= v21 )
        goto LABEL_110;
      v19 = v20 - v21;
    }
    v22 = *v18;
    v23 = *(_QWORD *)v1;
    if ( (*(_BYTE *)(v1 + 8) & 1) != 0 )
    {
      if ( v23 )
        v23 ^= v1;
      else
        v23 = 0LL;
    }
    v32 = 0LL;
    while ( v23 )
    {
      v33 = *(_QWORD *)(v23 + 32);
      if ( v22 >= v33 )
      {
        if ( v22 >= *(_QWORD *)(v23 + 40) + v33 )
        {
          v34 = *(_QWORD *)(v23 + 8);
          goto LABEL_78;
        }
        v32 = (_QWORD *)v23;
      }
      v34 = *(_QWORD *)v23;
LABEL_78:
      if ( (*(_BYTE *)(v1 + 8) & 1) != 0 && v34 )
        v23 ^= v34;
      else
        v23 = v34;
    }
    v35 = (v22 + v19) & 0xFFFFFFFFFFFC0000uLL;
    v36 = (v22 + 0x3FFFF) & 0xFFFFFFFFFFFC0000uLL;
    v37 = v35;
    if ( v35 >= v36 )
    {
      v38 = v35 - v36;
      if ( v38 >= 0x40000 )
      {
        v39 = 6LL * v17;
        LODWORD(qword_140D852F8[v39]) = *((_DWORD *)v32 + 6);
        qword_140D852F8[v39 + 1] = v36;
        qword_140D852F8[v39 + 2] = v38;
        v40 = v32[4];
        v41 = v32[5];
        v42 = v40 + v41;
        if ( v36 == v40 )
        {
          if ( v37 == v42 )
          {
            RtlRbRemoveNode((PRTL_RB_TREE)v1, (PRTL_BALANCED_NODE)v32);
            goto LABEL_110;
          }
          v32[4] = v40 + v38;
LABEL_90:
          v32[5] = v41 - v38;
        }
        else
        {
          if ( v37 == v42 )
            goto LABEL_90;
          v43 = &MxDeferredBootSplitDescriptor[v39];
          *((_DWORD *)v43 + 6) = *((_DWORD *)v32 + 6);
          v43[4] = v32[4];
          v43[5] = v36 - v32[4];
          v44 = v32[4] - v36;
          v32[4] = v37;
          v32[5] += v44 - v38;
          if ( (*(_BYTE *)(v1 + 8) & 1) != 0 )
          {
            if ( *(_QWORD *)v1 )
              v45 = *(_QWORD *)v1 ^ v1;
            else
              v45 = 0LL;
          }
          else
          {
            v45 = *(_QWORD *)v1;
          }
          v46 = 0;
          if ( v45 )
          {
            while ( 1 )
            {
              if ( (unsigned __int64)v43[4] >= *(_QWORD *)(v45 + 32) )
              {
                v47 = *(_QWORD *)(v45 + 8);
                if ( (*(_BYTE *)(v1 + 8) & 1) != 0 )
                {
                  if ( !v47 )
                    goto LABEL_108;
                  v47 ^= v45;
                }
                if ( !v47 )
                {
LABEL_108:
                  v46 = 1;
                  break;
                }
              }
              else
              {
                v47 = *(_QWORD *)v45;
                if ( (*(_BYTE *)(v1 + 8) & 1) != 0 )
                {
                  if ( !v47 )
                    goto LABEL_102;
                  v47 ^= v45;
                }
                if ( !v47 )
                {
LABEL_102:
                  v46 = 0;
                  break;
                }
              }
              v45 = v47;
            }
          }
          RtlRbInsertNodeEx(
            (PRTL_RB_TREE)v1,
            (PRTL_BALANCED_NODE)v45,
            v46,
            (PRTL_BALANCED_NODE)&MxDeferredBootSplitDescriptor[v39]);
        }
      }
    }
LABEL_110:
    ++v17;
  }
  while ( v17 < (unsigned __int16)KeNumberNodes );
}
