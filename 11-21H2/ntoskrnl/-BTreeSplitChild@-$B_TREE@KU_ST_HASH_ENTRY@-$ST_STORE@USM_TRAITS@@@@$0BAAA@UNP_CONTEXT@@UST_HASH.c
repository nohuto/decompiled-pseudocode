/*
 * XREFs of ?BTreeSplitChild@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1403831B8
 * Callers:
 *     ?BTreeInsertEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAK@Z @ 0x1403803F8 (-BTreeInsertEx@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_E.c)
 * Callees:
 *     ?BTreeInsertEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAK@Z @ 0x1403803F8 (-BTreeInsertEx@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_E.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x1403830D4 (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     ?BTreeDeleteNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140396008 (-BTreeDeleteNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ?NpGetResidentLeaf@NP_CONTEXT@@SAPEAUB_TREE_NODE_HDR@@PEAUNP_CTX@1@PEAT_NP_LEAF_PTR@@@Z @ 0x1405F66DC (-NpGetResidentLeaf@NP_CONTEXT@@SAPEAUB_TREE_NODE_HDR@@PEAUNP_CTX@1@PEAT_NP_LEAF_PTR@@@Z.c)
 */

_BYTE *__fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSplitChild(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rsi
  _BYTE *v4; // r15
  _QWORD *v5; // r13
  __int64 v6; // rbx
  _BYTE *v7; // rax
  _BYTE *v8; // r14
  __int64 v9; // rbp
  int *v10; // r9
  int v11; // eax
  int *v12; // r12
  unsigned int v13; // edx
  _QWORD *v14; // r12
  int v15; // eax
  int v16; // ecx
  char v17; // dl
  struct NP_CONTEXT::NP_CTX *v18; // rcx
  __int64 v19; // r8
  _BYTE *v21; // rax
  struct NP_CONTEXT::NP_CTX *v22; // rcx
  union _NP_LEAF_PTR *v23; // rdx
  int v24; // r8d
  __int128 v25; // [rsp+20h] [rbp-48h] BYREF
  __int16 v27; // [rsp+80h] [rbp+18h]

  v3 = 0LL;
  v4 = 0LL;
  v5 = (_QWORD *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v6 = *v5;
  v7 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
         a1,
         *(unsigned __int8 *)(*v5 + 3LL),
         *(_BYTE *)(*v5 + 2LL));
  v8 = v7;
  if ( !v7 )
    return (_BYTE *)v3;
  DWORD1(v25) = 0;
  *((_QWORD *)&v25 + 1) = v7;
  v9 = (*(_DWORD *)v6 >> 1) & 0x7FFF;
  if ( *(_BYTE *)(v6 + 3) )
  {
    v10 = (int *)(v6 + 16 + 4 * v9);
    if ( (*(_DWORD *)v6 & 1) != 0 && (unsigned __int64)(v10 + 1) < v5[1] )
    {
      ++v10;
      LODWORD(v9) = v9 + 1;
    }
    v11 = *v10;
    v12 = 0LL;
  }
  else
  {
    v10 = 0LL;
    v12 = (int *)(v6 + 16 * (((*(_DWORD *)v6 >> 1) & 0x7FFF) + 1LL));
    v11 = *v12;
  }
  LODWORD(v25) = v11;
  v13 = (unsigned __int16)*(_DWORD *)v6 - (_DWORD)v9;
  v27 = *(_DWORD *)v6 - v9;
  if ( *(_BYTE *)(v6 + 3) )
  {
    if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 )
      *((_QWORD *)v8 + 1) = *(_QWORD *)(v6 + 8);
    memmove(v8 + 16, v10, 4LL * v13);
  }
  else
  {
    v27 = v13 - 1;
    memmove(v8 + 16, v12 + 4, 16LL * (v13 - 1));
    *((_QWORD *)v8 + 1) = *((_QWORD *)v12 + 1);
  }
  *(_WORD *)v8 = v27;
  if ( *(_QWORD *)a1 == v6 )
  {
    v21 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
            a1,
            0,
            *(_BYTE *)(v6 + 2) + 1);
    v4 = v21;
    if ( v21 )
    {
      v23 = (union _NP_LEAF_PTR *)(v21 + 8);
      v24 = 1;
      *((_QWORD *)v21 + 1) = v6;
      *((_OWORD *)v21 + 1) = v25;
      *(_WORD *)v21 = 1;
      *(_QWORD *)a1 = v21;
      if ( *(_BYTE *)(v6 + 3) && **(_DWORD **)(a1 + 16) != -1 )
      {
        *(_DWORD *)v23 |= 1u;
        NP_CONTEXT::NpGetResidentLeaf(v22, v23);
      }
      v14 = (_QWORD *)a2;
      memmove(v5 + 2, v5, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - v24));
      *v5 = v4;
      v5[1] = v4 + 16;
      v16 = ++*(_DWORD *)(a2 + 24);
      goto LABEL_11;
    }
  }
  else
  {
    v14 = (_QWORD *)a2;
    --*(_DWORD *)(a2 + 24);
    v15 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeInsertEx(
            a1,
            a2,
            &v25);
    v16 = ++*(_DWORD *)(a2 + 24);
    if ( v15 >= 0 )
    {
LABEL_11:
      v17 = *(_BYTE *)(v6 + 3);
      if ( v17 )
      {
        v18 = (struct NP_CONTEXT::NP_CTX *)(2LL * (unsigned int)(v16 - 2));
        v19 = *(_QWORD *)(*v14 + 8LL * (_QWORD)v18 + 8);
        if ( **(_DWORD **)(a1 + 16) != -1 )
        {
          *(_DWORD *)(v19 + 8) |= 1u;
          NP_CONTEXT::NpGetResidentLeaf(v18, (union _NP_LEAF_PTR *)(v19 + 8));
          v17 = *(_BYTE *)(v6 + 3);
        }
      }
      *(_WORD *)v6 = v9;
      if ( v17 && **(_DWORD **)(a1 + 16) == -1 )
        *(_QWORD *)(v6 + 8) = v8;
      return v8;
    }
  }
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteNode(
    a1,
    v8);
  if ( v4 )
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteNode(
      a1,
      v4);
  return (_BYTE *)v3;
}
