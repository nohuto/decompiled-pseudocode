/*
 * XREFs of sub_14025EDC8 @ 0x14025EDC8
 * Callers:
 *     sub_14025ED04 @ 0x14025ED04 (sub_14025ED04.c)
 *     sub_1402E22B0 @ 0x1402E22B0 (sub_1402E22B0.c)
 * Callees:
 *     sub_14025EFDC @ 0x14025EFDC (sub_14025EFDC.c)
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x14034E6B0 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall sub_14025EDC8(__int64 a1, __int64 a2, int a3, int a4, __int64 *a5)
{
  __int64 *v5; // r13
  int v7; // r15d
  __int64 v8; // rbx
  int v9; // r12d
  __int64 result; // rax
  unsigned int v11; // edi
  unsigned int v12; // eax
  unsigned int v13; // r14d
  __int64 v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  BOOLEAN v18; // r8
  unsigned __int64 v19; // rax
  _RTL_RB_TREE *v20; // rcx
  __int64 v21; // rdx
  BOOLEAN v22; // r8
  __int64 v23; // rax
  unsigned int v24; // ecx
  __int64 v25; // rax
  _DWORD v26[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-30h]
  int v28; // [rsp+80h] [rbp+18h] BYREF

  v5 = a5;
  v28 = 0;
  v26[1] = 0;
  v7 = a3 & 0x1F;
  v8 = *a5;
  v9 = a3 - v7;
  v27 = *(_QWORD *)(a2 + 8) + 4 * ((unsigned __int64)(unsigned int)(a3 - v7) >> 5);
  v26[0] = v7 + a4;
  while ( 1 )
  {
    result = sub_14025EFDC((unsigned int)v26, v7, a3, -1, (__int64)&v28);
    v11 = result;
    if ( !(_DWORD)result )
      break;
    v7 = v28 + result;
    v12 = *(_DWORD *)(v8 + 52);
    v13 = v9 + v28;
    if ( v11 <= v12 )
    {
      if ( *(_DWORD *)(a1 + 140) > v11 )
        v11 = *(_DWORD *)(a1 + 140);
      *(_DWORD *)(a1 + 140) = v11;
    }
    else
    {
      if ( v12 )
      {
        RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 144), (PRTL_BALANCED_NODE)v8);
        RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 160), (PRTL_BALANCED_NODE)(v8 + 24));
        v24 = *(_DWORD *)(a1 + 140);
        if ( v24 <= *(_DWORD *)(v8 + 52) )
          v24 = *(_DWORD *)(v8 + 52);
        *(_DWORD *)(a1 + 140) = v24;
      }
      else
      {
        v14 = *(_QWORD *)v8;
        if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 || (v15 = *(_QWORD **)(v8 + 8), *v15 != v8) )
          __fastfail(3u);
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
      }
      v16 = a1 + 144;
      *(_DWORD *)(v8 + 52) = v11;
      *(_DWORD *)(v8 + 48) = v13;
      v17 = *(_QWORD *)(a1 + 144);
      if ( (*(_BYTE *)(a1 + 152) & 1) != 0 && v17 )
        v17 ^= v16;
      v18 = 0;
      if ( v17 )
      {
        while ( 1 )
        {
          if ( __PAIR64__(v11, v13) < *(_QWORD *)(v17 + 48) )
          {
            v19 = *(_QWORD *)v17;
            if ( (*(_BYTE *)(a1 + 152) & 1) != 0 )
            {
              if ( !v19 )
                break;
              v19 ^= v17;
            }
            if ( !v19 )
              break;
          }
          else
          {
            v19 = *(_QWORD *)(v17 + 8);
            if ( (*(_BYTE *)(a1 + 152) & 1) != 0 )
            {
              if ( !v19 )
                goto LABEL_22;
              v19 ^= v17;
            }
            if ( !v19 )
            {
LABEL_22:
              v18 = 1;
              break;
            }
          }
          v17 = v19;
        }
      }
      RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 144), (PRTL_BALANCED_NODE)v17, v18, (PRTL_BALANCED_NODE)v8);
      v20 = (_RTL_RB_TREE *)(a1 + 160);
      v21 = *(_QWORD *)(a1 + 160);
      if ( (*(_BYTE *)(a1 + 168) & 1) != 0 && v21 )
        v21 ^= (unsigned __int64)v20;
      v22 = 0;
      if ( v21 )
      {
        while ( 1 )
        {
          if ( *(_DWORD *)(v8 + 48) >= *(_DWORD *)(v21 + 24) )
          {
            v23 = *(_QWORD *)(v21 + 8);
            if ( (*(_BYTE *)(a1 + 168) & 1) != 0 )
            {
              if ( !v23 )
                goto LABEL_37;
              v23 ^= v21;
            }
            if ( !v23 )
            {
LABEL_37:
              v22 = 1;
              break;
            }
          }
          else
          {
            v23 = *(_QWORD *)v21;
            if ( (*(_BYTE *)(a1 + 168) & 1) != 0 )
            {
              if ( !v23 )
                goto LABEL_44;
              v23 ^= v21;
            }
            if ( !v23 )
            {
LABEL_44:
              v22 = 0;
              break;
            }
          }
          v21 = v23;
        }
      }
      RtlRbInsertNodeEx(v20, (PRTL_BALANCED_NODE)v21, v22, (PRTL_BALANCED_NODE)(v8 + 24));
      ++*(_DWORD *)(a1 + 128);
      v8 = *(_QWORD *)(a1 + 176);
      if ( v8 == a1 + 176 )
      {
        v25 = *(_QWORD *)(a1 + 152);
        if ( (v25 & 1) != 0 )
        {
          if ( v25 == 1 )
            v8 = 0LL;
          else
            v8 = v25 ^ (v16 | 1);
        }
        else
        {
          v8 = *(_QWORD *)(a1 + 152);
        }
      }
    }
  }
  *v5 = v8;
  return result;
}
