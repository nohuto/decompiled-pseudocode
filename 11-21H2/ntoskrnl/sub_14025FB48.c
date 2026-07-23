/*
 * XREFs of sub_14025FB48 @ 0x14025FB48
 * Callers:
 *     sub_14025F6B0 @ 0x14025F6B0 (sub_14025F6B0.c)
 *     sub_14037AFC0 @ 0x14037AFC0 (sub_14037AFC0.c)
 *     sub_14059B0B0 @ 0x14059B0B0 (sub_14059B0B0.c)
 * Callees:
 *     sub_1402E2738 @ 0x1402E2738 (sub_1402E2738.c)
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x14034E6B0 (RtlRbInsertNodeEx.c)
 */

void __fastcall sub_14025FB48(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  BOOLEAN v5; // bl
  int v8; // r8d
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  int v13; // r8d
  unsigned int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rsi
  _QWORD *v17; // rax
  int v18; // eax
  int v19; // ecx
  int v20; // ecx
  unsigned int v21; // edx
  unsigned int v22; // ecx
  _QWORD *v23; // r9
  __int64 *v24; // r14
  __int64 v25; // r8
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  BOOLEAN v28; // r8
  __int64 v29; // rax
  __int64 v30; // rdx
  unsigned int v31; // eax
  _RTL_RB_TREE *v32; // rcx
  _RTL_RB_TREE *v33; // rcx

  v5 = 0;
  if ( a4 )
  {
LABEL_2:
    v8 = *(_DWORD *)(a4 + 48);
    if ( v8 == a2 || (v18 = a2 + a3, v19 = v8 + *(_DWORD *)(a4 + 52), a2 + a3 == v19) )
    {
      v9 = *(_DWORD *)(a4 + 52) - a3;
      *(_DWORD *)(a4 + 52) = v9;
      if ( v8 == a2 )
        *(_DWORD *)(a4 + 48) = v8 + a3;
      v10 = a4;
      if ( !v9 )
      {
        RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 144), (PRTL_BALANCED_NODE)a4);
        RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 160), (PRTL_BALANCED_NODE)(a4 + 24));
        v16 = a1 + 176;
        v17 = *(_QWORD **)(v16 + 8);
        if ( *v17 == v16 )
        {
          *(_QWORD *)a4 = v16;
          *(_QWORD *)(a4 + 8) = v17;
          *v17 = a4;
          *(_QWORD *)(v16 + 8) = a4;
          return;
        }
        goto LABEL_74;
      }
    }
    else
    {
      v20 = v19 - a2;
      v21 = a2 - v8;
      v22 = v20 - a3;
      v23 = (_QWORD *)(a1 + 176);
      v24 = *(__int64 **)(a1 + 176);
      if ( v24 != (__int64 *)(a1 + 176) )
      {
        if ( (_QWORD *)v24[1] == v23 )
        {
          v25 = *v24;
          if ( *(__int64 **)(*v24 + 8) == v24 )
          {
            *v23 = v25;
            *(_QWORD *)(v25 + 8) = v23;
            *((_DWORD *)v24 + 13) = v22;
            *((_DWORD *)v24 + 12) = v18;
            *(_DWORD *)(a4 + 52) = v21;
            sub_1402E2738(a1, a4, 0LL);
            v32 = (_RTL_RB_TREE *)(a1 + 144);
            v27 = *(_QWORD *)(a1 + 144);
            if ( (*(_BYTE *)(a1 + 152) & 1) != 0 )
            {
              if ( v27 )
                v27 ^= (unsigned __int64)v32;
              else
                v27 = 0LL;
            }
            v28 = 0;
            if ( v27 )
            {
              while ( 1 )
              {
                if ( (unsigned __int64)v24[6] < *(_QWORD *)(v27 + 48) )
                {
                  v26 = *(_QWORD *)v27;
                  if ( (*(_BYTE *)(a1 + 152) & 1) != 0 )
                  {
                    if ( !v26 )
                    {
LABEL_36:
                      v28 = 0;
                      break;
                    }
                    v26 ^= v27;
                  }
                  if ( !v26 )
                    goto LABEL_36;
                }
                else
                {
                  v26 = *(_QWORD *)(v27 + 8);
                  if ( (*(_BYTE *)(a1 + 152) & 1) != 0 )
                  {
                    if ( !v26 )
                    {
LABEL_44:
                      v28 = 1;
                      break;
                    }
                    v26 ^= v27;
                  }
                  if ( !v26 )
                    goto LABEL_44;
                }
                v27 = v26;
              }
            }
            RtlRbInsertNodeEx(v32, (PRTL_BALANCED_NODE)v27, v28, (PRTL_BALANCED_NODE)v24);
            v33 = (_RTL_RB_TREE *)(a1 + 160);
            v30 = *(_QWORD *)(a1 + 160);
            if ( (*(_BYTE *)(a1 + 168) & 1) != 0 )
            {
              if ( v30 )
                v30 ^= (unsigned __int64)v33;
              else
                v30 = 0LL;
            }
            if ( v30 )
            {
              while ( 1 )
              {
                if ( *((_DWORD *)v24 + 12) >= *(_DWORD *)(v30 + 24) )
                {
                  v29 = *(_QWORD *)(v30 + 8);
                  if ( (*(_BYTE *)(a1 + 168) & 1) != 0 )
                  {
                    if ( !v29 )
                    {
LABEL_43:
                      v5 = 1;
                      break;
                    }
                    v29 ^= v30;
                  }
                  if ( !v29 )
                    goto LABEL_43;
                }
                else
                {
                  v29 = *(_QWORD *)v30;
                  if ( (*(_BYTE *)(a1 + 168) & 1) != 0 )
                  {
                    if ( !v29 )
                      break;
                    v29 ^= v30;
                  }
                  if ( !v29 )
                    break;
                }
                v30 = v29;
              }
            }
            RtlRbInsertNodeEx(v33, (PRTL_BALANCED_NODE)v30, v5, (PRTL_BALANCED_NODE)v24 + 1);
            return;
          }
        }
LABEL_74:
        __fastfail(3u);
      }
      if ( v21 <= v22 )
      {
        *(_DWORD *)(a4 + 48) = v18;
        *(_DWORD *)(a4 + 52) = v22;
        v31 = *(_DWORD *)(a1 + 140);
        if ( v31 <= v21 )
          v31 = v21;
      }
      else
      {
        *(_DWORD *)(a4 + 52) = v21;
        v31 = *(_DWORD *)(a1 + 140);
        if ( v31 <= v22 )
          v31 = v22;
      }
      *(_DWORD *)(a1 + 140) = v31;
      v10 = a4;
    }
    sub_1402E2738(a1, v10, 0LL);
    return;
  }
  v11 = a1 + 160;
  v12 = *(_QWORD *)v11;
  if ( (*(_BYTE *)(v11 + 8) & 1) != 0 )
  {
    if ( v12 )
      v12 ^= v11;
    else
      v12 = 0LL;
  }
  v13 = *(_BYTE *)(v11 + 8) & 1;
  while ( v12 )
  {
    v14 = *(_DWORD *)(v12 + 24);
    if ( a2 + a3 > v14 )
    {
      if ( a2 < *(_DWORD *)(v12 + 28) + v14 )
      {
        a4 = v12 - 24;
        goto LABEL_2;
      }
      v15 = *(_QWORD *)(v12 + 8);
    }
    else
    {
      v15 = *(_QWORD *)v12;
    }
    if ( v13 && v15 )
      v12 ^= v15;
    else
      v12 = v15;
  }
}
