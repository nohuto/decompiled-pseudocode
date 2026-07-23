/*
 * XREFs of sub_1402E22B0 @ 0x1402E22B0
 * Callers:
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_14059B0B0 @ 0x14059B0B0 (sub_14059B0B0.c)
 *     sub_14059C580 @ 0x14059C580 (sub_14059C580.c)
 * Callees:
 *     sub_14025EDC8 @ 0x14025EDC8 (sub_14025EDC8.c)
 *     sub_1402E1DD4 @ 0x1402E1DD4 (sub_1402E1DD4.c)
 *     sub_1402E266C @ 0x1402E266C (sub_1402E266C.c)
 *     sub_1402E2738 @ 0x1402E2738 (sub_1402E2738.c)
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 */

__int64 __fastcall sub_1402E22B0(__int64 a1, int a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rsi
  unsigned __int64 v10; // rbx
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // r13
  unsigned __int64 v15; // rdx
  int v16; // ecx
  unsigned __int64 v17; // rax
  int v18; // ebp
  unsigned __int64 v19; // r15
  unsigned __int64 i; // rcx
  int v21; // r14d
  unsigned __int64 v22; // rdx
  int v23; // edx
  __int64 v24; // rsi
  int v25; // ecx
  int v26; // edx
  int v27; // ebx
  unsigned int v28; // eax
  int v29; // ebx
  int v30; // esi
  unsigned int v31; // ecx
  int v32; // eax
  int v33; // eax
  unsigned int v34; // eax
  int v35; // eax
  unsigned __int64 *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // [rsp+30h] [rbp-48h]
  PRTL_RB_TREE Tree; // [rsp+38h] [rbp-40h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  __int64 v42; // [rsp+98h] [rbp+20h]

  result = (__int64)&retaddr;
  v5 = a1;
  if ( (*(_BYTE *)(a1 + 207) & 1) != 0 )
    return result;
  v6 = 24LL;
  v7 = *(_QWORD *)(a1 + 112);
  v8 = 8LL;
  if ( !a2 )
    v8 = 24LL;
  v9 = v7 + v8;
  v42 = v9;
  if ( !a2 )
    v6 = 8LL;
  v10 = *(_QWORD *)(a1 + 160);
  v11 = v7 + v6;
  v12 = *(_QWORD *)(a1 + 168);
  v13 = 0LL;
  v38 = v11;
  v14 = 0LL;
  Tree = (PRTL_RB_TREE)(a1 + 160);
  if ( (v12 & 1) != 0 )
  {
    if ( !v10 )
    {
      v15 = 0LL;
      goto LABEL_16;
    }
    v10 ^= a1 + 160;
  }
  v15 = 0LL;
  v16 = v12 & 1;
  while ( v10 )
  {
    if ( a3 < *(_DWORD *)(v10 + 24) )
    {
      v17 = *(_QWORD *)v10;
      v15 = v10;
      if ( v16 && v17 )
      {
        v10 ^= v17;
        continue;
      }
    }
    else
    {
      if ( a3 <= *(_DWORD *)(v10 + 24) )
        goto LABEL_17;
      v17 = *(_QWORD *)(v10 + 8);
      if ( v16 && v17 )
      {
        v10 ^= v17;
        continue;
      }
    }
    v10 = v17;
  }
LABEL_16:
  v10 = v15;
LABEL_17:
  v18 = *(_DWORD *)(v10 + 24);
  v19 = v10 - 24;
  if ( v18 == a3 + 1 && v18 != -1 )
  {
    ++*(_DWORD *)(v19 + 52);
    v14 = v10 - 24;
    *(_DWORD *)(v19 + 48) = a3;
  }
  i = *(_QWORD *)v10;
  v21 = 0;
  v22 = v10;
  if ( *(_QWORD *)v10 )
  {
    for ( ; *(_QWORD *)(i + 8); i = *(_QWORD *)(i + 8) )
      ;
  }
  else
  {
    for ( i = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
    {
      if ( *(_QWORD *)(i + 8) == v22 )
        break;
      v22 = i;
    }
  }
  if ( i )
  {
    v23 = *(_DWORD *)(i + 28);
    v24 = i - 24;
    v25 = v23 + *(_DWORD *)(i + 24);
    v21 = v25 - 1;
    if ( v25 == a3 )
    {
      if ( *(_DWORD *)(v19 + 48) == a3 )
      {
        *(_DWORD *)(v24 + 52) = *(_DWORD *)(v19 + 52) + v23;
        *(_DWORD *)(v19 + 52) = 0;
        RtlRbRemoveNode((PRTL_RB_TREE)(v5 + 144), (PRTL_BALANCED_NODE)(v10 - 24));
        RtlRbRemoveNode(Tree, (PRTL_BALANCED_NODE)v10);
        v5 = a1;
        v36 = *(unsigned __int64 **)(a1 + 184);
        if ( *v36 != a1 + 176 )
          __fastfail(3u);
        v11 = v38;
        *(_QWORD *)v19 = a1 + 176;
        v14 = v24 | 1;
        *(_QWORD *)(v19 + 8) = v36;
        *v36 = v19;
        *(_QWORD *)(a1 + 184) = v19;
      }
      else
      {
        v14 = v24;
        *(_DWORD *)(v24 + 52) = v23 + 1;
      }
    }
    v9 = v42;
  }
  if ( v14 )
  {
    if ( (v14 & 1) != 0 )
    {
      v14 &= ~1uLL;
    }
    else
    {
      v26 = *(_DWORD *)(v14 + 48);
      if ( v26 == a3 )
      {
        v34 = sub_1402E1DD4(v11, a3, 0xFFFFFFFF);
        if ( v34 > 1 )
        {
          v35 = sub_1402E1DD4(v9, a3, v34);
          *(_DWORD *)(v14 + 52) += v35 - 1;
          *(_DWORD *)(v14 + 48) = a3 - v35 + 1;
        }
      }
      else
      {
        v27 = v26 + *(_DWORD *)(v14 + 52);
        v28 = sub_1402E266C(v11, (unsigned int)(v27 - 1), 0xFFFFFFFFLL);
        if ( v28 > 1 )
          *(_DWORD *)(v14 + 52) += sub_1402E266C(v9, (unsigned int)(v27 - 1), v28) - 1;
      }
    }
    return sub_1402E2738(a1, v14, 1LL);
  }
  else
  {
    v29 = v18 - a3 - 1;
    if ( v18 != -1 )
      v29 = v18 - a3 - 2;
    v30 = a3 - ((v21 != 0) + 1) - v21;
    if ( *(_QWORD *)(v5 + 176) == v5 + 176 )
    {
      v37 = *(_QWORD *)(v5 + 152);
      if ( (v37 & 1) != 0 )
      {
        if ( v37 != 1 )
          v13 = v37 ^ ((v5 + 144) | 1);
      }
      else
      {
        v13 = *(_QWORD *)(v5 + 152);
      }
    }
    else
    {
      v13 = *(_QWORD *)(v5 + 176);
    }
    Tree = (PRTL_RB_TREE)v13;
    v31 = a3 - (v21 != 0) - v21 + v29;
    if ( v31 < 0x20 || *(_DWORD *)(v13 + 52) >= v31 )
    {
      result = *(unsigned int *)(v5 + 140);
      if ( (unsigned int)result > v31 )
        v31 = *(_DWORD *)(v5 + 140);
      *(_DWORD *)(v5 + 140) = v31;
    }
    else if ( v29
           && ((v32 = sub_1402E266C(v11, a3, (unsigned int)(v29 + 1)),
                v29 = v32 - 1,
                v31 = v30 + v32,
                (unsigned int)(v30 + v32) < 0x20)
            || *(_DWORD *)(v13 + 52) >= v31)
           || v30
           && ((v33 = sub_1402E1DD4(v38, a3, a3 - (v21 != 0) - v21),
                v30 = v33 - 1,
                v31 = v29 + v33,
                (unsigned int)(v29 + v33) < 0x20)
            || *(_DWORD *)(v13 + 52) >= v31) )
    {
      result = *(unsigned int *)(a1 + 140);
      if ( (unsigned int)result > v31 )
        v31 = *(_DWORD *)(a1 + 140);
      *(_DWORD *)(a1 + 140) = v31;
    }
    else
    {
      return sub_14025EDC8(a1, v42, a3 - v30, v31, (__int64 *)&Tree);
    }
  }
  return result;
}
